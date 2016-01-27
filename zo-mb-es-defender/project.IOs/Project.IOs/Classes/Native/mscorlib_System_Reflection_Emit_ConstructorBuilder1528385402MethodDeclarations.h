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

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1528385402_0;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1589638864_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t275827409_0;
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
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t_2111042175_0;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodAttributes_1474330254.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_RuntimeMethodHandle181715016.h"
#include "mscorlib_System_Reflection_Emit_MethodToken1693782767.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  void ConstructorBuilder__ctor_m2001998159_0 (ConstructorBuilder_t1528385402_0 * __this, TypeBuilder_t_1589638864_0 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1362412059_0* ___parameterTypes, TypeU5BU5DU5BU5D_t275827409_0* ___paramModReq, TypeU5BU5DU5BU5D_t275827409_0* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C"  int32_t ConstructorBuilder_get_CallingConvention_m443074051_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C"  TypeBuilder_t_1589638864_0 * ConstructorBuilder_get_TypeBuilder_m_852015065_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t_2042175207_0* ConstructorBuilder_GetParameters_m_583620014_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C"  ParameterInfoU5BU5D_t_2042175207_0* ConstructorBuilder_GetParametersInternal_m_519170513_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C"  int32_t ConstructorBuilder_GetParameterCount_m_1432030426_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * ConstructorBuilder_Invoke_m_1940905095_0 (ConstructorBuilder_t1528385402_0 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___parameters, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * ConstructorBuilder_Invoke_m_1806111205_0 (ConstructorBuilder_t1528385402_0 * __this, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___parameters, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t181715016_0  ConstructorBuilder_get_MethodHandle_m977166569_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C"  int32_t ConstructorBuilder_get_Attributes_m2137353707_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C"  Type_t * ConstructorBuilder_get_ReflectedType_m_479705425_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C"  Type_t * ConstructorBuilder_get_DeclaringType_m_30365048_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C"  String_t* ConstructorBuilder_get_Name_m134603075_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool ConstructorBuilder_IsDefined_m_1925827157_0 (ConstructorBuilder_t1528385402_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* ConstructorBuilder_GetCustomAttributes_m1931712364_0 (ConstructorBuilder_t1528385402_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* ConstructorBuilder_GetCustomAttributes_m1698596385_0 (ConstructorBuilder_t1528385402_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C"  ILGenerator_t_2111042175_0 * ConstructorBuilder_GetILGenerator_m1407935730_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t_2111042175_0 * ConstructorBuilder_GetILGenerator_m1731893569_0 (ConstructorBuilder_t1528385402_0 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C"  MethodToken_t1693782767_0  ConstructorBuilder_GetToken_m_349554877_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C"  Module_t_1368739742_0 * ConstructorBuilder_get_Module_m_2135792998_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C"  String_t* ConstructorBuilder_ToString_m347700767_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C"  void ConstructorBuilder_fixup_m836985654_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ConstructorBuilder_get_next_table_index_m932085784_0 (ConstructorBuilder_t1528385402_0 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C"  bool ConstructorBuilder_get_IsCompilerContext_m_1498067493_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C"  Exception_t_116002698_0 * ConstructorBuilder_not_supported_m_607647789_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C"  Exception_t_116002698_0 * ConstructorBuilder_not_created_m_2144479279_0 (ConstructorBuilder_t1528385402_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
