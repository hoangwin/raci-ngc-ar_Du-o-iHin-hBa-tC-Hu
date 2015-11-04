using UnityEngine;
using System.Collections;

public class SoundEngine : MonoBehaviour
{
    public static bool isSoundMusic = true;
    public static bool isSoundSFX = true;
    
    // Use this for initialization
   
    //music
    public AudioSource music;
    public AudioClip music1;
    public AudioClip music2;
    public AudioClip music3;
    public AudioClip music4;

    //sfx
    
	public AudioClip click;
    public AudioClip move;
    public AudioClip win;
    
    public AudioSource audioSource;
    public AudioSource audioSourceFXLoop;
    
    public static SoundEngine instance;
    void Start()
    {

            instance = this;        
            SoundEngine.instance.music.enabled = isSoundMusic;
            SoundEngine.instance.audioSource.enabled = isSoundSFX;
    }
    public static void playLoop(AudioClip clip)
    {
        instance.audioSourceFXLoop.clip = clip;
        instance.audioSourceFXLoop.Play();
    }

    public static void play(AudioClip clip)
    {
        instance.audioSource.PlayOneShot(clip);
    }
    public static void stop()
    {
        instance.audioSourceFXLoop.Stop();
    }
   
    // Update is called once per frame
    void Update()
    {

    }
}
