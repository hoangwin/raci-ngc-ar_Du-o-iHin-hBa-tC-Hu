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

// System.Security.SecurityException
struct SecurityException_t_2094544078_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t2093524359_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C"  void SecurityException__ctor_m_1159481192_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C"  void SecurityException__ctor_m1484114982_0 (SecurityException_t_2094544078_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SecurityException__ctor_m230238597_0 (SecurityException_t_2094544078_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C"  Object_t * SecurityException_get_Demanded_m_380500908_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C"  Object_t * SecurityException_get_FirstPermissionThatFailed_m_983384120_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C"  String_t* SecurityException_get_PermissionState_m824616682_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C"  Type_t * SecurityException_get_PermissionType_m_751616474_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C"  String_t* SecurityException_get_GrantedSet_m1238160247_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C"  String_t* SecurityException_get_RefusedSet_m1580594168_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SecurityException_GetObjectData_m487588480_0 (SecurityException_t_2094544078_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C"  String_t* SecurityException_ToString_m937659401_0 (SecurityException_t_2094544078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
