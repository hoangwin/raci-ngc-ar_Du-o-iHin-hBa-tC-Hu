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
        SoundEngine.play(SoundEngine.instance.click);
        CameraManager.instance.setCamera();

    }

    public void ButtonEasy()
    {
        SoundEngine.play(SoundEngine.instance.click);
        ScoreCOntrol.mcurrentMode = 0;
        MainMenu.instance.panelUI.SetActive(false);
        MainMenu.instance.panelLevel.SetActive(true);
        MainMenu.instance.initSelectLevel();
    }

    public void ButtonNormal()
    {
        SoundEngine.play(SoundEngine.instance.click);
        ScoreCOntrol.mcurrentMode = 1;
        MainMenu.instance.panelUI.SetActive(false);
        MainMenu.instance.panelLevel.SetActive(true);
        MainMenu.instance.initSelectLevel();
    }

    public void ButtonHard()
    {
        SoundEngine.play(SoundEngine.instance.click);
        ScoreCOntrol.mcurrentMode = 2;
        MainMenu.instance.panelUI.SetActive(false);
        MainMenu.instance.panelLevel.SetActive(true);
        MainMenu.instance.initSelectLevel();
    }
    public void ButtonBackToMainmenu()
    {
        SoundEngine.play(SoundEngine.instance.click);
        MainMenu.instance.panelUI.SetActive(true);
        MainMenu.instance.panelLevel.SetActive(false);
    }
    public void ButtonPause()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GameManager.instance.setUI(GameManager.instance.panelPAUSE);
    }
    public void ButtonSoundPress()
    {
      //  Debug.Log("aa");
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
        SoundEngine.play(SoundEngine.instance.click);
        Application.LoadLevel("Menu");
    }
    public void ButtonRestart()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GameManager.instance.setUI(null);
        GameManager.instance.RestartGame();
    }
    public void ButtonReSume()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GameManager.instance.setUI(GameManager.instance.panelUI);
    }
    public void ButtonNext()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GameManager.instance.setUI(null);
        GameManager.instance.RestartGame();
    }
    public void ButtonShowHintList()
    {
        SoundEngine.play(SoundEngine.instance.click);
        GameManager.instance.setHint(--GameManager.instance.hintCount);
       Maze.instance.showHintList();
    }
    public void ButtonRatePress()
    {
        SoundEngine.play(SoundEngine.instance.click);
        //  SoundEngine.getInstance().PlayOneShot(SoundEngine.getInstance()._soundclick);
#if UNITY_ANDROID
        Application.OpenURL("market://details?id=com.saiyan.maze3d");
#elif UNITY_WP8
		WP8Statics.RateApp("");
#elif UNITY_IOS
        Application.OpenURL("https://itunes.apple.com/us/app/saiyan-maze/id1055564819?ls=1&mt=8");	
		
		//   IOsStatic.ShowAds(" ", " ");
#endif

    }
    public static bool firstShowAdsAtBegin = false;
    static public float timeShowAds = 0;
    public static void ShowADS()
    {
        Debug.Log(timeShowAds);
        //if (timeShowAds > 90 || !firstShowAdsAtBegin)
        {
            Debug.Log("Ads");
            //Debug.Log("Ads1");
            if (!firstShowAdsAtBegin)
                firstShowAdsAtBegin = true;
            timeShowAds = 0;
#if UNITY_ANDROID
            using (AndroidJavaClass jc = new AndroidJavaClass("com.saiyan.maze3d.UnityPlayerNativeActivity"))
            {
                jc.CallStatic<int>("ShowAds");
            }

#elif UNITY_WP8
			
			WP8Statics.ShowAds("");
#elif UNITY_IOS
			IOsStatic.ShowAds(" ", " ");
#endif
        }
    }


}
