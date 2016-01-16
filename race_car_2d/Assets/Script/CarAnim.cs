using UnityEngine;
using System.Collections;

public class CarAnim : MonoBehaviour {

	// Use this for initialization
    public Animator anim;
	void Start () {
        anim =gameObject.GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    
    public void setDeActive()
    {

        if (this.transform.parent.name.Equals("MyCar"))
        {
            GamePlay.GameOver();
        }
        else
        {
            GameObject.Destroy(this.transform.parent.gameObject);
        }
    }
}
