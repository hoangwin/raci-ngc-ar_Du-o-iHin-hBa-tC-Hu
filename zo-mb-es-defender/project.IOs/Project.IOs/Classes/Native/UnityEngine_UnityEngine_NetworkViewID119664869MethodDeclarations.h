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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkViewID119664869.h"
#include "UnityEngine_UnityEngine_NetworkPlayer658241662.h"

// UnityEngine.NetworkViewID UnityEngine.NetworkViewID::get_unassigned()
extern "C"  NetworkViewID_t119664869_0  NetworkViewID_get_unassigned_m_1480053297_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_get_unassigned(UnityEngine.NetworkViewID&)
extern "C"  void NetworkViewID_INTERNAL_get_unassigned_m132572206_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_IsMine(UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_Internal_IsMine_m763014699_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_IsMine(UnityEngine.NetworkViewID&)
extern "C"  bool NetworkViewID_INTERNAL_CALL_Internal_IsMine_m753595398_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::Internal_GetOwner(UnityEngine.NetworkViewID,UnityEngine.NetworkPlayer&)
extern "C"  void NetworkViewID_Internal_GetOwner_m89862041_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0  ___value, NetworkPlayer_t658241662_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetOwner(UnityEngine.NetworkViewID&,UnityEngine.NetworkPlayer&)
extern "C"  void NetworkViewID_INTERNAL_CALL_Internal_GetOwner_m874918604_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0 * ___value, NetworkPlayer_t658241662_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::Internal_GetString(UnityEngine.NetworkViewID)
extern "C"  String_t* NetworkViewID_Internal_GetString_m403971590_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetString(UnityEngine.NetworkViewID&)
extern "C"  String_t* NetworkViewID_INTERNAL_CALL_Internal_GetString_m346869803_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_Compare(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_Internal_Compare_m_1045974524_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0  ___lhs, NetworkViewID_t119664869_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_Compare(UnityEngine.NetworkViewID&,UnityEngine.NetworkViewID&)
extern "C"  bool NetworkViewID_INTERNAL_CALL_Internal_Compare_m61154333_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0 * ___lhs, NetworkViewID_t119664869_0 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkViewID::GetHashCode()
extern "C"  int32_t NetworkViewID_GetHashCode_m_1153088854_0 (NetworkViewID_t119664869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Equals(System.Object)
extern "C"  bool NetworkViewID_Equals_m809788370_0 (NetworkViewID_t119664869_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::get_isMine()
extern "C"  bool NetworkViewID_get_isMine_m1234363003_0 (NetworkViewID_t119664869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkViewID::get_owner()
extern "C"  NetworkPlayer_t658241662_0  NetworkViewID_get_owner_m1900957708_0 (NetworkViewID_t119664869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::ToString()
extern "C"  String_t* NetworkViewID_ToString_m_946588752_0 (NetworkViewID_t119664869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Equality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_op_Equality_m_121727521_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0  ___lhs, NetworkViewID_t119664869_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Inequality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_op_Inequality_m309368134_0 (Object_t * __this /* static, unused */, NetworkViewID_t119664869_0  ___lhs, NetworkViewID_t119664869_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
