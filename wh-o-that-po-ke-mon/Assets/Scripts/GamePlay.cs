using UnityEngine;
using System.Collections;

public class GamePlay : MonoBehaviour {
	
	public static GamePlay instance;
    public static int mpreStareState = 0;
	public static int mcurrentState = 0;
	public const int STATE_MENU = 0;
	public const int STATE_PLAY = 1;
	public const int STATE_COMPLETED = 2;
    public const int STATE_COMPLETEDALL = 3;    
    public GameObject PanelMainMenu;
  //  public GameObject PanelInGame;
    public GameObject PanelGamePlay;
    public GameObject PanelCompleted;
    public GameObject PanelCompletedAll;    
    public GameObject PanelDiaLog;
    public bool IsPanelDialogActive;
    public int m_PanelDialogActiveType;//0 = ta loi,//1 == hoi xem video
    public GameObject ImageViewQuestion;
    public UILabel LabelLevel;
    public UILabel LabelCoin;
    public GameObject ObjectSoundOn;
    public GameObject ObjectSoundOFF;
	// Use this for initialization
	void Start () {
		DEF.Init();
        
		GameObject hand = GameObject.Find("BackGround");
		
		//BirdObject  =  GameObject.Find("BirdObject");
		//BirdObject.GetComponent<Rigidbody2D>().gravityScale = 0f;
		//GUI.matrix = Matrix4x4.TRS(new Vector3(0, 0, 0), Quaternion.identity,new  Vector3(DEF.scaleX, DEF.scaleY, 1));
		if(hand!= null)
		{
			//	DEF.ResizeBySize(hand,DEF.DISPLAY_WIDTH,DEF.DISPLAY_HEIGHT);
			hand.transform.localScale = new Vector3 (DEF.sx_ortho, DEF.sy_ortho, 1);
			
		}
        mpreStareState = -1;//none
        mcurrentState = STATE_MENU;
		instance = this;
        
		//ScoreControl.setDefaultScore ();
		DEF.ScaleAnchorGui();

        ScoreControl.loadGame();
        
     
        Level.loadTextData();
        SetUIText();
        ChangeScreenChoose(STATE_MENU, false);
	}
	
	// Update is called once per frame
	void Update () 
	{

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (PanelMainMenu.activeInHierarchy)
            {
                Debug.Log("Quit");
                Application.Quit();
            }
            else if (PanelCompleted.activeInHierarchy)
            {
                ButtonBackPress();

            }else if (PanelGamePlay.activeInHierarchy)
            {
                    if (GamePlay.instance.IsPanelDialogActive)
                    {
                        ButtonNoPress();
                    }
                    else
                     ButtonBackPress();
            }
          
        }

	}
    public void ChangeScreenChoose(int nextState, bool isBack)
    {
        PanelMainMenu.SetActive(false);
     //   PanelInGame.SetActive(false);//set de khoi dong biet
        PanelGamePlay.SetActive(false);
        PanelCompleted.SetActive(false);
        PanelCompletedAll.SetActive(false);
        PanelDiaLog.SetActive(false);
        
        IsPanelDialogActive = false;
        
        switch (nextState)
        {
            case GamePlay.STATE_MENU:
                        PanelMainMenu.SetActive(true);
                        //PanelInGame.SetActive(true);//set de khoi dong biet
                break;
            case GamePlay.STATE_PLAY:
                PanelGamePlay.SetActive(true);
                break;
            case GamePlay.STATE_COMPLETED:
                PanelCompleted.SetActive(true);
                break;
            case GamePlay.STATE_COMPLETEDALL:
                PanelCompletedAll.SetActive(true);
                break;
           

        }
        mpreStareState = mcurrentState;
        mcurrentState = nextState;

    }


    public void SetUIText()
    {
            LabelLevel.text = (ScoreControl.mLevelUnblock+1).ToString(); 
            LabelCoin.text = ScoreControl.mScore.ToString(); 
    }
	public void ButtonMainMenuPlay()
    {
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
        ChangeScreenChoose(STATE_PLAY, false);
        Level.GetQuestion(ScoreControl.mLevelUnblock);
        ButtonControl.instance.initLevel();
        ButtonControl.instance.Align();
        SetUIText();
    }
    public void ButtonAddCoin()
    {
        AdsAdmob.m_Instance.ShowRewardAds();
    }
    public void ButtonBackPress()
    {
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
        if (GamePlay.instance.IsPanelDialogActive)
            return;

        if (mcurrentState == STATE_COMPLETED || mcurrentState == STATE_COMPLETEDALL || mcurrentState == STATE_PLAY)
            ChangeScreenChoose(STATE_MENU, false);    
        else
            ChangeScreenChoose(mpreStareState, false);       
    }

   

    public void ButtonAnswerPress()
    {
        if (ScoreControl.mScore < 10)
            return;
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
        PanelDiaLog.SetActive(true);
        IsPanelDialogActive = true;
    }
    public void PlayInGameButtonPress()
    {
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
        ChangeScreenChoose(STATE_PLAY, false);
        Level.GetQuestion(ScoreControl.mLevelUnblock);
        ButtonControl.instance.initLevel();
        ButtonControl.instance.Align();
        SetUIText();
    }
    public void ButtonYesPress()
    {
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
         PanelDiaLog.SetActive(false);
         IsPanelDialogActive = false;
         ButtonControl.instance.unblocNextChar();
    }
    public void ButtonNoPress()
    {
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
        PanelDiaLog.SetActive(false);
        IsPanelDialogActive = false;
    }

    public void ButtonFBPress()
    {
        StartCoroutine(TakeSnapshot(Screen.width, Screen.height));
        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
    }
    public void ButtonSoundPress()
    {
        SoundEngine.isSoundSFX = !SoundEngine.isSoundSFX;
        if (SoundEngine.isSoundSFX)
        {
            ObjectSoundOn.SetActive(true);
            ObjectSoundOFF.SetActive(false);
        }
        else
        {
            ObjectSoundOn.SetActive(false);
            ObjectSoundOFF.SetActive(true);
        }

        SoundEngine.instance.PlayOneShot(SoundEngine.instance._soundclick);
    }
    public void ButtonRatePress()
    {
        WP8Statics.RateApp("Rate App");
    }
    public void ButtonSTGamePress()
    {
        Application.OpenURL("http://stgame.vn/");
    }  
    public IEnumerator TakeSnapshot(int width, int height)
    {
        //yield return new WaitForSeconds(0.1F);
        yield return new WaitForEndOfFrame();
        Texture2D texture = new Texture2D (width, height, TextureFormat.RGB24, true);
        texture.ReadPixels(new Rect(0, 0, width, height), 0, 0);
        texture.Apply();
     // PlayerPrefs
        //snapshot = texture;
         ;// Application.persistentDataPath;
#if UNITY_WP8
         //string _path = "C:\\Data\\Users\\Public\\Pictures\\Camera Roll\\q.jpg";
         string _path = "";
         
            _path =  Application.dataPath + System.IO.Path.DirectorySeparatorChar.ToString() + "q.png";
        
       //  _path.Replace("/", "\\\\");
        Debug.Log(_path);
       // System.IO.File.WriteAllBytes(_path, texture.EncodeToPNG());
        UnityEngine.Windows.File.WriteAllBytes(_path, texture.EncodeToPNG());   

        WP8Statics.SharedFBImage(_path);
#else
      //  string _path =Application.persistentDataPath + "/q.png";
      //  Debug.Log(_path);
      //  System.IO.File.WriteAllBytes(_path, texture.EncodeToPNG());
       // UnityEngine.Windows.File.WriteAllBytes(_path, texture.EncodeToPNG());
#endif
    }

   
}
