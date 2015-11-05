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

// UnityEngine.Transform
struct Transform_t23;
// System.Collections.IEnumerator
struct IEnumerator_t239;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Space.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t17  Transform_get_position_m746 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m749 (Transform_t23 * __this, Vector3_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m3443 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m3444 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t17  Transform_get_localPosition_m904 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m875 (Transform_t23 * __this, Vector3_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m3445 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m3446 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t17  Transform_get_eulerAngles_m905 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_eulerAngles_m806 (Transform_t23 * __this, Vector3_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" Vector3_t17  Transform_get_localEulerAngles_m946 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_localEulerAngles_m814 (Transform_t23 * __this, Vector3_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localEulerAngles_m3447 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localEulerAngles_m3448 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t17  Transform_get_forward_m2678 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t18  Transform_get_rotation_m792 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m798 (Transform_t23 * __this, Quaternion_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m3449 (Transform_t23 * __this, Quaternion_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m3450 (Transform_t23 * __this, Quaternion_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t18  Transform_get_localRotation_m2777 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m896 (Transform_t23 * __this, Quaternion_t18  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m3451 (Transform_t23 * __this, Quaternion_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m3452 (Transform_t23 * __this, Quaternion_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t17  Transform_get_localScale_m943 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m945 (Transform_t23 * __this, Vector3_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m3453 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m3454 (Transform_t23 * __this, Vector3_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t23 * Transform_get_parent_m2457 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m874 (Transform_t23 * __this, Transform_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t23 * Transform_get_parentInternal_m3455 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m3456 (Transform_t23 * __this, Transform_t23 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m2772 (Transform_t23 * __this, Transform_t23 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m2556 (Transform_t23 * __this, Transform_t23 * ___parent, bool ___worldPositionStays, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t571  Transform_get_worldToLocalMatrix_m2837 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m3457 (Transform_t23 * __this, Matrix4x4_t571 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" void Transform_Translate_m810 (Transform_t23 * __this, Vector3_t17  ___translation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m797 (Transform_t23 * __this, Vector3_t17  ___translation, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m973 (Transform_t23 * __this, Vector3_t17  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAroundInternal_m3458 (Transform_t23 * __this, Vector3_t17  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C" void Transform_INTERNAL_CALL_RotateAroundInternal_m3459 (Object_t * __this /* static, unused */, Transform_t23 * ___self, Vector3_t17 * ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAround_m813 (Transform_t23 * __this, Vector3_t17  ___point, Vector3_t17  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m940 (Transform_t23 * __this, Transform_t23 * ___target, Vector3_t17  ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m941 (Transform_t23 * __this, Vector3_t17  ___worldPosition, Vector3_t17  ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m3460 (Object_t * __this /* static, unused */, Transform_t23 * ___self, Vector3_t17 * ___worldPosition, Vector3_t17 * ___worldUp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t17  Transform_TransformDirection_m3461 (Transform_t23 * __this, Vector3_t17  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t17  Transform_INTERNAL_CALL_TransformDirection_m3462 (Object_t * __this /* static, unused */, Transform_t23 * ___self, Vector3_t17 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t17  Transform_TransformPoint_m2854 (Transform_t23 * __this, Vector3_t17  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t17  Transform_INTERNAL_CALL_TransformPoint_m3463 (Object_t * __this /* static, unused */, Transform_t23 * ___self, Vector3_t17 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t17  Transform_InverseTransformPoint_m2610 (Transform_t23 * __this, Vector3_t17  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t17  Transform_INTERNAL_CALL_InverseTransformPoint_m3464 (Object_t * __this /* static, unused */, Transform_t23 * ___self, Vector3_t17 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m761 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m2773 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m2592 (Transform_t23 * __this, Transform_t23 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m3465 (Transform_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t23 * Transform_GetChild_m760 (Transform_t23 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
