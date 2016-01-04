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
    float axisValue = 0;
    // Use this for initialization
    void Start () {
        m_Instance = this;
	}
    public static void setInitWinLose()
    {
      
        if (m_Instance == null)
            m_Instance = TransitEffect.m_Instance.m_PanelGameOver.GetComponent<GameOver>();
     //   m_isWin = true;
 
            if (m_isWin)
        {
            m_Instance.m_Index = 0;
            m_Instance.m_Postion[0].gameObject.SetActive(true);
            m_Instance.m_TankImagePostion.position = m_Instance.m_Postion[0].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
            m_Instance.m_Title.sprite = m_Instance.m_ImageCompleted;
        }
        else
        {
            m_Instance.m_Index = 1;
            m_Instance.m_Postion[0].gameObject.SetActive(false);
            m_Instance.m_TankImagePostion.position = m_Instance.m_Postion[1].position;
            m_Instance.m_Title.sprite = m_Instance.m_ImageGameOver;
            GameManager.m_TanksStarSave[0] = GameManager.m_TanksStarSave[1] = 0;
        }
        if(ScoreManager.m_CurrentLevel +1 > ScoreManager.m_LevelUNblock.NUM)
        {
            ScoreManager.m_LevelUNblock.NUM++;
            ScoreManager.Save();
        }
        


    }
    // Update is called once per frame
    void Update () {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        if (Input.GetButtonDown("Down1") || Input.GetButtonDown("Right1") || Input.GetButtonDown("Down2") || Input.GetButtonDown("Right2") )
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
        else if (Input.GetButtonDown("Up1") || Input.GetButtonDown("Left1") || Input.GetButtonDown("Up2") || Input.GetButtonDown("Left2"))
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
                if (m_isWin)
                {
                    if (m_Index == -1)
                    {

                        m_Index = 2;
                    }
                }
                if (m_Index == 3)
                {
                    if (m_isWin)
                        m_Index = 0;
                    else
                        m_Index = 1;
                }
                else if (m_Index <0)
                {                    
                        m_Index = 2;                    
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
            ScoreManager.initTankScore();
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
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            if (TransitEffect.m_Instance.m_isEffecting)
                return;
            //Debug.Log("aaaaaaaaaaaa");
            //Time.timeScale = 1;
            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_MENU);
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
