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
struct WebProxy_t916;
// System.Uri
struct Uri_t894;
// System.String[]
struct StringU5BU5D_t265;
// System.Net.ICredentials
struct ICredentials_t917;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m4617 (WebProxy_t916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m4618 (WebProxy_t916 * __this, Uri_t894 * ___address, bool ___bypassOnLocal, StringU5BU5D_t265* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m4619 (WebProxy_t916 * __this, SerializationInfo_t831 * ___serializationInfo, StreamingContext_t832  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m4620 (WebProxy_t916 * __this, SerializationInfo_t831 * ___serializationInfo, StreamingContext_t832  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m4621 (WebProxy_t916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t894 * WebProxy_GetProxy_m4622 (WebProxy_t916 * __this, Uri_t894 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m4623 (WebProxy_t916 * __this, Uri_t894 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m4624 (WebProxy_t916 * __this, SerializationInfo_t831 * ___serializationInfo, StreamingContext_t832  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m4625 (WebProxy_t916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
