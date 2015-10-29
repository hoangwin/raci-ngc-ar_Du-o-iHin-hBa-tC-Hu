using UnityEngine;
using System.Collections;

public class ScoreCOntrol : MonoBehaviour {

	// Use this for initialization
    public static SuperInt levelEasy;
    public static SuperInt levelNormal;
    public static SuperInt levelHard;
    public static int mcurrentMode; //=0/=1/=2
    public static int mcurrentLevel; //=0/=1/=2
	public static void Init()
    {
        levelEasy = new SuperInt(0,"LEVEL_EASY");
        

        levelNormal = new SuperInt(0, "LEVEL_NORMAL");
       
        levelHard = new SuperInt(0, "LEVEL_HARD");
       

    }
}
