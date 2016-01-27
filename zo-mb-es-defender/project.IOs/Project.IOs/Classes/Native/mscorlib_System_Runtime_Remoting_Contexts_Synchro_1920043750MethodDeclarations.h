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

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t_1920043750_0;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t_1135862845_0;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t364850749_0;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1915744201_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C"  void SynchronizationAttribute__ctor_m1709985936_0 (SynchronizationAttribute_t_1920043750_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C"  void SynchronizationAttribute__ctor_m_229095660_0 (SynchronizationAttribute_t_1920043750_0 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C"  void SynchronizationAttribute_set_Locked_m162980252_0 (SynchronizationAttribute_t_1920043750_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C"  void SynchronizationAttribute_ReleaseLock_m_1421186454_0 (SynchronizationAttribute_t_1920043750_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void SynchronizationAttribute_GetPropertiesForNewContext_m_2119102694_0 (SynchronizationAttribute_t_1920043750_0 * __this, Object_t * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Object_t * SynchronizationAttribute_GetClientContextSink_m1264319894_0 (SynchronizationAttribute_t_1920043750_0 * __this, Object_t * ___nextSink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Object_t * SynchronizationAttribute_GetServerContextSink_m105122290_0 (SynchronizationAttribute_t_1920043750_0 * __this, Object_t * ___nextSink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool SynchronizationAttribute_IsContextOK_m525966365_0 (SynchronizationAttribute_t_1920043750_0 * __this, Context_t1915744201_0 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern "C"  void SynchronizationAttribute_ExitContext_m_2041864755_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern "C"  void SynchronizationAttribute_EnterContext_m_1310054535_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
