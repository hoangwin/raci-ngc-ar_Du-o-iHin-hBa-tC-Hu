#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t_1856244150_0;
// UnityEngine.AudioClip
struct AudioClip_t_2050270981_0;
// System.String
struct String_t;
// UnityEngine.Rigidbody
struct Rigidbody_t841305018_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// UnityEngine.Animator
struct Animator_t1839346280_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// TankMovement
struct  TankMovement_t_1862438748_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.Int32 TankMovement::m_PlayerType
	int32_t ___m_PlayerType_3;
	// System.Single TankMovement::m_Speed
	float ___m_Speed_4;
	// System.Single TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_5;
	// UnityEngine.AudioSource TankMovement::m_MovementAudio
	AudioSource_t_1856244150_0 * ___m_MovementAudio_6;
	// UnityEngine.AudioClip TankMovement::m_EngineIdling
	AudioClip_t_2050270981_0 * ___m_EngineIdling_7;
	// UnityEngine.AudioClip TankMovement::m_EngineDriving
	AudioClip_t_2050270981_0 * ___m_EngineDriving_8;
	// System.Single TankMovement::m_PitchRange
	float ___m_PitchRange_9;
	// System.String TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_10;
	// System.String TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_11;
	// UnityEngine.Rigidbody TankMovement::m_Rigidbody
	Rigidbody_t841305018_0 * ___m_Rigidbody_12;
	// System.Single TankMovement::m_MovementInputValueY
	float ___m_MovementInputValueY_13;
	// System.Single TankMovement::m_MovementInputValueX
	float ___m_MovementInputValueX_14;
	// System.Single TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_15;
	// UnityEngine.Vector3 TankMovement::m_LastPostion
	Vector3_t303158795_0  ___m_LastPostion_16;
	// System.Collections.ArrayList TankMovement::m_ListForRandom
	ArrayList_t2138871437_0 * ___m_ListForRandom_17;
	// System.Single TankMovement::m_TimeChangeDirection
	float ___m_TimeChangeDirection_18;
	// System.String TankMovement::m_StrUP
	String_t* ___m_StrUP_19;
	// System.String TankMovement::m_StrDown
	String_t* ___m_StrDown_20;
	// System.String TankMovement::m_StrLeft
	String_t* ___m_StrLeft_21;
	// System.String TankMovement::m_StrRight
	String_t* ___m_StrRight_22;
	// UnityEngine.Animator TankMovement::anim
	Animator_t1839346280_0 * ___anim_23;
	// System.Boolean TankMovement::m_IsRunning
	bool ___m_IsRunning_24;
};
