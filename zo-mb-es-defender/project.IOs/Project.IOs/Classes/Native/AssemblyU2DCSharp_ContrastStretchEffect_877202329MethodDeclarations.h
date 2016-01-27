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

// ContrastStretchEffect
struct ContrastStretchEffect_t_877202329_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Texture
struct Texture_t565265588_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ContrastStretchEffect::.ctor()
extern "C"  void ContrastStretchEffect__ctor_m_9364019_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialLum()
extern "C"  Material_t139638856_0 * ContrastStretchEffect_get_materialLum_m1725235222_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialReduce()
extern "C"  Material_t139638856_0 * ContrastStretchEffect_get_materialReduce_m1415151204_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialAdapt()
extern "C"  Material_t139638856_0 * ContrastStretchEffect_get_materialAdapt_m490470468_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ContrastStretchEffect::get_materialApply()
extern "C"  Material_t139638856_0 * ContrastStretchEffect_get_materialApply_m_2112405920_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::Start()
extern "C"  void ContrastStretchEffect_Start_m1338962757_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnEnable()
extern "C"  void ContrastStretchEffect_OnEnable_m77827141_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnDisable()
extern "C"  void ContrastStretchEffect_OnDisable_m_1563471490_0 (ContrastStretchEffect_t_877202329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretchEffect_OnRenderImage_m_919505091_0 (ContrastStretchEffect_t_877202329_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ContrastStretchEffect::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretchEffect_CalculateAdaptation_m904993548_0 (ContrastStretchEffect_t_877202329_0 * __this, Texture_t565265588_0 * ___curTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
