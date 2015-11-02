using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CameraManager : MonoBehaviour
{

    // Use this for initialization
    public GameObject camera1;
    public GameObject camera2;
    public GameObject camera3;
    public int indexCamera;
    public static CameraManager instance;

    public int hintListCount = 3;
    public GameObject hintListButton;
    public Text hintListText;
    void Start()
    {
        instance = this;
    }
    public void init()
    {
        camera3 = GameManager.instance.playerInstance.playerCamera;
        indexCamera = 1;//khoi dau
        setCamera();
    }
    public void setCamera()
    {
        indexCamera++;
        if(indexCamera>=3)
            indexCamera = 0;

        if(indexCamera == 0)
        {
             camera1.SetActive(true);
             camera2.SetActive(false);
             camera3.SetActive(false);
        }
        if (indexCamera == 1)
        {
             camera1.SetActive(false);
             camera2.SetActive(true);
             camera3.SetActive(false);
        }
        if (indexCamera == 2)
        {
             camera1.SetActive(false);
             camera2.SetActive(false);
             camera3.SetActive(true);
        }
    }

}
