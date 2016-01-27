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

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t364850749_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Channels.IChannelSender
struct IChannelSender_t_1457954049_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t_1661485192_0;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t_481386081_0;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t32799001_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern "C"  void ChannelServices__cctor_m_760187466_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Object_t * ChannelServices_CreateClientChannelSinkChain_m629385345_0 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___remoteChannelData, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
extern "C"  Object_t * ChannelServices_CreateClientChannelSinkChain_m_23264944_0 (Object_t * __this /* static, unused */, Object_t * ___sender, String_t* ___url, ObjectU5BU5D_t_591698798_0* ___channelDataArray, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern "C"  void ChannelServices_RegisterChannel_m_462109231_0 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C"  void ChannelServices_RegisterChannel_m557784146_0 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
extern "C"  void ChannelServices_RegisterChannelConfig_m_203781524_0 (Object_t * __this /* static, unused */, ChannelData_t_481386081_0 * ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
extern "C"  Object_t * ChannelServices_CreateProvider_m2046737802_0 (Object_t * __this /* static, unused */, ProviderData_t32799001_0 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C"  ObjectU5BU5D_t_591698798_0* ChannelServices_GetCurrentChannelInfo_m_214024866_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
