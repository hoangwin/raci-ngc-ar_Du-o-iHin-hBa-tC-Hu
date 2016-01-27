#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t_1814262519_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// ContrastStretchEffect
struct  ContrastStretchEffect_t_877202329_0  : public MonoBehaviour_t279269927_0
{
	// System.Single ContrastStretchEffect::adaptationSpeed
	float ___adaptationSpeed_2;
	// System.Single ContrastStretchEffect::limitMinimum
	float ___limitMinimum_3;
	// System.Single ContrastStretchEffect::limitMaximum
	float ___limitMaximum_4;
	// UnityEngine.RenderTexture[] ContrastStretchEffect::adaptRenderTex
	RenderTextureU5BU5D_t_1814262519_0* ___adaptRenderTex_5;
	// System.Int32 ContrastStretchEffect::curAdaptIndex
	int32_t ___curAdaptIndex_6;
	// UnityEngine.Shader ContrastStretchEffect::shaderLum
	Shader_t_796521790_0 * ___shaderLum_7;
	// UnityEngine.Material ContrastStretchEffect::m_materialLum
	Material_t139638856_0 * ___m_materialLum_8;
	// UnityEngine.Shader ContrastStretchEffect::shaderReduce
	Shader_t_796521790_0 * ___shaderReduce_9;
	// UnityEngine.Material ContrastStretchEffect::m_materialReduce
	Material_t139638856_0 * ___m_materialReduce_10;
	// UnityEngine.Shader ContrastStretchEffect::shaderAdapt
	Shader_t_796521790_0 * ___shaderAdapt_11;
	// UnityEngine.Material ContrastStretchEffect::m_materialAdapt
	Material_t139638856_0 * ___m_materialAdapt_12;
	// UnityEngine.Shader ContrastStretchEffect::shaderApply
	Shader_t_796521790_0 * ___shaderApply_13;
	// UnityEngine.Material ContrastStretchEffect::m_materialApply
	Material_t139638856_0 * ___m_materialApply_14;
};
