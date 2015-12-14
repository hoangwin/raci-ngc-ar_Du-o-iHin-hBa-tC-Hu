using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TankShooting : MonoBehaviour
{
    public int m_PlayerNumber = 1;              // Used to identify the different players.
    public Rigidbody m_Shell;                   // Prefab of the shell.
    public Transform m_FireTransform;           // A child of the tank where the shells are spawned.    
    public AudioSource m_ShootingAudio;         // Reference to the audio source used to play the shooting audio. NB: different to the movement audio source.
    
    public AudioClip m_FireClip;                // Audio that plays when each shot is fired.
        public float m_MaxLaunchForce = 30f;        // The force given to the shell if the fire button is held for the max charge time.
    

    private string m_FireButton;                // The input axis that is used for launching shells.    
        private float m_CurrentLaunchForce;         // The force that will be given to the shell when the fire button is released.
    private bool m_Fired;                       // Whether or not the shell has been launched with this button press.
    private float timeFired = 0;
    private GameObject m_ShellInstance;

    private void OnEnable()
    {
        // When the tank is turned on, reset the launch force and the UI

    }


    private void Start()
    {
        // The fire axis is based on the player number.
        m_FireButton = "Fire1";// +m_PlayerNumber;

        // The rate that the launch force charges up is the range of possible forces by the max charge time.

        if(m_PlayerNumber ==0)
            StartCoroutine(AutoFire());
    }


    private void Update()
    {
        
        if (m_PlayerNumber == 1 || m_PlayerNumber == 2)
        {
            // The slider should have a default value of the minimum launch force.


            // If the max force has been exceeded and the shell hasn't yet been launched...

            // Otherwise, if the fire button has just started being pressed...
            if (Input.GetButtonDown(m_FireButton) && (m_ShellInstance == null))
            {
                Fire("ShellOfPlayer");//khi player 1 ban
                // ... reset the fired flag and reset the launch force.
                

                // Change the clip to the charging clip and start it playing.
                
            }
            // Otherwise, if the fire button is being held and the shell hasn't been launched yet...
            
            // Otherwise, if the fire button is released and the shell hasn't been launched yet...
            
        }
    }


    private void Fire(string tag)
    {
        // Set the fired flag so only Fire is only called once.
        m_Fired = true;
        timeFired = 0;
        m_CurrentLaunchForce = m_MaxLaunchForce;
        // Create an instance of the shell and store a reference to it's rigidbody.
        Rigidbody shellInstance =
            Instantiate(m_Shell, m_FireTransform.position, m_FireTransform.rotation) as Rigidbody;
        shellInstance.gameObject.tag = tag;
        m_ShellInstance = shellInstance.gameObject;
        // Set the shell's velocity to the launch force in the fire position's forward direction.
        shellInstance.velocity = m_CurrentLaunchForce * m_FireTransform.forward;        
        // Change the clip to the firing clip and play it.
        m_ShootingAudio.clip = m_FireClip;
        m_ShootingAudio.Play();

        // Reset the launch force.  This is a precaution in case of missing button events.

    }

    private IEnumerator AutoFire()
    {
        yield return new WaitForSeconds(2);
        Fire("ShellOfEnemy");//khi auto ban
        StartCoroutine(AutoFire());
    }
    //StartCoroutine(ChangDirectionMove());
}
