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

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2088703102_0;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1217398579_0;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Identity
struct Identity_t_1917220766_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern "C"  void RealProxy__ctor_m2147093603_0 (RealProxy_t2088703102_0 * __this, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RealProxy__ctor_m_1789431766_0 (RealProxy_t2088703102_0 * __this, Type_t * ___classToProxy, ClientIdentity_t1217398579_0 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C"  void RealProxy__ctor_m_1253923993_0 (RealProxy_t2088703102_0 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C"  Type_t * RealProxy_InternalGetProxyType_m858618403_0 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern "C"  Type_t * RealProxy_GetProxiedType_m_1222744389_0 (RealProxy_t2088703102_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C"  Identity_t_1917220766_0 * RealProxy_get_ObjectIdentity_m1633976845_0 (RealProxy_t2088703102_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C"  Object_t * RealProxy_InternalGetTransparentProxy_m_879608696_0 (RealProxy_t2088703102_0 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C"  Object_t * RealProxy_GetTransparentProxy_m_102500135_0 (RealProxy_t2088703102_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C"  void RealProxy_SetTargetDomain_m_354089640_0 (RealProxy_t2088703102_0 * __this, int32_t ___domainId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
