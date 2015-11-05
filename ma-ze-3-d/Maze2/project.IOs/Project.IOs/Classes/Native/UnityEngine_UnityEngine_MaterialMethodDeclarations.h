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

// UnityEngine.Material
struct Material_t9;
// UnityEngine.Texture
struct Texture_t29;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" void Material__ctor_m2879 (Material_t9 * __this, Material_t9 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" Color_t26  Material_get_color_m926 (Material_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" void Material_set_color_m931 (Material_t9 * __this, Color_t26  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" Texture_t29 * Material_get_mainTexture_m2691 (Material_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" void Material_SetColor_m966 (Material_t9 * __this, String_t* ___propertyName, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C" void Material_SetColor_m3293 (Material_t9 * __this, int32_t ___nameID, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C" void Material_INTERNAL_CALL_SetColor_m3294 (Object_t * __this /* static, unused */, Material_t9 * ___self, int32_t ___nameID, Color_t26 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C" Color_t26  Material_GetColor_m949 (Material_t9 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C" Color_t26  Material_GetColor_m3295 (Material_t9 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C" Texture_t29 * Material_GetTexture_m3296 (Material_t9 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C" Texture_t29 * Material_GetTexture_m3297 (Material_t9 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" void Material_SetFloat_m3298 (Material_t9 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" void Material_SetFloat_m3299 (Material_t9 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" void Material_SetInt_m2881 (Material_t9 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C" bool Material_HasProperty_m2877 (Material_t9 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C" bool Material_HasProperty_m3300 (Material_t9 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C" void Material_Internal_CreateWithMaterial_m3301 (Object_t * __this /* static, unused */, Material_t9 * ___mono, Material_t9 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
