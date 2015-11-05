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

// iTween
struct iTween_t172;
// System.Collections.Hashtable
struct Hashtable_t175;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.AudioClip
struct AudioClip_t162;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// UnityEngine.Transform[]
struct TransformU5BU5D_t240;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t168;
// UnityEngine.Texture2D
struct Texture2D_t241;
// UnityEngine.Transform
struct Transform_t23;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t242;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void iTween::.ctor(System.Collections.Hashtable)
extern "C" void iTween__ctor_m460 (iTween_t172 * __this, Hashtable_t175 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::.cctor()
extern "C" void iTween__cctor_m461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Init(UnityEngine.GameObject)
extern "C" void iTween_Init_m462 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
extern "C" void iTween_CameraFadeFrom_m463 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeFrom_m464 (Object_t * __this /* static, unused */, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
extern "C" void iTween_CameraFadeTo_m465 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeTo_m466 (Object_t * __this /* static, unused */, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ValueTo_m467 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeFrom_m468 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeFrom_m469 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeTo_m470 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeTo_m471 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorFrom_m472 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Color_t26  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorFrom_m473 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorTo_m474 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Color_t26  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorTo_m475 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioFrom_m476 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioFrom_m477 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioTo_m478 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioTo_m479 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
extern "C" void iTween_Stab_m480 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, AudioClip_t162 * ___audioclip, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Stab_m481 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookFrom_m482 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookFrom_m483 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookTo_m484 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookTo_m485 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveTo_m486 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveTo_m487 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveFrom_m488 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveFrom_m489 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveAdd_m490 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveAdd_m491 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveBy_m492 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveBy_m493 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleTo_m494 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleTo_m495 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleFrom_m496 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleFrom_m497 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleAdd_m498 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleAdd_m499 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleBy_m500 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleBy_m501 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateTo_m502 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateTo_m503 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateFrom_m504 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateFrom_m505 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateAdd_m506 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateAdd_m507 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateBy_m508 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateBy_m509 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakePosition_m510 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakePosition_m511 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeScale_m512 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeScale_m513 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeRotation_m514 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeRotation_m515 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchPosition_m516 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchPosition_m517 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchRotation_m518 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchRotation_m519 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchScale_m520 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchScale_m521 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateTargets()
extern "C" void iTween_GenerateTargets_m522 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRectTargets()
extern "C" void iTween_GenerateRectTargets_m523 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorTargets()
extern "C" void iTween_GenerateColorTargets_m524 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector3Targets()
extern "C" void iTween_GenerateVector3Targets_m525 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector2Targets()
extern "C" void iTween_GenerateVector2Targets_m526 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateFloatTargets()
extern "C" void iTween_GenerateFloatTargets_m527 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorToTargets()
extern "C" void iTween_GenerateColorToTargets_m528 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateAudioToTargets()
extern "C" void iTween_GenerateAudioToTargets_m529 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateStabTargets()
extern "C" void iTween_GenerateStabTargets_m530 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateLookToTargets()
extern "C" void iTween_GenerateLookToTargets_m531 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToPathTargets()
extern "C" void iTween_GenerateMoveToPathTargets_m532 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToTargets()
extern "C" void iTween_GenerateMoveToTargets_m533 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveByTargets()
extern "C" void iTween_GenerateMoveByTargets_m534 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleToTargets()
extern "C" void iTween_GenerateScaleToTargets_m535 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleByTargets()
extern "C" void iTween_GenerateScaleByTargets_m536 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleAddTargets()
extern "C" void iTween_GenerateScaleAddTargets_m537 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateToTargets()
extern "C" void iTween_GenerateRotateToTargets_m538 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateAddTargets()
extern "C" void iTween_GenerateRotateAddTargets_m539 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateByTargets()
extern "C" void iTween_GenerateRotateByTargets_m540 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakePositionTargets()
extern "C" void iTween_GenerateShakePositionTargets_m541 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeScaleTargets()
extern "C" void iTween_GenerateShakeScaleTargets_m542 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeRotationTargets()
extern "C" void iTween_GenerateShakeRotationTargets_m543 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchPositionTargets()
extern "C" void iTween_GeneratePunchPositionTargets_m544 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchRotationTargets()
extern "C" void iTween_GeneratePunchRotationTargets_m545 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchScaleTargets()
extern "C" void iTween_GeneratePunchScaleTargets_m546 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRectTargets()
extern "C" void iTween_ApplyRectTargets_m547 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorTargets()
extern "C" void iTween_ApplyColorTargets_m548 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector3Targets()
extern "C" void iTween_ApplyVector3Targets_m549 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector2Targets()
extern "C" void iTween_ApplyVector2Targets_m550 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyFloatTargets()
extern "C" void iTween_ApplyFloatTargets_m551 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorToTargets()
extern "C" void iTween_ApplyColorToTargets_m552 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyAudioToTargets()
extern "C" void iTween_ApplyAudioToTargets_m553 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyStabTargets()
extern "C" void iTween_ApplyStabTargets_m554 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToPathTargets()
extern "C" void iTween_ApplyMoveToPathTargets_m555 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToTargets()
extern "C" void iTween_ApplyMoveToTargets_m556 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveByTargets()
extern "C" void iTween_ApplyMoveByTargets_m557 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyScaleToTargets()
extern "C" void iTween_ApplyScaleToTargets_m558 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyLookToTargets()
extern "C" void iTween_ApplyLookToTargets_m559 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateToTargets()
extern "C" void iTween_ApplyRotateToTargets_m560 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateAddTargets()
extern "C" void iTween_ApplyRotateAddTargets_m561 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakePositionTargets()
extern "C" void iTween_ApplyShakePositionTargets_m562 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeScaleTargets()
extern "C" void iTween_ApplyShakeScaleTargets_m563 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeRotationTargets()
extern "C" void iTween_ApplyShakeRotationTargets_m564 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchPositionTargets()
extern "C" void iTween_ApplyPunchPositionTargets_m565 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchRotationTargets()
extern "C" void iTween_ApplyPunchRotationTargets_m566 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchScaleTargets()
extern "C" void iTween_ApplyPunchScaleTargets_m567 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenDelay()
extern "C" Object_t * iTween_TweenDelay_m568 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenStart()
extern "C" void iTween_TweenStart_m569 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenRestart()
extern "C" Object_t * iTween_TweenRestart_m570 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenUpdate()
extern "C" void iTween_TweenUpdate_m571 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenComplete()
extern "C" void iTween_TweenComplete_m572 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenLoop()
extern "C" void iTween_TweenLoop_m573 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
extern "C" Rect_t27  iTween_RectUpdate_m574 (Object_t * __this /* static, unused */, Rect_t27  ___currentValue, Rect_t27  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t17  iTween_Vector3Update_m575 (Object_t * __this /* static, unused */, Vector3_t17  ___currentValue, Vector3_t17  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t115  iTween_Vector2Update_m576 (Object_t * __this /* static, unused */, Vector2_t115  ___currentValue, Vector2_t115  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
extern "C" float iTween_FloatUpdate_m577 (Object_t * __this /* static, unused */, float ___currentValue, float ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeUpdate_m578 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeUpdate_m579 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorUpdate_m580 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorUpdate_m581 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Color_t26  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioUpdate_m582 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioUpdate_m583 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateUpdate_m584 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateUpdate_m585 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleUpdate_m586 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleUpdate_m587 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveUpdate_m588 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveUpdate_m589 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookUpdate_m590 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookUpdate_m591 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3_t17  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Transform[])
extern "C" float iTween_PathLength_m592 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Vector3[])
extern "C" float iTween_PathLength_m593 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
extern "C" Texture2D_t241 * iTween_CameraTexture_m594 (Object_t * __this /* static, unused */, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m595 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Vector3U5BU5D_t168* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m596 (Object_t * __this /* static, unused */, Transform_t23 * ___target, Vector3U5BU5D_t168* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m597 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, TransformU5BU5D_t240* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m598 (Object_t * __this /* static, unused */, Transform_t23 * ___target, TransformU5BU5D_t240* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
extern "C" Vector3_t17  iTween_PointOnPath_m599 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
extern "C" void iTween_DrawLine_m600 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m601 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[])
extern "C" void iTween_DrawLine_m602 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m603 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___line, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineGizmos_m604 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m605 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawLineGizmos_m606 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m607 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___line, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineHandles_m608 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m609 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawLineHandles_m610 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m611 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___line, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t17  iTween_PointOnPath_m612 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
extern "C" void iTween_DrawPath_m613 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m614 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[])
extern "C" void iTween_DrawPath_m615 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m616 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathGizmos_m617 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m618 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawPathGizmos_m619 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m620 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathHandles_m621 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m622 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawPathHandles_m623 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m624 (Object_t * __this /* static, unused */, TransformU5BU5D_t240* ___path, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDepth(System.Int32)
extern "C" void iTween_CameraFadeDepth_m625 (Object_t * __this /* static, unused */, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDestroy()
extern "C" void iTween_CameraFadeDestroy_m626 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
extern "C" void iTween_CameraFadeSwap_m627 (Object_t * __this /* static, unused */, Texture2D_t241 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
extern "C" GameObject_t7 * iTween_CameraFadeAdd_m628 (Object_t * __this /* static, unused */, Texture2D_t241 * ___texture, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
extern "C" GameObject_t7 * iTween_CameraFadeAdd_m629 (Object_t * __this /* static, unused */, Texture2D_t241 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd()
extern "C" GameObject_t7 * iTween_CameraFadeAdd_m630 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject)
extern "C" void iTween_Resume_m631 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Resume_m632 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
extern "C" void iTween_Resume_m633 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Resume_m634 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume()
extern "C" void iTween_Resume_m635 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(System.String)
extern "C" void iTween_Resume_m636 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject)
extern "C" void iTween_Pause_m637 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Pause_m638 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
extern "C" void iTween_Pause_m639 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Pause_m640 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause()
extern "C" void iTween_Pause_m641 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(System.String)
extern "C" void iTween_Pause_m642 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count()
extern "C" int32_t iTween_Count_m643 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(System.String)
extern "C" int32_t iTween_Count_m644 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject)
extern "C" int32_t iTween_Count_m645 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
extern "C" int32_t iTween_Count_m646 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop()
extern "C" void iTween_Stop_m647 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(System.String)
extern "C" void iTween_Stop_m648 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(System.String)
extern "C" void iTween_StopByName_m649 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject)
extern "C" void iTween_Stop_m650 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Stop_m651 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
extern "C" void iTween_Stop_m652 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
extern "C" void iTween_StopByName_m653 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Stop_m654 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_StopByName_m655 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, String_t* ___name, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::Hash(System.Object[])
extern "C" Hashtable_t175 * iTween_Hash_m656 (Object_t * __this /* static, unused */, ObjectU5BU5D_t242* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Awake()
extern "C" void iTween_Awake_m657 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::Start()
extern "C" Object_t * iTween_Start_m658 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Update()
extern "C" void iTween_Update_m659 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FixedUpdate()
extern "C" void iTween_FixedUpdate_m660 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LateUpdate()
extern "C" void iTween_LateUpdate_m661 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnEnable()
extern "C" void iTween_OnEnable_m662 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnDisable()
extern "C" void iTween_OnDisable_m663 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawLineHelper_m664 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___line, Color_t26  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawPathHelper_m665 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, Color_t26  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
extern "C" Vector3U5BU5D_t168* iTween_PathControlPointGenerator_m666 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t17  iTween_Interp_m667 (Object_t * __this /* static, unused */, Vector3U5BU5D_t168* ___pts, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Launch_m668 (Object_t * __this /* static, unused */, GameObject_t7 * ___target, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
extern "C" Hashtable_t175 * iTween_CleanArgs_m669 (Object_t * __this /* static, unused */, Hashtable_t175 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String iTween::GenerateID()
extern "C" String_t* iTween_GenerateID_m670 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RetrieveArgs()
extern "C" void iTween_RetrieveArgs_m671 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GetEasingFunction()
extern "C" void iTween_GetEasingFunction_m672 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::UpdatePercentage()
extern "C" void iTween_UpdatePercentage_m673 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CallBack(System.String)
extern "C" void iTween_CallBack_m674 (iTween_t172 * __this, String_t* ___callbackType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Dispose()
extern "C" void iTween_Dispose_m675 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ConflictCheck()
extern "C" void iTween_ConflictCheck_m676 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::EnableKinematic()
extern "C" void iTween_EnableKinematic_m677 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DisableKinematic()
extern "C" void iTween_DisableKinematic_m678 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ResumeDelay()
extern "C" void iTween_ResumeDelay_m679 (iTween_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::linear(System.Single,System.Single,System.Single)
extern "C" float iTween_linear_m680 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
extern "C" float iTween_clerp_m681 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::spring(System.Single,System.Single,System.Single)
extern "C" float iTween_spring_m682 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuad_m683 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuad_m684 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuad_m685 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCubic_m686 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCubic_m687 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCubic_m688 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuart_m689 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuart_m690 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuart_m691 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuint_m692 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuint_m693 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuint_m694 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInSine_m695 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutSine_m696 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutSine_m697 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInExpo_m698 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutExpo_m699 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutExpo_m700 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCirc_m701 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCirc_m702 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCirc_m703 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBounce_m704 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBounce_m705 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBounce_m706 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBack_m707 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBack_m708 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBack_m709 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::punch(System.Single,System.Single)
extern "C" float iTween_punch_m710 (iTween_t172 * __this, float ___amplitude, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInElastic_m711 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutElastic_m712 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutElastic_m713 (iTween_t172 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
