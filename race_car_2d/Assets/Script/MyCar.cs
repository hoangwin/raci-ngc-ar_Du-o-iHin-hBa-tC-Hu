using UnityEngine;
using System.Collections;

public class MyCar : MonoBehaviour {
    // Use this for initialization
    public static MyCar instance;
    public float MovingSpeed = 0f;                      // Tốc độ di chuyển của xe
    private Vector3 AccelerometerDirection;             // Trục cảm ứng nghiên
    public float AccelerometerSensitivity = 0.05f;       // Độ nhạy cảm ứng nghiên
    float HEIGHT_GROUND;
    public GameObject AnimObject;
    Animator animDestroy;
    int state = 0;//ide
    public const int STATE_IDE = 0;
    public const int STATE_RUN = 1;
    public const int STATE_WATING_DESTROY = 2;
    public const int STATE_DESTROY = 3;

    GameObject objLand1;
    GameObject objLand2;
    GameObject objLand3;

    public static int index;    
    public static int MIN_INDEX = 0;
    public static int MAX_INDEX = 7;

    public static float[] MAX_SPEED = { 10, 11, 10, 12, 11, 10, 11, 10, 10 };
    public static float[] MIN_SPEED = { 5, 6, 6, 9, 8, 6, 7, 9, 7 };
    public static float drapSpeed = 0;
    void Start()
    {
        state = STATE_RUN;
        objLand1 = GameObject.Find("ground1");
        objLand2 = GameObject.Find("ground2");
        objLand3 = GameObject.Find("ground3");

        objLand1.layer = 1;
        objLand2.layer = 1;
        objLand3.layer = 1;        
       
        Physics2D.IgnoreLayerCollision(1, 1, true);
        HEIGHT_GROUND = objLand1.renderer.bounds.size.y;
        
        
        animDestroy = AnimObject.GetComponent<Animator>();
        
        instance = this;
        ResetMyCar();
    }
    void Update()
    {
      //  Application.targetFrameRate = 30;
       switch(state)
       {

           case STATE_IDE:
               state = STATE_RUN;
               break;
           case STATE_RUN:
               if(GamePlay.state == GamePlay.STATE_PLAY)
                    UpdateCarRun();
               break;
           case STATE_WATING_DESTROY:
               break;
           case STATE_DESTROY:
               break;
       }
    }
    void UpdateCarRun()
    {

        
        // Detect xem đang chạy trên mobile hay trên các thiết bị khác
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.WP8Player)
        {
            AccelerometerDirection = -Input.acceleration*drapSpeed;
        }
        else
        {
          
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                AccelerometerDirection.x = AccelerometerSensitivity + drapSpeed;
            }
            if (Input.GetKey(KeyCode.RightArrow))
            {
                AccelerometerDirection.x = -AccelerometerSensitivity - drapSpeed;
            }
            if (Input.GetKeyUp(KeyCode.LeftArrow) || Input.GetKeyUp(KeyCode.RightArrow))
            {
                AccelerometerDirection.x = 0.0f;
            }
        }

      //  Debug.Log(Time.deltaTime); 
        //   if (Time.deltaTime > 0.1f)
        //      return;
        // Di chuyển xe thẳng hướng phía trước
        //transform.Translate(new Vector3(0, MovingSpeed * Time.deltaTime, 0));
        //  transform.Translate(new Vector3(0, MovingSpeed * Time.deltaTime, 0));
        // Camera cũng phải chạy theo, giữ 1 khoảng cách nhất định với xe
        
        //Vector3 nextPosition = new Vector3(transform.position.x, transform.position.y + MovingSpeed * Time.deltaTime, transform.position.z);        
        //transform.position = Vector3.Lerp(transform.position, nextPosition, Time.deltaTime * MovingSpeed*10);
    
        Vector3 nextPosition1 = new Vector3(0, MovingSpeed * Time.deltaTime, 0);
        Vector3 O = new Vector3(0, 0, 0);
        transform.Translate( Vector3.Lerp(O, nextPosition1, Time.deltaTime * MovingSpeed*10));

        //Vector3 O = new Vector3(0, MovingSpeed * Time.deltaTime, 0);
        //transform.Translate(O);


    //    Debug.Log(Time.deltaTime);



        bool a = ((transform.localRotation.z * Mathf.Rad2Deg > 20) && (transform.localRotation.z * Mathf.Rad2Deg < 340));        
        if (AccelerometerDirection.x > AccelerometerSensitivity)
        {
            // Debug.Log(("trai"));
            // Khi nghiên phone thì cho xe quẹo trái
            if (!a)                
                transform.Rotate(new Vector3(0, 0, 50 * Time.deltaTime), Space.Self);
        }

        else if (AccelerometerDirection.x < -AccelerometerSensitivity)
        {
            //  Debug.Log(("Phai"));
            // Quẹo phải           
            if (!a)            
                transform.Rotate(new Vector3(0, 0, -50 * Time.deltaTime), Space.Self);
        }
        else
        {
            // Mặc định thì xoay xe hướng về phía trước nó sẽ chạy thẳng
            transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(0, 0, 0), 5 * Time.deltaTime);
            // Debug.Log(("Thang"));
           
        }
        MoveLand();
        Camera.main.transform.position = new Vector3(Camera.main.transform.position.x, transform.transform.position.y + 2.5f, Camera.main.transform.position.z);
    }
    public void MoveLand()
    {
        //GameObject obj = GameObject.Find("ground1");
        if (objLand1.transform.position.y < Camera.main.transform.position.y - 12)
            objLand1.transform.position = new Vector3(objLand1.transform.position.x, objLand1.transform.position.y + HEIGHT_GROUND * 3, objLand1.transform.position.z);

        //obj = GameObject.Find("ground2");
        if (objLand2.transform.position.y < Camera.main.transform.position.y - 12)
            objLand2.transform.position = new Vector3(objLand2.transform.position.x, objLand2.transform.position.y + HEIGHT_GROUND * 3, objLand2.transform.position.z);

        //obj = GameObject.Find("ground3");
        if (objLand3.transform.position.y < Camera.main.transform.position.y - 12)
            objLand3.transform.position = new Vector3(objLand3.transform.position.x, objLand3.transform.position.y + HEIGHT_GROUND * 3, objLand3.transform.position.z);   

    }
    
    void OnCollisionEnter2D(Collision2D collision)
	{
        //Debug.Log(collision.gameObject.name);
       if (collision.gameObject.name.Equals("CarPrefab(Clone)"))
        {
            
            if (animDestroy != null)
            {
                state = STATE_WATING_DESTROY;  
                animDestroy.Play("CAR_ANIM_DESTROY");
                collider2D.enabled = false;
                //rigidbody2D.isKinematic = true;
                SoundEngine.playSound("SoundAccident");
                
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

    public static GameObject createNewCar()
    {
        GameObject obj = (GameObject)GameObject.Instantiate(Resources.Load("MyCarPrefab"));
        float x = Random.Range(-1f, 1f);
        obj.transform.localPosition = new Vector3(x, Camera.main.transform.localPosition.y + 8, 1);
        return obj;
    }

    public static void ResetMyCar()
    {
        CarAnim a = instance.gameObject.GetComponentInChildren<CarAnim>();
        a.anim.Play("CAR_ANIM_" + (index +1));

        instance.gameObject.transform.localPosition = new Vector3(0, 0, 0);
        instance.gameObject.transform.rotation = new Quaternion(0, 0, 0, 0);
        instance.gameObject.transform.localRotation = new Quaternion(0, 0, 0, 0);
        
        Camera.main.transform.position = new Vector3(Camera.main.transform.position.x, instance.gameObject.transform.transform.position.y + 2.5f, Camera.main.transform.position.z);
        
        instance.objLand1.transform.position = new Vector3(instance.objLand1.transform.position.x, 0, instance.objLand1.transform.position.z);
        instance.objLand2.transform.position = new Vector3(instance.objLand2.transform.position.x, instance.objLand1.transform.position.y + instance.HEIGHT_GROUND * 1, instance.objLand2.transform.position.z);
        instance.objLand3.transform.position = new Vector3(instance.objLand3.transform.position.x, instance.objLand1.transform.position.y + instance.HEIGHT_GROUND * 2, instance.objLand3.transform.position.z);

        GamePlay.state = GamePlay.STATE_WAITTING;
        instance.state = STATE_IDE;
        instance.collider2D.enabled = true;
        instance.AccelerometerDirection = new Vector3(0, 0, 0);
        GamePlay.instance.timePlay = 0;

        instance.MovingSpeed = MAX_SPEED[index];
        drapSpeed = instance.MovingSpeed / 10;
        AnimBegin.instance.resetAnim();
    }

}
