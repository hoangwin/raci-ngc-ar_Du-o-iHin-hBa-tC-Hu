#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t1609726178_0;
struct AnimationCurve_t1609726178_0_marshaled;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"
#include "AssemblyU2DUnityScript_Tonemapping_TonemapperType_246480820.h"
#include "AssemblyU2DUnityScript_Tonemapping_AdaptiveTexSize_73096391.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat_1346956291.h"

// Tonemapping
struct  Tonemapping_t_300300388_0  : public PostEffectsBase_t_1357554507_0
{
	// Tonemapping/TonemapperType Tonemapping::type
	int32_t ___type_5;
	// Tonemapping/AdaptiveTexSize Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_6;
	// UnityEngine.AnimationCurve Tonemapping::remapCurve
	AnimationCurve_t1609726178_0 * ___remapCurve_7;
	// UnityEngine.Texture2D Tonemapping::curveTex
	Texture2D_t949651122_0 * ___curveTex_8;
	// System.Single Tonemapping::exposureAdjustment
	float ___exposureAdjustment_9;
	// System.Single Tonemapping::middleGrey
	float ___middleGrey_10;
	// System.Single Tonemapping::white
	float ___white_11;
	// System.Single Tonemapping::adaptionSpeed
	float ___adaptionSpeed_12;
	// UnityEngine.Shader Tonemapping::tonemapper
	Shader_t_796521790_0 * ___tonemapper_13;
	// System.Boolean Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_14;
	// UnityEngine.Material Tonemapping::tonemapMaterial
	Material_t139638856_0 * ___tonemapMaterial_15;
	// UnityEngine.RenderTexture Tonemapping::rt
	RenderTexture_t_253031098_0 * ___rt_16;
	// UnityEngine.RenderTextureFormat Tonemapping::rtFormat
	int32_t ___rtFormat_17;
};
