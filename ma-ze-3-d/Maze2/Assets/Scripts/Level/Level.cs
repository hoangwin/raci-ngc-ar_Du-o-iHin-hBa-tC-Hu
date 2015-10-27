using UnityEngine;
using System.Collections;

public abstract class Level  {
    public int WIDTH = 0;
    public int HEIGHT = 0;
    public int[,] array2D;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public abstract void init();
    
}
