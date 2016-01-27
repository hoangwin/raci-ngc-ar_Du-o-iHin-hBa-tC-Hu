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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1671455088_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Delegate
struct Delegate_t168216518_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder__ctor_m_379906743_0 (DelegateSerializationHolder_t1671455088_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetDelegateData_m1057136238_0 (Object_t * __this /* static, unused */, Delegate_t168216518_0 * ___instance, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetObjectData_m_790832432_0 (DelegateSerializationHolder_t1671455088_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Object_t * DelegateSerializationHolder_GetRealObject_m1233806014_0 (DelegateSerializationHolder_t1671455088_0 * __this, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
