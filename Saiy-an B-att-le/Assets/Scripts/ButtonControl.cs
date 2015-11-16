using UnityEngine;
using System.Collections;


public class ButtonControl : MonoBehaviour {

	// Use this for initialization
    public enum STATE_BUTTON
    {
        STATE_NONE,
        STATE_PRESS,
        STATE_HOLD,
        STATE_UP
    }
    public static STATE_BUTTON stateBUtton;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        if (ButtonControl.stateBUtton == ButtonControl.STATE_BUTTON.STATE_UP)
            ButtonControl.stateBUtton = ButtonControl.STATE_BUTTON.STATE_NONE;

}
    public void buttonFirePress()
    {
        Debug.Log("11111111111111");
        stateBUtton = STATE_BUTTON.STATE_PRESS;
    }

    public void buttonFireUp()
    {
        Debug.Log("22222222222222222");
        stateBUtton = STATE_BUTTON.STATE_NONE;
    }
    public void buttonFireHold()
    {
        Debug.Log("333333333333333");
        stateBUtton = STATE_BUTTON.STATE_HOLD;
    }
   
   
 
    // Update is called once per frame
    
}
