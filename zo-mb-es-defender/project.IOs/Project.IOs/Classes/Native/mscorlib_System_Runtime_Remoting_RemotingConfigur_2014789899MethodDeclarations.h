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

// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t_1834307716_0;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t_1593147674_0;
// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t_250152796_0;
// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t_2051761722_0;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t_481386081_0;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t32799001_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C"  void RemotingConfiguration__cctor_m2129988840_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C"  String_t* RemotingConfiguration_get_ApplicationName_m374139798_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern "C"  void RemotingConfiguration_set_ApplicationName_m484446441_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C"  String_t* RemotingConfiguration_get_ProcessId_m_424795087_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern "C"  void RemotingConfiguration_LoadDefaultDelayedChannels_m_592857120_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C"  ActivatedClientTypeEntry_t_1834307716_0 * RemotingConfiguration_IsRemotelyActivatedClientType_m_20838684_0 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern "C"  void RemotingConfiguration_RegisterActivatedClientType_m_2087355582_0 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t_1834307716_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern "C"  void RemotingConfiguration_RegisterActivatedServiceType_m_291424274_0 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t_1593147674_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern "C"  void RemotingConfiguration_RegisterWellKnownClientType_m_1178497278_0 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t_250152796_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern "C"  void RemotingConfiguration_RegisterWellKnownServiceType_m_1803460666_0 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t_2051761722_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern "C"  void RemotingConfiguration_RegisterChannelTemplate_m_884012778_0 (Object_t * __this /* static, unused */, ChannelData_t_481386081_0 * ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C"  void RemotingConfiguration_RegisterClientProviderTemplate_m514821425_0 (Object_t * __this /* static, unused */, ProviderData_t32799001_0 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C"  void RemotingConfiguration_RegisterServerProviderTemplate_m_1443429907_0 (Object_t * __this /* static, unused */, ProviderData_t32799001_0 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern "C"  void RemotingConfiguration_RegisterChannels_m2036610082_0 (Object_t * __this /* static, unused */, ArrayList_t2138871437_0 * ___channels, bool ___onlyDelayed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern "C"  void RemotingConfiguration_RegisterTypes_m1739896888_0 (Object_t * __this /* static, unused */, ArrayList_t2138871437_0 * ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern "C"  void RemotingConfiguration_SetCustomErrorsMode_m1844153208_0 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
