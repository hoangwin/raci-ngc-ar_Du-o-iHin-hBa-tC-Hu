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

// System.Runtime.Remoting.Contexts.Context
struct Context_t1915744201_0;
// System.Runtime.Remoting.Contexts.IContextProperty[]
struct IContextPropertyU5BU5D_t_1507617919_0;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t_1338273455_0;
// System.ContextBoundObject
struct ContextBoundObject_t_573856983_0;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t_1150298030_0;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1360678116_0;
// System.Runtime.Remoting.Contexts.IContextProperty
struct IContextProperty_t_1987962069_0;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t364850749_0;
// System.MarshalByRefObject
struct MarshalByRefObject_t_1586954378_0;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t_1135862845_0;
// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t_1333000546_0;
// System.LocalDataStoreSlot
struct LocalDataStoreSlot_t_1119350581_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Contexts.Context::.ctor()
extern "C"  void Context__ctor_m_991584717_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern "C"  void Context__cctor_m_399840942_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C"  void Context_Finalize_m1386439645_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C"  Context_t1915744201_0 * Context_get_DefaultContext_m_2083044972_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.Context::get_ContextID()
extern "C"  int32_t Context_get_ContextID_m1615769170_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty[] System.Runtime.Remoting.Contexts.Context::get_ContextProperties()
extern "C"  IContextPropertyU5BU5D_t_1507617919_0* Context_get_ContextProperties_m_1912574664_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C"  bool Context_get_IsDefaultContext_m_994408662_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_NeedsContextSink()
extern "C"  bool Context_get_NeedsContextSink_m1907794755_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  bool Context_RegisterDynamicProperty_m2075612383_0 (Object_t * __this /* static, unused */, Object_t * ___prop, ContextBoundObject_t_573856983_0 * ___obj, Context_t1915744201_0 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::UnregisterDynamicProperty(System.String,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  bool Context_UnregisterDynamicProperty_m_230115663_0 (Object_t * __this /* static, unused */, String_t* ___name, ContextBoundObject_t_573856983_0 * ___obj, Context_t1915744201_0 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::GetDynamicPropertyCollection(System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  DynamicPropertyCollection_t_1150298030_0 * Context_GetDynamicPropertyCollection_m1987747444_0 (Object_t * __this /* static, unused */, ContextBoundObject_t_573856983_0 * ___obj, Context_t1915744201_0 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyGlobalDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void Context_NotifyGlobalDynamicSinks_m_1378519651_0 (Object_t * __this /* static, unused */, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasGlobalDynamicSinks()
extern "C"  bool Context_get_HasGlobalDynamicSinks_m_1089638412_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C"  void Context_NotifyDynamicSinks_m1367144344_0 (Context_t1915744201_0 * __this, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasDynamicSinks()
extern "C"  bool Context_get_HasDynamicSinks_m1998518649_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasExitSinks()
extern "C"  bool Context_get_HasExitSinks_m1233814330_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern "C"  Object_t * Context_GetProperty_m1664740450_0 (Context_t1915744201_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty)
extern "C"  void Context_SetProperty_m1208242955_0 (Context_t1915744201_0 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Freeze()
extern "C"  void Context_Freeze_m1127151596_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern "C"  String_t* Context_ToString_m_1238093414_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetServerContextSinkChain()
extern "C"  Object_t * Context_GetServerContextSinkChain_m390126977_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetClientContextSinkChain()
extern "C"  Object_t * Context_GetClientContextSinkChain_m1645078461_0 (Context_t1915744201_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateServerObjectSinkChain(System.MarshalByRefObject,System.Boolean)
extern "C"  Object_t * Context_CreateServerObjectSinkChain_m1085388208_0 (Context_t1915744201_0 * __this, MarshalByRefObject_t_1586954378_0 * ___obj, bool ___forceInternalExecute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern "C"  Object_t * Context_CreateEnvoySink_m_1668423869_0 (Context_t1915744201_0 * __this, MarshalByRefObject_t_1586954378_0 * ___serverObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::SwitchToContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t1915744201_0 * Context_SwitchToContext_m_926052442_0 (Object_t * __this /* static, unused */, Context_t1915744201_0 * ___newContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  Context_t1915744201_0 * Context_CreateNewContext_m538209045_0 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
extern "C"  void Context_DoCallBack_m1158598055_0 (Context_t1915744201_0 * __this, CrossContextDelegate_t_1333000546_0 * ___deleg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateDataSlot()
extern "C"  LocalDataStoreSlot_t_1119350581_0 * Context_AllocateDataSlot_m_1414303762_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateNamedDataSlot(System.String)
extern "C"  LocalDataStoreSlot_t_1119350581_0 * Context_AllocateNamedDataSlot_m_1094563243_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::FreeNamedDataSlot(System.String)
extern "C"  void Context_FreeNamedDataSlot_m_356687950_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Contexts.Context::GetData(System.LocalDataStoreSlot)
extern "C"  Object_t * Context_GetData_m_318443511_0 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t_1119350581_0 * ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::GetNamedDataSlot(System.String)
extern "C"  LocalDataStoreSlot_t_1119350581_0 * Context_GetNamedDataSlot_m372993642_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetData(System.LocalDataStoreSlot,System.Object)
extern "C"  void Context_SetData_m_179014478_0 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t_1119350581_0 * ___slot, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
