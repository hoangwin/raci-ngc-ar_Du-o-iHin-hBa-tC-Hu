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
struct AsyncResult_t1597;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1223;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1581;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t1600;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1601;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1599;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C" void AsyncResult__ctor_m9476 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m9477 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1223 * AsyncResult_get_AsyncWaitHandle_m9478 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m9479 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m9480 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m9481 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C" void AsyncResult_set_EndInvokeCalled_m9482 (AsyncResult_t1597 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m9483 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m9484 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m9485 (AsyncResult_t1597 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m9486 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m9487 (AsyncResult_t1597 * __this, Object_t * ___mc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m9488 (AsyncResult_t1597 * __this, bool ___completed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m9489 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern "C" Object_t * AsyncResult_SyncProcessMessage_m9490 (AsyncResult_t1597 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t1599 * AsyncResult_get_CallMessage_m9491 (AsyncResult_t1597 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C" void AsyncResult_set_CallMessage_m9492 (AsyncResult_t1597 * __this, MonoMethodMessage_t1599 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
