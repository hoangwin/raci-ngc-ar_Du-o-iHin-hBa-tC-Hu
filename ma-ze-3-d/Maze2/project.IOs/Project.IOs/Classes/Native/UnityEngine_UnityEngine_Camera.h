#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera/CameraCallback
struct CameraCallback_t656;

#include "UnityEngine_UnityEngine_Behaviour.h"

// UnityEngine.Camera
struct  Camera_t247  : public Behaviour_t588
{
};
struct Camera_t247_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t656 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t656 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t656 * ___onPostRender_4;
};
