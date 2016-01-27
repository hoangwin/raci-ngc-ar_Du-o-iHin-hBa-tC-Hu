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
#include "AssemblyU2DUnityScript_EdgeDetectMode_1206354905.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// EdgeDetectEffectNormals
struct  EdgeDetectEffectNormals_t_2146942721_0  : public PostEffectsBase_t_1357554507_0
{
	// EdgeDetectMode EdgeDetectEffectNormals::mode
	int32_t ___mode_5;
	// System.Single EdgeDetectEffectNormals::sensitivityDepth
	float ___sensitivityDepth_6;
	// System.Single EdgeDetectEffectNormals::sensitivityNormals
	float ___sensitivityNormals_7;
	// System.Single EdgeDetectEffectNormals::lumThreshhold
	float ___lumThreshhold_8;
	// System.Single EdgeDetectEffectNormals::edgeExp
	float ___edgeExp_9;
	// System.Single EdgeDetectEffectNormals::sampleDist
	float ___sampleDist_10;
	// System.Single EdgeDetectEffectNormals::edgesOnly
	float ___edgesOnly_11;
	// UnityEngine.Color EdgeDetectEffectNormals::edgesOnlyBgColor
	Color_t_2138957840_0  ___edgesOnlyBgColor_12;
	// UnityEngine.Shader EdgeDetectEffectNormals::edgeDetectShader
	Shader_t_796521790_0 * ___edgeDetectShader_13;
	// UnityEngine.Material EdgeDetectEffectNormals::edgeDetectMaterial
	Material_t139638856_0 * ___edgeDetectMaterial_14;
	// EdgeDetectMode EdgeDetectEffectNormals::oldMode
	int32_t ___oldMode_15;
};
