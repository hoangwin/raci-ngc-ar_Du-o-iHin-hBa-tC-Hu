using System.Collections;
using UnityEngine;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    public CameraControl m_CameraControl;       // Reference to the CameraControl script for control during different phases.
    public Text m_MessageText;                  // Reference to the overlay Text to display winning text, etc.
    public GameObject[] m_TankPrefab;             // Reference to the prefab the players will control.
    public TankManager[] m_Tanks;               // A collection of managers for enabling and disabling different aspects of the tanks.
    public TankManager[] m_TanksEnemy;               // A collection of managers for enabling and disabling different aspects of the tanks.
    public SuperBox m_Eargle;

    
    public Transform[] m_PositionBegin;
    public static int m_TankCount = 0;
    public static int m_TankCountLive = 0;
    public static GameManager m_Instancce;
    public static int m_Mode;
    public static int m_MAX_Player_Count = 1;
    public static bool m_isWaitingCreaTank = false;
    public static bool m_IsPlaying;

    public  ParticleSystem[] m_particalInit;    
    public ParticleSystem m_particalPlayerInit;
    public GameObject m_QuestionMark;

    public GameObject[] m_AwardBoxsPrefab;
    public static GameObject[] m_AwardBoxsLive;
    public static int m_AwardBoxsCount;
    public static bool m_isTimerEffect;

    public GameObject m_StarFrefab;

    private void Start()
    {
        m_Instancce = this;
        m_AwardBoxsLive = new GameObject[5];
    }
    public void initGame()
    {
        DestroyAllGame();
        if (m_Mode == 0)
            m_MAX_Player_Count = 1;
        else
            m_MAX_Player_Count = 2;
        m_AwardBoxsCount = 0;
        // Create the delays so they only have to be made once.

        MapManager.m_Instance.initLevel(ScoreManager.m_CurrentLevel);

        SpawnAllTanks();
        SetCameraTargets();

        // Once the tanks have been created and the camera is using them as targets, start the game.
        StartCoroutine(RoundWaitingStaring());
        m_IsPlaying = true;
        m_isWaitingCreaTank = false;

        for(int i =0;i<5;i++)
        {
            GameManager.m_Instancce.m_particalInit[i].gameObject.SetActive(false);
        }

    }
public void DestroyAllGame()
    {
        MapManager.m_Instance.StopAllCoroutines();
        DestroyAllTank();
        m_Eargle.resetEargle();
        MapManager.m_Instance.DestroyAllMap();
        
    }
    private void DestroyAllTank()
    {
        m_TankCount = 0;
        m_TankCountLive = 0;
        for (int i = 0; i < m_MAX_Player_Count; i++)
        {
           // if (m_Tanks[i].m_Instance != null)
                Destroy(m_Tanks[i].m_Instance);
        }
        for (int i = 0; i < m_TanksEnemy.Length; i++)
           // if (m_TanksEnemy[m_TankCount].m_Instance != null)
                Destroy(m_TanksEnemy[i].m_Instance);
    }
    public void StartTimerEffect()//enemy
    {
        StartCoroutine(TimerEffect());
    }
    public IEnumerator TimerEffect()//enemy
    {
        m_isTimerEffect = true;
        yield return new WaitForSeconds(12);
        m_isTimerEffect = false;
    }

    private void SpawnAllTanks()
    {
        // For all the tanks...
        for (int i = 0; i < m_MAX_Player_Count; i++)
        {
            if (m_Tanks[i].m_Instance != null)
                Destroy(m_Tanks[i].m_Instance);
            // ... create them, set their player number and references needed for control.
            m_Tanks[i].m_Instance =
                Instantiate(m_TankPrefab[0], m_Tanks[i].m_SpawnPoint.position, m_Tanks[i].m_SpawnPoint.rotation) as GameObject;
            m_Tanks[i].m_PlayerNumber = i + 1;

            m_Tanks[i].Setup(1);
            m_Tanks[i].m_Instance.tag = "TankPlayer";
        }
    }
  
    public IEnumerator CreateTank()//enemy
    {
        m_isWaitingCreaTank = true;
        GameManager.m_Instancce.m_particalInit[m_TankCount % 3 + 2].gameObject.SetActive(true);
        GameManager.m_Instancce.m_particalInit[m_TankCount % 3 + 2].Play();
        yield return new WaitForSeconds(2);
        if (m_IsPlaying)
        {
            int index = Random.Range(0, 4);
            m_TanksEnemy[m_TankCount].m_Instance =
                  Instantiate(m_TankPrefab[index], m_PositionBegin[m_TankCount % 3].position, m_PositionBegin[m_TankCount % 3].rotation) as GameObject;
            m_TanksEnemy[m_TankCount].m_PlayerNumber = 0;
            m_TanksEnemy[m_TankCount].Setup(index);//here
            
            
            m_TanksEnemy[m_TankCount].m_Instance.tag = "TankEnemy";
            m_TankCount++;
            m_TankCountLive++;            
        }
        GameManager.m_Instancce.m_particalInit[(m_TankCount -1) % 3 + 2].gameObject.SetActive(false);
        
        m_isWaitingCreaTank = false;
    }
    public void StopAllTank()
    {
        for (int i = 0; i < m_TanksEnemy.Length; i++)
        {
            if (m_TanksEnemy[i] != null)
                m_TanksEnemy[i].DisableControl();
        }
    }
    public void Update()
    {
        if (m_IsPlaying)
        {
            if (m_TankCountLive < 4 && m_TankCount < 20 && !m_isWaitingCreaTank)
                StartCoroutine(CreateTank());
        }
        // Debug.Log("aaaaaaaaa");
    }
    private void SetCameraTargets()
    {
        // Create a collection of transforms the same size as the number of tanks.
        Transform[] targets = new Transform[m_MAX_Player_Count];

        // For each of these transforms...
        for (int i = 0; i < m_MAX_Player_Count; i++)
        {
            // ... set it to the appropriate tank transform.
            targets[i] = m_Tanks[i].m_Instance.transform;
        }

        // These are the targets the camera should follow.
        m_CameraControl.m_Targets = targets;
    }


    // This is called from start and will run each phase of the game one after another.



    private void RoundStarting()
    {
        // As soon as the round starts reset the tanks and make sure they can't move.


        // Snap the camera's zoom and position to something appropriate for the reset tanks.
        m_CameraControl.SetStartPositionAndSize();

        // Increment the round number and display text showing the players what round it is.
       
        m_MessageText.text = "State " + ScoreManager.m_CurrentLevel;
        // Wait for the specified length of time until yielding control back to the game loop.

    }


    private IEnumerator RoundWaitingStaring()
    {

        // As soon as the round begins playing let the players control the tanks.
        RoundStarting();
        yield return new WaitForSeconds(3);        
        // Clear the text from the screen.
        m_MessageText.text = string.Empty;

        // While there is not one tank left...
        //here      while (!OneTankLeft())

    }
    public bool checkLose()
    {
        bool b = true;
        for (int i = 0; i < m_MAX_Player_Count; i++)
        {
            // ... create them, set their player number and references needed for control.
            if (!m_Tanks[i].checkDeadALL())
                b = false;

        }
        return b;
    }
    public void reLiveATank(int index)
    {
        m_Tanks[index].Reset();

    }

    
}