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
#include "AssemblyU2DUnityScript_ScreenOverlay_OverlayBlendMo_15037459.h"

// ScreenOverlay
struct  ScreenOverlay_t_663319766_0  : public PostEffectsBase_t_1357554507_0
{
	// ScreenOverlay/OverlayBlendMode ScreenOverlay::blendMode
	int32_t ___blendMode_5;
	// System.Single ScreenOverlay::intensity
	float ___intensity_6;
	// UnityEngine.Texture2D ScreenOverlay::texture
	Texture2D_t949651122_0 * ___texture_7;
	// UnityEngine.Shader ScreenOverlay::overlayShader
	Shader_t_796521790_0 * ___overlayShader_8;
	// UnityEngine.Material ScreenOverlay::overlayMaterial
	Material_t139638856_0 * ___overlayMaterial_9;
};
