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

// System.Reflection.MonoCMethod
struct MonoCMethod_t_124631633_0;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_2042175207_0;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_RuntimeMethodHandle181715016.h"
#include "mscorlib_System_Reflection_MethodAttributes_1474330254.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C"  void MonoCMethod__ctor_m_1821917407_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C"  ParameterInfoU5BU5D_t_2042175207_0* MonoCMethod_GetParameters_m_1636194163_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C"  Object_t * MonoCMethod_InternalInvoke_m_1478195937_0 (MonoCMethod_t_124631633_0 * __this, Object_t * ___obj, ObjectU5BU5D_t_591698798_0* ___parameters, Exception_t_116002698_0 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * MonoCMethod_Invoke_m264177196_0 (MonoCMethod_t_124631633_0 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___parameters, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Object_t * MonoCMethod_Invoke_m931478014_0 (MonoCMethod_t_124631633_0 * __this, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___parameters, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t181715016_0  MonoCMethod_get_MethodHandle_m_900461230_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C"  int32_t MonoCMethod_get_Attributes_m_380224462_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C"  int32_t MonoCMethod_get_CallingConvention_m_938526188_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C"  Type_t * MonoCMethod_get_ReflectedType_m_683421158_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C"  Type_t * MonoCMethod_get_DeclaringType_m_147537179_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C"  String_t* MonoCMethod_get_Name_m764669486_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoCMethod_IsDefined_m_608084054_0 (MonoCMethod_t_124631633_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MonoCMethod_GetCustomAttributes_m_1408266121_0 (MonoCMethod_t_124631633_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MonoCMethod_GetCustomAttributes_m1110360782_0 (MonoCMethod_t_124631633_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C"  String_t* MonoCMethod_ToString_m607787036_0 (MonoCMethod_t_124631633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoCMethod_GetObjectData_m_1859370451_0 (MonoCMethod_t_124631633_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
