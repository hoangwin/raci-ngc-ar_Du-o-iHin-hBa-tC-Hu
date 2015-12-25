using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour {
    public int m_Index = 0;
    public Transform[] m_Postion;
    public Transform m_TankImagePostion;
	// Use this for initialization
    public static MainMenu m_Instance;
    void Start () {
        m_Instance = this;
	}
	
	// Update is called once per frame
    
	void Update () {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;

        if (Input.GetButtonDown("Down") || Input.GetButtonDown("Right"))
        {         
            m_Index++;
            if(m_Index ==2)
                m_Index =0;
            m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        if (Input.GetButtonDown("Up" )|| Input.GetButtonDown("Left"))
        {            
            m_Index--;
            if(m_Index == -1)
                m_Index =1;
            m_TankImagePostion.position = new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        if (Input.GetButtonDown("Enter"))
        {
            if(m_Index == 0 || m_Index ==1)
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
            GameManager.m_Mode = m_Index;
            ScoreManager.m_CurrentLevel = 1;
        }
	
	}
    
}
