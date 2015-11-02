using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class JoyStick_sample : MonoBehaviour 
{
    public Text t0;
    public Text t1;
    public Text t2;
	void Start () 
    {
	
	}
	
	void Update () 
    {
        t0.text = "Vector: " + TJoyStick.OUTPUT_POS;
        t1.text = "4 WAY : " + TJoyStick.Get4Way();
        t2.text = "8 WAY : " + TJoyStick.Get8Way(); 
	}
}
