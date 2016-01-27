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

// BlurEffect
struct  BlurEffect_t1996055199_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 BlurEffect::iterations
	int32_t ___iterations_2;
	// System.Single BlurEffect::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Shader BlurEffect::blurShader
	Shader_t_796521790_0 * ___blurShader_4;
};
struct BlurEffect_t1996055199_0_StaticFields{
	// UnityEngine.Material BlurEffect::m_Material
	Material_t139638856_0 * ___m_Material_5;
};
