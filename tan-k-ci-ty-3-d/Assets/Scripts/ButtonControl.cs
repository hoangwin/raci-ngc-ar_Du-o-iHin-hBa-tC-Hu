using UnityEngine;
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
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        GameManager.m_Instancce.PlaySoundCLick();
        MainMenu.m_Instance.m_Index = 0;
        TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_SELECT_STAGE);
        GameManager.m_Mode = MainMenu.m_Instance.m_Index;
        MainMenu.m_Instance.m_TankImagePostion.position = new Vector3(MainMenu.m_Instance.m_TankImagePostion.position.x, MainMenu.m_Instance.m_Postion[MainMenu.m_Instance.m_Index].position.y, MainMenu.m_Instance.m_TankImagePostion.position.z);
    }

    public void ButtonTANk2Press()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        GameManager.m_Instancce.PlaySoundCLick();
        MainMenu.m_Instance.m_Index = 1;
        TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_SELECT_STAGE);
        GameManager.m_Mode = MainMenu.m_Instance.m_Index;
        MainMenu.m_Instance.m_TankImagePostion.position = new Vector3(MainMenu.m_Instance.m_TankImagePostion.position.x, MainMenu.m_Instance.m_Postion[MainMenu.m_Instance.m_Index].position.y, MainMenu.m_Instance.m_TankImagePostion.position.z);
    }

    public void ButtonPause()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            GameManager.m_Instancce.PlaySoundCLick();
            Time.timeScale = 0;
                TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelPause);
         
        }
    }
    public void ButtonResume()
    {

        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            GameManager.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelIngame);
        }
    }
    public void ButtonReplay()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            GameManager.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
        }
    }
    public void ButtonNext()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            GameManager.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            ScoreManager.m_CurrentLevel++;

            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
        }
    }
    public void ButtonMainMenu()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            GameManager.m_Instancce.PlaySoundCLick();
            Time.timeScale = 1;
            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_MENU);
        }
    }
    public void ButtonFire()
    {
        Debug.Log("aaaaaaaaaaaaa");
        if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar <= 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
        else if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar > 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null || GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[1] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
    }

    public void ButtonMove()
    {
        Debug.Log("aaaaaaaaaaaaa");
        if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar <= 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
        else if (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_CountStar > 1 && (GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[0] == null || GameManager.m_Instancce.m_Tanks[0].m_Shooting.m_ShellInstance[1] == null))
            GameManager.m_Instancce.m_Tanks[0].m_Shooting.Fire("ShellOfPlayer");//khi player 1 ban
    }



}
