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
#include "AssemblyU2DUnityScript_Blur_BlurType1148072495.h"

// Blur
struct  Blur_t_160696187_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Int32 Blur::downsample
	int32_t ___downsample_5;
	// System.Single Blur::blurSize
	float ___blurSize_6;
	// System.Int32 Blur::blurIterations
	int32_t ___blurIterations_7;
	// Blur/BlurType Blur::blurType
	int32_t ___blurType_8;
	// UnityEngine.Shader Blur::blurShader
	Shader_t_796521790_0 * ___blurShader_9;
	// UnityEngine.Material Blur::blurMaterial
	Material_t139638856_0 * ___blurMaterial_10;
};
