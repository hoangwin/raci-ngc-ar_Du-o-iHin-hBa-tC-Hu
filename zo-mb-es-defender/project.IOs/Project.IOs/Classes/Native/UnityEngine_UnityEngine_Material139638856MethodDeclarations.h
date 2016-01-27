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
struct Material_t139638856_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Texture
struct Texture_t565265588_0;
// System.String
struct String_t;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t884311390_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"
#include "UnityEngine_UnityEngine_Vector4706443322.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Matrix4x4_394013416.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m1897560860_0 (Material_t139638856_0 * __this, Shader_t_796521790_0 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m816063758_0 (Material_t139638856_0 * __this, Material_t139638856_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C"  Shader_t_796521790_0 * Material_get_shader_m_1974480429_0 (Material_t139638856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t_2138957840_0  Material_get_color_m668215843_0 (Material_t139638856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m577844242_0 (Material_t139638856_0 * __this, Color_t_2138957840_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t565265588_0 * Material_get_mainTexture_m1469483014_0 (Material_t139638856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m650857509_0 (Material_t139638856_0 * __this, String_t* ___propertyName, Color_t_2138957840_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m1191533068_0 (Material_t139638856_0 * __this, int32_t ___nameID, Color_t_2138957840_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m1364511001_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___self, int32_t ___nameID, Color_t_2138957840_0 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t_2138957840_0  Material_GetColor_m_1968196122_0 (Material_t139638856_0 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C"  Color_t_2138957840_0  Material_GetColor_m_1326006675_0 (Material_t139638856_0 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_GetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_GetColor_m558759949_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___self, int32_t ___nameID, Color_t_2138957840_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m_996567899_0 (Material_t139638856_0 * __this, String_t* ___propertyName, Vector4_t706443322_0  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m141095205_0 (Material_t139638856_0 * __this, String_t* ___propertyName, Texture_t565265588_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m58378708_0 (Material_t139638856_0 * __this, int32_t ___nameID, Texture_t565265588_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t565265588_0 * Material_GetTexture_m1257877102_0 (Material_t139638856_0 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t565265588_0 * Material_GetTexture_m648312929_0 (Material_t139638856_0 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m_1210597936_0 (Material_t139638856_0 * __this, String_t* ___propertyName, Vector2_t1869242736_0  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m_42049909_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___self, String_t* ___propertyName, Vector2_t1869242736_0 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m1387972957_0 (Material_t139638856_0 * __this, String_t* ___propertyName, Matrix4x4_t55839158_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m819317148_0 (Material_t139638856_0 * __this, int32_t ___nameID, Matrix4x4_t55839158_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C"  void Material_INTERNAL_CALL_SetMatrix_m1389870997_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___self, int32_t ___nameID, Matrix4x4_t55839158_0 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m1926275467_0 (Material_t139638856_0 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m953675160_0 (Material_t139638856_0 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m562167742_0 (Material_t139638856_0 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern "C"  void Material_SetBuffer_m483625040_0 (Material_t139638856_0 * __this, String_t* ___propertyName, ComputeBuffer_t884311390_0 * ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m_599814165_0 (Material_t139638856_0 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m_1119454494_0 (Material_t139638856_0 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_passCount()
extern "C"  int32_t Material_get_passCount_m1778920671_0 (Material_t139638856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m_1846027030_0 (Material_t139638856_0 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void Material_Internal_CreateWithShader_m_265585333_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___mono, Shader_t_796521790_0 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m_1387369845_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___mono, Material_t139638856_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m_1788252888_0 (Material_t139638856_0 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m_1013500797_0 (Material_t139638856_0 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
