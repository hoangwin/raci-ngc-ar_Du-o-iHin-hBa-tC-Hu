using UnityEngine;
using System.Collections;

public class ScoreControl : MonoBehaviour {	
	public static int BestScore = 0;
	public static string STRING_USER_NAME ="USER_NAME";
    public static string STRING_USER_SCORE = "USER_SCORE";
	public static string UserName = "NaN";
	
	
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public static void updateScore()
    {
        if (GamePlay.score > BestScore)
            BestScore = GamePlay.score;
    }
	public static void saveGame()
	{
        
		PlayerPrefs.SetString(STRING_USER_NAME, UserName);
        PlayerPrefs.SetInt(STRING_USER_SCORE, BestScore);
		PlayerPrefs.Save();
	}
	public static void loadGame()
	{
		//PlayerPrefs.DeleteAll();
		UserName = PlayerPrefs.GetString(STRING_USER_NAME);
        BestScore = PlayerPrefs.GetInt(STRING_USER_SCORE);
		if (UserName.Length <= 4)
						UserName = "NaN";				        


	}
}
