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

// Crease
struct  Crease_t1022510807_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Single Crease::intensity
	float ___intensity_5;
	// System.Int32 Crease::softness
	int32_t ___softness_6;
	// System.Single Crease::spread
	float ___spread_7;
	// UnityEngine.Shader Crease::blurShader
	Shader_t_796521790_0 * ___blurShader_8;
	// UnityEngine.Material Crease::blurMaterial
	Material_t139638856_0 * ___blurMaterial_9;
	// UnityEngine.Shader Crease::depthFetchShader
	Shader_t_796521790_0 * ___depthFetchShader_10;
	// UnityEngine.Material Crease::depthFetchMaterial
	Material_t139638856_0 * ___depthFetchMaterial_11;
	// UnityEngine.Shader Crease::creaseApplyShader
	Shader_t_796521790_0 * ___creaseApplyShader_12;
	// UnityEngine.Material Crease::creaseApplyMaterial
	Material_t139638856_0 * ___creaseApplyMaterial_13;
};
