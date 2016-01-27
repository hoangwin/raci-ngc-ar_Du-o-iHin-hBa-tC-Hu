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

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1217398579_0;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t_941252166_0;
// System.MarshalByRefObject
struct MarshalByRefObject_t_1586954378_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C"  void ClientIdentity__ctor_m1342022863_0 (ClientIdentity_t1217398579_0 * __this, String_t* ___objectUri, ObjRef_t_941252166_0 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C"  MarshalByRefObject_t_1586954378_0 * ClientIdentity_get_ClientProxy_m_242024504_0 (ClientIdentity_t1217398579_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C"  void ClientIdentity_set_ClientProxy_m_362319823_0 (ClientIdentity_t1217398579_0 * __this, MarshalByRefObject_t_1586954378_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t_941252166_0 * ClientIdentity_CreateObjRef_m_669052233_0 (ClientIdentity_t1217398579_0 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C"  String_t* ClientIdentity_get_TargetUri_m1801235322_0 (ClientIdentity_t1217398579_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
