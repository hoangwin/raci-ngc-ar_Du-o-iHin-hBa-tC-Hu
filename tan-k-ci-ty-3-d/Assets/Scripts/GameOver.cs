using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameOver : MonoBehaviour {
    public int m_Index = 0;
    public Transform[] m_Postion;
    public Transform m_TankImagePostion;
    public bool m_isWin;
    public Image m_Title;
    public Sprite m_ImageGameOver;
    public Sprite m_ImageCompleted;
    public Text m_HighScore;
    public Text[] m_TextPlayer1;
    public Text[] m_TextPlayer2;
    // Use this for initialization
    public static GameOver m_Instance;
	// Use this for initialization
	void Start () {
        m_Instance = this;
	}
	public void setInit(bool _isWin)
    {
        m_isWin = _isWin;
        if (m_isWin)
        {
            m_Title.sprite = m_ImageCompleted;
        }
        else
        {
            m_Title.sprite = m_ImageGameOver;
        }
    }
	// Update is called once per frame
	void Update () {
        if (Input.GetButtonDown("Down") || Input.GetButtonDown("Right"))
        {
            m_Index++;
            if (m_Index == 3)
                m_Index = 0;
            //m_TankImagePostion = m_Postion[m_Index];
            m_TankImagePostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        if (Input.GetButtonDown("Up") || Input.GetButtonDown("Left"))
        {
            m_Index--;
            if (m_Index == -1)
                m_Index = 2;
            m_TankImagePostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            //m_TankImagePostion = m_Postion[m_Index];
        }
        if (Input.GetButtonDown("Enter"))
        {
            if (m_Index == 0 || m_Index == 1)
                TransitEffect.m_Instance.TranSitBlack();
        }
	}
}
