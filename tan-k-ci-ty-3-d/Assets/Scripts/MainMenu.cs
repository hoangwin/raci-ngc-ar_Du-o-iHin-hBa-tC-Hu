using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour {
    public int m_Index = 0;
    public Transform[] m_Postion;
    public Transform m_TankImagePostion;
	// Use this for initialization
    public static MainMenu m_Instance;
    public bool m_isOnePerson;
    void Start () {
        m_Instance = this;
        m_isOnePerson = false;
#if UNITY_IOS || UNITY_ANDROID || UNITY_WP8_1 //|| UNITY_EDITOR
        m_Postion[1].gameObject.SetActive(false);
        m_isOnePerson = true;
#endif
        ScoreManager.Load();      

    }
    float axisValue = 0;
    // Update is called once per frame
    string m_MovementAxisName = "Vertical";
        string m_TurnAxisName = "Horizontal";
    void Update() {
      
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        if (!m_isOnePerson)
        {
            if (Input.GetButtonDown("Down1") || Input.GetButtonDown("Right1") || Input.GetButtonDown("Down2") || Input.GetButtonDown("Right2"))
            {
                m_Index++;
                if (m_Index == 2)
                    m_Index = 0;
                m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            }
            else if (Input.GetButtonDown("Up1") || Input.GetButtonDown("Left1") || Input.GetButtonDown("Up2") || Input.GetButtonDown("Left2"))
            {
                m_Index--;
                if (m_Index == -1)
                    m_Index = 1;
                m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            }
            else
            {
                if (axisValue == 0)
                {
                    axisValue = Input.GetAxis("Horizontal1");
                    if(axisValue == 0)
                    axisValue = Input.GetAxis("Vertical1");
                    if (axisValue > .1f)
                    {
                        m_Index++;
                        if (m_Index == 2)
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

        }

    
        if (Input.GetButtonDown("Enter"))
        {
            if(m_Index == 0 || m_Index ==1)
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_SELECT_STAGE);
            GameManager.m_Mode = m_Index;
            //ScoreManager.m_CurrentLevel = 1;
        }
	
	}
    
}
