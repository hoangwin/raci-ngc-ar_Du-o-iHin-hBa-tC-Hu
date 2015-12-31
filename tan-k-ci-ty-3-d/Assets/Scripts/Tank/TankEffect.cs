using UnityEngine;
using System.Collections;

public class TankEffect : MonoBehaviour {

    // Use this for initialization
    public int m_PlayerNumber = 1;
    public int m_PlayerType = 1;//0,1,2,3//loi thuong noi nhanh,loai khochet,loai?
    public ParticleSystem m_ParticalShield;
    public AwardBox.BONUS m_BonusType;
    
    public void initEffect(TankManager tankManager)
    {
        if (m_ParticalShield == null && m_PlayerNumber != 0)
        {

            m_ParticalShield = Instantiate(GameManager.m_Instancce.m_particalPlayerInit, this.transform.position, Quaternion.identity) as ParticleSystem;
            m_ParticalShield.transform.parent = this.transform;
            m_ParticalShield.transform.position = new Vector3(this.transform.position.x, this.transform.position.y + 2, this.transform.position.z);
            m_ParticalShield.gameObject.SetActive(false);

        }
        if (m_PlayerNumber != 0)
        {
            StartCoroutine(EffectInit(tankManager));
        }
        else
        {
            //int i = Random.Range(0, 7);
            if(GameManager.m_TankCount == 5 || GameManager.m_TankCount == 9 || GameManager.m_TankCount == 13||GameManager.m_TankCount == 1)
            //if (i ==0)
            {
                m_BonusType = AwardBox.BONUS.HELMET;// (AwardBox.BONUS)Random.Range((int)AwardBox.BONUS.NONE+1,(int)AwardBox.BONUS.TIMER + 1);
                GameObject obj =  Instantiate(GameManager.m_Instancce.m_QuestionMark, this.transform.position, this.transform.rotation) as GameObject;
                obj.transform.Translate(0, 1.5f, 0);
                obj.SetActive(true);
                obj.transform.parent = this.transform;
               // Debug.Log(m_BonusType);
            }
        }
    }
   
    public IEnumerator EffectInit(TankManager tankManager)
    {

        m_ParticalShield.gameObject.SetActive(true);
        yield return new WaitForSeconds(2);
        m_ParticalShield.gameObject.SetActive(false);
    }
    void Start1 () {
	
	}
	
	// Update is called once per frame
	void Update1 () {
	
	}
}
