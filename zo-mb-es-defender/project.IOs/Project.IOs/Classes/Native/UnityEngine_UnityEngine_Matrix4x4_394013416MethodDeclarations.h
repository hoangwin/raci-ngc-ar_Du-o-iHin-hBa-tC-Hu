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
#include "UnityEngine_UnityEngine_Matrix4x4_394013416.h"
#include "UnityEngine_UnityEngine_Vector4706443322.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Quaternion_1951689871.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m312280350_0 (Matrix4x4_t55839158_0 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m1035113911_0 (Matrix4x4_t55839158_0 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m_977705111_0 (Matrix4x4_t55839158_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m870949794_0 (Matrix4x4_t55839158_0 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m_645259259_0 (Matrix4x4_t55839158_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m1321236479_0 (Matrix4x4_t55839158_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t55839158_0  Matrix4x4_Inverse_m146029241_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_Inverse_m_160193817_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0 * ___m, Matrix4x4_t55839158_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t55839158_0  Matrix4x4_get_inverse_m_1815579560_0 (Matrix4x4_t55839158_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t706443322_0  Matrix4x4_GetColumn_m1367096730_0 (Matrix4x4_t55839158_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetRow_m117954573_0 (Matrix4x4_t55839158_0 * __this, int32_t ___i, Vector4_t706443322_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Matrix4x4_MultiplyPoint3x4_m_1986329530_0 (Matrix4x4_t55839158_0 * __this, Vector3_t303158795_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t55839158_0  Matrix4x4_get_identity_m_1255406392_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  void Matrix4x4_SetTRS_m_538506994_0 (Matrix4x4_t55839158_0 * __this, Vector3_t303158795_0  ___pos, Quaternion_t52999491_0  ___q, Vector3_t303158795_0  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t55839158_0  Matrix4x4_TRS_m1913765359_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___pos, Quaternion_t52999491_0  ___q, Vector3_t303158795_0  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_TRS_m2077933669_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0 * ___pos, Quaternion_t52999491_0 * ___q, Vector3_t303158795_0 * ___s, Matrix4x4_t55839158_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m1982554457_0 (Matrix4x4_t55839158_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t55839158_0  Matrix4x4_op_Multiply_m_1942103803_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0  ___lhs, Matrix4x4_t55839158_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
