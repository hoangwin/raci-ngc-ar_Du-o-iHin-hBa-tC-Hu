using UnityEngine;

public class HeroMovement : MonoBehaviour
{
    public int m_PlayerNumber = 1;
    public float m_Speed = 12f;
    public float m_TurnSpeed = 180f;
    public AudioSource m_MovementAudio;
    public AudioClip m_EngineIdling;
    public AudioClip m_EngineDriving;
    public float m_PitchRange = 0.2f;


    private string m_MovementAxisName;     //de kiem tra lay input  vertical + number. tuy chinh trong setting nua cho dung
    private string m_TurnAxisName;         //de kiem tra lay input  Horizontal + number. tuy chinh trong setting nua cho dung 
    private Rigidbody m_Rigidbody;
    public float m_MovementInputValue;
    private float m_TurnInputValue;
    private float m_OriginalPitch;
    public Animator anim;
    public STATE state;
    public enum STATE
    {
        STATE_IDE,
        STATE_RUN,
        STATE_JUMP,
        STATE_ATTACK,
        STATE_KAME,
        STATE_DIE
    };

    private void Awake()
    {
        m_Rigidbody = GetComponent<Rigidbody>();
       
    }


    private void OnEnable()
    {
        m_Rigidbody.isKinematic = false;
        m_MovementInputValue = 0f;
        m_TurnInputValue = 0f;
    }


    private void OnDisable()
    {
        m_Rigidbody.isKinematic = true;
    }


    private void Start()
    {
       // m_MovementAxisName = "Vertical" + m_PlayerNumber;
      //  m_TurnAxisName = "Horizontal" + m_PlayerNumber;
        //for test
        m_MovementAxisName = "Horizontal";
        m_TurnAxisName = "Vertical";
        //for test

        m_OriginalPitch = m_MovementAudio.pitch;
        distToGround = GetComponent<Collider>().bounds.extents.y;//for jump
        state = STATE.STATE_IDE;
    }


    private void Update()
    {
        // Store the player's input and make sure the audio for the engine is playing.
        //m_MovementInputValue = Input.GetAxis(m_MovementAxisName);
        m_MovementInputValue = ETCInput.GetAxis(m_MovementAxisName);
        m_TurnInputValue = Input.GetAxis(m_TurnAxisName);
        
       // Debug.Log(m_MovementInputValue +","+ TJoyStick.Get4Way());
        EngineAudio();
    }


    private void EngineAudio()
    {
        // Play the correct audio clip based on whether or not the tank is moving and what audio is currently playing.
        if (Mathf.Abs(m_MovementInputValue) < 0.1f && Mathf.Abs(m_TurnInputValue) < 0.1f)
        {
            // ... and if the audio source is currently playing the driving clip...
            if (m_MovementAudio.clip == m_EngineDriving)
            {
                // ... change the clip to idling and play it.
                m_MovementAudio.clip = m_EngineIdling;
                m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
                m_MovementAudio.Play();
            }
        }
        else
        {
            // Otherwise if the tank is moving and if the idling clip is currently playing...
        //    if (m_MovementAudio.clip == m_EngineIdling)
        //    {
        
       //         m_MovementAudio.clip = m_EngineDriving;
       //         m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
        //        m_MovementAudio.Play();
         //   }
        }
    }


    private void FixedUpdate()
    {
        // Move and turn the tank.
        Turn();
        Jump();
        Move();

    }

    private float distToGround;
    public  float FORCE = 15;
    bool IsGrounded()
    {
        return Physics.Raycast(transform.position, -Vector3.up, distToGround + 0.1f);
    }
    private void Jump()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow) && IsGrounded())
        {
            Debug.Log("aaaaa");
            anim.Play("JUMP");
            state = STATE.STATE_JUMP;
           // m_Rigidbody.AddForce(Vector3.up * FORCE);
            m_Rigidbody.velocity = new Vector3(m_Rigidbody.velocity.x, FORCE, 0);
          //  m_Rigidbody.AddForce(Vector3.forward * 100);
          //  m_Rigidbody.AddForce(Vector3.right * 100);
        }
        
    }


    private void Move()
    {
        // Create a vector in the direction the tank is facing with a magnitude based on the input, speed and the time between frames.
        if (m_MovementInputValue != 0)
        {
            Vector3 movement = Vector3.right * m_MovementInputValue * m_Speed * Time.deltaTime;// transform.right             
            // Apply this movement to the rigidbody's position.
            m_Rigidbody.velocity = new Vector3(m_MovementInputValue * m_Speed, m_Rigidbody.velocity.y, 0);
           // m_Rigidbody.MovePosition(m_Rigidbody.position + movement);
            if (state == STATE.STATE_IDE)
            {
                anim.Play("RUN");
                state = STATE.STATE_RUN;
            }
        }
    }

    private void Turn()
    {
        // Determine the number of degrees to be turned based on the input, speed and time between frames.
        if (m_MovementInputValue > 0)
        {
            //float turn = m_TurnInputValue * m_TurnSpeed * Time.deltaTime;
            //    Quaternion turnRotation = Quaternion.Euler(0f, 90, 0f);
            //   m_Rigidbody.MoveRotation(m_Rigidbody.rotation * turnRotation);
        }
        //  float turn = m_TurnInputValue * m_TurnSpeed * Time.deltaTime;

        // Make this into a rotation in the y axis.
        // Quaternion turnRotation = Quaternion.Euler(0f, 90, 0f);

        // Apply this rotation to the rigidbody's rotation.
        //m_Rigidbody.MoveRotation(m_Rigidbody.rotation * turnRotation);
        if (m_MovementInputValue > 0)
            //m_Rigidbody.rotation = Quaternion.Euler(0, 90, 0);
            iTween.RotateTo(m_Rigidbody.gameObject, iTween.Hash("y", 90, "time", 0.5));
        else if (m_MovementInputValue < 0)
            //m_Rigidbody.rotation = Quaternion.Euler(0, -90, 0);
            iTween.RotateTo(m_Rigidbody.gameObject, iTween.Hash("y", -90, "time", 0.5));
        else if (state == STATE.STATE_RUN)
        {
            setIDEState();
        }
        if (state == STATE.STATE_JUMP)
        {
            if( m_Rigidbody.velocity.y ==0)
            //if(IsGrounded())
            {
                setIDEState();
            }
        }
    }
    void setIDEState()
    {
        if (m_PlayerNumber == 2)
            //m_Rigidbody.rotation = Quaternion.Euler(0, 0, 0);
            iTween.RotateTo(m_Rigidbody.gameObject, iTween.Hash("y", 0, "time", 0.5));
        else if (m_PlayerNumber == 1)
            //m_Rigidbody.rotation = Quaternion.Euler(0, 180, 0);
            iTween.RotateTo(m_Rigidbody.gameObject, iTween.Hash("y", 180, "time", 0.5));
        state = STATE.STATE_IDE;
        anim.Play("IDE");
    }
}