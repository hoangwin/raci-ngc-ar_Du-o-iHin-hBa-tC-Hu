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
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m1888971332_0 (Vector2_t1869242736_0 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C"  float Vector2_get_Item_m155200075_0 (Vector2_t1869242736_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern "C"  void Vector2_set_Item_m328933696_0 (Vector2_t1869242736_0 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  Vector2_Scale_m1750459451_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___a, Vector2_t1869242736_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::Normalize()
extern "C"  void Vector2_Normalize_m_1829189333_0 (Vector2_t1869242736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C"  String_t* Vector2_ToString_m775491729_0 (Vector2_t1869242736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m_1941537923_0 (Vector2_t1869242736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C"  bool Vector2_Equals_m1405920279_0 (Vector2_t1869242736_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Dot_m984879905_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___lhs, Vector2_t1869242736_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m33802565_0 (Vector2_t1869242736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C"  float Vector2_get_sqrMagnitude_m_1897019145_0 (Vector2_t1869242736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C"  float Vector2_SqrMagnitude_m1793890068_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t1869242736_0  Vector2_get_zero_m1756644542_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C"  Vector2_t1869242736_0  Vector2_get_one_m_955303710_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C"  Vector2_t1869242736_0  Vector2_get_up_m_1358230985_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C"  Vector2_t1869242736_0  Vector2_get_right_m_1438640524_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  Vector2_op_Addition_m_1379091197_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___a, Vector2_t1869242736_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  Vector2_op_Subtraction_m1771923851_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___a, Vector2_t1869242736_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t1869242736_0  Vector2_op_Multiply_m_1551470544_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t1869242736_0  Vector2_op_Division_m_707678269_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Equality_m_1314243136_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___lhs, Vector2_t1869242736_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Inequality_m1221006231_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___lhs, Vector2_t1869242736_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t1869242736_0  Vector2_op_Implicit_m375600929_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t303158795_0  Vector2_op_Implicit_m837883165_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
