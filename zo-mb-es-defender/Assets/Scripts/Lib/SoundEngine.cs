using UnityEngine;
using System.Collections;

public class SoundEngine : MonoBehaviour {
    public static bool m_isSoundEnable = true;
    public AudioSource m_AudioSource;
    public AudioClip m_ClickClip;
    public AudioClip m_WinClip;
    public AudioClip m_LoseClip;
    public AudioClip m_StartClip;
    public AudioClip m_GetItemClip;




    //public AudioClip _soundShoot = null;

    public static SoundEngine m_Instancce;
    void Awake()
    {
        m_Instancce = this;
    }
    void Start()
    {
        
        /*
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
        SoundEngine.getInstance().PlayLoop(SoundEngine.getInstance()._soundBG1);
         * */
        m_Instancce = this;
    }
    public void PlaySoundCLick()
    {
        if (!m_isSoundEnable)
            return;
        m_AudioSource.clip = m_ClickClip;
        m_AudioSource.Play();
    }
    public void PlaySoundStart()
    {
        if (!m_isSoundEnable)
            return;
        m_AudioSource.clip = m_StartClip;
        m_AudioSource.Play();
    }
    public void PlaySoundGetItem()
    {
        if (!m_isSoundEnable)
            return;
        m_AudioSource.clip = m_GetItemClip;
        m_AudioSource.Play();
    }
    public void PlaySoundWinLose()
    {
        if (!m_isSoundEnable)
            return;
        if (GameOver.m_isWin)
            m_AudioSource.clip = m_WinClip;
        else
            m_AudioSource.clip = m_LoseClip;
        m_AudioSource.Play();
    }


}
