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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t_1025614635_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t_1077393591_0;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t_108403067_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TypeCode_853989544.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern "C"  void RuntimeServices__cctor_m1718173874_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t_1025614635_0 * RuntimeServices_GetDispatcher_m1446846842_0 (Object_t * __this /* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t1362412059_0* ___cacheKeyTypes, DispatcherFactory_t_1077393591_0 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C"  Object_t * RuntimeServices_Coerce_m43784504_0 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C"  Dispatcher_t_1025614635_0 * RuntimeServices_CreateCoerceDispatcher_m2088980589_0 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C"  Dispatcher_t_1025614635_0 * RuntimeServices_EmitPromotionDispatcher_m_1610106653_0 (Object_t * __this /* static, unused */, Type_t * ___fromType, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C"  bool RuntimeServices_IsPromotableNumeric_m_930602866_0 (Object_t * __this /* static, unused */, Type_t * ___fromType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C"  Dispatcher_t_1025614635_0 * RuntimeServices_EmitImplicitConversionDispatcher_m857596550_0 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C"  Object_t * RuntimeServices_CoercibleDispatcher_m238083643_0 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C"  Object_t * RuntimeServices_IdentityDispatcher_m_15434273_0 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C"  bool RuntimeServices_IsNumeric_m502621688_0 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C"  String_t* RuntimeServices_op_Addition_m1630013314_0 (Object_t * __this /* static, unused */, String_t* ___lhs, String_t* ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C"  bool RuntimeServices_EqualityOperator_m_2061766651_0 (Object_t * __this /* static, unused */, Object_t * ___lhs, Object_t * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C"  bool RuntimeServices_ArrayEqualityImpl_m797322488_0 (Object_t * __this /* static, unused */, Array_t * ___lhs, Array_t * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C"  int32_t RuntimeServices_GetConvertTypeCode_m69867490_0 (Object_t * __this /* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C"  bool RuntimeServices_EqualityOperator_m1406973573_0 (Object_t * __this /* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C"  bool RuntimeServices_IsPromotableNumeric_m1545541583_0 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C"  MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m_1783650873_0 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C"  Object_t* RuntimeServices_GetExtensionMethods_m783677117_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C"  MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m23858978_0 (Object_t * __this /* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
