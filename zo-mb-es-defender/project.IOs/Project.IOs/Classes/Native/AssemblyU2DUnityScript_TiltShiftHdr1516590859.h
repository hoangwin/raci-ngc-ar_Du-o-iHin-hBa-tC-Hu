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
#include "AssemblyU2DUnityScript_TiltShiftHdr_TiltShiftMode_1782028578.h"
#include "AssemblyU2DUnityScript_TiltShiftHdr_TiltShiftQual_1946659058.h"

// TiltShiftHdr
struct  TiltShiftHdr_t1516590859_0  : public PostEffectsBase_t_1357554507_0
{
	// TiltShiftHdr/TiltShiftMode TiltShiftHdr::mode
	int32_t ___mode_5;
	// TiltShiftHdr/TiltShiftQuality TiltShiftHdr::quality
	int32_t ___quality_6;
	// System.Single TiltShiftHdr::blurArea
	float ___blurArea_7;
	// System.Single TiltShiftHdr::maxBlurSize
	float ___maxBlurSize_8;
	// System.Int32 TiltShiftHdr::downsample
	int32_t ___downsample_9;
	// UnityEngine.Shader TiltShiftHdr::tiltShiftShader
	Shader_t_796521790_0 * ___tiltShiftShader_10;
	// UnityEngine.Material TiltShiftHdr::tiltShiftMaterial
	Material_t139638856_0 * ___tiltShiftMaterial_11;
};
