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

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// GlowEffect
struct  GlowEffect_t_217326503_0  : public MonoBehaviour_t279269927_0
{
	// System.Single GlowEffect::glowIntensity
	float ___glowIntensity_2;
	// System.Int32 GlowEffect::blurIterations
	int32_t ___blurIterations_3;
	// System.Single GlowEffect::blurSpread
	float ___blurSpread_4;
	// UnityEngine.Color GlowEffect::glowTint
	Color_t_2138957840_0  ___glowTint_5;
	// UnityEngine.Shader GlowEffect::compositeShader
	Shader_t_796521790_0 * ___compositeShader_6;
	// UnityEngine.Material GlowEffect::m_CompositeMaterial
	Material_t139638856_0 * ___m_CompositeMaterial_7;
	// UnityEngine.Shader GlowEffect::blurShader
	Shader_t_796521790_0 * ___blurShader_8;
	// UnityEngine.Material GlowEffect::m_BlurMaterial
	Material_t139638856_0 * ___m_BlurMaterial_9;
	// UnityEngine.Shader GlowEffect::downsampleShader
	Shader_t_796521790_0 * ___downsampleShader_10;
	// UnityEngine.Material GlowEffect::m_DownsampleMaterial
	Material_t139638856_0 * ___m_DownsampleMaterial_11;
};
