using UnityEngine;
using System.Collections;

public class SoundEngine : MonoBehaviour {
	public static bool isSoundSFX = true;
    public static bool isSoundMusic = true;
    public AudioClip _soundclick = null;
    public AudioClip _soundPass = null;
    public AudioClip _soundOver = null;
    
    
    
    public static SoundEngine instance;
    void Start()
    {
        if (instance != null)
        {
            Debug.Log("Destroy This");
            Destroy(this);
        }
        else
        {
            DontDestroyOnLoad(this);
            instance = this;
        }
        //this.gameObject.
        //SoundEngine.instance.PlayLoop(SoundEngine.instance._soundBG1);
    }
    public static SoundEngine getInstance()
    {
        if(instance == null)
        {
            instance = new SoundEngine();
        }
        return instance;
    }
    public void PlayOneShot(AudioClip e)
    {

        if (e == null)
            return;
        //if (!audio.isPlaying)
        if (isSoundSFX)
        {
            audio.PlayOneShot(e);
        }
    }
    // Update is called once per frame
    public void PlayLoop(AudioClip e)
    {
        if (isSoundMusic)
        {
            audio.clip = e;
            audio.loop = true;
            if (!audio.isPlaying)
                audio.Play();
        }
    }
    public void stopSound()
    {
        audio.Stop();
    }

	// Update is called once per frame
	void Update () {
	
	}

	
}
