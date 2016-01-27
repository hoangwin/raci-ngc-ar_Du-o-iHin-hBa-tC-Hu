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
#include "AssemblyU2DUnityScript_TweakMode34_839089290.h"
#include "AssemblyU2DUnityScript_BloomScreenBlendMode167190385.h"
#include "AssemblyU2DUnityScript_HDRBloomMode_1710341712.h"
#include "AssemblyU2DUnityScript_LensflareStyle34478235220.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// BloomAndLensFlares
struct  BloomAndLensFlares_t11720131_0  : public PostEffectsBase_t_1357554507_0
{
	// TweakMode34 BloomAndLensFlares::tweakMode
	int32_t ___tweakMode_5;
	// BloomScreenBlendMode BloomAndLensFlares::screenBlendMode
	int32_t ___screenBlendMode_6;
	// HDRBloomMode BloomAndLensFlares::hdr
	int32_t ___hdr_7;
	// System.Boolean BloomAndLensFlares::doHdr
	bool ___doHdr_8;
	// System.Single BloomAndLensFlares::sepBlurSpread
	float ___sepBlurSpread_9;
	// System.Single BloomAndLensFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_10;
	// System.Single BloomAndLensFlares::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single BloomAndLensFlares::bloomThreshhold
	float ___bloomThreshhold_12;
	// System.Int32 BloomAndLensFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_13;
	// System.Boolean BloomAndLensFlares::lensflares
	bool ___lensflares_14;
	// System.Int32 BloomAndLensFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// LensflareStyle34 BloomAndLensFlares::lensflareMode
	int32_t ___lensflareMode_16;
	// System.Single BloomAndLensFlares::hollyStretchWidth
	float ___hollyStretchWidth_17;
	// System.Single BloomAndLensFlares::lensflareIntensity
	float ___lensflareIntensity_18;
	// System.Single BloomAndLensFlares::lensflareThreshhold
	float ___lensflareThreshhold_19;
	// UnityEngine.Color BloomAndLensFlares::flareColorA
	Color_t_2138957840_0  ___flareColorA_20;
	// UnityEngine.Color BloomAndLensFlares::flareColorB
	Color_t_2138957840_0  ___flareColorB_21;
	// UnityEngine.Color BloomAndLensFlares::flareColorC
	Color_t_2138957840_0  ___flareColorC_22;
	// UnityEngine.Color BloomAndLensFlares::flareColorD
	Color_t_2138957840_0  ___flareColorD_23;
	// System.Single BloomAndLensFlares::blurWidth
	float ___blurWidth_24;
	// UnityEngine.Texture2D BloomAndLensFlares::lensFlareVignetteMask
	Texture2D_t949651122_0 * ___lensFlareVignetteMask_25;
	// UnityEngine.Shader BloomAndLensFlares::lensFlareShader
	Shader_t_796521790_0 * ___lensFlareShader_26;
	// UnityEngine.Material BloomAndLensFlares::lensFlareMaterial
	Material_t139638856_0 * ___lensFlareMaterial_27;
	// UnityEngine.Shader BloomAndLensFlares::vignetteShader
	Shader_t_796521790_0 * ___vignetteShader_28;
	// UnityEngine.Material BloomAndLensFlares::vignetteMaterial
	Material_t139638856_0 * ___vignetteMaterial_29;
	// UnityEngine.Shader BloomAndLensFlares::separableBlurShader
	Shader_t_796521790_0 * ___separableBlurShader_30;
	// UnityEngine.Material BloomAndLensFlares::separableBlurMaterial
	Material_t139638856_0 * ___separableBlurMaterial_31;
	// UnityEngine.Shader BloomAndLensFlares::addBrightStuffOneOneShader
	Shader_t_796521790_0 * ___addBrightStuffOneOneShader_32;
	// UnityEngine.Material BloomAndLensFlares::addBrightStuffBlendOneOneMaterial
	Material_t139638856_0 * ___addBrightStuffBlendOneOneMaterial_33;
	// UnityEngine.Shader BloomAndLensFlares::screenBlendShader
	Shader_t_796521790_0 * ___screenBlendShader_34;
	// UnityEngine.Material BloomAndLensFlares::screenBlend
	Material_t139638856_0 * ___screenBlend_35;
	// UnityEngine.Shader BloomAndLensFlares::hollywoodFlaresShader
	Shader_t_796521790_0 * ___hollywoodFlaresShader_36;
	// UnityEngine.Material BloomAndLensFlares::hollywoodFlaresMaterial
	Material_t139638856_0 * ___hollywoodFlaresMaterial_37;
	// UnityEngine.Shader BloomAndLensFlares::brightPassFilterShader
	Shader_t_796521790_0 * ___brightPassFilterShader_38;
	// UnityEngine.Material BloomAndLensFlares::brightPassFilterMaterial
	Material_t139638856_0 * ___brightPassFilterMaterial_39;
};
