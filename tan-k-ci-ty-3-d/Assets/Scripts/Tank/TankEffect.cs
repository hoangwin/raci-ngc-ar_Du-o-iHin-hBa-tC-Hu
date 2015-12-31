using UnityEngine;
using System.Collections;

public class TankEffect : MonoBehaviour {

    // Use this for initialization
    public int m_PlayerNumber = 1;
    public int m_PlayerType = 1;//0,1,2,3//loi thuong noi nhanh,loai khochet,loai?
    public ParticleSystem m_ParticalInit;
    public BONUS m_BonusType;
    public enum BONUS
    {
        NONE,
        GRENADE,
        HELMET,
        SHOVEL,
        STAR,
        TANK,
        TIMER
    }
    public void initEffect()
    {
        if (m_ParticalInit == null && m_PlayerNumber != 0)
        {

            m_ParticalInit = Instantiate(GameManager.m_Instancce.m_particalPlayerInit, this.transform.position, Quaternion.identity) as ParticleSystem;
            m_ParticalInit.transform.parent = this.transform;
            m_ParticalInit.transform.position = new Vector3(this.transform.position.x, this.transform.position.y + 2, this.transform.position.z);
            m_ParticalInit.gameObject.SetActive(false);

        }
        if (m_PlayerNumber != 0)
        {
            StartCoroutine(EffectInit());
        }
        else
        {
            //int i = Random.Range(0, 7);
            if(GameManager.m_TankCount == 5 || GameManager.m_TankCount == 9 || GameManager.m_TankCount == 13||GameManager.m_TankCount == 1)
            //if (i ==0)
            {
                m_BonusType = (BONUS)Random.Range((int)BONUS.NONE+1,(int) BONUS.TIMER + 1);
                GameObject obj =  Instantiate(GameManager.m_Instancce.m_QuestionMark, this.transform.position, this.transform.rotation) as GameObject;
                obj.transform.Translate(0, 1.5f, 0);
                obj.SetActive(true);
                obj.transform.parent = this.transform;
                Debug.Log(m_BonusType);
            }
        }
    }
   
    public IEnumerator EffectInit()
    {

        m_ParticalInit.gameObject.SetActive(true);
        yield return new WaitForSeconds(2);
        m_ParticalInit.gameObject.SetActive(false);
    }
    void Start1 () {
	
	}
	
	// Update is called once per frame
	void Update1 () {
	
	}
}
