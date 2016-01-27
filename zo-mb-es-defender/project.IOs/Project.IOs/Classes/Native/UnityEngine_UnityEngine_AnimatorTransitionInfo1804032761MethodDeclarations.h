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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo1804032761.h"

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C"  bool AnimatorTransitionInfo_IsName_m_1733009558_0 (AnimatorTransitionInfo_t1804032761_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C"  bool AnimatorTransitionInfo_IsUserName_m_523033415_0 (AnimatorTransitionInfo_t1804032761_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C"  int32_t AnimatorTransitionInfo_get_fullPathHash_m_1605422944_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C"  int32_t AnimatorTransitionInfo_get_nameHash_m460043277_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C"  int32_t AnimatorTransitionInfo_get_userNameHash_m971244190_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C"  float AnimatorTransitionInfo_get_normalizedTime_m_1552967452_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C"  bool AnimatorTransitionInfo_get_anyState_m_820695065_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C"  bool AnimatorTransitionInfo_get_entry_m1140118520_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C"  bool AnimatorTransitionInfo_get_exit_m_1276464362_0 (AnimatorTransitionInfo_t1804032761_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimatorTransitionInfo_t1804032761_0_marshal(const AnimatorTransitionInfo_t1804032761_0& unmarshaled, AnimatorTransitionInfo_t1804032761_0_marshaled& marshaled);
extern "C" void AnimatorTransitionInfo_t1804032761_0_marshal_back(const AnimatorTransitionInfo_t1804032761_0_marshaled& marshaled, AnimatorTransitionInfo_t1804032761_0& unmarshaled);
extern "C" void AnimatorTransitionInfo_t1804032761_0_marshal_cleanup(AnimatorTransitionInfo_t1804032761_0_marshaled& marshaled);
