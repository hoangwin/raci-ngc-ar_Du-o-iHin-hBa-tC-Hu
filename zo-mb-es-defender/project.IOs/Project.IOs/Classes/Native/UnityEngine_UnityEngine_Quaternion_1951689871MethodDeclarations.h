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
#include "UnityEngine_UnityEngine_Quaternion_1951689871.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m_1098063415_0 (Quaternion_t52999491_0 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t52999491_0  Quaternion_get_identity_m1561886418_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m952616600_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0  ___a, Quaternion_t52999491_0  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t52999491_0  Quaternion_Inverse_m_619287690_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m1043108654_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0 * ___rotation, Quaternion_t52999491_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m_1656114024_0 (Quaternion_t52999491_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t303158795_0  Quaternion_get_eulerAngles_m_992393305_0 (Quaternion_t52999491_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t52999491_0  Quaternion_Euler_m_1407509121_0 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t52999491_0  Quaternion_Euler_m_708628037_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t303158795_0  Quaternion_Internal_ToEulerRad_m_1487458417_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1077217777_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0 * ___rotation, Vector3_t303158795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t52999491_0  Quaternion_Internal_FromEulerRad_m1121344272_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1113788132_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0 * ___euler, Quaternion_t52999491_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m_2024446768_0 (Quaternion_t52999491_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m_564575600_0 (Quaternion_t52999491_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t52999491_0  Quaternion_op_Multiply_m_1868239707_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0  ___lhs, Quaternion_t52999491_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Quaternion_op_Multiply_m_1815529313_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0  ___rotation, Vector3_t303158795_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m1042247620_0 (Object_t * __this /* static, unused */, Quaternion_t52999491_0  ___lhs, Quaternion_t52999491_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
