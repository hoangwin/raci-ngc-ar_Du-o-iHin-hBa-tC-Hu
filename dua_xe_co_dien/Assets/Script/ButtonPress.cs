using UnityEngine;
using System.Collections;

public class ButtonPress : MonoBehaviour {

	// Use this for initialization
	//void Start () {
	
	//}
	
	// Update is called once per frame
	//void Update () {
	
	//}
    public void OnClick()
    {
        SoundEngine.playSound("SoundClick");
        Debug.Log(this.gameObject.name);

        if(this.gameObject.name.Equals("ButtonPause"))
        {
            if (GamePlay.state == GamePlay.STATE_WAITTING || GamePlay.state == GamePlay.STATE_PLAY)
            {
                GamePlay.statePre = GamePlay.state;
                GamePlay.state = GamePlay.STATE_PAUSE;
                GamePlay.instance.PanelPause.SetActive(true);
            }
        }
        else if (this.gameObject.name.Equals("ButtonPlay"))
        {

            GamePlay.instance.PanelOver.SetActive(false);
            GamePlay.instance.PanelPause.SetActive(false);
            GamePlay.state = GamePlay.STATE_PLAY;
        }
        else if (this.gameObject.name.Equals("ButtonMainMenu"))
        {
            Application.LoadLevel("MainMenu");
        }
        else if (this.gameObject.name.Equals("ButtonRePlay"))
        {
            GamePlay.instance.PanelOver.SetActive(false);
            GamePlay.instance.PanelPause.SetActive(false);
            MyCar.ResetMyCar();            
           
            
        }
        else if (this.gameObject.name.Equals("ButtonLeaderBoard"))
        {
            Application.LoadLevel("Rank");
        }   
        //main menu
        else if (this.gameObject.name.Equals("MMButtonPlay"))
        {
            Application.LoadLevel("SelectCar");
        }
        else if (this.gameObject.name.Equals("MMButtonSound"))
        {
            SoundEngine.isSound = !SoundEngine.isSound;
            if (SoundEngine.isSound)
            {
                GameObject.Find("MMLabelSound").GetComponent<UILabel>().text = "Âm Thanh : On";
                AudioListener.pause = false;
            }
            else
            {
                GameObject.Find("MMLabelSound").GetComponent<UILabel>().text = "Âm Thanh : Off";
                AudioListener.pause = true;
            }

            
        }

        else if (this.gameObject.name.Equals("MMButtonRaking"))
        {
            Application.LoadLevel("Rank");
        }

        else if (this.gameObject.name.Equals("MMButtonExit"))
        {
            Application.Quit();
        }

        //end mainmenu 
        //select 

        else if (this.gameObject.name.Equals("SLButtonPlay"))
        {
            Application.LoadLevel("GamePlay");

        }
        else if (this.gameObject.name.Equals("SLButtonLeft"))
        {
            SelectCar.changIndexCar(-1);
        }
        else if (this.gameObject.name.Equals("SLButtonRight"))
        {
            SelectCar.changIndexCar(1);
        }
        //end select

        //ranking
        else if (this.gameObject.name.Equals("RankBackButton"))
        {
            Application.LoadLevel("MainMenu");
        }
        else if (this.gameObject.name.Equals("RankOKButton"))
        {
           Ranking.instance.setName();
        }   
        //if (gameObject.active) menuToTell.SendMessage(functionName, SendMessageOptions.DontRequireReceiver); 
    }
}
