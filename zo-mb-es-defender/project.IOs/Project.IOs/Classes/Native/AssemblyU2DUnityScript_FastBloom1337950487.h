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
#include "AssemblyU2DUnityScript_FastBloom_Resolution1865368510.h"
#include "AssemblyU2DUnityScript_FastBloom_BlurType_1577067043.h"

// FastBloom
struct  FastBloom_t1337950487_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Single FastBloom::threshhold
	float ___threshhold_5;
	// System.Single FastBloom::intensity
	float ___intensity_6;
	// System.Single FastBloom::blurSize
	float ___blurSize_7;
	// FastBloom/Resolution FastBloom::resolution
	int32_t ___resolution_8;
	// System.Int32 FastBloom::blurIterations
	int32_t ___blurIterations_9;
	// FastBloom/BlurType FastBloom::blurType
	int32_t ___blurType_10;
	// UnityEngine.Shader FastBloom::fastBloomShader
	Shader_t_796521790_0 * ___fastBloomShader_11;
	// UnityEngine.Material FastBloom::fastBloomMaterial
	Material_t139638856_0 * ___fastBloomMaterial_12;
};
