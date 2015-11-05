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
struct MonoCMethod_t1508;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t858;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t242;
// System.Exception
struct Exception_t252;
// System.Reflection.Binder
struct Binder_t851;
// System.Globalization.CultureInfo
struct CultureInfo_t853;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m9195 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t858* MonoCMethod_GetParameters_m9196 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m9197 (MonoCMethod_t1508 * __this, Object_t * ___obj, ObjectU5BU5D_t242* ___parameters, Exception_t252 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m9198 (MonoCMethod_t1508 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t851 * ___binder, ObjectU5BU5D_t242* ___parameters, CultureInfo_t853 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m9199 (MonoCMethod_t1508 * __this, int32_t ___invokeAttr, Binder_t851 * ___binder, ObjectU5BU5D_t242* ___parameters, CultureInfo_t853 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1864  MonoCMethod_get_MethodHandle_m9200 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m9201 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m9202 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m9203 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m9204 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m9205 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoCMethod_IsDefined_m9206 (MonoCMethod_t1508 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t242* MonoCMethod_GetCustomAttributes_m9207 (MonoCMethod_t1508 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t242* MonoCMethod_GetCustomAttributes_m9208 (MonoCMethod_t1508 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m9209 (MonoCMethod_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m9210 (MonoCMethod_t1508 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
