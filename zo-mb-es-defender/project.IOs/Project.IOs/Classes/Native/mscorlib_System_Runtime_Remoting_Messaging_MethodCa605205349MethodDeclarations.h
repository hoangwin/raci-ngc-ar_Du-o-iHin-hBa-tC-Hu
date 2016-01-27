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

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t605205349_0;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1013997101_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t_319350912_0;
// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C"  void MethodCall__ctor_m646635320_0 (MethodCall_t605205349_0 * __this, HeaderU5BU5D_t1013997101_0* ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MethodCall__ctor_m_188472434_0 (MethodCall_t605205349_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C"  void MethodCall__ctor_m1871406663_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C"  void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m_795269525_0 (MethodCall_t605205349_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern "C"  void MethodCall_InitMethodProperty_m1719565089_0 (MethodCall_t605205349_0 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MethodCall_GetObjectData_m_1250963041_0 (MethodCall_t605205349_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C"  ObjectU5BU5D_t_591698798_0* MethodCall_get_Args_m1494813934_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern "C"  LogicalCallContext_t_319350912_0 * MethodCall_get_LogicalCallContext_m_525405217_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C"  MethodBase_t999760250_0 * MethodCall_get_MethodBase_m688041003_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C"  String_t* MethodCall_get_MethodName_m257326115_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern "C"  Object_t * MethodCall_get_MethodSignature_m_2006065702_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C"  Object_t * MethodCall_get_Properties_m1893707917_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern "C"  void MethodCall_InitDictionary_m_24537759_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C"  String_t* MethodCall_get_TypeName_m_1881534754_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C"  String_t* MethodCall_get_Uri_m1781226377_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C"  void MethodCall_set_Uri_m_1782078478_0 (MethodCall_t605205349_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C"  void MethodCall_Init_m_307768611_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern "C"  void MethodCall_ResolveMethod_m_436656468_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern "C"  Type_t * MethodCall_CastTo_m_1743159574_0 (MethodCall_t605205349_0 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C"  String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m_693232374_0 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* MethodCall_get_GenericArguments_m_529007995_0 (MethodCall_t605205349_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
