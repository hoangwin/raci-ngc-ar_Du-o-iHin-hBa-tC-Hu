#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t841305018_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// UnityEngine.AudioSource
struct AudioSource_t_1856244150_0;
// UnityEngine.AudioClip
struct AudioClip_t_2050270981_0;
// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1514852759_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// TankShooting
struct  TankShooting_t_11249512_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 TankShooting::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.Int32 TankShooting::m_PlayerType
	int32_t ___m_PlayerType_3;
	// UnityEngine.Rigidbody TankShooting::m_Shell
	Rigidbody_t841305018_0 * ___m_Shell_4;
	// UnityEngine.Transform TankShooting::m_FireTransform
	Transform_t_495934667_0 * ___m_FireTransform_5;
	// UnityEngine.AudioSource TankShooting::m_ShootingAudio
	AudioSource_t_1856244150_0 * ___m_ShootingAudio_6;
	// UnityEngine.AudioClip TankShooting::m_FireClip
	AudioClip_t_2050270981_0 * ___m_FireClip_7;
	// System.Single TankShooting::m_FireSpeedNormal
	float ___m_FireSpeedNormal_8;
	// System.String TankShooting::m_FireButton
	String_t* ___m_FireButton_9;
	// System.Single TankShooting::m_CurrentFireSpeed
	float ___m_CurrentFireSpeed_10;
	// System.Single TankShooting::m_CurrentFireDame
	float ___m_CurrentFireDame_11;
	// UnityEngine.GameObject[] TankShooting::m_ShellInstance
	GameObjectU5BU5D_t1514852759_0* ___m_ShellInstance_12;
	// System.Int32 TankShooting::m_CountStar
	int32_t ___m_CountStar_13;
	// UnityEngine.GameObject TankShooting::m_Star
	GameObject_t_1666380968_0 * ___m_Star_14;
};
