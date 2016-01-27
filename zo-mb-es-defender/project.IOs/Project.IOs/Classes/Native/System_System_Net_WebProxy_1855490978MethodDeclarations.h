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

// System.Net.WebProxy
struct WebProxy_t_1855490978_0;
// System.Uri
struct Uri_t407561573_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Net.ICredentials
struct ICredentials_t1973037435_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C"  void WebProxy__ctor_m_1437264788_0 (WebProxy_t_1855490978_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C"  void WebProxy__ctor_m_615245123_0 (WebProxy_t_1855490978_0 * __this, Uri_t407561573_0 * ___address, bool ___bypassOnLocal, StringU5BU5D_t_1137506664_0* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy__ctor_m_1844239145_0 (WebProxy_t_1855490978_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m1342312083_0 (WebProxy_t_1855490978_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C"  bool WebProxy_get_UseDefaultCredentials_m_1868711735_0 (WebProxy_t_1855490978_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C"  Uri_t407561573_0 * WebProxy_GetProxy_m1249556681_0 (WebProxy_t_1855490978_0 * __this, Uri_t407561573_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C"  bool WebProxy_IsBypassed_m907120600_0 (WebProxy_t_1855490978_0 * __this, Uri_t407561573_0 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebProxy_GetObjectData_m2019316656_0 (WebProxy_t_1855490978_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C"  void WebProxy_CheckBypassList_m565639068_0 (WebProxy_t_1855490978_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
