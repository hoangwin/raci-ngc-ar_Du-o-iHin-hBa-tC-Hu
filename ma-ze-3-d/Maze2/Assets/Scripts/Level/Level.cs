using UnityEngine;
using System.Collections;
using System;
public abstract class Level  {
    public int WIDTH = 0;
    public int HEIGHT = 0;
    public int[,] array2D;
    public int[] HintArray;// 2 con so la mot cap chi vi tri cua hinh
    
    public  Vector2 POS_BEGIN;
    public  Vector2 POS_END;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public abstract void init();
    public static Level initLevel(int mode, int level)
    {

        if (mode == 0)
        {
            switch (level)
            {
                case 1: return new LevelEasy1();
                case 2: return new LevelEasy2();
                case 3: return new LevelEasy3();
                case 4: return new LevelEasy4();
                case 5: return new LevelEasy5();
                case 6: return new LevelEasy6();
                case 7: return new LevelEasy7();
                case 8: return new LevelEasy8();
                case 9: return new LevelEasy9();
                case 10: return new LevelEasy10();
                case 11: return new LevelEasy11();
                case 12: return new LevelEasy12();
                case 13: return new LevelEasy13();
                case 14: return new LevelEasy14();
                case 15: return new LevelEasy15();
                case 16: return new LevelEasy16();
                case 17: return new LevelEasy17();
                case 18: return new LevelEasy18();
                case 19: return new LevelEasy19();
                case 20: return new LevelEasy20();
            }
        }
        
        else if (mode == 1)//normal
        {
            switch (level)
            {
                case 1: return new LevelNormal1();
                case 2: return new LevelNormal2();
                case 3: return new LevelNormal3();
                case 4: return new LevelNormal4();
                case 5: return new LevelNormal5();
                case 6: return new LevelNormal6();
                case 7: return new LevelNormal7();
                case 8: return new LevelNormal8();
                case 9: return new LevelNormal9();
                case 10: return new LevelNormal10();
                case 11: return new LevelNormal11();
                case 12: return new LevelNormal12();
                case 13: return new LevelNormal13();
                case 14: return new LevelNormal14();
                case 15: return new LevelNormal15();
                case 16: return new LevelNormal16();
                case 17: return new LevelNormal17();
                case 18: return new LevelNormal18();
                case 19: return new LevelNormal19();
                case 20: return new LevelNormal20();


            }
        }
        else if (mode == 2)//Hard
        {
            switch (level)
            {
                case 1: return new LevelHard1();
                case 2: return new LevelHard2();
                case 3: return new LevelHard3();
                case 4: return new LevelHard4();
                case 5: return new LevelHard5();
                case 6: return new LevelHard6();
                case 7: return new LevelHard7();
                case 8: return new LevelHard8();
                case 9: return new LevelHard9();
                case 10: return new LevelHard10();
                case 11: return new LevelHard11();
                case 12: return new LevelHard12();
                case 13: return new LevelHard13();
                case 14: return new LevelHard14();
                case 15: return new LevelHard15();
                case 16: return new LevelHard16();
                case 17: return new LevelHard17();
                case 18: return new LevelHard18();
                case 19: return new LevelHard19();
                case 20: return new LevelHard20();
            }
        }

        return null;
    }
}
