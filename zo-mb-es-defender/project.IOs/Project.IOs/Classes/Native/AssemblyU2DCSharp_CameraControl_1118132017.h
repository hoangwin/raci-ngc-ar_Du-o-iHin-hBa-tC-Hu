#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t1125787804_0;
// UnityEngine.Camera
struct Camera_t638514714_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// CameraControl
struct  CameraControl_t_1118132017_0  : public MonoBehaviour_t279269927_0
{
	// System.Single CameraControl::m_DampTime
	float ___m_DampTime_2;
	// System.Single CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_3;
	// System.Single CameraControl::m_MinSize
	float ___m_MinSize_4;
	// UnityEngine.Transform[] CameraControl::m_Targets
	TransformU5BU5D_t1125787804_0* ___m_Targets_5;
	// UnityEngine.Camera CameraControl::m_Camera
	Camera_t638514714_0 * ___m_Camera_6;
	// System.Single CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_7;
	// UnityEngine.Vector3 CameraControl::m_MoveVelocity
	Vector3_t303158795_0  ___m_MoveVelocity_8;
	// UnityEngine.Vector3 CameraControl::m_DesiredPosition
	Vector3_t303158795_0  ___m_DesiredPosition_9;
};
