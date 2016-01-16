using UnityEngine;
using System.Collections;

public class ScoreManager : MonoBehaviour {

	// Use this for initialization
    public static SuperInt m_HighScore;
    public static SuperInt m_LevelUNblock;
    public static int[] m_Player1Score;//type-num
    public static int[] m_Player2Score;
    public static int m_CurrentLevel;
    void Start () {
        m_Player1Score = new int[4];
        m_Player2Score = new int[4];
	}

    public static void initTankScore()
    {
        if (m_Player1Score == null)
        {
            m_Player1Score = new int[4];
            m_Player2Score = new int[4];
        }
        else
        {
            for(int i =0;i<4;i++)
            {
                m_Player1Score[i] = 0;
                m_Player2Score[i] = 0;
            }
        }

    }
    public static void Load()
    {
        m_LevelUNblock = new SuperInt(1, "UNLOCK_STAGE");
        
        m_LevelUNblock.Load();
    }
    public static void Save()
    {
        
        m_LevelUNblock.Save();
    }
    // Update is called once per frame
    void Update () {
	
	}
}
