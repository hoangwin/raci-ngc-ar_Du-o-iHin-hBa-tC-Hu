using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TransitEffect : MonoBehaviour {

	// Use this for initialization
    public static TransitEffect m_Instance;
    public Image m_Image;
    public Color m_ColorTranparent;
    public GameObject m_PanelMainMenu;
    public GameObject m_PanelGameOver;
    public GameObject m_PanelIngame;
    public GameObject m_PanelSelectLevel;
    public GameObject m_PanelConstruction;
    public bool m_isEffecting = false;
    TYPE_TRANSIT m_TypeTransit;
    public enum TYPE_TRANSIT
    {
        MAIN_MENU,
        GAMEOVER,
        GAMEPLAY
    }
	void Start () {
        m_Instance = this;
        m_ColorTranparent = m_Image.color;
        ActivePanel(m_PanelMainMenu);
        m_isEffecting = false;
	}
   
	// Update is called once per frame
	void Update11111 () {
	
	}
    public void TranSitBlack(TYPE_TRANSIT type)
    {
        m_TypeTransit = type;
        m_isEffecting = true;
        iTween.ValueTo(gameObject, iTween.Hash("from", m_ColorTranparent, "to", Color.black, "time", 1f, "onupdate", "OnColorUpdated", "oncomplete", "TranSitTranparent"));
        // iTween.MoveBy(gameObject, iTween.Hash("x", 2, "easeType", "easeInOutExpo", "loopType", "pingPong", "delay", .1));
        //,"oncomplete","TranSitTranparent"
    }
    public void  OnColorUpdated(Color color)
    {
        
         m_Image.color = color;
    
    }
    public void TranSitTranparent()
    {
        if (m_TypeTransit == TYPE_TRANSIT.GAMEPLAY)
        {
            ActivePanel(m_PanelIngame);
            GameManager.m_Instancce.initGame();
        }
        else if (m_TypeTransit == TYPE_TRANSIT.MAIN_MENU)
        {
            GameManager.m_IsPlaying = false;
            ActivePanel(m_PanelMainMenu);
            GameManager.m_Instancce.DestroyAllGame();
        }
        iTween.ValueTo(gameObject, iTween.Hash("from", Color.black, "to", m_ColorTranparent, "time", 2f, "onupdate", "OnColorUpdated", "oncomplete", "TranSitAllCompleted"));
    }
    public void TranSitAllCompleted()
    {
        m_isEffecting = false;
    }

    public void BeginGameOver()
    {
        
        MapManager.m_Instance.StopAllCoroutines();
        StartCoroutine(TransitEffect.m_Instance.DeplayGameOverWait());
    }
     
    private IEnumerator DeplayGameOverWait()
    {
        yield return new WaitForSeconds(3);
        GameManager.m_IsPlaying = false;
        GameManager.m_Instancce.StopAllTank();
        TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelGameOver);
        GameOver.setInit();
        StartCoroutine(GameOver.m_Instance.ShowScoreInfo());
        //Debug.Log(ScoreManager.m_Player1Score[0]+ ","+ScoreManager.m_Player1Score[1]+ "," +ScoreManager.m_Player1Score[2]+ "," + ScoreManager.m_Player1Score[3]);        
    }

    public void ActivePanel(GameObject _pannel)
    {
        if (_pannel == m_PanelMainMenu)
            m_PanelMainMenu.SetActive(true);
        else
            m_PanelMainMenu.SetActive(false);

        if (_pannel == m_PanelGameOver)
            m_PanelGameOver.SetActive(true);
        else
            m_PanelGameOver.SetActive(false);

        if (_pannel == m_PanelIngame)
            m_PanelIngame.SetActive(true);
        else
            m_PanelIngame.SetActive(false);

        if (_pannel == m_PanelSelectLevel)
            m_PanelSelectLevel.SetActive(true);
        else
            m_PanelSelectLevel.SetActive(false);

        if (_pannel == m_PanelConstruction)
            m_PanelConstruction.SetActive(true);
        else
            m_PanelConstruction.SetActive(false);
    }

}
