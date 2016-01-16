using UnityEngine;
using System.Collections;

public class SelectCar : MonoBehaviour {

	// Use this for initialization
    public Sprite Sprite0;
    public Sprite Sprite1;
    public Sprite Sprite2;
    public Sprite Sprite3;
    public Sprite Sprite4;
    public Sprite Sprite5;
    public Sprite Sprite6;
    public Sprite Sprite7;
    public Sprite Sprite8;
    public static SelectCar instance;
	void Start () {
        instance = this;
	}
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.LoadLevel("MainMenu");
        }
	}
    public static void changIndexCar(int offset)
    {
        MyCar.index += offset;
        if (MyCar.index < MyCar.MIN_INDEX)
            MyCar.index = MyCar.MAX_INDEX;

        if (MyCar.index > MyCar.MAX_INDEX)
            MyCar.index = MyCar.MIN_INDEX;

        GameObject obj = GameObject.Find("car_preview");
        GameObject.Find("LabelSpeedMin").GetComponent<UILabel>().text = (MyCar.MIN_SPEED[MyCar.index] * 10).ToString();
        GameObject.Find("LabelSpeedMax").GetComponent<UILabel>().text = (MyCar.MAX_SPEED[MyCar.index] * 10).ToString();

        switch (MyCar.index)
        {
            case 0:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite0;
                break;
            case 1:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite1;
                break;
            case 2:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite2;
                break;
            case 3:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite3;
                break;
            case 4:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite4;
                break;
            case 5:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite5;
                break;
            case 6:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite6;
                break;
            case 7:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite7;
                break;
            case 8:
                obj.GetComponent<SpriteRenderer>().sprite = instance.Sprite8;
                break;

        }

    
    }
}
