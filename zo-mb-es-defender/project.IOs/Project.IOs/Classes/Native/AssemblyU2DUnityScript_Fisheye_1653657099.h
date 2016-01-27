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

// Fisheye
struct  Fisheye_t_1653657099_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Single Fisheye::strengthX
	float ___strengthX_5;
	// System.Single Fisheye::strengthY
	float ___strengthY_6;
	// UnityEngine.Shader Fisheye::fishEyeShader
	Shader_t_796521790_0 * ___fishEyeShader_7;
	// UnityEngine.Material Fisheye::fisheyeMaterial
	Material_t139638856_0 * ___fisheyeMaterial_8;
};
