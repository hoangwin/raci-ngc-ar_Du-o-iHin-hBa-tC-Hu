using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MainMenu : MonoBehaviour {
    public int m_Index = 0;
    public Transform[] m_Postion;
    public Transform m_TankImagePostion;
    public Text _TextButtonSound;
    public Text _TextHint1;
    public Text _TextHint2;
    public GameObject _ButtonFire;
    public GameObject _ButtonMove;

    // Use this for initialization
    public static MainMenu m_Instance;
    public bool m_isOnePerson;
    public void init()
    {
        m_Index = 0;
        m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
    }
    void Start () {
        m_Instance = this;
        m_isOnePerson = false;
        Debug.Log("SystemInfo.deviceType :" + SystemInfo.deviceType);

            Debug.Log("Application.platform :" + Application.platform);
#if UNITY_IOS || UNITY_ANDROID || UNITY_WP8_1 //|| UNITY_EDITOR
       // Application.platform
            
       m_Postion[1].gameObject.SetActive(false);
        m_isOnePerson = true;
#else
        if (SystemInfo.deviceType != DeviceType.Desktop)
        {
            m_Postion[1].gameObject.SetActive(false);
            m_isOnePerson = true;
        }
        else
        { 

            //_TextHint1.text ="Player 1: Move :'A','W','D','S'. Fire:'J' ";
            //_TextHint2.text ="Player 2: Move :'Up','Down','Left','Right'. Fire:'Keypad Enter'";
            _TextHint1.text = "Keyboard: Move :'A','W','D','S'. Fire:'J' ";
            _TextHint2.text = "";// Player 2: Move :'Up','Down','Left','Right'. Fire:'Keypad Enter'";
            m_Postion[1].gameObject.SetActive(false);
            m_isOnePerson = true;
            //    _ButtonFire.SetActive(false);
            //   _ButtonMove.SetActive(false);
        }
        
#endif
        ScoreManager.Load();
#if UNITY_IOS
        Application.targetFrameRate = 60;
# endif
    }

    float axisValue = 0;
    // Update is called once per frame
    string m_MovementAxisName = "Vertical";
        string m_TurnAxisName = "Horizontal";
    void Update()
    {

        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();

        }

        if (Input.GetButtonDown("Down1") || Input.GetButtonDown("Right1") || Input.GetButtonDown("Down2") || Input.GetButtonDown("Right2"))
        {
          
            if (m_isOnePerson)
            {
                if (m_Index == 0)
                    m_Index = 2;
                else if (m_Index == 2)
                    m_Index = 0;
            }
            else
            {
                m_Index++;
                if (m_Index == 3)
                    m_Index = 0;
            }
                m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        else if (Input.GetButtonDown("Up1") || Input.GetButtonDown("Left1") || Input.GetButtonDown("Up2") || Input.GetButtonDown("Left2"))
        {
         
            if (m_isOnePerson)
            {
                if (m_Index == 0)
                    m_Index = 2;
                else  if (m_Index == 2)
                    m_Index = 0;
            }
            else
            {
                m_Index--;
                if (m_Index == -1)
                    m_Index = 1;
            }
            m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        else
        {
            if (axisValue == 0)
            {
                axisValue = Input.GetAxis("Horizontal1");
                if (axisValue == 0)
                    axisValue = Input.GetAxis("Vertical1");
                if (axisValue > .1f)
                {
                    m_Index++;
                    if (m_Index == 3)
                        m_Index = 0;
                    m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
                }
                else if (axisValue < -.1f)
                {
                    m_Index--;
                    if (m_Index == -1)
                        m_Index = 1;
                    m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
                }
            }
            else
            {
                axisValue = Input.GetAxis("Horizontal1");
                if (axisValue == 0)
                    axisValue = Input.GetAxis("Vertical1");
            }


        }


        if (Input.GetButtonDown("Enter"))
        {

            if (m_Index == 0 || m_Index == 1)
            {
                GameManager.m_Instancce.PlaySoundCLick();
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_SELECT_STAGE);
                GameManager.m_Mode = m_Index;
            }
            else if (m_Index == 2)
                ButtonSound();
            //ScoreManager.m_CurrentLevel = 1;
        }

    }
    public void ButtonSound()
    {
        //here
        GameManager.m_isSoundEnable = !GameManager.m_isSoundEnable;
        if (GameManager.m_isSoundEnable)
        {
            MainMenu.m_Instance._TextButtonSound.text = "SOUND:ON";
            GameManager.m_Instancce.PlaySoundCLick();
        }
        else
        {
            MainMenu.m_Instance._TextButtonSound.text = "SOUND:OFF";
           
        }
    }

}
