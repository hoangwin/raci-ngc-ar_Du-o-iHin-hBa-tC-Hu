using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour {

	public Maze mazePrefab;

	public Player playerPrefab;

	private Maze mazeInstance;

	public Player playerInstance;
    public static GameManager instance;
    public Transform posPlayerBegin;

	private void Start () {
        instance = this;
       
		StartCoroutine(BeginGame());
        
	}
	
	private void Update () {
		if (Input.GetKeyDown(KeyCode.Space)) {
			RestartGame();
		}
	}

	private IEnumerator BeginGame () {
		
	
		mazeInstance = Instantiate(mazePrefab) as Maze;
		yield return StartCoroutine(mazeInstance.Generate2());
     //   Debug.Log("aaaaaaaaaaaaaaaaaaaaaaaaaaaa");
        Maze.instance = mazeInstance;
		playerInstance = Instantiate(playerPrefab) as Player;
        mazeInstance.setPlayerBegin(playerInstance);		
		//Camera.main.clearFlags = CameraClearFlags.Depth;//here
		//Camera.main.rect = new Rect(0f, 0f, 0.5f, 0.5f);//camera here
        //Camera.main.rect = new Rect(0f, 0f, 1f, 1f);
        CameraManager.instance.init();
	}

	private void RestartGame () {
		StopAllCoroutines();
		Destroy(mazeInstance.gameObject);
		if (playerInstance != null) {
			Destroy(playerInstance.gameObject);
		}
		StartCoroutine(BeginGame());
	}
}