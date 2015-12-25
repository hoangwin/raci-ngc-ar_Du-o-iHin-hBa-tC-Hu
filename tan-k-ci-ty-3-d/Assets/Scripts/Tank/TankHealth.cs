using UnityEngine;
using UnityEngine.UI;

public class TankHealth : MonoBehaviour
{
    public int m_PlayerNumber = 1;
    public int m_PlayerType = 1;//0,1,2,3//loi thuong noi nhanh,loai khochet,loai?
    public float m_StartingHealth = 100f;
    public GameObject m_ExplosionPrefab;

    private AudioSource m_ExplosionAudio;
    private ParticleSystem m_ExplosionParticles;
    private float m_CurrentHealth;
    public float m_CurrentLive;
    private bool m_Dead;


    private void Awake()
    {
        m_ExplosionParticles = Instantiate(m_ExplosionPrefab).GetComponent<ParticleSystem>();
        m_ExplosionAudio = m_ExplosionParticles.GetComponent<AudioSource>();

        m_ExplosionParticles.gameObject.SetActive(false);
    }


    private void OnEnable()
    {
        m_CurrentHealth = m_StartingHealth;
        m_Dead = false;


    }


    public void TakeDamage(float amount, int fromPlayerNumber)
    {
        // Adjust the tank's current health, update the UI based on the new health and check whether or not the tank is dead.
        m_CurrentHealth -= amount;
        if (m_CurrentHealth <= 0 && !m_Dead)
        {
            OnDeath();
            if (m_PlayerNumber == 0)//bang ko thi moi tinh coi thang nao ban
            {
                if (fromPlayerNumber == 1)
                    ScoreManager.m_Player1Score[m_PlayerType]++;
                if (fromPlayerNumber == 2)
                    ScoreManager.m_Player2Score[m_PlayerType]++;
            }


        }
    }





    private void OnDeath()
    {
        // Play the effects for the death of the tank and deactivate it.
        if (m_Dead)
            return;

        m_Dead = true;
        m_ExplosionParticles.transform.position = transform.position;
        m_ExplosionParticles.gameObject.SetActive(true);
        m_ExplosionParticles.Play();
        if (m_PlayerNumber == 0)
            Destroy(m_ExplosionParticles.gameObject, m_ExplosionParticles.duration);
        m_ExplosionAudio.Play();
        if (m_PlayerNumber == 0)
            Destroy(gameObject);
        else
            gameObject.SetActive(false);
        if (m_PlayerNumber == 0)
        {
            GameManager.m_TankCountLive--;
            
            if (GameManager.m_TankCountLive < 1 && GameManager.m_TankCount >= 20)
            {
               // GameManager.m_IsPlaying = false;
                GameOver.m_isWin = true;
                // TransitEffect.m_Instance.
                TransitEffect.m_Instance.BeginGameOver();
            }
        }
        else
        {
            m_CurrentLive--;
            if (m_CurrentLive < 1)
            {
                if (GameManager.m_Instancce.checkLose())
                {
                    Debug.Log("aaa");
                    GameOver.m_isWin = false;
                    GameManager.m_IsPlaying = false;
                    TransitEffect.m_Instance.BeginGameOver();
                }
            }
            else
            {
                // gameObject.SetActive(true);
                GameManager.m_Instancce.reLiveATank(m_PlayerNumber - 1);
            }
        }

    }


}