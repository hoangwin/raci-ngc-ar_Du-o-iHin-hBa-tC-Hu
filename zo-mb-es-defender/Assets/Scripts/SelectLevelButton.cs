using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SelectLevelButton : MonoBehaviour {

    // Use this for initialization
    public int m_Level;
    public Text m_Text;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void UpdateText()
    {
        m_Text.text = (m_Level + 12 * SelectStage.m_Instance.m_page).ToString();

}
public void ButtonLevelPress()
    {
        if (TransitEffect.m_Instance.m_isEffecting)
            return;
       // Debug.Log("aaaa");
        GameManager.m_Instancce.PlaySoundCLick();
        SelectStage.m_Instance.m_Index = m_Level;
        int index = SelectStage.m_Instance.m_page * 12 + m_Level;
        SelectStage.m_Instance.m_ImageSelectPostion.position = SelectStage.m_Instance.m_Postion[m_Level - 1].position;
        if (index<= ScoreManager.m_LevelUNblock.NUM)
        {
            Time.timeScale = 1;
            ScoreManager.m_CurrentLevel = index;

            TransitEffect.m_Instance.TranSitBlack(TransitEffect.TYPE_TRANSIT.GAMEPLAY);
        }
    }
  
}
