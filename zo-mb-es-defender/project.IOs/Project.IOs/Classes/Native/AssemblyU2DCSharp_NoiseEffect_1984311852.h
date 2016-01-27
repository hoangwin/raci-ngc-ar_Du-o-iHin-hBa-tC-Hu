#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t565265588_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// NoiseEffect
struct  NoiseEffect_t_1984311852_0  : public MonoBehaviour_t279269927_0
{
	// System.Boolean NoiseEffect::monochrome
	bool ___monochrome_2;
	// System.Boolean NoiseEffect::rgbFallback
	bool ___rgbFallback_3;
	// System.Single NoiseEffect::grainIntensityMin
	float ___grainIntensityMin_4;
	// System.Single NoiseEffect::grainIntensityMax
	float ___grainIntensityMax_5;
	// System.Single NoiseEffect::grainSize
	float ___grainSize_6;
	// System.Single NoiseEffect::scratchIntensityMin
	float ___scratchIntensityMin_7;
	// System.Single NoiseEffect::scratchIntensityMax
	float ___scratchIntensityMax_8;
	// System.Single NoiseEffect::scratchFPS
	float ___scratchFPS_9;
	// System.Single NoiseEffect::scratchJitter
	float ___scratchJitter_10;
	// UnityEngine.Texture NoiseEffect::grainTexture
	Texture_t565265588_0 * ___grainTexture_11;
	// UnityEngine.Texture NoiseEffect::scratchTexture
	Texture_t565265588_0 * ___scratchTexture_12;
	// UnityEngine.Shader NoiseEffect::shaderRGB
	Shader_t_796521790_0 * ___shaderRGB_13;
	// UnityEngine.Shader NoiseEffect::shaderYUV
	Shader_t_796521790_0 * ___shaderYUV_14;
	// UnityEngine.Material NoiseEffect::m_MaterialRGB
	Material_t139638856_0 * ___m_MaterialRGB_15;
	// UnityEngine.Material NoiseEffect::m_MaterialYUV
	Material_t139638856_0 * ___m_MaterialYUV_16;
	// System.Single NoiseEffect::scratchTimeLeft
	float ___scratchTimeLeft_17;
	// System.Single NoiseEffect::scratchX
	float ___scratchX_18;
	// System.Single NoiseEffect::scratchY
	float ___scratchY_19;
};
