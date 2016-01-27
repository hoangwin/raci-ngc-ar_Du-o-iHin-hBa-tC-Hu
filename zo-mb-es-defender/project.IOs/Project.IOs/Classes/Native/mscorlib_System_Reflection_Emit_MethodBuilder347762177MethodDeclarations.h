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

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t347762177_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_2042175207_0;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.Module
struct Module_t_1368739742_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle181715016.h"
#include "mscorlib_System_Reflection_MethodAttributes_1474330254.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C"  bool MethodBuilder_get_ContainsGenericParameters_m138212064_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t181715016_0  MethodBuilder_get_MethodHandle_m_800696046_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C"  Type_t * MethodBuilder_get_ReturnType_m446668188_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C"  Type_t * MethodBuilder_get_ReflectedType_m1320609136_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C"  Type_t * MethodBuilder_get_DeclaringType_m_1560759705_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C"  String_t* MethodBuilder_get_Name_m845253610_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C"  int32_t MethodBuilder_get_Attributes_m_616905958_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C"  int32_t MethodBuilder_get_CallingConvention_m_409922392_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C"  MethodInfo_t * MethodBuilder_GetBaseDefinition_m774166361_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t_2042175207_0* MethodBuilder_GetParameters_m_858650213_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C"  int32_t MethodBuilder_GetParameterCount_m467267889_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * MethodBuilder_Invoke_m1874904900_0 (MethodBuilder_t347762177_0 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___parameters, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool MethodBuilder_IsDefined_m723964180_0 (MethodBuilder_t347762177_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MethodBuilder_GetCustomAttributes_m923430117_0 (MethodBuilder_t347762177_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MethodBuilder_GetCustomAttributes_m454145582_0 (MethodBuilder_t347762177_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::check_override()
extern "C"  void MethodBuilder_check_override_m_1252621492_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::fixup()
extern "C"  void MethodBuilder_fixup_m_76986135_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C"  String_t* MethodBuilder_ToString_m2051053888_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C"  bool MethodBuilder_Equals_m1205580640_0 (MethodBuilder_t347762177_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C"  int32_t MethodBuilder_GetHashCode_m1713271764_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBuilder_get_next_table_index_m683309027_0 (MethodBuilder_t347762177_0 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C"  Exception_t_116002698_0 * MethodBuilder_NotSupported_m1885110731_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodBuilder_MakeGenericMethod_m303913412_0 (MethodBuilder_t347762177_0 * __this, TypeU5BU5D_t1362412059_0* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C"  bool MethodBuilder_get_IsGenericMethodDefinition_m_10734305_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C"  bool MethodBuilder_get_IsGenericMethod_m770496854_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* MethodBuilder_GetGenericArguments_m948618404_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C"  Module_t_1368739742_0 * MethodBuilder_get_Module_m_1427632817_0 (MethodBuilder_t347762177_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
