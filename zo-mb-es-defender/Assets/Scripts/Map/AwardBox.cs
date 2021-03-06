﻿using UnityEngine;
using System.Collections;

public class AwardBox : MonoBehaviour {

    // Use this for initialization
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
    public BONUS m_type;
    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log("Hehehehe");
        if (other.gameObject.tag.Equals("TankPlayer"))
        {
           // Debug.Log("111111111111");
            TankManager tankManager = null;
            TankHealth tankHeath = other.gameObject.GetComponent<TankHealth>();
            if (tankHeath.m_PlayerNumber == 1)
                tankManager = GameManager.m_Instancce.m_Tanks[0];
            else
                tankManager = GameManager.m_Instancce.m_Tanks[1];

         
           // Debug.Log("m_type :" + m_type);
            switch (m_type)
            {
                case BONUS.GRENADE://destroy all
                    for(int i =0;i< GameManager.m_Instancce.m_TanksEnemy.Length;i++)
                    {
                        if(GameManager.m_Instancce.m_TanksEnemy[i]!= null && GameManager.m_Instancce.m_TanksEnemy[i].m_Health != null)
                            GameManager.m_Instancce.m_TanksEnemy[i].m_Health.TakeDamage(10, tankHeath.m_PlayerNumber);
                    }
                    
                    break;
                case BONUS.HELMET:
                    tankManager.m_Health.getShield();
                    //StartCoroutine(tankManager.m_Health.getShield(tankManager.m_Health.m_PlayerNumber));

                    break;
                case BONUS.SHOVEL:                    
                    MapManager.m_Instance.EffectShovel();
                    break;
                case BONUS.STAR:
                    tankManager.m_Shooting.InitNewStar(++tankManager.m_Shooting.m_CountStar);
                    break;
                case BONUS.TANK:
                    tankManager.m_Health.m_CurrentLive++;
                    if (tankManager.m_Health.m_PlayerNumber == 1)
                        GameManager.m_Instancce.m_Tank1Text.text = tankManager.m_Health.m_CurrentLive.ToString();
                    else
                        GameManager.m_Instancce.m_Tank2Text.text = tankManager.m_Health.m_CurrentLive.ToString();
                    break;
                case BONUS.TIMER:
                    GameManager.m_Instancce.StartTimerEffect();
                    break;
            }
            SoundEngine.m_Instancce.PlaySoundGetItem();
            GameObject.Destroy(this.gameObject);
        }
        //here

    }
    
    void Start () {
    
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
