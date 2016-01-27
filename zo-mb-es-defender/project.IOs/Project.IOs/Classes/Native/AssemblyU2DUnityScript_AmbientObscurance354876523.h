#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t949651122_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"

// AmbientObscurance
struct  AmbientObscurance_t354876523_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Single AmbientObscurance::intensity
	float ___intensity_5;
	// System.Single AmbientObscurance::radius
	float ___radius_6;
	// System.Int32 AmbientObscurance::blurIterations
	int32_t ___blurIterations_7;
	// System.Single AmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_8;
	// System.Int32 AmbientObscurance::downsample
	int32_t ___downsample_9;
	// UnityEngine.Texture2D AmbientObscurance::rand
	Texture2D_t949651122_0 * ___rand_10;
	// UnityEngine.Shader AmbientObscurance::aoShader
	Shader_t_796521790_0 * ___aoShader_11;
	// UnityEngine.Material AmbientObscurance::aoMaterial
	Material_t139638856_0 * ___aoMaterial_12;
};
