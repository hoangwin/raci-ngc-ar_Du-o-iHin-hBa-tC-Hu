using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class ButtonControl : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void ButtonSound()
    {
        MainMenu.m_Instance.ButtonSound();
    }
    public void ButtonTANk1Press()
    {
        
        MainMenu.m_Instance.m_Index = 0;
        
        GameManager.m_Mode = MainMenu.m_Instance.m_Index;
        MainMenu.m_Instance.m_TankImagePostion.position = new Vector3(MainMenu.m_Instance.m_TankImagePostion.position.x, MainMenu.m_Instance.m_Postion[MainMenu.m_Instance.m_Index].position.y, MainMenu.m_Instance.m_TankImagePostion.position.z);
        MainMenu.m_Instance.ActivePanel(MainMenu.m_Instance.m_PanelSelectLevel);
        GameManager.m_IsPlaying = false;
        SelectStage.m_Instance.m_Index = ScoreManager.m_LevelUNblock.NUM - 1;
        SelectStage.m_Instance.ChangePage();
        SoundEngine.m_Instancce.PlaySoundCLick();
    }

    public void ButtonTANk2Press()
    {
        SoundEngine.m_Instancce.PlaySoundCLick();
        MainMenu.m_Instance.m_Index = 1;
        MainMenu.m_Instance.m_TankImagePostion.position = new Vector3(MainMenu.m_Instance.m_TankImagePostion.position.x, MainMenu.m_Instance.m_Postion[MainMenu.m_Instance.m_Index].position.y, MainMenu.m_Instance.m_TankImagePostion.position.z);
        GameManager.m_Mode = MainMenu.m_Instance.m_Index;
        MainMenu.m_Instance.ActivePanel(MainMenu.m_Instance.m_PanelSelectLevel);
        GameManager.m_IsPlaying = false;
        SelectStage.m_Instance.m_Index = ScoreManager.m_LevelUNblock.NUM - 1;
        SelectStage.m_Instance.ChangePage();        
        
    }

    public void ButtonPause()
    {
     //   if (!TransitEffect.m_Instance.m_isEffecting)
        {
            SoundEngine.m_Instancce.PlaySoundCLick();
            Time.timeScale = 0;
           GameManager .m_Instancce.ActivePanel(GameManager.m_Instancce.m_PanelPause);
         
        }
    }
    public void ButtonResume()
    {

       // if (!TransitEffect.m_Instance.m_isEffecting)
        {
            SoundEngine.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            GameManager.m_Instancce.ActivePanel(GameManager.m_Instancce.m_PanelIngame);
        }
    }
    public void ButtonReplay()
    {
       // if (!TransitEffect.m_Instance.m_isEffecting)
        {
            SoundEngine.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            GameManager.m_Instancce.initGame();
        }
    }
    public void ButtonNext()
    {
        //if (!TransitEffect.m_Instance.m_isEffecting)
        {
            SoundEngine.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            ScoreManager.m_CurrentLevel++;

            GameManager.m_Instancce.initGame();
        }
    }
    public void ButtonMainMenu()
    {
       // if (!TransitEffect.m_Instance.m_isEffecting)
        {
            SoundEngine.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
                  SceneManager.LoadScene("MainMenu");

        }
    }
    public void ButtonFire()
    {
      //  Debug.Log("aaaaaaaaaaaaa");
        if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar <= 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
        else if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar > 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null || GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[1] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
    }

    public void ButtonMove()
    {
      //  Debug.Log("aaaaaaaaaaaaa");
        if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar <= 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
        else if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar > 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null || GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[1] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
    }



}
