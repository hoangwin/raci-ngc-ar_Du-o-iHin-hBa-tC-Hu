﻿using UnityEngine;
using System.Collections;

public class ButtonControl : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void ButtonTANk1Press()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        MainMenu.m_Instance.m_Index =0;
        TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_SELECT_STAGE);
        GameManager.m_Mode = MainMenu.m_Instance.m_Index;
        MainMenu.m_Instance.m_TankImagePostion.position = new Vector3(MainMenu.m_Instance.m_TankImagePostion.position.x, MainMenu.m_Instance.m_Postion[MainMenu.m_Instance.m_Index].position.y, MainMenu.m_Instance.m_TankImagePostion.position.z);
    }

    public void ButtonTANk2Press()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        MainMenu.m_Instance.m_Index = 1;
        TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_SELECT_STAGE);
        GameManager.m_Mode = MainMenu.m_Instance.m_Index;
        MainMenu.m_Instance.m_TankImagePostion.position = new Vector3(MainMenu.m_Instance.m_TankImagePostion.position.x, MainMenu.m_Instance.m_Postion[MainMenu.m_Instance.m_Index].position.y, MainMenu.m_Instance.m_TankImagePostion.position.z);
    }

    public void ButtonPause()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {         
                Time.timeScale = 0;
                TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelPause);
         
        }
    }
    public void ButtonResume()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            Time.timeScale = 1;
            TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelIngame);
        }
    }
    public void ButtonReplay()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            Time.timeScale = 1;
            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
        }
    }
    public void ButtonNext()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            Time.timeScale = 1;
            ScoreManager.m_CurrentLevel++;

            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
        }
    }
    public void ButtonMainMenu()
    {
        if (!TransitEffect.m_Instance.m_isEffecting)
        {
            Time.timeScale = 1;
            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_MENU);
        }
    }

   
           
}
