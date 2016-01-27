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

// System.Runtime.Remoting.ObjRef
struct ObjRef_t_941252166_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t_681653110_0;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t_1287786682_0;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t1907924066_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C"  void ObjRef__ctor_m1486312270_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjRef__ctor_m12983315_0 (ObjRef_t_941252166_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern "C"  void ObjRef__cctor_m_2068880781_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern "C"  bool ObjRef_get_IsReferenceToWellKnow_m1201296318_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C"  Object_t * ObjRef_get_ChannelInfo_m53840305_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C"  Object_t * ObjRef_get_EnvoyInfo_m249826161_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C"  void ObjRef_set_EnvoyInfo_m860410508_0 (ObjRef_t_941252166_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C"  Object_t * ObjRef_get_TypeInfo_m_529422854_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C"  void ObjRef_set_TypeInfo_m1661789743_0 (ObjRef_t_941252166_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C"  String_t* ObjRef_get_URI_m209751056_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C"  void ObjRef_set_URI_m1923766829_0 (ObjRef_t_941252166_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjRef_GetObjectData_m_1213358054_0 (ObjRef_t_941252166_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Object_t * ObjRef_GetRealObject_m1872300788_0 (ObjRef_t_941252166_0 * __this, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern "C"  void ObjRef_UpdateChannelInfo_m2052557678_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern "C"  Type_t * ObjRef_get_ServerType_m_372026428_0 (ObjRef_t_941252166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
