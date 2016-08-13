using UnityEngine;
using System.Collections;

public class ScoreControl : MonoBehaviour {
	
	public static int mLevelUnblock = 0;
    public static int mScore = 0;
	public static string STRING_USER_NAME ="USER_NAME";
    public static string STRING_USER_UNBLOCK = "USER_UNBLOCK";
	public static string STRING_USER_SCORE ="USER_SCORE";
	public static string UserName = "NaN";
    public static string _UDID = "";
	
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public static void saveGame()
	{
		PlayerPrefs.SetString(STRING_USER_NAME, UserName);
        PlayerPrefs.SetInt(STRING_USER_UNBLOCK, mLevelUnblock);
        PlayerPrefs.SetInt(STRING_USER_SCORE, mScore);
		PlayerPrefs.Save();
	}
	public static void loadGame()
	{
        _UDID = SystemInfo.deviceUniqueIdentifier;
		//PlayerPrefs.DeleteAll();
		UserName = PlayerPrefs.GetString(STRING_USER_NAME);
		if (UserName.Length <= 4)
						UserName = "NaN";
        mLevelUnblock = PlayerPrefs.GetInt(STRING_USER_UNBLOCK);
        mScore = PlayerPrefs.GetInt(STRING_USER_SCORE);
        if (mLevelUnblock == 0)
            mScore = 40;
	}
}
