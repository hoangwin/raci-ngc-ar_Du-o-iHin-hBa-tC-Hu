﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class AButton : MonoBehaviour {

	// Use this for initialization
    public int Index = 0;
    public Text text;
    public Image image;
    public Image star;
	void Start () {
       // Index = int.Parse(text.text);
        
	}
	
	public void buttonPress()
    {
        SoundEngine.play(SoundEngine.instance.click);
        ScoreCOntrol.mcurrentLevel = Index;
        Debug.Log("index | " + Index);
        Application.LoadLevel("Scene");
    }
}
