#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t57;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_TJoyStick_TOUCH_STASE.h"
#include "AssemblyU2DCSharp_TJoyStick4Way.h"

// TJoyStick
struct  TJoyStick_t65  : public MonoBehaviour_t3
{
	// UnityEngine.UI.Image TJoyStick::image
	Image_t57 * ___image_2;
	// System.Single TJoyStick::WIDTH
	float ___WIDTH_3;
	// System.Single TJoyStick::HEIGHT
	float ___HEIGHT_4;
	// UnityEngine.Vector2 TJoyStick::CENTER
	Vector2_t115  ___CENTER_5;
	// UnityEngine.Vector2 TJoyStick::POSISTION
	Vector2_t115  ___POSISTION_6;
	// UnityEngine.Vector2 TJoyStick::POSISTION2
	Vector2_t115  ___POSISTION2_7;
	// UnityEngine.Vector2 TJoyStick::D
	Vector2_t115  ___D_8;
	// System.Single TJoyStick::DISTANCE_PERCENT_MAX
	float ___DISTANCE_PERCENT_MAX_9;
	// System.Single TJoyStick::TOCDO_QUAYVE
	float ___TOCDO_QUAYVE_10;
	// System.Single TJoyStick::DISTANCE
	float ___DISTANCE_11;
	// System.Boolean TJoyStick::is_not_hold
	bool ___is_not_hold_12;
	// System.Single TJoyStick::DIRECTTION_THREASHOLD
	float ___DIRECTTION_THREASHOLD_14;
	// System.Boolean TJoyStick::isInit
	bool ___isInit_17;
};
struct TJoyStick_t65_StaticFields{
	// UnityEngine.Vector2 TJoyStick::OUTPUT_POS
	Vector2_t115  ___OUTPUT_POS_13;
	// System.Single TJoyStick::DIRECTTION_THREASHOLD_s
	float ___DIRECTTION_THREASHOLD_s_15;
	// System.Boolean TJoyStick::IS_USING_TJOYSTICK
	bool ___IS_USING_TJOYSTICK_16;
	// System.Single TJoyStick::timePress
	float ___timePress_18;
	// TJoyStick/TOUCH_STASE TJoyStick::stateTouch
	int32_t ___stateTouch_19;
	// TJoyStick4Way TJoyStick::way4
	int32_t ___way4_20;
	// System.Single TJoyStick::dx
	float ___dx_21;
	// System.Single TJoyStick::dy
	float ___dy_22;
};
