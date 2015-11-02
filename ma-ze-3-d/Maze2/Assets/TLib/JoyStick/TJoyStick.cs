using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;

public class TJoyStick : MonoBehaviour 
{
    public Image image;
    float WIDTH;
    float HEIGHT;
    Vector2 CENTER;
    Vector2 POSISTION;
    Vector2 POSISTION2;
    Vector2 D;
    public float DISTANCE_PERCENT_MAX=40;
    public float TOCDO_QUAYVE=0.92f;
    float DISTANCE;
    bool is_not_hold=true;
    static public Vector2 OUTPUT_POS;
    public float DIRECTTION_THREASHOLD = 0.2f;
    static float DIRECTTION_THREASHOLD_s;
    public static bool IS_USING_TJOYSTICK = false;
    public bool isInit = false;
    void Start() 
    {
        if (!isInit)
            init();
       
	}
    public void init()
    {
        isInit = true;
        DIRECTTION_THREASHOLD_s = DIRECTTION_THREASHOLD;
        WIDTH = image.rectTransform.sizeDelta.x;
        HEIGHT = image.rectTransform.sizeDelta.y;
        CENTER = new Vector2(WIDTH / 2, HEIGHT / 2);
        POSISTION = this.GetComponent<RectTransform>().position;
        POSISTION2 = POSISTION;
        DISTANCE = WIDTH * 0.4f * 0.01f * DISTANCE_PERCENT_MAX;

        Debug.Log(POSISTION);
        Debug.Log(DISTANCE);
    }
	void Update () 
    {
        if (IS_USING_TJOYSTICK)
        {
            if (is_not_hold)
            {
                D *= TOCDO_QUAYVE;
                image.rectTransform.localPosition = D;
                if (IS_USING_TJOYSTICK)
                {
                    OUTPUT_POS = D / DISTANCE;
                    if (Mathf.Abs(OUTPUT_POS.x) < 0.01f && Mathf.Abs(OUTPUT_POS.y) < 0.01f)
                        IS_USING_TJOYSTICK = false;
                }
            }
            OUTPUT_POS = D / DISTANCE;
        }
	}
    public void ButtonDown(BaseEventData eventData)
    {
        is_not_hold = false;
        IS_USING_TJOYSTICK = true;
        D = ((PointerEventData)eventData).position  - POSISTION2;
        if (Mathf.Sqrt(D.x * D.x + D.y * D.y) > DISTANCE)
        { D.Normalize(); D *= DISTANCE; }
        image.rectTransform.localPosition = D;
        OUTPUT_POS = D / DISTANCE;
        //OnMove();


    }
    public void ButtonUp(BaseEventData eventData)
    {
        
        D = ((PointerEventData)eventData).position  - POSISTION2;
        if (Mathf.Sqrt(D.x * D.x + D.y * D.y) > DISTANCE)
        { D.Normalize(); D *= DISTANCE; }
        image.rectTransform.localPosition = D;
        //OnMove();
        OUTPUT_POS = D / DISTANCE;
        is_not_hold = true;
        //IS_USING_TJOYSTICK = false;
    }
    public void ButtonDrag(BaseEventData eventData)
    {
        D = ((PointerEventData)eventData).position - POSISTION2;
        if (Mathf.Sqrt(D.x * D.x + D.y * D.y) > DISTANCE)
        { D.Normalize(); D *= DISTANCE; }
        image.rectTransform.localPosition = D;
        //OnMove();
        OUTPUT_POS = D / DISTANCE;
    }
    public void OnMove()
    {

    }
    static TJoyStick4Way way4;
    public static TJoyStick4Way Get4Way()
    {
        if(Mathf.Abs(OUTPUT_POS.x) > Mathf.Abs(OUTPUT_POS.y))
        {
            if (Mathf.Abs(OUTPUT_POS.x) < DIRECTTION_THREASHOLD_s) return TJoyStick4Way.NORMAL;
            if (OUTPUT_POS.x > 0) return TJoyStick4Way.RIGHT;
            else return TJoyStick4Way.LEFT;
        }
        else
        {
            if (Mathf.Abs(OUTPUT_POS.y) < DIRECTTION_THREASHOLD_s) return TJoyStick4Way.NORMAL;
            if (OUTPUT_POS.y > 0) return TJoyStick4Way.UP;
            else return TJoyStick4Way.DOWN;
        }
    }
    static float dx;
    static float dy;
    public static TJoyStick8Way Get8Way()
    {
        if (Mathf.Abs(OUTPUT_POS.x) < DIRECTTION_THREASHOLD_s && Mathf.Abs(OUTPUT_POS.y) < DIRECTTION_THREASHOLD_s) return TJoyStick8Way.NORMAL;
        float goc = Mathf.Atan2(OUTPUT_POS.y,OUTPUT_POS.x);
        return (TJoyStick8Way)(((goc + 3.54291735f) / 0.7853981634f)%8);
    }
}

public enum TJoyStick4Way
{
    UP,
    RIGHT,
    DOWN,
    LEFT,
    NORMAL
}
public enum TJoyStick8Way
{
    //RIGHT=0,
    //UP_RIGHT=1,
    //UP=2,
    //UP_LEFT=3,
    //LEFT=4,
    //DOWN_LEFT=5,
    //DOWN=6,
    //DOWN_RIGHT=7,
    //NORMAL=8
    RIGHT = 4,
    UP_RIGHT = 5,
    UP = 6,
    UP_LEFT = 7,
    LEFT = 0,
    DOWN_LEFT = 1,
    DOWN = 2,
    DOWN_RIGHT = 3,
    NORMAL = 8,
}