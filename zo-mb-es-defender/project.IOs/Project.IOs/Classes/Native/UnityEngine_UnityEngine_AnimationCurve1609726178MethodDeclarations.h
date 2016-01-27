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

// UnityEngine.AnimationCurve
struct AnimationCurve_t1609726178_0;
struct AnimationCurve_t1609726178_0_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t_1154223273_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe_2054041579.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m_1480519289_0 (AnimationCurve_t1609726178_0 * __this, KeyframeU5BU5D_t_1154223273_0* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m_586973182_0 (AnimationCurve_t1609726178_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m_2104824618_0 (AnimationCurve_t1609726178_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m_901225402_0 (AnimationCurve_t1609726178_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m_596087974_0 (AnimationCurve_t1609726178_0 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C"  KeyframeU5BU5D_t_1154223273_0* AnimationCurve_get_keys_m162753017_0 (AnimationCurve_t1609726178_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C"  Keyframe_t_2054041579_0  AnimationCurve_get_Item_m_514692433_0 (AnimationCurve_t1609726178_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C"  int32_t AnimationCurve_get_length_m1757155287_0 (AnimationCurve_t1609726178_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C"  Keyframe_t_2054041579_0  AnimationCurve_GetKey_Internal_m_96236922_0 (AnimationCurve_t1609726178_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::INTERNAL_CALL_GetKey_Internal(UnityEngine.AnimationCurve,System.Int32,UnityEngine.Keyframe&)
extern "C"  void AnimationCurve_INTERNAL_CALL_GetKey_Internal_m_262557746_0 (Object_t * __this /* static, unused */, AnimationCurve_t1609726178_0 * ___self, int32_t ___index, Keyframe_t_2054041579_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C"  KeyframeU5BU5D_t_1154223273_0* AnimationCurve_GetKeys_m_1306971110_0 (AnimationCurve_t1609726178_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m1486386337_0 (AnimationCurve_t1609726178_0 * __this, KeyframeU5BU5D_t_1154223273_0* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t1609726178_0_marshal(const AnimationCurve_t1609726178_0& unmarshaled, AnimationCurve_t1609726178_0_marshaled& marshaled);
extern "C" void AnimationCurve_t1609726178_0_marshal_back(const AnimationCurve_t1609726178_0_marshaled& marshaled, AnimationCurve_t1609726178_0& unmarshaled);
extern "C" void AnimationCurve_t1609726178_0_marshal_cleanup(AnimationCurve_t1609726178_0_marshaled& marshaled);
