#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// UnityEngine.AudioSource
struct AudioSource_t_1856244150_0;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1604016392_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// TankHealth
struct  TankHealth_t760075385_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 TankHealth::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.Int32 TankHealth::m_PlayerType
	int32_t ___m_PlayerType_3;
	// System.Single TankHealth::m_StartingHealth
	float ___m_StartingHealth_4;
	// UnityEngine.GameObject TankHealth::m_ExplosionPrefab
	GameObject_t_1666380968_0 * ___m_ExplosionPrefab_5;
	// UnityEngine.AudioSource TankHealth::m_ExplosionAudio
	AudioSource_t_1856244150_0 * ___m_ExplosionAudio_6;
	// UnityEngine.ParticleSystem TankHealth::m_ExplosionParticles
	ParticleSystem_t1604016392_0 * ___m_ExplosionParticles_7;
	// System.Single TankHealth::m_CurrentHealth
	float ___m_CurrentHealth_8;
	// System.Single TankHealth::m_CurrentLive
	float ___m_CurrentLive_9;
	// System.Boolean TankHealth::m_Dead
	bool ___m_Dead_10;
	// System.Boolean TankHealth::m_IsShield
	bool ___m_IsShield_11;
};
