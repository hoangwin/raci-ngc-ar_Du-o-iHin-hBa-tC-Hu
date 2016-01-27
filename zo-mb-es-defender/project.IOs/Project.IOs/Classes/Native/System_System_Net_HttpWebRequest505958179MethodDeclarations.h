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

// System.Net.HttpWebRequest
struct HttpWebRequest_t505958179_0;
// System.Uri
struct Uri_t407561573_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Net.ServicePoint
struct ServicePoint_t_1913415749_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m_422107332_0 (HttpWebRequest_t505958179_0 * __this, Uri_t407561573_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1248252412_0 (HttpWebRequest_t505958179_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m_1281335318_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m_623344394_0 (HttpWebRequest_t505958179_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t407561573_0 * HttpWebRequest_get_Address_m_26702318_0 (HttpWebRequest_t505958179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t_1913415749_0 * HttpWebRequest_get_ServicePoint_m_1059211575_0 (HttpWebRequest_t505958179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t_1913415749_0 * HttpWebRequest_GetServicePoint_m560807134_0 (HttpWebRequest_t505958179_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m1200570677_0 (HttpWebRequest_t505958179_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
