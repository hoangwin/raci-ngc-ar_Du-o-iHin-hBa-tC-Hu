using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour {

	// Use this for initialization
	void Start () {
        ScoreControl.loadGame();

        if(!GameObject.Find("SoundBgMusic").GetComponent<AudioSource>().isPlaying)
            SoundEngine.playSound("SoundBgMusic");
        if (SoundEngine.soundclick == null)
        {
            SoundEngine.soundclick = GameObject.Find("SoundClick");
            DontDestroyOnLoad(SoundEngine.soundclick);
        }
        if (SoundEngine.soundBg== null)
        {
            SoundEngine.soundBg = GameObject.Find("SoundBgMusic");
            DontDestroyOnLoad(SoundEngine.soundBg);
        }

        if (SoundEngine.isSound)
        {
            GameObject.Find("MMLabelSound").GetComponent<UILabel>().text = "Âm Thanh : On";
            AudioListener.pause = false;
        }
        else
        {
            GameObject.Find("MMLabelSound").GetComponent<UILabel>().text = "Âm Thanh : Off";
            AudioListener.pause = true;
        }

	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
	}
	void PlayButton()
	{
        Application.LoadLevel("GamePlay");
	    //Debug.Log("aaaaaaaaaaaaa");
	}
    void ExitButton()
    {
        Application.Quit();
        //Debug.Log("aaaaaaaaaaaaa");
    }
    void SoundButton()
    {
       //Debug.Log("aaaaaaaaaaaaa");
    }
}
