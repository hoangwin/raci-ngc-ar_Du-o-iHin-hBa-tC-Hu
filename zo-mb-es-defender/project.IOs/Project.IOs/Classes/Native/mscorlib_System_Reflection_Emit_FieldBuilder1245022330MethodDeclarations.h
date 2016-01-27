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

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t1245022330_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t_1933031987_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Reflection.Module
struct Module_t_1368739742_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes545826385.h"
#include "mscorlib_System_RuntimeFieldHandle1787136269.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C"  int32_t FieldBuilder_get_Attributes_m_2120903006_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C"  Type_t * FieldBuilder_get_DeclaringType_m726107228_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t1787136269_0  FieldBuilder_get_FieldHandle_m1845846823_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C"  Type_t * FieldBuilder_get_FieldType_m_2027504027_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C"  String_t* FieldBuilder_get_Name_m_2051476063_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C"  Type_t * FieldBuilder_get_ReflectedType_m_587347835_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* FieldBuilder_GetCustomAttributes_m1557425540_0 (FieldBuilder_t1245022330_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* FieldBuilder_GetCustomAttributes_m291168515_0 (FieldBuilder_t1245022330_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C"  Object_t * FieldBuilder_GetValue_m1323554150_0 (FieldBuilder_t1245022330_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool FieldBuilder_IsDefined_m_1564642403_0 (FieldBuilder_t1245022330_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C"  int32_t FieldBuilder_GetFieldOffset_m618194385_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void FieldBuilder_SetValue_m_1185463739_0 (FieldBuilder_t1245022330_0 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C"  UnmanagedMarshal_t_1933031987_0 * FieldBuilder_get_UMarshal_m_1156047824_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C"  Exception_t_116002698_0 * FieldBuilder_CreateNotSupportedException_m_295028435_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C"  Module_t_1368739742_0 * FieldBuilder_get_Module_m1920701714_0 (FieldBuilder_t1245022330_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
