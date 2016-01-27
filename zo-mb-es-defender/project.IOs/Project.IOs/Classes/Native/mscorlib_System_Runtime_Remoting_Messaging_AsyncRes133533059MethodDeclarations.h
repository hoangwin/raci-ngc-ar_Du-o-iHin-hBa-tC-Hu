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

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t133533059_0;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1307179416_0;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t364850749_0;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t1010312215_0;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1360678116_0;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1805258043_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C"  void AsyncResult__ctor_m1183194429_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C"  Object_t * AsyncResult_get_AsyncState_m_170038002_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1307179416_0 * AsyncResult_get_AsyncWaitHandle_m1656810902_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C"  bool AsyncResult_get_CompletedSynchronously_m1094955585_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C"  bool AsyncResult_get_IsCompleted_m_1301237473_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C"  bool AsyncResult_get_EndInvokeCalled_m_2145357424_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C"  void AsyncResult_set_EndInvokeCalled_m_1546638141_0 (AsyncResult_t133533059_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C"  Object_t * AsyncResult_get_AsyncDelegate_m545320384_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C"  Object_t * AsyncResult_get_NextSink_m1172723924_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern "C"  Object_t * AsyncResult_AsyncProcessMessage_m261394736_0 (AsyncResult_t133533059_0 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C"  Object_t * AsyncResult_GetReplyMessage_m262842621_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C"  void AsyncResult_SetMessageCtrl_m301038022_0 (AsyncResult_t133533059_0 * __this, Object_t * ___mc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C"  void AsyncResult_SetCompletedSynchronously_m_423135051_0 (AsyncResult_t133533059_0 * __this, bool ___completed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C"  Object_t * AsyncResult_EndInvoke_m_1569393751_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern "C"  Object_t * AsyncResult_SyncProcessMessage_m_1040903863_0 (AsyncResult_t133533059_0 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C"  MonoMethodMessage_t1805258043_0 * AsyncResult_get_CallMessage_m_866614921_0 (AsyncResult_t133533059_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C"  void AsyncResult_set_CallMessage_m_283160014_0 (AsyncResult_t133533059_0 * __this, MonoMethodMessage_t1805258043_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
