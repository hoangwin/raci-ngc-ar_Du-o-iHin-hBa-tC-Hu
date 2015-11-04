using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CameraManager : MonoBehaviour
{

    // Use this for initialization
    public GameObject camera1;// no se chon tuy thuoc vao came mode
    public GameObject camera2;// no se chon tuy thuoc vao came mode
    public GameObject camera3;// di theo player
    public int indexCamera;
    public static CameraManager instance;

    public int hintListCount = 3;
    public GameObject hintListButton;
    public Text hintListText;
    public GameObject[] camera1Array;
    public GameObject[] camera2Array;

    public Material[] materialsFloor;
    public Material[] materialsWall;
    public Renderer rendWall;
    public Renderer rendFloor;
    void Start()
    {
        instance = this;
    }
    public void init()
    {
      

        camera1 = camera1Array[ScoreCOntrol.mcurrentMode];
        camera2 = camera2Array[ScoreCOntrol.mcurrentMode];
        
        camera3 = GameManager.instance.playerInstance.playerCamera;
        indexCamera = 1;//khoi dau
        setCamera();
    }
    public void setMaterial()
    {
        Debug.Log("Level " + ScoreCOntrol.mcurrentLevel);
        int index = ScoreCOntrol.mcurrentLevel % 4;
        Debug.Log("aaaa : " + index);
        rendWall.material = materialsWall[index];
        rendFloor.material = materialsFloor[index];
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
         if(indexCamera == 0 || indexCamera == 1)
         {
             GameManager.instance.playerInstance.cubeBoby.SetActive(true);
             GameManager.instance.playerInstance.realBoby.SetActive(false);
         }else
         {
             GameManager.instance.playerInstance.cubeBoby.SetActive(false);
             GameManager.instance.playerInstance.realBoby.SetActive(true);
         }
    }

}
