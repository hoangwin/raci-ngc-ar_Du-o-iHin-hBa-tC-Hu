#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t1604016392_0;
// UnityEngine.AudioSource
struct AudioSource_t_1856244150_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "UnityEngine_UnityEngine_LayerMask_915730570.h"

// ShellExplosion
struct  ShellExplosion_t_1108653108_0  : public MonoBehaviour_t279269927_0
{
	// UnityEngine.LayerMask ShellExplosion::m_TankMask
	LayerMask_t_915730570_0  ___m_TankMask_2;
	// UnityEngine.LayerMask ShellExplosion::m_TankEnemyMask
	LayerMask_t_915730570_0  ___m_TankEnemyMask_3;
	// UnityEngine.LayerMask ShellExplosion::m_BoxMask
	LayerMask_t_915730570_0  ___m_BoxMask_4;
	// UnityEngine.ParticleSystem ShellExplosion::m_ExplosionParticles
	ParticleSystem_t1604016392_0 * ___m_ExplosionParticles_5;
	// UnityEngine.ParticleSystem ShellExplosion::m_ShellParticles
	ParticleSystem_t1604016392_0 * ___m_ShellParticles_6;
	// UnityEngine.AudioSource ShellExplosion::m_ExplosionAudio
	AudioSource_t_1856244150_0 * ___m_ExplosionAudio_7;
	// System.Single ShellExplosion::m_damege
	float ___m_damege_8;
	// System.Single ShellExplosion::m_ExplosionForce
	float ___m_ExplosionForce_9;
	// System.Single ShellExplosion::m_MaxLifeTime
	float ___m_MaxLifeTime_10;
	// System.Single ShellExplosion::m_ExplosionRadius
	float ___m_ExplosionRadius_11;
	// System.Int32 ShellExplosion::m_PlayerNumber
	int32_t ___m_PlayerNumber_12;
	// System.Int32 ShellExplosion::m_PlayerType
	int32_t ___m_PlayerType_13;
	// System.Int32 ShellExplosion::m_countTrigger
	int32_t ___m_countTrigger_14;
};
