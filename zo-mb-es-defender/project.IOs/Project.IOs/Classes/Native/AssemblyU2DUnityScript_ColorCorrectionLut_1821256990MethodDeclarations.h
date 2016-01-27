#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ColorCorrectionLut
struct ColorCorrectionLut_t_1821256990_0;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ColorCorrectionLut::.ctor()
extern "C"  void ColorCorrectionLut__ctor_m419549142_0 (ColorCorrectionLut_t_1821256990_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::CheckResources()
extern "C"  bool ColorCorrectionLut_CheckResources_m1795425967_0 (ColorCorrectionLut_t_1821256990_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDisable()
extern "C"  void ColorCorrectionLut_OnDisable_m_540895387_0 (ColorCorrectionLut_t_1821256990_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnDestroy()
extern "C"  void ColorCorrectionLut_OnDestroy_m_3192145_0 (ColorCorrectionLut_t_1821256990_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::SetIdentityLut()
extern "C"  void ColorCorrectionLut_SetIdentityLut_m_839936835_0 (ColorCorrectionLut_t_1821256990_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorCorrectionLut::ValidDimensions(UnityEngine.Texture2D)
extern "C"  bool ColorCorrectionLut_ValidDimensions_m_1662515821_0 (ColorCorrectionLut_t_1821256990_0 * __this, Texture2D_t949651122_0 * ___tex2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Convert(UnityEngine.Texture2D,System.String)
extern "C"  void ColorCorrectionLut_Convert_m1182419375_0 (ColorCorrectionLut_t_1821256990_0 * __this, Texture2D_t949651122_0 * ___temp2DTex, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorCorrectionLut_OnRenderImage_m_2102621514_0 (ColorCorrectionLut_t_1821256990_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorCorrectionLut::Main()
extern "C"  void ColorCorrectionLut_Main_m1762727967_0 (ColorCorrectionLut_t_1821256990_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
