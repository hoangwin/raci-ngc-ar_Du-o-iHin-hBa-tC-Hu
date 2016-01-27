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

// ImageEffects
struct ImageEffects_t386263060_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void ImageEffects::.ctor()
extern "C"  void ImageEffects__ctor_m1608680852_0 (ImageEffects_t386263060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void ImageEffects_RenderDistortion_m_1190595372_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___material, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, float ___angle, Vector2_t1869242736_0  ___center, Vector2_t1869242736_0  ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_Blit_m887457631_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_BlitWithMaterial_m_51895906_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___material, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
