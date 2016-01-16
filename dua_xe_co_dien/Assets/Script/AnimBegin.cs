using UnityEngine;
using System.Collections;

public class AnimBegin : MonoBehaviour {

	// Use this for initialization
    Animator anim;
    public static AnimBegin instance;
	void Start () {
        instance = this;
        anim = gameObject.GetComponent<Animator>();
        resetAnim();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void resetAnim()
    {

        anim.Play("CAR_ANIM_START");
        SoundEngine.playSound("Sound321");
    }
    public void setDeActive()
    {
        if (GamePlay.state == GamePlay.STATE_WAITTING)
        {
            GamePlay.state = GamePlay.STATE_PLAY;
            SoundEngine.playSound("SoundRun");
            
        }

    
    }
}
