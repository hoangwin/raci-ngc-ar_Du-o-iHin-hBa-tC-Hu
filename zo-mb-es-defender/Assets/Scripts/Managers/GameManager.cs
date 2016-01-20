using System.Collections;
using UnityEngine;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    public CameraControl m_CameraControl;       // Reference to the CameraControl script for control during different phases.
    public Text m_MessageText;                  // Reference to the overlay Text to display winning text, etc.
    public Text m_StageText;
    public Text m_Tank1Text;
    public Text m_Tank2Text;
    public Text m_TankenemyText;
    public GameObject[] m_TankPrefab;             // Reference to the prefab the players will control.
    public TankManager[] m_Tanks;               // A collection of managers for enabling and disabling different aspects of the tanks.
    public TankManager[] m_TanksEnemy;               // A collection of managers for enabling and disabling different aspects of the tanks.
    public SuperBox m_Eargle;
    public static int[] m_TanksStarSave = new int[2];


    public Transform[] m_PositionBegin;
    public static int m_TankCount = 0;
    public static int m_TankCountLive = 0;
    public static GameManager m_Instancce;
    public static int m_Mode;
    public static int m_MAX_Player_Count = 1;
    public static bool m_isWaitingCreaTank = false;
    public static bool m_IsPlaying = false;

    public ParticleSystem[] m_particalInit;
    public ParticleSystem m_particalPlayerInit;
    public GameObject m_QuestionMark;

    public GameObject[] m_AwardBoxsPrefab;
    public static GameObject[] m_AwardBoxsLive;
    public static int m_AwardBoxsCount;
    public static bool m_isTimerEffect;

    public GameObject m_PanelGameOver;
    public GameObject m_PanelIngame;
    public GameObject m_PanelPause;


    public GameObject m_StarFrefab;


    private void Start()
    {

        m_Instancce = this;
        m_AwardBoxsLive = new GameObject[5];
#if UNITY_WSA
        Vungle.init("Test_Android", "Test_iOS", "568f5cb5fdef7fa574000021");
#endif
        //   ActivePanel(m_PanelIngame);
        GameManager.m_Instancce.initGame();
     


    }
    public void initGame()
    {
        DestroyAllGame();
        m_StageText.text = "STAGE:" + ScoreManager.m_CurrentLevel.ToString();
        m_Tank1Text.text = "3";
        m_TankenemyText.text = "20";

        if (m_Mode == 0)
        {
            m_Tank2Text.text = "0";
            m_MAX_Player_Count = 1;
        }
        else
        {
            m_Tank2Text.text = "3";
            m_MAX_Player_Count = 2;
        }
        m_AwardBoxsCount = 0;
        //ScoreManager.m_CurrentLevel = 33;

        MapManager.m_Instance.initLevel(ScoreManager.m_CurrentLevel);

        SpawnAllTanks();
        SetCameraTargets();

        // Once the tanks have been created and the camera is using them as targets, start the game.
        StartCoroutine(RoundWaitingStaring());
        m_IsPlaying = true;
        m_isWaitingCreaTank = false;

        for (int i = 0; i < 5; i++)
        {
            GameManager.m_Instancce.m_particalInit[i].gameObject.SetActive(false);
        }
        SoundEngine.m_Instancce.PlaySoundStart();
        ActivePanel(m_PanelIngame);

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
            int index = Random.Range(1, 5);
            m_TanksEnemy[m_TankCount].m_Instance =
                  Instantiate(m_TankPrefab[index], m_PositionBegin[m_TankCount % 3].position, m_PositionBegin[m_TankCount % 3].rotation) as GameObject;
            m_TanksEnemy[m_TankCount].m_PlayerNumber = 0;
            Debug.Log(index - 1);
            m_TanksEnemy[m_TankCount].Setup(index - 1);//here


            m_TanksEnemy[m_TankCount].m_Instance.tag = "TankEnemy";
            m_TankCount++;
            m_TankCountLive++;
            GameManager.m_Instancce.m_TankenemyText.text = (20 - GameManager.m_TankCount).ToString();
        }
        GameManager.m_Instancce.m_particalInit[(m_TankCount - 1) % 3 + 2].gameObject.SetActive(false);

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
        timeShowAds += Time.deltaTime;
        if (m_IsPlaying)
        {
            //  if (!TransitEffect.m_Instance.m_isEffecting)
            {
                if (Input.GetKeyUp(KeyCode.Escape))
                {
                    //   Debug.Log("bbbbbbbbbbbbbbbbbb");
                    SoundEngine.m_Instancce.PlaySoundCLick();
                    Time.timeScale = 0;
                    GameManager.m_Instancce.ActivePanel(GameManager.m_Instancce.m_PanelPause);
                }
                if (m_TankCountLive < 4 && m_TankCount < 20 && !m_isWaitingCreaTank)
                {
                    StartCoroutine(CreateTank());

                }
            }
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
        yield return new WaitForSeconds(2);
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
    public void DestroyAllAward()
    {
        for (int i = 0; i < m_AwardBoxsLive.Length; i++)
            Destroy(m_AwardBoxsLive[i]);
        GameManager.m_AwardBoxsCount = 0;
    }

    public static bool firstShowAdsAtBegin = false;
    static public float timeShowAds = 0;
    public static void ShowADS()
    {
        Debug.Log(timeShowAds);
        if (timeShowAds > 90 || !firstShowAdsAtBegin)
        {
            Debug.Log("Ads");
            //Debug.Log("Ads1");
            if (!firstShowAdsAtBegin)
                firstShowAdsAtBegin = true;
            timeShowAds = 0;
#if UNITY_IOS || UNITY_ANDROID || UNITY_WP8_1 //|| UNITY_EDITOR
#if UNITY_ANDROID
            using (AndroidJavaClass jc = new AndroidJavaClass("com.battlecity.tankbattle.UnityPlayerActivity"))
            {
                jc.CallStatic<int>("ShowAds");
            }

#elif UNITY_WP8_1
			
			    WP8Statics.ShowAds("");
#elif UNITY_IOS
            IOsStatic.ShowAds(" ", " ");
#endif
#else
            //su dung vungle
            //WP8Statics.ShowAds("");
           
            // System.Collections.Generic.Dictionary<string, object> option;
            // option = new System.Collections.Generic.Dictionary<string, object> ();\

            //   Vungle.playAdWithOptions(option);
            Vungle.playAd();
            Debug.Log("BeginAds!");
            Vungle.adPlayableEvent += (isAdAvailable) => {
                if (isAdAvailable)
                {
                    Debug.Log("An ad is ready to show!");
                }
                else {
                    Debug.Log("No ad is available at this moment.");
                }
            };
#endif
        }
    }
    void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus)
        {
            // Debug.Log("PAUSE");
            Vungle.onPause();
        }
        else {
            // Debug.Log("Resume");
            Vungle.onResume();
        }

    }

    public void ActivePanel(GameObject _pannel)
    {

        if (_pannel == m_PanelGameOver)
        {
            if (m_PanelGameOver != null)
                m_PanelGameOver.SetActive(true);
        }
        else if (m_PanelGameOver != null)
            m_PanelGameOver.SetActive(false);

        if (_pannel == m_PanelIngame)
        {
            if (m_PanelIngame != null)
                m_PanelIngame.SetActive(true);
        }
        else
                if (m_PanelIngame != null)
            m_PanelIngame.SetActive(false);


        if (_pannel == m_PanelPause)
        {
            if (m_PanelPause != null)
                m_PanelPause.SetActive(true);
        }
        else
                if (m_PanelPause != null)
            m_PanelPause.SetActive(false);
    }
    public void BeginGameOver()
    {

        MapManager.m_Instance.StopAllCoroutines();
        GameManager.m_Instancce.DestroyAllAward();
        StartCoroutine(DeplayGameOverWait());
    }
    private IEnumerator DeplayGameOverWait()
    {
        SoundEngine.m_Instancce.PlaySoundWinLose();
        GameManager.m_IsPlaying = false;
        yield return new WaitForSeconds(3);
        GameManager.m_Instancce.StopAllTank();
        ActivePanel(m_PanelGameOver);
        GameOver.setInitWinLose();
        StartCoroutine(GameOver.m_Instance.ShowScoreInfo());
        //Debug.Log(ScoreManager.m_Player1Score[0]+ ","+ScoreManager.m_Player1Score[1]+ "," +ScoreManager.m_Player1Score[2]+ "," + ScoreManager.m_Player1Score[3]);        
    }
}