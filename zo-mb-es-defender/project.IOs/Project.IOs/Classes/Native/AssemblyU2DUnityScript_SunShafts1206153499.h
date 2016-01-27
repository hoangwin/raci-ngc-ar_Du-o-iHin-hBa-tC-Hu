#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t_495934667_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"
#include "AssemblyU2DUnityScript_SunShaftsResolution1962693569.h"
#include "AssemblyU2DUnityScript_ShaftsScreenBlendMode_1897625207.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// SunShafts
struct  SunShafts_t1206153499_0  : public PostEffectsBase_t_1357554507_0
{
	// SunShaftsResolution SunShafts::resolution
	int32_t ___resolution_5;
	// ShaftsScreenBlendMode SunShafts::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityEngine.Transform SunShafts::sunTransform
	Transform_t_495934667_0 * ___sunTransform_7;
	// System.Int32 SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_8;
	// UnityEngine.Color SunShafts::sunColor
	Color_t_2138957840_0  ___sunColor_9;
	// System.Single SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_10;
	// System.Single SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_11;
	// System.Single SunShafts::useSkyBoxAlpha
	float ___useSkyBoxAlpha_12;
	// System.Single SunShafts::maxRadius
	float ___maxRadius_13;
	// System.Boolean SunShafts::useDepthTexture
	bool ___useDepthTexture_14;
	// UnityEngine.Shader SunShafts::sunShaftsShader
	Shader_t_796521790_0 * ___sunShaftsShader_15;
	// UnityEngine.Material SunShafts::sunShaftsMaterial
	Material_t139638856_0 * ___sunShaftsMaterial_16;
	// UnityEngine.Shader SunShafts::simpleClearShader
	Shader_t_796521790_0 * ___simpleClearShader_17;
	// UnityEngine.Material SunShafts::simpleClearMaterial
	Material_t139638856_0 * ___simpleClearMaterial_18;
};
