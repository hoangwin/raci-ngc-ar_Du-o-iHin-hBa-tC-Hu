using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SelectStage : MonoBehaviour {
    public Sprite[] m_AllImageLevel;
    // Use this for initialization
    public int m_Index = 0;
    public int m_page = 0;
    public Transform[] m_Postion;
    public Transform m_ImageSelectPostion;
    public static SelectStage m_Instance;
    public Text m_TextPage;
    float axisValue = 0;
    void Awake()
    {
        m_Instance = this;
       // Debug.Log("cccc");
    }
    void Start () {
        m_Instance = this;

    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetButtonDown("Down1") || Input.GetButtonDown("Right1") || Input.GetButtonDown("Down2") || Input.GetButtonDown("Right2"))
        {

            if (Input.GetButtonDown("Down1") ||Input.GetButtonDown("Down2") )
                m_Index +=4;
            else
                m_Index += 1;

            if (m_Index >= 12)//
            {
                m_page += 1;
                if (m_page >= 3)
                    m_page = 0;
                m_Index = m_Index - 12;
                m_TextPage.text = (m_page +1).ToString() +"/3";
                ChangePage();
            }
            //m_TankImagePostion = m_Postion[m_Index];
            m_ImageSelectPostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
        }
        if (Input.GetButtonDown("Up1") || Input.GetButtonDown("Left1") || Input.GetButtonDown("Up2") || Input.GetButtonDown("Left2"))
        {
            if (Input.GetButtonDown("Up1") || Input.GetButtonDown("Up2"))
                m_Index -= 4;
            else
                m_Index -= 1;
            if (m_Index <= -1)
            {
                m_page--;
                if (m_page < 0)
                    m_page = 2;
                m_Index = 12 + m_Index;
                m_TextPage.text = (m_page + 1).ToString() + "/3";
                ChangePage();
            }

            m_ImageSelectPostion.position = m_Postion[m_Index].position;// new Vector3(m_TankImagePostion.position.x, m_Postion[m_Index].position.y, m_TankImagePostion.position.z);
                                                                        //m_TankImagePostion = m_Postion[m_Index];
        }
        else if (false)
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




                m_ImageSelectPostion.position = m_Postion[m_Index].position;
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
            if (m_page * 12 + m_Index + 1 <= ScoreManager.m_LevelUNblock.NUM)
            {
                Time.timeScale = 1;
                ScoreManager.m_CurrentLevel = m_page * 12 + m_Index + 1;

                TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
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
    public void ChangePage()
    {

        for (int i = 0; i < 12; i++)
        {
            m_Postion[i].GetComponent<Image>().sprite = m_AllImageLevel[m_page * 12 + i];
            if (m_page * 12 + i >= ScoreManager.m_LevelUNblock.NUM)
            {
                m_Postion[i].GetComponent<Button>().interactable = false;
            }
            else
            {
                m_Postion[i].GetComponent<Button>().interactable = true;
            }
        }
        m_ImageSelectPostion.position = m_Postion[m_Index].position;
    }
    public void ButtonExit()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.MAIN_MENU);
    }
    public void ButtonLeft()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        SelectStage.m_Instance.m_page--;
        if (SelectStage.m_Instance.m_page < 0)
            SelectStage.m_Instance.m_page = 2;
        //SelectStage.m_Instance.m_Index = 12 + SelectStage.m_Instance.m_Index;
        SelectStage.m_Instance.m_TextPage.text = (SelectStage.m_Instance.m_page + 1).ToString() + "/3";
        SelectStage.m_Instance.ChangePage();

    }
    public void ButtonRight()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
        SelectStage.m_Instance.m_page += 1;
        if (SelectStage.m_Instance.m_page >= 3)
            SelectStage.m_Instance.m_page = 0;
       // SelectStage.m_Instance.m_Index = SelectStage.m_Instance.m_Index - 12;
        SelectStage.m_Instance.m_TextPage.text = (SelectStage.m_Instance.m_page + 1).ToString() + "/3";
        SelectStage.m_Instance.ChangePage();

    }
}
