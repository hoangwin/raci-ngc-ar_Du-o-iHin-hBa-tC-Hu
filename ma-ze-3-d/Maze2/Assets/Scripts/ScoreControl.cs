using UnityEngine;
using System.Collections;

public class ScoreCOntrol : MonoBehaviour {

	// Use this for initialization
    public static SuperInt levelEasy;
    public static SuperInt levelNormal;
    public static SuperInt levelHard;
    public static SuperArrayInt levelEasyArray;//0 ->0 sao//1->1 sao
    public static SuperArrayInt levelNormalArray;
    public static SuperArrayInt levelHardArray;

    public static int mcurrentMode; //=0/=1/=2
    public static int mcurrentLevel; //=0/=1/=2


    public static SuperInt level;// cai nay se lam viec sau khi set
    public static SuperArrayInt levelArray;// cai nay se lam viec sau khi set
    
	public static void Init()
    {
        levelEasy = new SuperInt(0,"LEVEL_EASY");
        levelNormal = new SuperInt(0, "LEVEL_NORMAL");       
        levelHard = new SuperInt(0, "LEVEL_HARD");

        levelEasyArray = new SuperArrayInt(20,0,"LEVEL_EASY");
        levelNormalArray = new SuperArrayInt(20,0, "LEVEL_NORMAL");
        levelHardArray = new SuperArrayInt(20,0, "LEVEL_HARD");  
    }

    public static void setCurrentLevel(SuperArrayInt _levelArray, SuperInt _level)
    {
        Debug.Log(level);
        level = _level;
        Debug.Log(level);
        levelArray = _levelArray;
    }
}
