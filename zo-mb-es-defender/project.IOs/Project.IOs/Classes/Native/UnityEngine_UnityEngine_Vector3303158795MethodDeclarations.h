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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1098954016_0 (Vector3_t303158795_0 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m_1215731735_0 (Vector3_t303158795_0 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_Lerp_m1585984285_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, Vector3_t303158795_0  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_Slerp_m846771032_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, Vector3_t303158795_0  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
extern "C"  void Vector3_INTERNAL_CALL_Slerp_m1119564456_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0 * ___a, Vector3_t303158795_0 * ___b, float ___t, Vector3_t303158795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_SmoothDamp_m_1207076783_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___current, Vector3_t303158795_0  ___target, Vector3_t303158795_0 * ___currentVelocity, float ___smoothTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_SmoothDamp_m655628337_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___current, Vector3_t303158795_0  ___target, Vector3_t303158795_0 * ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C"  float Vector3_get_Item_m_816651610_0 (Vector3_t303158795_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C"  void Vector3_set_Item_m_330572027_0 (Vector3_t303158795_0 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_Scale_m1087116865_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, Vector3_t303158795_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m1754570744_0 (Vector3_t303158795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m_1602704420_0 (Vector3_t303158795_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_Normalize_m2140428981_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m_615854870_0 (Vector3_t303158795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t303158795_0  Vector3_get_normalized_m_1086477773_0 (Vector3_t303158795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m_437777326_0 (Vector3_t303158795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m1121111708_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___lhs, Vector3_t303158795_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m_1742632318_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___from, Vector3_t303158795_0  ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m_1178710696_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, Vector3_t303158795_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_ClampMagnitude_m_1642231934_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___vector, float ___maxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C"  float Vector3_Magnitude_m1349200714_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m860342598_0 (Vector3_t303158795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m_535869132_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m_1560325284_0 (Vector3_t303158795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_Min_m_249493859_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___lhs, Vector3_t303158795_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_Max_m_1890778953_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___lhs, Vector3_t303158795_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t303158795_0  Vector3_get_zero_m121097022_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t303158795_0  Vector3_get_one_m1207693154_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t303158795_0  Vector3_get_forward_m_390116335_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t303158795_0  Vector3_get_back_m1010002405_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t303158795_0  Vector3_get_up_m804765879_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t303158795_0  Vector3_get_down_m_309828228_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t303158795_0  Vector3_get_left_m_2123954635_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t303158795_0  Vector3_get_right_m1220779252_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_op_Addition_m1375598595_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, Vector3_t303158795_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_op_Subtraction_m1552476555_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, Vector3_t303158795_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_op_UnaryNegation_m_911164688_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_op_Multiply_m_2127150321_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Vector3_op_Multiply_m_422335987_0 (Object_t * __this /* static, unused */, float ___d, Vector3_t303158795_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t303158795_0  Vector3_op_Division_m_979351446_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m305888255_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___lhs, Vector3_t303158795_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m1767050198_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___lhs, Vector3_t303158795_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
