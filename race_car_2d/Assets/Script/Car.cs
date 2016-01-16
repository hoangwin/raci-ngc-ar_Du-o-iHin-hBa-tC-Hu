using UnityEngine;
using System.Collections;

public class Car : MonoBehaviour {

	// Use this for initialization
    public float speed;
    public int type;

    public GameObject AnimObject;
    Animator anim;


    public const int STATE_IDE = 0;
    public const int STATE_RUN = 1;
    public const int STATE_WATING_DESTROY = 2;
    public const int STATE_DESTROY = 3;
    public int state;
    
    
	void Start () {
        state = STATE_RUN;
        speed = Random.Range(4f, 6f); 
        type = Random.Range(1, 9);
        anim = AnimObject.GetComponent<Animator>();
        anim.Play("CAR_ANIM_" + type.ToString());
        
        
	}
	
	

    void Update()
    {
        switch(state)
        {
            case STATE_IDE:
                break;
            case STATE_RUN:
                if (GamePlay.state == GamePlay.STATE_PLAY)
                    CarRun();
                break;
        }


    }
    void CarRun()
    {

        transform.Translate(new Vector3(0, speed * Time.deltaTime, 0));
        //   Debug.Log("Car : " + transform.localPosition.y + "," + Camera.main.transform.localPosition.y);
        if (transform.localPosition.y < Camera.main.transform.localPosition.y - 10)
        {
            //destroy
            //Debug.Log("Destroy Car");
            GameObject.Destroy(this.gameObject);
            //GameObject.Destroy(this.transform.parent.gameObject);
        }
        else if (transform.localPosition.y > Camera.main.transform.localPosition.y + 30)
        {
            //destroy
            //Debug.Log("Destroy Car");
            GameObject.Destroy(this.gameObject);
            //GameObject.Destroy(this.transform.parent.gameObject);
        }
                

    }
    public static GameObject createNewCar()
    {
        GameObject obj = (GameObject)GameObject.Instantiate(Resources.Load("CarPrefab"));
        float x = 0;
       /* int landId = Random.Range(0, 3);
        if (landId == 0)
        {
            x = -1.45f;
        }
        else if(landId == 1)
        {
            x = -0.45f;
        }
        else if (landId == 2)
        {
            x = 0.45f;
        }
        else if (landId == 3)
        {
            x = 1.45f;
        }
        */

        float mycarX = MyCar.instance.gameObject.transform.localPosition.x;

        if(mycarX <-1)
            x = -1.45f;
        else if (mycarX < 0)
            x = -0.45f;
        else if (mycarX < 1)
            x = 0.45f;
        else 
            x = 1.45f;

        
        obj.transform.localPosition = new Vector3(x, Camera.main.transform.localPosition.y + 8, 1);
        return obj;
    }
    void OnCollisionEnter2D(Collision2D collision)
    {
        //Debug.Log(collision.gameObject.name);
     //   if (collision.gameObject.name.Equals("CarPrefab(Clone)"))
        {

            if (anim != null)
            {
                state = STATE_WATING_DESTROY;
                anim.Play("CAR_ANIM_DESTROY");
                collider2D.enabled = false;
                //rigidbody2D.isKinematic = true;

            }
        }
    }

    public GameObject getChildGameObject(string withName)
    {
        //Author: Isaac Dart, June-13.
        Transform pTransform = GetComponent<Transform>();
        foreach (Transform trs in pTransform)
        {
            if (trs.gameObject.name == withName)
                return trs.gameObject;
        }

        return null;
    }
}
