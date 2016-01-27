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
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_FilterMode2131091914.h"

// NoiseAndGrain
struct  NoiseAndGrain_t422678400_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Single NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_5;
	// System.Single NoiseAndGrain::generalIntensity
	float ___generalIntensity_6;
	// System.Single NoiseAndGrain::blackIntensity
	float ___blackIntensity_7;
	// System.Single NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_8;
	// System.Single NoiseAndGrain::midGrey
	float ___midGrey_9;
	// System.Boolean NoiseAndGrain::dx11Grain
	bool ___dx11Grain_10;
	// System.Single NoiseAndGrain::softness
	float ___softness_11;
	// System.Boolean NoiseAndGrain::monochrome
	bool ___monochrome_12;
	// UnityEngine.Vector3 NoiseAndGrain::intensities
	Vector3_t303158795_0  ___intensities_13;
	// UnityEngine.Vector3 NoiseAndGrain::tiling
	Vector3_t303158795_0  ___tiling_14;
	// System.Single NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_15;
	// UnityEngine.FilterMode NoiseAndGrain::filterMode
	int32_t ___filterMode_16;
	// UnityEngine.Texture2D NoiseAndGrain::noiseTexture
	Texture2D_t949651122_0 * ___noiseTexture_17;
	// UnityEngine.Shader NoiseAndGrain::noiseShader
	Shader_t_796521790_0 * ___noiseShader_18;
	// UnityEngine.Material NoiseAndGrain::noiseMaterial
	Material_t139638856_0 * ___noiseMaterial_19;
	// UnityEngine.Shader NoiseAndGrain::dx11NoiseShader
	Shader_t_796521790_0 * ___dx11NoiseShader_20;
	// UnityEngine.Material NoiseAndGrain::dx11NoiseMaterial
	Material_t139638856_0 * ___dx11NoiseMaterial_21;
};
struct NoiseAndGrain_t422678400_0_StaticFields{
	// System.Single NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_22;
};
