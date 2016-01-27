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

// System.Delegate
struct Delegate_t168216518_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Delegate[]
struct DelegateU5BU5D_t_1996949554_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C"  MethodInfo_t * Delegate_get_Method_m_1326596790_0 (Delegate_t168216518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::get_Target()
extern "C"  Object_t * Delegate_get_Target_m896795953_0 (Delegate_t168216518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate_internal(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_internal_m1567874925_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, MethodInfo_t * ___info, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::SetMulticastInvoke()
extern "C"  void Delegate_SetMulticastInvoke_m361277268_0 (Delegate_t168216518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::arg_type_match(System.Type,System.Type)
extern "C"  bool Delegate_arg_type_match_m1751825687_0 (Object_t * __this /* static, unused */, Type_t * ___delArgType, Type_t * ___argType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::return_type_match(System.Type,System.Type)
extern "C"  bool Delegate_return_type_match_m_16019447_0 (Object_t * __this /* static, unused */, Type_t * ___delReturnType, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m_1242199591_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m2101460062_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___firstArgument, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo,System.Boolean)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m_481944069_0 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m_853777152_0 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m_1436855521_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Delegate::GetCandidateMethod(System.Type,System.Type,System.String,System.Reflection.BindingFlags,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Delegate_GetCandidateMethod_m_116528290_0 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, int32_t ___bflags, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String,System.Boolean,System.Boolean)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m_1519811700_0 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Type,System.String)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m1864084142_0 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___target, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean,System.Boolean)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m1706525923_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, bool ___throwOnBindFailure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.String,System.Boolean)
extern "C"  Delegate_t168216518_0 * Delegate_CreateDelegate_m_1371023170_0 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___target, String_t* ___method, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Delegate::Clone()
extern "C"  Object_t * Delegate_Clone_m_1633618270_0 (Delegate_t168216518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Delegate::Equals(System.Object)
extern "C"  bool Delegate_Equals_m_2059684671_0 (Delegate_t168216518_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Delegate::GetHashCode()
extern "C"  int32_t Delegate_GetHashCode_m_81223141_0 (Delegate_t168216518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Delegate_GetObjectData_m1508449364_0 (Delegate_t168216518_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.Delegate::GetInvocationList()
extern "C"  DelegateU5BU5D_t_1996949554_0* Delegate_GetInvocationList_m_588908563_0 (Delegate_t168216518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t168216518_0 * Delegate_Combine_m_503760212_0 (Object_t * __this /* static, unused */, Delegate_t168216518_0 * ___a, Delegate_t168216518_0 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate[])
extern "C"  Delegate_t168216518_0 * Delegate_Combine_m1976351882_0 (Object_t * __this /* static, unused */, DelegateU5BU5D_t_1996949554_0* ___delegates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::CombineImpl(System.Delegate)
extern "C"  Delegate_t168216518_0 * Delegate_CombineImpl_m_810334892_0 (Delegate_t168216518_0 * __this, Delegate_t168216518_0 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t168216518_0 * Delegate_Remove_m_1668448571_0 (Object_t * __this /* static, unused */, Delegate_t168216518_0 * ___source, Delegate_t168216518_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::RemoveImpl(System.Delegate)
extern "C"  Delegate_t168216518_0 * Delegate_RemoveImpl_m_628266767_0 (Delegate_t168216518_0 * __this, Delegate_t168216518_0 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
