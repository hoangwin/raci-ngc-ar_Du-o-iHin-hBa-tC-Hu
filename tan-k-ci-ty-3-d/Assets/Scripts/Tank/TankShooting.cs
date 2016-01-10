using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TankShooting : MonoBehaviour
{
    public int m_PlayerNumber = 1;              // Used to identify the different players.
    public int m_PlayerType = 1;//0,1,2,3//loi thuong noi nhanh,loai khochet,loai?
    public Rigidbody m_Shell;                   // Prefab of the shell.
    public Transform m_FireTransform;           // A child of the tank where the shells are spawned.    
    public AudioSource m_ShootingAudio;         // Reference to the audio source used to play the shooting audio. NB: different to the movement audio source.
    
    public AudioClip m_FireClip;                // Audio that plays when each shot is fired.
    public float m_FireSpeedNormal = 30f;       // The force given to the shell if the fire button is held for the max charge time.
    

    private string m_FireButton;                // The input axis that is used for launching shells.    
    
    public float m_CurrentFireSpeed;         // The force that will be given to the shell when the fire button is released.
    public float m_CurrentFireDame;         // The force that will be given to the shell when the fire button is released.
    
    
    public GameObject[] m_ShellInstance = new GameObject[2];

    public int m_CountStar = 0;
    public GameObject m_Star;    

    public void InitNewStar(int _newStar)
    {
        if (_newStar > 3)
            _newStar = 3;
        m_CountStar = _newStar;
        if (m_CountStar == 0)
        {
            m_Star.SetActive(false);
        }
        else if (m_CountStar == 1)
        {
            m_Star.SetActive(true);
            m_Star.transform.GetComponent<Renderer>().material.color = Color.green;
            m_CurrentFireDame = 1;
            m_CurrentFireSpeed = 35;
            
        }
        else if (m_CountStar == 2)
        {
            m_CurrentFireDame = 1;
            m_CurrentFireSpeed = 35;
            m_Star.SetActive(true);
            m_Star.transform.GetComponent<Renderer>().material.color = Color.yellow;
        }
        else if (m_CountStar == 3)
        {
            m_Star.transform.GetComponent<Renderer>().material.color = Color.red;
            m_Star.SetActive(true);
            m_CurrentFireDame = 2;
            m_CurrentFireSpeed = 35;
        }

        if (m_PlayerNumber == 1)
            if (GameManager.m_TanksStarSave[0] < m_CountStar)
                GameManager.m_TanksStarSave[0] = m_CountStar;
        else if (m_PlayerNumber == 2)
                if (GameManager.m_TanksStarSave[1] < m_CountStar)
                    GameManager.m_TanksStarSave[1] = m_CountStar;
    }
    private void OnEnable()
    {
        // When the tank is turned on, reset the launch force and the UI

    }


    private void Start()
    {
        // The fire axis is based on the player number.
        m_FireButton = "Fire1";// +m_PlayerNumber;

        // The rate that the launch force charges up is the range of possible forces by the max charge time.

        if (m_PlayerNumber == 0)
            StartCoroutine(AutoFire());
        else
            m_FireButton = "Fire" + m_PlayerNumber.ToString();
       

    }


    private void Update()
    {

        if (GameManager.m_IsPlaying && (m_PlayerNumber == 1 || m_PlayerNumber == 2))
        {
            // The slider should have a default value of the minimum launch force.


            // If the max force has been exceeded and the shell hasn't yet been launched...

            // Otherwise, if the fire button has just started being pressed...

            if (Input.GetButtonDown(m_FireButton))
            {
                if (m_CountStar <= 1 && (m_ShellInstance[0] == null))
                    Fire("ShellOfPlayer");//khi player 1 ban
                else if (m_CountStar > 1 && (m_ShellInstance[0] == null || m_ShellInstance[1] == null))
                    Fire("ShellOfPlayer");//khi player 1 ban

            }


            // Otherwise, if the fire button is being held and the shell hasn't been launched yet...

            // Otherwise, if the fire button is released and the shell hasn't been launched yet...

        }
    }
    

    public void Fire(string tag)
    {
        // Set the fired flag so only Fire is only called once.
        // The force given to the shell if the fire button is held for the max charge time.

        // Create an instance of the shell and store a reference to it's rigidbody.
        Rigidbody shellInstance =
            Instantiate(m_Shell, m_FireTransform.position, m_FireTransform.rotation) as Rigidbody;
        shellInstance.gameObject.tag = tag;

        shellInstance.gameObject.GetComponent<ShellExplosion>().m_PlayerNumber = m_PlayerNumber;
        shellInstance.gameObject.GetComponent<ShellExplosion>().m_PlayerType = m_PlayerType;

        shellInstance.gameObject.GetComponent<ShellExplosion>().m_damege = m_CurrentFireDame;

        if (m_ShellInstance[0] == null)
            m_ShellInstance[0] = shellInstance.gameObject;
        else
            m_ShellInstance[1] = shellInstance.gameObject;
        // Set the shell's velocity to the launch force in the fire position's forward direction.
        shellInstance.velocity = m_CurrentFireSpeed * m_FireTransform.forward;
        // Change the clip to the firing clip and play it.
        if (GameManager.m_isSoundEnable)
        {
            m_ShootingAudio.clip = m_FireClip;
            m_ShootingAudio.Play();
        }
        
        

        // Reset the launch force.  This is a precaution in case of missing button events.

    }
    public void stopAutoFire()
    {
        StopAllCoroutines();
    }
    private IEnumerator AutoFire()
    {
        yield return new WaitForSeconds(1f);
        if (!GameManager.m_isTimerEffect && m_ShellInstance[0] ==null)
            Fire("ShellOfEnemy");//khi auto ban
        StartCoroutine(AutoFire());
    }
    //StartCoroutine(ChangDirectionMove());
}
