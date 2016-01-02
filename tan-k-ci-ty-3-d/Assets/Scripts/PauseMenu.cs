using UnityEngine;
using System.Collections;

public class PauseMenu : MonoBehaviour {
    public int m_Index = 0;
    public Transform[] m_Postion;
    public Transform m_TankImagePostion;
    public static PauseMenu m_Instance;
    float axisValue = 0;
    // Use this for initialization
    void Start () {
        m_Instance = this;
    }
	
	// Update is called once per frame
	void Update () {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        if (Input.GetButtonDown("Down1") || Input.GetButtonDown("Right1") || Input.GetButtonDown("Down2") || Input.GetButtonDown("Right2"))
        {
            m_Index++;
            if (m_Index == 3)
            {
             
                    m_Index = 0;
             
            }
            //m_TankImagePostion = m_Postion[m_Index];
            m_TankImagePostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        if (Input.GetButtonDown("Up1") || Input.GetButtonDown("Left1") || Input.GetButtonDown("Up2") || Input.GetButtonDown("Left2"))
        {
            m_Index--;
                if (m_Index == -1)
                {

                    m_Index = 2;
                }
           
            m_TankImagePostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            //m_TankImagePostion = m_Postion[m_Index];
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
                }
                else if (axisValue < -.1f)
                {
                    m_Index--;
                }
               
                    if (m_Index == -1)
                    {

                        m_Index = 2;
                    }
                
                if (m_Index == 3)
                {
                        m_Index = 0;
                
                }


                m_TankImagePostion.position = m_Postion[m_Index].position;
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
            Time.timeScale = 1;
            if (m_Index == 0 )
            {
                TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelIngame);
            }
            else if(m_Index == 1)
            {
               
               ScoreManager.m_CurrentLevel++;
               
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
            }
            else if (m_Index == 2)
            {
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_MENU);
            }
        }
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            Debug.Log("aaaaaaaaaaaa");
            Time.timeScale = 1;
            TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelIngame);
        }
    }
}
