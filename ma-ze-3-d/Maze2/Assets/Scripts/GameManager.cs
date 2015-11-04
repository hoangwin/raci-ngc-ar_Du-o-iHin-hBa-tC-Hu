using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameManager : MonoBehaviour {

	public Maze mazePrefab;
	public Player playerPrefab;
	private Maze mazeInstance;
	public Player playerInstance;
    public static GameManager instance;   

    public GameObject panelUI;
    public GameObject panelWIN;
    public GameObject panelPAUSE;
    public TJoyStick tJoyStick;

    public GameObject hintButton;
    public Text hintText;
    public int hintCount;
    public Sprite[] sprBigStart;
    public Image starGameOver;
    public Text textGameOver;
    public GameObject mazetemplate; //will delete when go game. it gor design
    public Platform[] platformPrefab;   
    public Platform platformInstance;

	private void Start () {
        instance = this;
        setUI(null);
        tJoyStick.init();
        if (mazetemplate != null)
            Destroy(mazetemplate.gameObject);

		StartCoroutine(BeginGame());        
	}
	
	private void Update () {
		if (Input.GetKeyDown(KeyCode.Space)) {
			RestartGame();
		}
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (GameManager.instance.panelPAUSE.activeSelf)
                GameManager.instance.setUI(GameManager.instance.panelUI);
            else if (GameManager.instance.panelWIN.activeSelf)
               Application.LoadLevel("Menu");
            else if (GameManager.instance.panelUI.activeSelf)
                GameManager.instance.setUI(GameManager.instance.panelPAUSE);

        }
	}

	private IEnumerator BeginGame () {       
        if (ScoreCOntrol.mcurrentLevel > 20)
            ScoreCOntrol.mcurrentLevel = 1;
        hintCount = 3;
        setHint(hintCount);
        CameraManager.instance.setMaterial();
		mazeInstance = Instantiate(mazePrefab) as Maze;
		yield return StartCoroutine(mazeInstance.Generate2());
     //   Debug.Log("aaaaaaaaaaaaaaaaaaaaaaaaaaaa");
        platformInstance = Instantiate(platformPrefab[ScoreCOntrol.mcurrentMode]) as Platform;
        Maze.instance = mazeInstance;
		playerInstance = Instantiate(playerPrefab) as Player;
        mazeInstance.setPlayerBegin(playerInstance);		
		//Camera.main.clearFlags = CameraClearFlags.Depth;//here
		//Camera.main.rect = new Rect(0f, 0f, 0.5f, 0.5f);//camera here
        //Camera.main.rect = new Rect(0f, 0f, 1f, 1f);
        CameraManager.instance.init();
	}

	public void RestartGame () {
		StopAllCoroutines();
        

        mazeInstance.destroyAll();
        
		if (playerInstance != null) {
			Destroy(playerInstance.gameObject);
		}
		StartCoroutine(BeginGame());
	}
    public void setUI(GameObject objectPanel)
    {
        panelUI.SetActive(false);
        panelWIN.SetActive(false);
        panelPAUSE.SetActive(false);
        
        if (objectPanel == panelUI)
            panelUI.SetActive(true);
        else if (objectPanel == panelWIN)
            panelWIN.SetActive(true);
        else if (objectPanel == panelPAUSE)
            panelPAUSE.SetActive(true);
    }
    public void setHint(int count)
    {
        if (count < 1)
            hintButton.SetActive(false);
        else
        {
            hintButton.SetActive(true);
            hintText.text = count.ToString();

        }
    }
}