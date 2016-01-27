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

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"
#include "AssemblyU2DUnityScript_Vignetting_AberrationMode_1631608836.h"

// Vignetting
struct  Vignetting_t_415457565_0  : public PostEffectsBase_t_1357554507_0
{
	// Vignetting/AberrationMode Vignetting::mode
	int32_t ___mode_5;
	// System.Single Vignetting::intensity
	float ___intensity_6;
	// System.Single Vignetting::chromaticAberration
	float ___chromaticAberration_7;
	// System.Single Vignetting::axialAberration
	float ___axialAberration_8;
	// System.Single Vignetting::blur
	float ___blur_9;
	// System.Single Vignetting::blurSpread
	float ___blurSpread_10;
	// System.Single Vignetting::luminanceDependency
	float ___luminanceDependency_11;
	// System.Single Vignetting::blurDistance
	float ___blurDistance_12;
	// UnityEngine.Shader Vignetting::vignetteShader
	Shader_t_796521790_0 * ___vignetteShader_13;
	// UnityEngine.Material Vignetting::vignetteMaterial
	Material_t139638856_0 * ___vignetteMaterial_14;
	// UnityEngine.Shader Vignetting::separableBlurShader
	Shader_t_796521790_0 * ___separableBlurShader_15;
	// UnityEngine.Material Vignetting::separableBlurMaterial
	Material_t139638856_0 * ___separableBlurMaterial_16;
	// UnityEngine.Shader Vignetting::chromAberrationShader
	Shader_t_796521790_0 * ___chromAberrationShader_17;
	// UnityEngine.Material Vignetting::chromAberrationMaterial
	Material_t139638856_0 * ___chromAberrationMaterial_18;
};
