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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Void2073015405.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.IntPtr::.ctor(System.Int32)
extern "C"  void IntPtr__ctor_m_1298276413_0 (IntPtr_t* __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C"  void IntPtr__ctor_m_491707586_0 (IntPtr_t* __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C"  void IntPtr__ctor_m_1261680993_0 (IntPtr_t* __this, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void IntPtr__ctor_m_190938191_0 (IntPtr_t* __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m21554269_0 (IntPtr_t* __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::get_Size()
extern "C"  int32_t IntPtr_get_Size_m_955159736_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::Equals(System.Object)
extern "C"  bool IntPtr_Equals_m1214967011_0 (IntPtr_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
extern "C"  int32_t IntPtr_GetHashCode_m1174575389_0 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
extern "C"  int64_t IntPtr_ToInt64_m39971741_0 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::ToPointer()
extern "C"  void* IntPtr_ToPointer_m1888290092_0 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m428195821_0 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString(System.String)
extern "C"  String_t* IntPtr_ToString_m1500137303_0 (IntPtr_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m1573482188_0 (Object_t * __this /* static, unused */, IntPtr_t ___value1, IntPtr_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m_1250434703_0 (Object_t * __this /* static, unused */, IntPtr_t ___value1, IntPtr_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
extern "C"  IntPtr_t IntPtr_op_Explicit_m_398200674_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
extern "C"  IntPtr_t IntPtr_op_Explicit_m_1204769629_0 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C"  IntPtr_t IntPtr_op_Explicit_m1401226878_0 (Object_t * __this /* static, unused */, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  int32_t IntPtr_op_Explicit_m1458664696_0 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  void* IntPtr_op_Explicit_m1073656736_0 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
