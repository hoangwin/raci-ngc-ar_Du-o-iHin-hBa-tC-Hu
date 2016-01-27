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
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"
#include "AssemblyU2DUnityScript_Dof34QualitySetting75691825.h"
#include "AssemblyU2DUnityScript_DofResolution_1954884957.h"
#include "AssemblyU2DUnityScript_DofBlurriness51344392.h"
#include "AssemblyU2DUnityScript_BokehDestination429231147.h"

// DepthOfField34
struct  DepthOfField34_t_18913443_0  : public PostEffectsBase_t_1357554507_0
{
	// Dof34QualitySetting DepthOfField34::quality
	int32_t ___quality_7;
	// DofResolution DepthOfField34::resolution
	int32_t ___resolution_8;
	// System.Boolean DepthOfField34::simpleTweakMode
	bool ___simpleTweakMode_9;
	// System.Single DepthOfField34::focalPoint
	float ___focalPoint_10;
	// System.Single DepthOfField34::smoothness
	float ___smoothness_11;
	// System.Single DepthOfField34::focalZDistance
	float ___focalZDistance_12;
	// System.Single DepthOfField34::focalZStartCurve
	float ___focalZStartCurve_13;
	// System.Single DepthOfField34::focalZEndCurve
	float ___focalZEndCurve_14;
	// System.Single DepthOfField34::focalStartCurve
	float ___focalStartCurve_15;
	// System.Single DepthOfField34::focalEndCurve
	float ___focalEndCurve_16;
	// System.Single DepthOfField34::focalDistance01
	float ___focalDistance01_17;
	// UnityEngine.Transform DepthOfField34::objectFocus
	Transform_t_495934667_0 * ___objectFocus_18;
	// System.Single DepthOfField34::focalSize
	float ___focalSize_19;
	// DofBlurriness DepthOfField34::bluriness
	int32_t ___bluriness_20;
	// System.Single DepthOfField34::maxBlurSpread
	float ___maxBlurSpread_21;
	// System.Single DepthOfField34::foregroundBlurExtrude
	float ___foregroundBlurExtrude_22;
	// UnityEngine.Shader DepthOfField34::dofBlurShader
	Shader_t_796521790_0 * ___dofBlurShader_23;
	// UnityEngine.Material DepthOfField34::dofBlurMaterial
	Material_t139638856_0 * ___dofBlurMaterial_24;
	// UnityEngine.Shader DepthOfField34::dofShader
	Shader_t_796521790_0 * ___dofShader_25;
	// UnityEngine.Material DepthOfField34::dofMaterial
	Material_t139638856_0 * ___dofMaterial_26;
	// System.Boolean DepthOfField34::visualize
	bool ___visualize_27;
	// BokehDestination DepthOfField34::bokehDestination
	int32_t ___bokehDestination_28;
	// System.Single DepthOfField34::widthOverHeight
	float ___widthOverHeight_29;
	// System.Single DepthOfField34::oneOverBaseSize
	float ___oneOverBaseSize_30;
	// System.Boolean DepthOfField34::bokeh
	bool ___bokeh_31;
	// System.Boolean DepthOfField34::bokehSupport
	bool ___bokehSupport_32;
	// UnityEngine.Shader DepthOfField34::bokehShader
	Shader_t_796521790_0 * ___bokehShader_33;
	// UnityEngine.Texture2D DepthOfField34::bokehTexture
	Texture2D_t949651122_0 * ___bokehTexture_34;
	// System.Single DepthOfField34::bokehScale
	float ___bokehScale_35;
	// System.Single DepthOfField34::bokehIntensity
	float ___bokehIntensity_36;
	// System.Single DepthOfField34::bokehThreshholdContrast
	float ___bokehThreshholdContrast_37;
	// System.Single DepthOfField34::bokehThreshholdLuminance
	float ___bokehThreshholdLuminance_38;
	// System.Int32 DepthOfField34::bokehDownsample
	int32_t ___bokehDownsample_39;
	// UnityEngine.Material DepthOfField34::bokehMaterial
	Material_t139638856_0 * ___bokehMaterial_40;
	// UnityEngine.RenderTexture DepthOfField34::foregroundTexture
	RenderTexture_t_253031098_0 * ___foregroundTexture_41;
	// UnityEngine.RenderTexture DepthOfField34::mediumRezWorkTexture
	RenderTexture_t_253031098_0 * ___mediumRezWorkTexture_42;
	// UnityEngine.RenderTexture DepthOfField34::finalDefocus
	RenderTexture_t_253031098_0 * ___finalDefocus_43;
	// UnityEngine.RenderTexture DepthOfField34::lowRezWorkTexture
	RenderTexture_t_253031098_0 * ___lowRezWorkTexture_44;
	// UnityEngine.RenderTexture DepthOfField34::bokehSource
	RenderTexture_t_253031098_0 * ___bokehSource_45;
	// UnityEngine.RenderTexture DepthOfField34::bokehSource2
	RenderTexture_t_253031098_0 * ___bokehSource2_46;
};
struct DepthOfField34_t_18913443_0_StaticFields{
	// System.Int32 DepthOfField34::SMOOTH_DOWNSAMPLE_PASS
	int32_t ___SMOOTH_DOWNSAMPLE_PASS_5;
	// System.Single DepthOfField34::BOKEH_EXTRA_BLUR
	float ___BOKEH_EXTRA_BLUR_6;
};
