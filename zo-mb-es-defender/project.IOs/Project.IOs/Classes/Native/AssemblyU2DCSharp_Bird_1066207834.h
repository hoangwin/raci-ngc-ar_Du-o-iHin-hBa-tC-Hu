#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t1839346280_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// Bird
struct  Bird_t_1066207834_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 Bird::animCount
	int32_t ___animCount_2;
	// System.Single Bird::speedX
	float ___speedX_3;
	// System.Single Bird::speedY
	float ___speedY_4;
	// System.Single Bird::speedZ
	float ___speedZ_5;
	// System.Single Bird::amplitudeX
	float ___amplitudeX_6;
	// System.Single Bird::amplitudeY
	float ___amplitudeY_7;
	// System.Single Bird::amplitudeZ
	float ___amplitudeZ_8;
	// UnityEngine.Animator Bird::anim
	Animator_t1839346280_0 * ___anim_9;
	// System.Boolean Bird::canChangeAnim
	bool ___canChangeAnim_10;
	// System.Single Bird::angleX
	float ___angleX_11;
	// System.Single Bird::angleY
	float ___angleY_12;
	// System.Single Bird::angleZ
	float ___angleZ_13;
	// UnityEngine.Vector3 Bird::lastPosition
	Vector3_t303158795_0  ___lastPosition_14;
};
