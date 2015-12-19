using UnityEngine;
using System.Collections;

public class ScoreManager : MonoBehaviour {

	// Use this for initialization
    public static SuperInt m_HighScore;
    public static SuperInt m_LevelUNblock;
    public static int[] m_Player1Score;
    public static int[] m_Player2Score;
	void Start () {
        m_Player1Score = new int[5];
        m_Player2Score = new int[5];
	}
    public static void init()
    {
        if (m_Player1Score == null)
        {
            m_Player1Score = new int[5];
            m_Player2Score = new int[5];
        }
    }

	
	// Update is called once per frame
	void Update () {
	
	}
}
