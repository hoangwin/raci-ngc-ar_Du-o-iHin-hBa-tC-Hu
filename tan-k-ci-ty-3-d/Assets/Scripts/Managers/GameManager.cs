using System.Collections;
using UnityEngine;
using UnityEngine.UI;


    public class GameManager : MonoBehaviour
    {
        public int m_NumRoundsToWin = 5;            // The number of rounds a single player has to win to win the game.
        public float m_StartDelay = 3f;             // The delay between the start of RoundStarting and RoundPlaying phases.
        public float m_EndDelay = 3f;               // The delay between the end of RoundPlaying and RoundEnding phases.
        public CameraControl m_CameraControl;       // Reference to the CameraControl script for control during different phases.
        public Text m_MessageText;                  // Reference to the overlay Text to display winning text, etc.
        public GameObject[] m_TankPrefab;             // Reference to the prefab the players will control.
        public TankManager[] m_Tanks;               // A collection of managers for enabling and disabling different aspects of the tanks.
        public TankManager[] m_TanksEnemy;               // A collection of managers for enabling and disabling different aspects of the tanks.
        
        private int m_RoundNumber;                  // Which round the game is currently on.        
        public Transform[] m_PositionBegin;
        public static int m_TankCount = 0;
        public static int m_TankCountLive = 0;
        public static GameManager m_Instancce;
        public static int m_Mode;
        public static int m_MAX_Player_Count = 1;

        private void Start()
        {
            m_Instancce = this;            
        }
        public void initGame()
        {            
            if (m_Mode == 0)
                m_MAX_Player_Count = 1;
            else
                m_MAX_Player_Count = 2;
            // Create the delays so they only have to be made once.
            MapManager.m_Instance.initLevel(1);           

            SpawnAllTanks();
            SetCameraTargets();

            // Once the tanks have been created and the camera is using them as targets, start the game.
            StartCoroutine(GameLoop());
            StartCoroutine(CreateTank());
        }

        private void SpawnAllTanks()
        {
            // For all the tanks...
            for (int i = 0; i < m_MAX_Player_Count; i++)
            {
                // ... create them, set their player number and references needed for control.
                m_Tanks[i].m_Instance =
                    Instantiate(m_TankPrefab[0], m_Tanks[i].m_SpawnPoint.position, m_Tanks[i].m_SpawnPoint.rotation) as GameObject;
                m_Tanks[i].m_PlayerNumber = i + 1;
                
                m_Tanks[i].Setup(0);
                m_Tanks[i].m_Instance.tag = "TankPlayer";
            }
        }
        public IEnumerator CreateTank()//enemy
        {
            yield return 1f;
            if (m_TankCountLive < 4 && m_TankCount<=20)
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
            StartCoroutine(CreateTank());
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
        private IEnumerator GameLoop ()
        {
            // Start off by running the 'RoundStarting' coroutine but don't return until it's finished.
            RoundStarting ();

            // Once the 'RoundStarting' coroutine is finished, run the 'RoundPlaying' coroutine but don't return until it's finished.
            yield return StartCoroutine (RoundPlaying());

            // Once execution has returned here, run the 'RoundEnding' coroutine, again don't return until it's finished.
        //here    yield return StartCoroutine (RoundEnding());

            // This code is not run until 'RoundEnding' has finished.  At which point, check if a game winner has been found.
          
                // If there isn't a winner yet, restart this coroutine so the loop continues.
                // Note that this coroutine doesn't yield.  This means that the current version of the GameLoop will end.
                StartCoroutine (GameLoop ());
          
        }


        private void RoundStarting ()
        {
            // As soon as the round starts reset the tanks and make sure they can't move.
           

            // Snap the camera's zoom and position to something appropriate for the reset tanks.
            m_CameraControl.SetStartPositionAndSize ();

            // Increment the round number and display text showing the players what round it is.
            m_RoundNumber++;
            m_MessageText.text = "ROUND " + m_RoundNumber;
            // Wait for the specified length of time until yielding control back to the game loop.
            
        }


        private IEnumerator RoundPlaying ()
        {
            // As soon as the round begins playing let the players control the tanks.
           

            // Clear the text from the screen.
            m_MessageText.text = string.Empty;

            // While there is not one tank left...
      //here      while (!OneTankLeft())
            while(true)
            {
                // ... return on the next frame.
                yield return null;
            }
        }
        public bool checkLose()
        {
            bool b =true;
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

     


        // This is used to check if there is one or fewer tanks remaining and thus the round should end.
      
        
   
}