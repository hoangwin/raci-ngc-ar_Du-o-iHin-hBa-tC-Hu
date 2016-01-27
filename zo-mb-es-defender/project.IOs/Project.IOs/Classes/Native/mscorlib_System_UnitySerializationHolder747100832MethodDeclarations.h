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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t747100832_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t921927222_0;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m_1462802123_0 (UnitySerializationHolder_t747100832_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetTypeData_m_960971364_0 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetDBNullData_m461795932_0 (Object_t * __this /* static, unused */, DBNull_t921927222_0 * ___instance, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetModuleData_m_1349564083_0 (Object_t * __this /* static, unused */, Module_t_1368739742_0 * ___instance, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m_2014938574_0 (UnitySerializationHolder_t747100832_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Object_t * UnitySerializationHolder_GetRealObject_m286267090_0 (UnitySerializationHolder_t747100832_0 * __this, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
