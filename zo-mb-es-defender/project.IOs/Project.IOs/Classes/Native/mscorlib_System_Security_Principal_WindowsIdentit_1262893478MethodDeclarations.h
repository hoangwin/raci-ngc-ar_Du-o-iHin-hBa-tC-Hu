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

// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t_1262893478_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Security.Principal.WindowsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WindowsIdentity__ctor_m_1078900515_0 (WindowsIdentity_t_1262893478_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::.cctor()
extern "C"  void WindowsIdentity__cctor_m_684478531_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void WindowsIdentity_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m_1535117102_0 (WindowsIdentity_t_1262893478_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WindowsIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m_2113344575_0 (WindowsIdentity_t_1262893478_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Principal.WindowsIdentity::Dispose()
extern "C"  void WindowsIdentity_Dispose_m_1645878959_0 (WindowsIdentity_t_1262893478_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Principal.WindowsIdentity::GetCurrentToken()
extern "C"  IntPtr_t WindowsIdentity_GetCurrentToken_m_1711158149_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.WindowsIdentity::GetTokenName(System.IntPtr)
extern "C"  String_t* WindowsIdentity_GetTokenName_m_994845965_0 (Object_t * __this /* static, unused */, IntPtr_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
