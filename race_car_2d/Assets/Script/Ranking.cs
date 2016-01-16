using UnityEngine;
using System.Collections;

public class Ranking : MonoBehaviour { 

    // Use this public WWW www;
    public WWW www;
    public static bool loadRanking = true;
    public static bool isMoveFromMainmenu = false;
    
    
    public GameObject PanelBoard;
    public GameObject PanelInputName;

    public static Ranking instance;
    void Start()
    {
        DEF.Init();
        GameObject hand = GameObject.Find("Background");
    
        if (hand != null)
        {
    
            hand.transform.localScale = new Vector3(DEF.sx_ortho, DEF.sy_ortho, 1);
        }

    
       if (ScoreControl.UserName.Length >= 5)
       // if(true)
        {
            PostHightScore();
            getHightScore();
            loadRanking = true;
            NGUITools.SetActive(PanelBoard, true);
            NGUITools.SetActive(PanelInputName, false);
        }
        else
        {
            loadRanking = false;
            NGUITools.SetActive(PanelBoard, false);

        }
        DEF.ScaleAnchorGui();

        instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.LoadLevel("MainMenu");

        }
        getHightScoreDone();
    }

    public void getHightScore()
    {
        www = new WWW("http://gamethuanviet.com/racing_2d/SetGetData.php?type=select&username=" + ScoreControl.UserName);
        Debug.Log("http://gamethuanviet.com/racing_2d/SetGetData.php?type=select&username=" + ScoreControl.UserName);

    }
    public void getHightScoreDone()
    {
        if (loadRanking && www.isDone)
        {
            if (www.bytesDownloaded < 20)
                return;


            loadRanking = false;
            Debug.Log(www.text);
            string[] strarray;
            strarray = www.text.Split('|');
            for (int i = 0; i < 10; i++)
            {
                GameObject.Find(("LabelUser" + (i + 1))).GetComponent<UILabel>().text = strarray[i * 3 + 1];
                GameObject.Find(("LabelTime" + (i + 1))).GetComponent<UILabel>().text = strarray[i * 3 + 2];
                
            }
            if (strarray.Length > 33)
            {
                GameObject.Find("LabelMyPos").GetComponent<UILabel>().text = strarray[10 * 3 + 1];
                GameObject.Find("LabelMyName").GetComponent<UILabel>().text = strarray[10 * 3 + 2];
                GameObject.Find("LabelMyTime").GetComponent<UILabel>().text = strarray[10 * 3 + 3];                
            }
        }
    }
    public void PostHightScore()
    {
        //http://gamethuanviet.com/racing_2d/SetGetData.php?type=update&username=%s&Time=%d&Level=0&Played=0&country=NA "
        string strPost = "http://gamethuanviet.com/racing_2d/SetGetData.php?type=update&username=" + ScoreControl.UserName + "&Time=" + ScoreControl.BestScore + "&Level=0&Played=0&country=NA";
        Debug.Log(strPost);
        WWW www = new WWW(strPost);
    }
    // Use this for initialization

    public void setName()
    {
        GameObject label = GameObject.Find("LabelInputName");
        if (label != null)
        {
            UILabel labeltext = label.GetComponent<UILabel>();
            if (labeltext != null)
            {
                string str = label.GetComponent<UILabel>().text;
                str = str.Trim();
				str = str.Replace(" ","_");
                if (str.Length > 4 && str.Length < 13)
                {
                    ScoreControl.UserName = str;
                    PanelInputName.SetActive(false);
                    PanelBoard.SetActive(true);
                    PostHightScore();
                    ScoreControl.saveGame();
                    getHightScore();
                    loadRanking = true;
                }
            }
        }
    }
}
