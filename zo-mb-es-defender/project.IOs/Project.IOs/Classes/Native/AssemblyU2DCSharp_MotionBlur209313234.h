#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "AssemblyU2DCSharp_ImageEffectBase_1617194558.h"

// MotionBlur
struct  MotionBlur_t209313234_0  : public ImageEffectBase_t_1617194558_0
{
	// System.Single MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture MotionBlur::accumTexture
	RenderTexture_t_253031098_0 * ___accumTexture_6;
};
