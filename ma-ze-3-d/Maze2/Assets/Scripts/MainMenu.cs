using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MainMenu : MonoBehaviour {

	// Use this for initialization
    public Sprite sprStart0;
    public Sprite sprStart1;
    public Sprite sprStart2;
    public Sprite sprStart3;
    public Sprite sprButtonEnable;
    public Sprite sprButtonDisable;
    public GameObject panelUI;
    public GameObject panelLevel;
    public static MainMenu instance;

    public Sprite imageMusicOn;
    public Sprite imageMusicOff;
    public Image imageMusic;
    //

    public Sprite imageSFXOn;
    public Sprite imageSFXOff;
    public Image imageSFX;
	void Start () {
        instance = this;
        MainMenu.instance.panelUI.SetActive(true);
        MainMenu.instance.panelLevel.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
