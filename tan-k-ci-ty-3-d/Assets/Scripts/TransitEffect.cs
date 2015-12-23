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
	void Start () {
        m_Instance = this;
        m_ColorTranparent = m_Image.color;
        ActivePanel(m_PanelMainMenu);
        m_isEffecting = false;
	}
   
	// Update is called once per frame
	void Update11111 () {
	
	}
    public void TranSitBlack()
    {
        m_isEffecting = true;
        //Hashtable tweenParams = new Hashtable();
        // tweenParams.Add("from", targetSpriteRenderer.color);
        // tweenParams.Add("to", targetColor);
        // tweenParams.Add("time", tweenDuration);
        // tweenParams.Add("onupdate", "OnColorUpdated");

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
        ActivePanel(m_PanelIngame);
        GameManager.m_Instancce.initGame();

        iTween.ValueTo(gameObject, iTween.Hash("from", Color.black, "to", m_ColorTranparent, "time", 2f, "onupdate", "OnColorUpdated", "oncomplete", "TranSitAllCompleted"));
    }
    public void TranSitAllCompleted()
    {
        m_isEffecting = false;
    }

    public void DeplayGameOver()
    {
        StartCoroutine(TransitEffect.m_Instance.DeplayGameOverWait());
    }
     
    private IEnumerator DeplayGameOverWait()
    {
        yield return new WaitForSeconds(3);
        TransitEffect.m_Instance.ActivePanel(TransitEffect.m_Instance.m_PanelGameOver);
        GameOver.setInit();
        StartCoroutine(GameOver.m_Instance.ShowScoreInfo());
        Debug.Log(ScoreManager.m_Player1Score[0]+ ","+ScoreManager.m_Player1Score[1]+ "," +ScoreManager.m_Player1Score[2]+ "," + ScoreManager.m_Player1Score[3]);
        
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
