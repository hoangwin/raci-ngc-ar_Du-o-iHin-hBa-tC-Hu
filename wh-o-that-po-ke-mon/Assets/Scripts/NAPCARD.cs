using UnityEngine;
using System.Collections;
using System.Xml;
using System.IO;
public class NAPCARD : MonoBehaviour 
{
	//public UILabel nhamang;
	public UILabel l1_mathe;
	public UILabel l2_seri;
	public UIPopupList l0_popup;
    public int networkType = 0;//0 = vietel, 2 = mobilephone,3 = vinaphone
    public UILabel LabelNotice;
    public static NAPCARD instance;

	void Start ()
	{
        instance = this;
	}

	public void Init()
	{

	}
    public void ButtonViettelPress()
    {
        networkType = 0;
        GameObject.Find("ButtonViettel").GetComponent<UIButton>().isEnabled = false;//.normalSprite = "MenuButtonSoundOn";
        GameObject.Find("ButtonMobi").GetComponent<UIButton>().isEnabled = true;//.normalSprite = "MenuButtonSoundOn";
        GameObject.Find("ButtonVina").GetComponent<UIButton>().isEnabled = true;//.normalSprite = "MenuButtonSoundOn";
    }
    public void ButtonMobilePhonePress()
    {
        networkType = 2;
        GameObject.Find("ButtonViettel").GetComponent<UIButton>().isEnabled = true;//.normalSprite = "MenuButtonSoundOn";
        GameObject.Find("ButtonMobi").GetComponent<UIButton>().isEnabled = false;//.normalSprite = "MenuButtonSoundOn";
        GameObject.Find("ButtonVina").GetComponent<UIButton>().isEnabled = true;//.normalSprite = "MenuButtonSoundOn";
    }
    public void ButtonVinaPhonePress()
    {
        networkType = 1;
        GameObject.Find("ButtonViettel").GetComponent<UIButton>().isEnabled = true;//.normalSprite = "MenuButtonSoundOn";
        GameObject.Find("ButtonMobi").GetComponent<UIButton>().isEnabled = true;//.normalSprite = "MenuButtonSoundOn";
        GameObject.Find("ButtonVina").GetComponent<UIButton>().isEnabled = false;//.normalSprite = "MenuButtonSoundOn";
    }
	public void ClickOK()
	{     

		string nhamang_ = "VTE";//viettem
        if (networkType == 1) nhamang_ = "VNP";//vinaphone
        else if (networkType == 2) nhamang_ = "VMS";//mobile phone

		int c = Nap (nhamang_,l1_mathe.text,l2_seri.text);
        //Debug.Log("aaaaaaaaaaaaa: " + l1_mathe.text + l2_seri.text);
		int gem_add = c;
		switch (c)
		{

			case 10000: gem_add = 150; break;
			case 20000: gem_add = 350; break;
			case 50000: gem_add = 850; break;
			case 100000: gem_add = 1700; break;
			case 200000: gem_add = 3400; break;
            case 500000:gem_add = 10000; break;
			case -1: gem_add = 0; break;
			default: gem_add = 0;break;
		}

		if (gem_add > 0) 
		{
            WWW www1 = new WWW("http://gamethuanviet.com/duoi_hinh_bat_chu/UpdateCard.php?username=" + ScoreControl._UDID+"&card=" + c.ToString());//here
            ScoreControl.mScore += gem_add;           
            ScoreControl.saveGame();
            LabelNotice.text = "Bạn đã nhận " + gem_add.ToString() + " Xu";
		}

	}
	
	public delegate void Callback( string data, string error );
	int Nap(string nhamang_,string mathe,string seri)
	{
		string url = "http://115.84.179.60:2222/WebServiceReceiveMO.asmx";  
		WWW www = CreateRequest (url,nhamang_,mathe,seri);
		while (!www.isDone)  //wait until www isdone
			;
		Debug.Log (www.text);

		string MESS = "Loi : $0$0";
		int start = www.text.IndexOf ("message:")+8;
		int end = www.text.IndexOf ("</NAPTHEResult>");
		if (end > start) 
		{

			MESS = www.text.Substring (start, end - start);
			Debug.Log("mess= "+MESS);
			int end_mess = MESS.IndexOf('$');
			if(MESS.IndexOf("500000")>=0) return 500000;
			else  if(MESS.IndexOf("200000")>=0) return 200000;
			else  if(MESS.IndexOf("100000")>=0) return 100000;
			else  if(MESS.IndexOf("50000")>=0) return 50000;
			else  if(MESS.IndexOf("20000")>=0) return 20000;
			else  if(MESS.IndexOf("10000")>=0) return 10000;
			else 
			{
                LabelNotice.text = "Lỗi : " + MESS.Substring(0, end_mess);
				if(end_mess>0)
				{
					//WARNING_Manager.AddWarningHigh("Không thành công!",MESS.Substring(0,end_mess));
                    //Debug.Log("ko thanh cong: " + MESS.Substring(0, end_mess));
                 //   AddCoinControl.instance.LabelAdcoinNotive.text = "Message : " + MESS.Substring(0, end_mess);
				}
				return -1;
			}
		}
		return -1;
	}
	private IEnumerator IEWaitForData(WWW www, float stop, Callback callback)
	{ 
		yield return www;
		Debug.Log (www.text);

	} // sendData 


	private WWW CreateRequest(string url,string nhamang_,string mathe,string seri) 
	{ 
		//return null;
		string envelope =
			"<?xml version="+'\"'+"1.0"+'\"'+" encoding="+'\"'+"utf-8"+'\"'+"?>"+
				"<soap:Envelope xmlns:soap="+'\"'+"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance' xmlns:xsd='http://www.w3.org/2001/XMLSchema'>"+
				"<soap:Body>"+
				"<NAPTHE xmlns="+'\"'+"http://tempuri.org/"+'\"'+">"
				+"<TenKenh>"+nhamang_+"</TenKenh>"
				+"<MaThe>"+mathe+"</MaThe>"
				+"<SeRi>"+seri+"</SeRi>"+
                "<UserName>" + ScoreControl._UDID + "</UserName>" +
				"<Password>"+"TOAN_STT"+"</Password>"+
				"</NAPTHE>"+
				"</soap:Body>"+
				"</soap:Envelope>";

        Debug.Log(envelope);
		Hashtable headers = new Hashtable();
		headers["Content-Type"] = "text/xml;"; 
		WWW www=null;
#if UNITY_ANDROID
	//	www =  new WWW (url, System.Text.Encoding.UTF8.GetBytes(envelope), headers);        
#elif UNITY_WP8
		System.Collections.Generic.Dictionary<string,string> theader = new System.Collections.Generic.Dictionary<string,string>();
		theader.Add("Content-Type","text/xml;");
		www = new WWW(url,System.Text.Encoding.UTF8.GetBytes(envelope),theader);
		//www =  new WWW (url, System.Text.Encoding.UTF8.GetBytes(envelope), HashtableToDictionary<string, string>(headers)); 
#elif UNITY_IPHONE
		www =  new WWW (url, System.Text.Encoding.UTF8.GetBytes(envelope), headers);        
#endif
		return www;
		
	}

   
}
