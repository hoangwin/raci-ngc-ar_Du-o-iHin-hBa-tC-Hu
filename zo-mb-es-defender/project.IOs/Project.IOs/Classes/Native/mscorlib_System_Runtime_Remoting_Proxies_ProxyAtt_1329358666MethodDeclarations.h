﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t_1329358666_0;
// System.MarshalByRefObject
struct MarshalByRefObject_t_1586954378_0;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2088703102_0;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t_941252166_0;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1915744201_0;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t_1135862845_0;

#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C"  MarshalByRefObject_t_1586954378_0 * ProxyAttribute_CreateInstance_m546961127_0 (ProxyAttribute_t_1329358666_0 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C"  RealProxy_t2088703102_0 * ProxyAttribute_CreateProxy_m_1701742513_0 (ProxyAttribute_t_1329358666_0 * __this, ObjRef_t_941252166_0 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1915744201_0 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void ProxyAttribute_GetPropertiesForNewContext_m_707545756_0 (ProxyAttribute_t_1329358666_0 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool ProxyAttribute_IsContextOK_m_1903888019_0 (ProxyAttribute_t_1329358666_0 * __this, Context_t1915744201_0 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
