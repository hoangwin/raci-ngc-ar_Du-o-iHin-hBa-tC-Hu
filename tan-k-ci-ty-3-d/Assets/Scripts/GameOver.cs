using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameOver : MonoBehaviour {
    public int m_Index = 0;
    public Transform[] m_Postion;
    public Transform m_TankImagePostion;
    public static bool m_isWin;
    public Image m_Title;
    public Sprite m_ImageGameOver;
    public Sprite m_ImageCompleted;
    public Text m_HighScore;
    public Text[] m_TextPlayer1 = null;
    public Text[] m_TextPlayer2 =null;
    // Use this for initialization
    public static GameOver m_Instance;
	// Use this for initialization
	void Start () {
        m_Instance = this;
	}
    public static void setInit()
    {
      
        if (m_Instance == null)
            m_Instance = TransitEffect.m_Instance.m_PanelGameOver.GetComponent<GameOver>();

        if (m_isWin)
        {
            m_Instance.m_Index = 0;
            m_Instance.m_TankImagePostion.position = m_Instance.m_Postion[0].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            m_Instance.m_Title.sprite = m_Instance.m_ImageCompleted;
        }
        else
        {
            m_Instance.m_Index = 1;
            m_Instance.m_Postion[0].gameObject.SetActive(false);
            m_Instance.m_TankImagePostion.position = m_Instance.m_Postion[1].position;
            m_Instance.m_Title.sprite = m_Instance.m_ImageGameOver;
        }

    }
	// Update is called once per frame
	void Update () {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        if (Input.GetButtonDown("Down") || Input.GetButtonDown("Right"))
        {
            m_Index++;
            if (m_Index == 3)
            {
                if (m_isWin)
                    m_Index = 0;
                else
                    m_Index = 1;
            }
            //m_TankImagePostion = m_Postion[m_Index];
            m_TankImagePostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        if (Input.GetButtonDown("Up") || Input.GetButtonDown("Left"))
        {
            m_Index--;
            if (m_isWin)
            {
                if (m_Index == -1)
                {

                    m_Index = 2;
                }
            }
            else
            {
                if (m_Index == 0)
                {

                    m_Index = 2;
                }
            }
            m_TankImagePostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            //m_TankImagePostion = m_Postion[m_Index];
        }
        if (Input.GetButtonDown("Enter"))
        {
            if (m_Index == 0 || m_Index == 1)
            {
                if (m_Index == 0)
                    ScoreManager.m_CurrentLevel++;
                if (ScoreManager.m_CurrentLevel > 35)
                    ScoreManager.m_CurrentLevel = 1;
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
            }
            if(m_Index ==2)
            {
                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_MENU);
            }
        }
	}
    public IEnumerator ShowScoreInfo()
    {
        yield return new WaitForSeconds(0.5f);
         m_TextPlayer1[1].text = (ScoreManager.m_Player1Score[0]*100 ).ToString()+ " PTS   "+ ScoreManager.m_Player1Score[0].ToString() +"▶";
         m_TextPlayer2[1].text = "◀" +(ScoreManager.m_Player2Score[0] * 100).ToString() + " PTS   " + ScoreManager.m_Player2Score[0].ToString();
        yield return new WaitForSeconds(0.5f);
        m_TextPlayer1[2].text = (ScoreManager.m_Player1Score[1] * 200).ToString() + " PTS   " + ScoreManager.m_Player1Score[1].ToString() + "▶";
        m_TextPlayer2[2].text = "◀" + (ScoreManager.m_Player2Score[1] * 200).ToString() + " PTS   " + ScoreManager.m_Player2Score[1].ToString();
        yield return new WaitForSeconds(0.5f);
        m_TextPlayer1[3].text = (ScoreManager.m_Player1Score[2] * 300).ToString() + " PTS   " + ScoreManager.m_Player1Score[2].ToString() + "▶";
        m_TextPlayer2[3].text = "◀" + (ScoreManager.m_Player2Score[2] * 300).ToString() + " PTS   " + ScoreManager.m_Player2Score[2].ToString();
        yield return new WaitForSeconds(0.5f);
        m_TextPlayer1[4].text = (ScoreManager.m_Player1Score[3] * 400).ToString() + " PTS   " + ScoreManager.m_Player1Score[3].ToString() + "▶";
        m_TextPlayer2[4].text = "◀" + (ScoreManager.m_Player2Score[3] * 400).ToString() + " PTS   " + ScoreManager.m_Player2Score[3].ToString();
        yield return new WaitForSeconds(0.5f);
        m_TextPlayer1[5].text = (ScoreManager.m_Player1Score[0] + ScoreManager.m_Player1Score[1] + ScoreManager.m_Player1Score[2] + ScoreManager.m_Player1Score[3]).ToString();
        m_TextPlayer2[5].text = (ScoreManager.m_Player2Score[0] + ScoreManager.m_Player2Score[1] + ScoreManager.m_Player2Score[2] + ScoreManager.m_Player2Score[3]).ToString();
        yield return new WaitForSeconds(0.5f);
        m_TextPlayer1[0].text = (ScoreManager.m_Player1Score[0]*100 + ScoreManager.m_Player1Score[1]*200 + ScoreManager.m_Player1Score[2]*300 + ScoreManager.m_Player1Score[3]*400).ToString();
        m_TextPlayer2[0].text = (ScoreManager.m_Player2Score[0]*100 + ScoreManager.m_Player2Score[1]*200 + ScoreManager.m_Player2Score[2]*300 + ScoreManager.m_Player2Score[3]*400).ToString();
        
    }
}
