#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t1203684001_0;

#include "UnityEngine_UnityEngine_Behaviour_1194590900.h"

// UnityEngine.Camera
struct  Camera_t638514714_0  : public Behaviour_t_1194590900_0
{
};
struct Camera_t638514714_0_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t1203684001_0 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t1203684001_0 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t1203684001_0 * ___onPostRender_4;
};
