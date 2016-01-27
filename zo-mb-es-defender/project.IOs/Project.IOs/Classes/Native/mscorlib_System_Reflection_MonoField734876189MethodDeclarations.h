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

// System.Reflection.MonoField
struct MonoField_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes545826385.h"
#include "mscorlib_System_RuntimeFieldHandle1787136269.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Reflection.MonoField::.ctor()
extern "C"  void MonoField__ctor_m494557655_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern "C"  int32_t MonoField_get_Attributes_m_156278763_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t1787136269_0  MonoField_get_FieldHandle_m_73444042_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
extern "C"  Type_t * MonoField_get_FieldType_m598011426_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C"  Type_t * MonoField_GetParentType_m2074626828_0 (MonoField_t * __this, bool ___declaring, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C"  Type_t * MonoField_get_ReflectedType_m_2066405310_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C"  Type_t * MonoField_get_DeclaringType_m1591666235_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
extern "C"  String_t* MonoField_get_Name_m_533937050_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoField_IsDefined_m1871511958_0 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MonoField_GetCustomAttributes_m_126421319_0 (MonoField_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MonoField_GetCustomAttributes_m1051163738_0 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern "C"  int32_t MonoField_GetFieldOffset_m_710729264_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C"  Object_t * MonoField_GetValueInternal_m1909282050_0 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern "C"  Object_t * MonoField_GetValue_m1386935585_0 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
extern "C"  String_t* MonoField_ToString_m517029212_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C"  void MonoField_SetValueInternal_m762249951_0 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void MonoField_SetValue_m1849281384_0 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoField_GetObjectData_m_723512209_0 (MonoField_t * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C"  void MonoField_CheckGeneric_m1527550038_0 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
