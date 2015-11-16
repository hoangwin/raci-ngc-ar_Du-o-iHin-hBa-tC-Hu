using UnityEngine;
using System.Collections;

public class HeroEvent : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void fireEvent()
    {
        Debug.Log("Fireee");
        
    }
    public void KameEvent()
    {
        Debug.Log("Kame");
    }

    public void EventCompleted()
    {
        Debug.Log("Completed");
    }
}
