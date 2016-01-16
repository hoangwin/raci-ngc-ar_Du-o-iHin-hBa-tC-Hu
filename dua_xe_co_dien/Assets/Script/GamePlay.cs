using UnityEngine;
using System.Collections;

public class GamePlay : MonoBehaviour {
    public static GamePlay instance;
    
    public float timePlay;
    public float timeReBound;
    public float timeNextRebound;
	// Use this for initialization
    
    public GameObject PanelOver;
    public GameObject PanelPause;
    float updateInterval = 0.5f;
 
    private float accum = 0.0f; // FPS accumulated over the interval
    private float frames = 0; // Frames drawn over the interval
    private float timeleft ; // Left time for current interval

    public static int statePre = 0;
    public static int state = 0;
    public const int STATE_WAITTING = 1;
    public const int STATE_PLAY = 2;
    public const int STATE_PAUSE = 3;
    public const int STATE_OVER = 4;
    public static int score = 0;
	void Start () {
        DEF.Init();
        DEF.ScaleAnchorGui();
        timeleft = updateInterval;  

        //Application.targetFrameRate = 30;
        timeNextRebound = Random.Range(0.8f, 1.2f);
        timePlay = 0;
        timeReBound = 0;
       // Debug.Log(Time.captureFramerate);
       // Time.captureFramerate = 30;
        state = STATE_WAITTING;
        instance = this;
        score = 0;
        statePre = -1;
      //  SoundEngine.stopSound("SoundBgMusic");
	}
	
	// Update is called once per frame
	void FixedUpdate () {
        switch (state)
        {
            case STATE_WAITTING:
              
              //  state = STATE_PLAY;
                if (Input.GetKeyDown(KeyCode.Escape))
                {
                    statePre = STATE_WAITTING;
                    GamePlay.state = GamePlay.STATE_PAUSE;
                    GamePlay.instance.PanelPause.SetActive(true);

                    return;
                }
                break;
            case STATE_PAUSE:
                if (Input.GetKeyDown(KeyCode.Escape))
                {
                    if (statePre == STATE_WAITTING)
                    {
                        GamePlay.state = GamePlay.STATE_WAITTING;
                        GamePlay.instance.PanelPause.SetActive(false);
                    }
                    else
                    {
                        GamePlay.state = GamePlay.STATE_PLAY;
                        GamePlay.instance.PanelPause.SetActive(false);
                        return;
                    }
                }
                break;
            case STATE_PLAY:
                if (Input.GetKeyDown(KeyCode.Escape))
                {

                    GamePlay.state = GamePlay.STATE_PAUSE;
                    GamePlay.instance.PanelPause.SetActive(true);
                    return;
                }
                GamePlayUpdate();
                CalcScore();
                break;
            case STATE_OVER:
                if (Input.GetKeyDown(KeyCode.Escape))
                {
                    Application.LoadLevel("MainMenu");
                    return;
                }
                break;
        }
        
	}
    void GamePlayUpdate()
    {
        timePlay += Time.deltaTime;
        timeReBound += Time.deltaTime;

      

        if (timeReBound > timeNextRebound)
        {
            timeReBound = 0;
            Car.createNewCar();
            timeNextRebound = Random.Range(0.6f, 1.3f);
        }

        timeleft -= Time.deltaTime;
        accum += Time.timeScale / Time.deltaTime;
        ++frames;

        // Interval ended - update GUI text and start new interval
        if (timeleft <= 0.0)
        {
            // display two fractional digits (f2 format)
            string s = "" + (accum / frames).ToString("f2");
            //  Debug.Log(s);
            timeleft = updateInterval;
            accum = 0.0f;
            frames = 0;
        }
    }
    public void CalcScore()
    {
        score = (int)timePlay;

        GameObject.Find("LabelUIScore").GetComponent<UILabel>().text = "Thời Gian : " + score.ToString();

    }
    public static void GameOver()
    {
       // Debug.Log("Game Over");
        instance.PanelOver.SetActive(true);
        state = STATE_OVER;
        GameObject.Find("OverLabelScore").GetComponent<UILabel>().text = "Thời Gian : " + score.ToString();
        ScoreControl.updateScore();
    }


}
