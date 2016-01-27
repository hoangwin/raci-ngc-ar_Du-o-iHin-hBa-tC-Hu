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

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t110369929_0;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t_319350912_0;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t_2058513601_0;
// System.Exception
struct Exception_t_116002698_0;
// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C"  void ReturnMessage__ctor_m_188253031_0 (ReturnMessage_t110369929_0 * __this, Object_t * ___ret, ObjectU5BU5D_t_591698798_0* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t_319350912_0 * ___callCtx, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C"  void ReturnMessage__ctor_m_875960764_0 (ReturnMessage_t110369929_0 * __this, Exception_t_116002698_0 * ___e, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C"  void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m_1366503209_0 (ReturnMessage_t110369929_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C"  ObjectU5BU5D_t_591698798_0* ReturnMessage_get_Args_m658290258_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C"  LogicalCallContext_t_319350912_0 * ReturnMessage_get_LogicalCallContext_m_2136546593_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C"  MethodBase_t999760250_0 * ReturnMessage_get_MethodBase_m1666108195_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C"  String_t* ReturnMessage_get_MethodName_m_1857691893_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C"  Object_t * ReturnMessage_get_MethodSignature_m776269126_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C"  Object_t * ReturnMessage_get_Properties_m531965085_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C"  String_t* ReturnMessage_get_TypeName_m_1946325854_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C"  String_t* ReturnMessage_get_Uri_m_2019539591_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C"  void ReturnMessage_set_Uri_m961888476_0 (ReturnMessage_t110369929_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C"  Exception_t_116002698_0 * ReturnMessage_get_Exception_m_1279932322_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C"  ObjectU5BU5D_t_591698798_0* ReturnMessage_get_OutArgs_m299904174_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C"  Object_t * ReturnMessage_get_ReturnValue_m_1218755496_0 (ReturnMessage_t110369929_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
