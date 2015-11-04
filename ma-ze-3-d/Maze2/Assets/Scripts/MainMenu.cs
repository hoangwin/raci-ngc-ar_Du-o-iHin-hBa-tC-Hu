using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MainMenu : MonoBehaviour {

	// Use this for initialization

    public Sprite[] sprStart;
    public Sprite sprStartDisable;
    public Sprite sprButtonEnable;
    public Sprite sprButtonDisable;
    public GameObject panelUI;
    public GameObject panelLevel;
    public static MainMenu instance;

    public Sprite imageMusicOn;
    public Sprite imageMusicOff;
    public Image imageMusic;
    //

    public Sprite imageSFXOn;
    public Sprite imageSFXOff;
    public Image imageSFX;

    public AButton[] gameObjectArrayButton;
	void Start () {
        instance = this;
        MainMenu.instance.panelUI.SetActive(true);
        MainMenu.instance.panelLevel.SetActive(false);
        ScoreCOntrol.Init();
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (panelUI.activeSelf)
            {
                Application.Quit();
            }
            else if (panelLevel.activeSelf)
            {
                MainMenu.instance.panelUI.SetActive(true);
                MainMenu.instance.panelLevel.SetActive(false);
            }
         

        }
	}
    public void initSelectLevel()
    {
        if(ScoreCOntrol.mcurrentMode ==0)//easy
        {
            initSelectLevelWithType(ScoreCOntrol.levelEasyArray, ScoreCOntrol.levelEasy);
        }
        else if(ScoreCOntrol.mcurrentMode ==1)//normal
        {
            initSelectLevelWithType(ScoreCOntrol.levelNormalArray, ScoreCOntrol.levelNormal);
        }else//hard
        {
            initSelectLevelWithType(ScoreCOntrol.levelHardArray, ScoreCOntrol.levelHard);
        }

        
    }
    public void initSelectLevelWithType(SuperArrayInt _levelArray, SuperInt _level)//t =0 easy
    {
       
        ScoreCOntrol.setCurrentLevel(_levelArray, _level);
        for(int i=0;i<=ScoreCOntrol.level.NUM;i++)
        {
            gameObjectArrayButton[i].image.sprite = MainMenu.instance.sprButtonEnable;
            gameObjectArrayButton[i].star.sprite = sprStart[ScoreCOntrol.levelArray.Get(i) ];
           
            gameObjectArrayButton[i].gameObject.GetComponent<Button>().interactable = true; 
        }
        for(int i=ScoreCOntrol.level.NUM+1;i<ScoreCOntrol.levelArray.N;i++)
        {
            gameObjectArrayButton[i].image.sprite = MainMenu.instance.sprButtonDisable;
            gameObjectArrayButton[i].star.sprite = sprStartDisable;
            
            gameObjectArrayButton[i].gameObject.GetComponent<Button>().interactable = false; 
        }
    }
}
