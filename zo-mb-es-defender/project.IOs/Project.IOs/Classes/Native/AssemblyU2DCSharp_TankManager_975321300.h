#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t_495934667_0;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// TankManager
struct TankManager_t_975321300_0;
// TankMovement
struct TankMovement_t_1862438748_0;
// TankShooting
struct TankShooting_t_11249512_0;
// TankHealth
struct TankHealth_t760075385_0;
// TankEffect
struct TankEffect_t_1950916256_0;

#include "mscorlib_System_Object_1786876978.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// TankManager
struct  TankManager_t_975321300_0  : public Object_t
{
	// UnityEngine.Color TankManager::m_PlayerColor
	Color_t_2138957840_0  ___m_PlayerColor_0;
	// UnityEngine.Transform TankManager::m_SpawnPoint
	Transform_t_495934667_0 * ___m_SpawnPoint_1;
	// System.Int32 TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject TankManager::m_Instance
	GameObject_t_1666380968_0 * ___m_Instance_4;
	// TankManager TankManager::m_InstanceScript
	TankManager_t_975321300_0 * ___m_InstanceScript_5;
	// TankMovement TankManager::m_Movement
	TankMovement_t_1862438748_0 * ___m_Movement_6;
	// TankShooting TankManager::m_Shooting
	TankShooting_t_11249512_0 * ___m_Shooting_7;
	// TankHealth TankManager::m_Health
	TankHealth_t760075385_0 * ___m_Health_8;
	// TankEffect TankManager::m_Effect
	TankEffect_t_1950916256_0 * ___m_Effect_9;
};
