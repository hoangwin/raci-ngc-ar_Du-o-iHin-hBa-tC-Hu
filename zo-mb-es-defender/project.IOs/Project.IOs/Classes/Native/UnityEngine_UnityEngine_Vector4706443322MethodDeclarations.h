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
#include "UnityEngine_UnityEngine_Vector4706443322.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m_164854014_0 (Vector4_t706443322_0 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single)
extern "C"  void Vector4__ctor_m_2065465552_0 (Vector4_t706443322_0 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C"  float Vector4_get_Item_m_640393855_0 (Vector4_t706443322_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C"  void Vector4_set_Item_m498154462_0 (Vector4_t706443322_0 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m1576457715_0 (Vector4_t706443322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C"  bool Vector4_Equals_m_511235719_0 (Vector4_t706443322_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C"  String_t* Vector4_ToString_m_1954646253_0 (Vector4_t706443322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  float Vector4_Dot_m_2009023551_0 (Object_t * __this /* static, unused */, Vector4_t706443322_0  ___a, Vector4_t706443322_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C"  float Vector4_get_sqrMagnitude_m1978047701_0 (Vector4_t706443322_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t706443322_0  Vector4_get_zero_m_1782667330_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
extern "C"  Vector4_t706443322_0  Vector4_get_one_m_1255530272_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t706443322_0  Vector4_op_Multiply_m_1090063940_0 (Object_t * __this /* static, unused */, Vector4_t706443322_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(System.Single,UnityEngine.Vector4)
extern "C"  Vector4_t706443322_0  Vector4_op_Multiply_m_1696563012_0 (Object_t * __this /* static, unused */, float ___d, Vector4_t706443322_0  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t706443322_0  Vector4_op_Division_m_1893586295_0 (Object_t * __this /* static, unused */, Vector4_t706443322_0  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector4_t706443322_0  Vector4_op_Implicit_m1059320239_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector4_t706443322_0  Vector4_op_Implicit_m_1669563116_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
