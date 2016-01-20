using System;
using UnityEngine;
using System.Collections;

[Serializable]
public class TankManager
{
    // This class is to manage various settings on a tank.
    // It works with the GameManager class to control how the tanks behave
    // and whether or not players have control of their tank in the 
    // different phases of the game.

    public Color m_PlayerColor;                             // This is the color this tank will be tinted.
    public Transform m_SpawnPoint;                          // The position and direction the tank will have when it spawns.
    [HideInInspector]
    public int m_PlayerNumber;            // This specifies which player this the manager for.
    [HideInInspector]
    public string m_ColoredPlayerText;    // A string that represents the player with their number colored to match their tank.
    [HideInInspector]
    public GameObject m_Instance;         // A reference to the instance of the tank when it is created.
    [HideInInspector]
    public TankManager m_InstanceScript;
    //[HideInInspector] public int m_Wins;                    // The number of wins this player has so far.


    public TankMovement m_Movement;                        // Reference to tank's movement script, used to disable and enable control.
    public TankShooting m_Shooting;                        // Reference to tank's shooting script, used to disable and enable control.
    public TankHealth m_Health;                        // Reference to tank's shooting script, used to disable and enable control.
    public TankEffect m_Effect;                        // Reference to tank's movement script, used to disable and enable control.



    public void Setup(int type)
    {
        // Get references to the components.
        m_Movement = m_Instance.GetComponent<TankMovement>();
        m_Shooting = m_Instance.GetComponent<TankShooting>();
        m_Health = m_Instance.GetComponent<TankHealth>();
        m_Effect = m_Instance.GetComponent<TankEffect>();

        // Set the player numbers to be consistent across the scripts.
        m_Movement.m_PlayerNumber = m_PlayerNumber;
        m_Shooting.m_PlayerNumber = m_PlayerNumber;
        m_Health.m_PlayerNumber = m_PlayerNumber;
        m_Effect.m_PlayerNumber = m_PlayerNumber;

        m_Movement.m_PlayerType = type;
        m_Shooting.m_PlayerType = type;
        m_Health.m_PlayerType = type;
        m_Effect.m_PlayerType = type;

        if (m_PlayerNumber == 1 || m_PlayerNumber == 2)
        {
            m_Shooting.m_CurrentFireDame = 1;
            m_Shooting.m_CurrentFireSpeed = 25;
            m_Movement.m_Speed = 12;
        }
        else {
            if (m_Movement.m_PlayerType == 0)//normal
            {
                m_Shooting.m_CurrentFireDame = 1;
                m_Shooting.m_CurrentFireSpeed = 25;
                m_Movement.m_Speed = 10;
            }
            else if (m_Movement.m_PlayerType == 1)//fast
            {
                m_Shooting.m_CurrentFireDame = 1;
                m_Shooting.m_CurrentFireSpeed = 30;
                m_Movement.m_Speed = 14;
            }
            else if (m_Movement.m_PlayerType == 2)//power
            {
                m_Shooting.m_CurrentFireDame = 1;
                m_Shooting.m_CurrentFireSpeed = 35;
                m_Movement.m_Speed = 12;
            }
            else if (m_Movement.m_PlayerType == 3)//armo
            {
                m_Shooting.m_CurrentFireDame = 1;
                m_Shooting.m_CurrentFireSpeed = 30;
                m_Movement.m_Speed = 8;
            }

        }

        m_Health.m_CurrentLive = 3;

        // Create a string using the correct color that says 'PLAYER 1' etc based on the tank's color and the player's number.
        if (m_PlayerNumber != 0)
        {
            m_ColoredPlayerText = "<color=#" + ColorUtility.ToHtmlStringRGB(m_PlayerColor) + ">PLAYER " + m_PlayerNumber + "</color>";
        }
        else
        {
            m_ColoredPlayerText = "<color=#" + ColorUtility.ToHtmlStringRGB(Color.grey) + ">ENEMY</color>";
        }

        // Get all of the renderers of the tank.
        MeshRenderer[] renderers = m_Instance.GetComponentsInChildren<MeshRenderer>();

        // Go through all the renderers...
        for (int i = 0; i < renderers.Length; i++)
        {
            // ... set their material color to the color specific to this tank.
            if (m_PlayerNumber == 1 || m_PlayerNumber == 2)
                renderers[i].material.color = m_PlayerColor;
            else if (m_Shooting.m_PlayerType != 1)
                renderers[i].material.color = Color.grey;

        }
        m_Effect.initEffect(this);

        if (m_PlayerNumber == 1 || m_PlayerNumber == 2)
        {
            m_Shooting.m_Star = GameObject.Instantiate(GameManager.m_Instancce.m_StarFrefab, m_Health.transform.position, Quaternion.identity) as GameObject;
            m_Shooting.m_Star.transform.position = new Vector3(m_Shooting.m_Star.transform.position.x, 2, m_Shooting.m_Star.transform.position.z);
            m_Shooting.m_Star.transform.parent = m_Health.transform;

            if (m_PlayerNumber == 1)
                m_Shooting.InitNewStar(GameManager.m_TanksStarSave[0]);
            else
                m_Shooting.InitNewStar(GameManager.m_TanksStarSave[1]);
        }
        if (!SoundEngine.m_isSoundEnable)
        {
            m_Movement.m_MovementAudio.enabled = false;
        }
        else
            m_Movement.m_MovementAudio.enabled = true;
    }


    // Used during the phases of the game where the player shouldn't be able to control their tank.
    public void DisableControl()
    {
        if (m_Movement != null)
            m_Movement.enabled = false;
        if (m_Shooting != null)
        {
            m_Shooting.enabled = false;
            m_Shooting.stopAutoFire();
        }


    }


    // Used during the phases of the game where the player should be able to control their tank.
    public void EnableControl()
    {
        m_Movement.enabled = true;
        m_Shooting.enabled = true;
    }


    // Used at the start of each round to put the tank into it's default state.
    public void Reset()
    {
        
        m_Shooting.InitNewStar(0);
        m_Instance.transform.position = m_SpawnPoint.position;
        m_Instance.transform.rotation = m_SpawnPoint.rotation;
        m_Instance.SetActive(true);
    }

    public bool checkDeadALL()
    {
        if (m_Health != null && m_Health.m_CurrentLive > 0)
            return false;
        return true;
    }



}