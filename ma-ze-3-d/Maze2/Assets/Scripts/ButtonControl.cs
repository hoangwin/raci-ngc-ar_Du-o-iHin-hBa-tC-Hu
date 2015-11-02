﻿using UnityEngine;
using System.Collections;

public class ButtonControl : MonoBehaviour {

	// Use this for initialization
    
	void Start () {
     
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void ButtonCameraPress()
    {
        CameraManager.instance.setCamera();

    }

    public void ButtonEasy()
    {
        ScoreCOntrol.mcurrentMode = 0;
        MainMenu.instance.panelUI.SetActive(false);
        MainMenu.instance.panelLevel.SetActive(true);
        MainMenu.instance.initSelectLevel();
    }

    public void ButtonNormal()
    {
        ScoreCOntrol.mcurrentMode = 1;
        MainMenu.instance.panelUI.SetActive(false);
        MainMenu.instance.panelLevel.SetActive(true);
        MainMenu.instance.initSelectLevel();
    }

    public void ButtonHard()
    {
        ScoreCOntrol.mcurrentMode = 2;
        MainMenu.instance.panelUI.SetActive(false);
        MainMenu.instance.panelLevel.SetActive(true);
        MainMenu.instance.initSelectLevel();
    }
    public void ButtonBackToMainmenu()
    {     
        MainMenu.instance.panelUI.SetActive(true);
        MainMenu.instance.panelLevel.SetActive(false);
    }
    public void ButtonPause()
    {
        GameManager.instance.setUI(GameManager.instance.panelPAUSE);
    }
    public void ButtonSoundPress()
    {
        SoundEngine.isSoundMusic = !SoundEngine.isSoundMusic;
        if (SoundEngine.isSoundMusic)
        {

            SoundEngine.instance.music.enabled = true;
            MainMenu.instance.imageMusic.sprite = MainMenu.instance.imageMusicOn;
        }
        else
        {

            SoundEngine.instance.music.enabled = false;
            MainMenu.instance.imageMusic.sprite = MainMenu.instance.imageMusicOff;
        }
        SoundEngine.play(SoundEngine.instance.click);
    }
    public void ButtonSFXPress()
    {
        SoundEngine.isSoundSFX = !SoundEngine.isSoundSFX;
        if (SoundEngine.isSoundSFX)
        {

            SoundEngine.instance.audioSource.enabled = true;
            //  SoundEngine.instance.music.enabled = true;
            MainMenu.instance.imageSFX.sprite = MainMenu.instance.imageSFXOn;
        }
        else
        {

            SoundEngine.instance.audioSource.enabled = false;
            // SoundEngine.instance.music.enabled = false;
            MainMenu.instance.imageSFX.sprite = MainMenu.instance.imageSFXOff;
        }
        SoundEngine.play(SoundEngine.instance.click);
    }
    public void ButtonHome()
    {
        Application.LoadLevel("Menu");
    }
    public void ButtonRestart()
    {
        GameManager.instance.setUI(null);
        GameManager.instance.RestartGame();
    }
    public void ButtonReSume()
    {
        GameManager.instance.setUI(GameManager.instance.panelUI);
    }
    public void ButtonNext()
    {
        GameManager.instance.setUI(null);
        GameManager.instance.RestartGame();
    }
    public void ButtonShowHintList()
    {
        GameManager.instance.setHint(--GameManager.instance.hintCount);
       Maze.instance.showHintList();
    }
}
