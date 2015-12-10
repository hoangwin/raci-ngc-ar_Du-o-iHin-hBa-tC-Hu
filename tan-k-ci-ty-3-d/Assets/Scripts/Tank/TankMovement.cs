using UnityEngine;
using System.Collections;
public class TankMovement : MonoBehaviour
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
    private float m_MovementInputValueY;
    private float m_MovementInputValueX;        
    private float m_OriginalPitch;

    private float m_timeChangeDirection;
    private Vector3 m_LastPostion;
    
    private void Awake()
    {
        m_Rigidbody = GetComponent<Rigidbody>();
        m_timeChangeDirection = 4;
        if (m_PlayerNumber == 0)
            StartCoroutine(ChangDirectionMove());
    }


    private void OnEnable ()
    {
        m_Rigidbody.isKinematic = false;
        m_MovementInputValueY = 0f;
        m_MovementInputValueX = 0f;
    }


    private void OnDisable ()
    {
        m_Rigidbody.isKinematic = true;
    }


    private void Start()
    {
        m_MovementAxisName = "Vertical" + m_PlayerNumber;
        m_TurnAxisName = "Horizontal" + m_PlayerNumber;
        //for test
        m_MovementAxisName = "Vertical";
        m_TurnAxisName = "Horizontal";
        //for test

        m_OriginalPitch = m_MovementAudio.pitch;
    }


    private void Update()
    {
        if (m_PlayerNumber == 1 || m_PlayerNumber ==2)
        updatePlayerInput();
      
    }
    void updatePlayerInput()
    {
        m_MovementInputValueY = 0;
        m_MovementInputValueX = 0;
        // Store the player's input and make sure the audio for the engine is playing.

        // Debug.Log(Input.GetAxis(m_TurnAxisName));
        //dpad in gamepad

        //
		 if (Input.GetButton("Up"))
                m_MovementInputValueY = 1;
            else if (Input.GetButton("Down"))// Input.GetAxis(m_MovementAxisName);
                m_MovementInputValueY = -1;
            if (Input.GetButton("Left"))//m_MovementInputValueX = Input.GetAxis(m_TurnAxisName);
                m_MovementInputValueX = -1;
            else if (Input.GetButton("Right"))// Input.GetAxis(m_MovementAxisName);
                m_MovementInputValueX = 1;
        if (m_MovementInputValueY == 0 && m_MovementInputValueX == 0)
        {
                m_MovementInputValueY = Input.GetAxis(m_MovementAxisName);
		        m_MovementInputValueX = Input.GetAxis(m_TurnAxisName);
		        if (Mathf.Abs(m_MovementInputValueY) > Mathf.Abs(m_MovementInputValueX))
		        {
					if(Mathf.Abs(m_MovementInputValueX)>0.5f)
					{
			            m_MovementInputValueY = m_MovementInputValueY / Mathf.Abs(m_MovementInputValueY);
		    	        m_MovementInputValueX = 0;
					}
		        }
		        else if (Mathf.Abs(m_MovementInputValueY) < Mathf.Abs(m_MovementInputValueX))
		        {
					if(Mathf.Abs(m_MovementInputValueY)>0.5f)
					{
			            m_MovementInputValueY = 0;//
			            m_MovementInputValueX = m_MovementInputValueX / Mathf.Abs(m_MovementInputValueX);
					}
		        }
        }
        //Debug.Log("m_MovementInputValueY :" + m_MovementInputValueY);
        // Debug.Log(m_MovementInputValueY);
        EngineAudio();
    }
   
    private void EngineAudio()
    {
        // Play the correct audio clip based on whether or not the tank is moving and what audio is currently playing.
        if (Mathf.Abs(m_MovementInputValueY) < 0.1f && Mathf.Abs(m_MovementInputValueX) < 0.1f)
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
            if (m_MovementAudio.clip == m_EngineIdling)
            {
                // ... change the clip to driving and play.
                m_MovementAudio.clip = m_EngineDriving;
                m_MovementAudio.pitch = Random.Range(m_OriginalPitch - m_PitchRange, m_OriginalPitch + m_PitchRange);
                m_MovementAudio.Play();
            }
        }
    }


    private void FixedUpdate()
    {
        // Move and turn the tank.
        if (m_PlayerNumber == 1 || m_PlayerNumber == 2)
        {
            Move();
            //  Turn();
        }
        else
            MoveRandom();
       // if(m_PlayerNumber ==0)
      //  Debug.Log(m_Rigidbody.velocity);

    }


    private void Move()
    {
        if (m_PlayerNumber == 0)
        {
            if (!checkCanMove())//khi khong di chuyen dc nua thi chuyen huong
            {
                Debug.Log("Can Chuyen Huong");
                StopAllCoroutines();
                m_timeChangeDirection = 0f;
                StartCoroutine(ChangDirectionMove());
            }
        }
        // Create a vector in the direction the tank is facing with a magnitude based on the input, speed and the time between frames.
        Vector3 movement = Vector3.zero;
        if (m_MovementInputValueY < 0)
        {
            movement = transform.forward * (-m_MovementInputValueY) * m_Speed * Time.deltaTime;
            Quaternion turnRotation = Quaternion.Euler(0f, 180, 0f);
            // Apply this rotation to the rigidbody's rotation.
            m_Rigidbody.rotation = turnRotation;// (m_Rigidbody.rotation * turnRotation);
        }
        else if (m_MovementInputValueY > 0)
        {
           
            Quaternion turnRotation = Quaternion.Euler(0f, 0, 0f);
            // Apply this rotation to the rigidbody's rotation.
            m_Rigidbody.rotation = turnRotation;// (m_Rigidbody.rotation * turnRotation);
            movement = transform.forward * m_MovementInputValueY * m_Speed * Time.deltaTime;
        }
        else if (m_MovementInputValueX < 0)
        {
            movement = transform.forward * (-m_MovementInputValueX) * m_Speed * Time.deltaTime;
            Quaternion turnRotation = Quaternion.Euler(0f, -90, 0f);
            // Apply this rotation to the rigidbody's rotation.
            m_Rigidbody.rotation = turnRotation;// (m_Rigidbody.rotation * turnRotation);
        }
        else if (m_MovementInputValueX > 0)
        {

            Quaternion turnRotation = Quaternion.Euler(0f, 90, 0f);
            // Apply this rotation to the rigidbody's rotation.
            m_Rigidbody.rotation = turnRotation;// (m_Rigidbody.rotation * turnRotation);
            movement = transform.forward * m_MovementInputValueX * m_Speed * Time.deltaTime;
        }

            //Vector3 movement = transform. * m_TurnInputValue * m_Speed * Time.deltaTime;

            // Apply this movement to the rigidbody's position.
            m_LastPostion = m_Rigidbody.transform.position;
            m_Rigidbody.MovePosition(m_Rigidbody.position + movement);
       
    }
    void MoveRandom()
    {
        Move();
       //if( m_MovementInputValueY == 1+
       //{

       //}
       // else if(m_MovementInputValueX ==1)
       //{

       // }
    }
    private IEnumerator ChangDirectionMove()
    {
        yield return new WaitForSeconds(m_timeChangeDirection);
        m_timeChangeDirection = Random.Range(2f, 5f);
            // If there isn't a winner yet, restart this coroutine so the loop continues.
            // Note that this coroutine doesn't yield.  This means that the current version of the GameLoop will end.
        Debug.Log("Change Direction");
        int i = Random.Range(0,4); 
        if(i ==0)
        {
            m_MovementInputValueX = 1;
            m_MovementInputValueY = 0;
        }
        else if (i == 1)
        {
            m_MovementInputValueX = 0;
            m_MovementInputValueY = 1;
        }
        else if (i == 2)
        {
            m_MovementInputValueX = 0;
            m_MovementInputValueY = -1;
        }
        else if (i == 3)
        {
            m_MovementInputValueX = -1;
            m_MovementInputValueY = 0;
        }
        StartCoroutine(ChangDirectionMove());
      
    }

    private void Turn()
    {
        // Determine the number of degrees to be turned based on the input, speed and time between frames.
        float turn = m_MovementInputValueX * m_TurnSpeed * Time.deltaTime;

        // Make this into a rotation in the y axis.
        Quaternion turnRotation = Quaternion.Euler(0f, turn, 0f);

        // Apply this rotation to the rigidbody's rotation.
        m_Rigidbody.MoveRotation(m_Rigidbody.rotation * turnRotation);
    }
    bool checkCanMove()
    {
        if (transform.position.Equals(m_LastPostion))
            return false;
        return true;
    }
    //void OnCollisionEnter(Collision collision)
    //{
       // Debug.Log("Enter Collider");
       // StopAllCoroutines();
      //  m_timeChangeDirection = 03f;
      //  StartCoroutine(ChangDirectionMove());
    //}
    
}