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

// UnityEngine.AnimationEvent
struct AnimationEvent_t_937072003_0;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// UnityEngine.AnimationState
struct AnimationState_t2134038592_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SendMessageOptions_1731689182.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo2088860905.h"
#include "UnityEngine_UnityEngine_AnimatorClipInfo_1392678700.h"

// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C"  void AnimationEvent__ctor_m_835976697_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_data()
extern "C"  String_t* AnimationEvent_get_data_m1944226119_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C"  void AnimationEvent_set_data_m_1989124132_0 (AnimationEvent_t_937072003_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C"  String_t* AnimationEvent_get_stringParameter_m_300084177_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C"  void AnimationEvent_set_stringParameter_m_338696762_0 (AnimationEvent_t_937072003_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C"  float AnimationEvent_get_floatParameter_m_1599758363_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C"  void AnimationEvent_set_floatParameter_m_155422608_0 (AnimationEvent_t_937072003_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C"  int32_t AnimationEvent_get_intParameter_m903783586_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C"  void AnimationEvent_set_intParameter_m1174062029_0 (AnimationEvent_t_937072003_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C"  Object_t_1540828846_0 * AnimationEvent_get_objectReferenceParameter_m_729546624_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C"  void AnimationEvent_set_objectReferenceParameter_m_1123314781_0 (AnimationEvent_t_937072003_0 * __this, Object_t_1540828846_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C"  String_t* AnimationEvent_get_functionName_m_116960440_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C"  void AnimationEvent_set_functionName_m1910707421_0 (AnimationEvent_t_937072003_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C"  float AnimationEvent_get_time_m_1457460055_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C"  void AnimationEvent_set_time_m_2132790724_0 (AnimationEvent_t_937072003_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C"  int32_t AnimationEvent_get_messageOptions_m_747555646_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C"  void AnimationEvent_set_messageOptions_m_469764371_0 (AnimationEvent_t_937072003_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C"  bool AnimationEvent_get_isFiredByLegacy_m_1709479586_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C"  bool AnimationEvent_get_isFiredByAnimator_m_895889008_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C"  AnimationState_t2134038592_0 * AnimationEvent_get_animationState_m1069191380_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C"  AnimatorStateInfo_t2088860905_0  AnimationEvent_get_animatorStateInfo_m_39529778_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C"  AnimatorClipInfo_t_1392678700_0  AnimationEvent_get_animatorClipInfo_m615328956_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C"  int32_t AnimationEvent_GetHash_m_1444374239_0 (AnimationEvent_t_937072003_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
