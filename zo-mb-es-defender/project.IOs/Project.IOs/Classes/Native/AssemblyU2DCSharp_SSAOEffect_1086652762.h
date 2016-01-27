#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "AssemblyU2DCSharp_SSAOEffect_SSAOSamples_1216419288.h"

// SSAOEffect
struct  SSAOEffect_t_1086652762_0  : public MonoBehaviour_t279269927_0
{
	// System.Single SSAOEffect::m_Radius
	float ___m_Radius_2;
	// SSAOEffect/SSAOSamples SSAOEffect::m_SampleCount
	int32_t ___m_SampleCount_3;
	// System.Single SSAOEffect::m_OcclusionIntensity
	float ___m_OcclusionIntensity_4;
	// System.Int32 SSAOEffect::m_Blur
	int32_t ___m_Blur_5;
	// System.Int32 SSAOEffect::m_Downsampling
	int32_t ___m_Downsampling_6;
	// System.Single SSAOEffect::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_7;
	// System.Single SSAOEffect::m_MinZ
	float ___m_MinZ_8;
	// UnityEngine.Shader SSAOEffect::m_SSAOShader
	Shader_t_796521790_0 * ___m_SSAOShader_9;
	// UnityEngine.Material SSAOEffect::m_SSAOMaterial
	Material_t139638856_0 * ___m_SSAOMaterial_10;
	// UnityEngine.Texture2D SSAOEffect::m_RandomTexture
	Texture2D_t949651122_0 * ___m_RandomTexture_11;
	// System.Boolean SSAOEffect::m_Supported
	bool ___m_Supported_12;
};
