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
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t884311390_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"
#include "AssemblyU2DUnityScript_DepthOfFieldScatter_BlurTyp1658842848.h"
#include "AssemblyU2DUnityScript_DepthOfFieldScatter_BlurSam_254306277.h"

// DepthOfFieldScatter
struct  DepthOfFieldScatter_t_1587399172_0  : public PostEffectsBase_t_1357554507_0
{
	// System.Boolean DepthOfFieldScatter::visualizeFocus
	bool ___visualizeFocus_5;
	// System.Single DepthOfFieldScatter::focalLength
	float ___focalLength_6;
	// System.Single DepthOfFieldScatter::focalSize
	float ___focalSize_7;
	// System.Single DepthOfFieldScatter::aperture
	float ___aperture_8;
	// UnityEngine.Transform DepthOfFieldScatter::focalTransform
	Transform_t_495934667_0 * ___focalTransform_9;
	// System.Single DepthOfFieldScatter::maxBlurSize
	float ___maxBlurSize_10;
	// System.Boolean DepthOfFieldScatter::highResolution
	bool ___highResolution_11;
	// DepthOfFieldScatter/BlurType DepthOfFieldScatter::blurType
	int32_t ___blurType_12;
	// DepthOfFieldScatter/BlurSampleCount DepthOfFieldScatter::blurSampleCount
	int32_t ___blurSampleCount_13;
	// System.Boolean DepthOfFieldScatter::nearBlur
	bool ___nearBlur_14;
	// System.Single DepthOfFieldScatter::foregroundOverlap
	float ___foregroundOverlap_15;
	// UnityEngine.Shader DepthOfFieldScatter::dofHdrShader
	Shader_t_796521790_0 * ___dofHdrShader_16;
	// UnityEngine.Material DepthOfFieldScatter::dofHdrMaterial
	Material_t139638856_0 * ___dofHdrMaterial_17;
	// UnityEngine.Shader DepthOfFieldScatter::dx11BokehShader
	Shader_t_796521790_0 * ___dx11BokehShader_18;
	// UnityEngine.Material DepthOfFieldScatter::dx11bokehMaterial
	Material_t139638856_0 * ___dx11bokehMaterial_19;
	// System.Single DepthOfFieldScatter::dx11BokehThreshhold
	float ___dx11BokehThreshhold_20;
	// System.Single DepthOfFieldScatter::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_21;
	// UnityEngine.Texture2D DepthOfFieldScatter::dx11BokehTexture
	Texture2D_t949651122_0 * ___dx11BokehTexture_22;
	// System.Single DepthOfFieldScatter::dx11BokehScale
	float ___dx11BokehScale_23;
	// System.Single DepthOfFieldScatter::dx11BokehIntensity
	float ___dx11BokehIntensity_24;
	// System.Single DepthOfFieldScatter::focalDistance01
	float ___focalDistance01_25;
	// UnityEngine.ComputeBuffer DepthOfFieldScatter::cbDrawArgs
	ComputeBuffer_t884311390_0 * ___cbDrawArgs_26;
	// UnityEngine.ComputeBuffer DepthOfFieldScatter::cbPoints
	ComputeBuffer_t884311390_0 * ___cbPoints_27;
	// System.Single DepthOfFieldScatter::internalBlurWidth
	float ___internalBlurWidth_28;
};
