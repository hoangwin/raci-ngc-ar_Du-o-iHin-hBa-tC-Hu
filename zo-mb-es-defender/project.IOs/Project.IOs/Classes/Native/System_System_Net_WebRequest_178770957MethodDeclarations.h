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

// System.Net.WebRequest
struct WebRequest_t_178770957_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t_116002698_0;
// System.Net.IWebProxy
struct IWebProxy_t837034055_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C"  void WebRequest__ctor_m_1453779703_0 (WebRequest_t_178770957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest__ctor_m1537196628_0 (WebRequest_t_178770957_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C"  void WebRequest__cctor_m_785117382_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m_917144386_0 (WebRequest_t_178770957_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C"  void WebRequest_AddDynamicPrefix_m1363854157_0 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C"  Exception_t_116002698_0 * WebRequest_GetMustImplement_m2014409540_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C"  Object_t * WebRequest_get_DefaultWebProxy_m741473019_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C"  Object_t * WebRequest_GetDefaultWebProxy_m1479642708_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_GetObjectData_m2022281397_0 (WebRequest_t_178770957_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C"  void WebRequest_AddPrefix_m_838169391_0 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
