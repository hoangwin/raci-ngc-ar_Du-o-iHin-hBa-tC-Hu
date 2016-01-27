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

// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t_941252166_0;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2088703102_0;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t179956965_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t_1834307716_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Runtime.Remoting.Identity
struct Identity_t_1917220766_0;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1217398579_0;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t364850749_0;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t699309039_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectM_1028289717.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C"  void RemotingServices__cctor_m_566733078_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C"  MethodBase_t999760250_0 * RemotingServices_GetVirtualMethod_m_527484423_0 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t999760250_0 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C"  bool RemotingServices_IsTransparentProxy_m162250343_0 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C"  Type_t * RemotingServices_GetServerTypeForUri_m_1033558583_0 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C"  Object_t * RemotingServices_Unmarshal_m_1917975185_0 (Object_t * __this /* static, unused */, ObjRef_t_941252166_0 * ___objectRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C"  Object_t * RemotingServices_Unmarshal_m_796533526_0 (Object_t * __this /* static, unused */, ObjRef_t_941252166_0 * ___objectRef, bool ___fRefine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C"  RealProxy_t2088703102_0 * RemotingServices_GetRealProxy_m620317996_0 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  MethodBase_t999760250_0 * RemotingServices_GetMethodBaseFromMethodMessage_m716430067_0 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t999760250_0 * RemotingServices_GetMethodBaseFromName_m_1023871349_0 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1362412059_0* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t999760250_0 * RemotingServices_FindInterfaceMethod_m1932412725_0 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1362412059_0* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C"  Object_t * RemotingServices_CreateClientProxy_m1631035355_0 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t_1834307716_0 * ___entry, ObjectU5BU5D_t_591698798_0* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern "C"  Object_t * RemotingServices_CreateClientProxy_m768660530_0 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t_591698798_0* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C"  Object_t * RemotingServices_CreateClientProxyForContextBound_m634461568_0 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t_591698798_0* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C"  Identity_t_1917220766_0 * RemotingServices_GetIdentityForUri_m_1350420299_0 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C"  String_t* RemotingServices_RemoveAppNameFromUri_m412342306_0 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C"  ClientIdentity_t1217398579_0 * RemotingServices_GetOrCreateClientIdentity_m_2010917470_0 (Object_t * __this /* static, unused */, ObjRef_t_941252166_0 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Object_t * RemotingServices_GetClientChannelSinkChain_m1754880735_0 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C"  ServerIdentity_t699309039_0 * RemotingServices_CreateWellKnownServerIdentity_m_904919211_0 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void RemotingServices_RegisterServerIdentity_m1437956696_0 (Object_t * __this /* static, unused */, ServerIdentity_t699309039_0 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Object_t * RemotingServices_GetProxyForRemoteObject_m_494154441_0 (Object_t * __this /* static, unused */, ObjRef_t_941252166_0 * ___objref, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Object_t * RemotingServices_GetRemoteObject_m_631575746_0 (Object_t * __this /* static, unused */, ObjRef_t_941252166_0 * ___objRef, Type_t * ___proxyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C"  void RemotingServices_RegisterInternalChannels_m1827304423_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C"  void RemotingServices_DisposeIdentity_m266836454_0 (Object_t * __this /* static, unused */, Identity_t_1917220766_0 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C"  String_t* RemotingServices_GetNormalizedUri_m_2107347645_0 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
