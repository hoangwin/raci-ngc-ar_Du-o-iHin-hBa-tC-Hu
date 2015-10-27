using UnityEngine;
using System.Collections;

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
    
}
