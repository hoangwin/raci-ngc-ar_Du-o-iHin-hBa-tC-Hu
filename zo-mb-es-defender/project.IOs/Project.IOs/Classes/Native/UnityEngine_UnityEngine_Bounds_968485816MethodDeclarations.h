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
#include "UnityEngine_UnityEngine_Bounds_968485816.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds__ctor_m376052454_0 (Bounds_t_968485816_0 * __this, Vector3_t303158795_0  ___center, Vector3_t303158795_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C"  int32_t Bounds_GetHashCode_m_10524117_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C"  bool Bounds_Equals_m839506137_0 (Bounds_t_968485816_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t303158795_0  Bounds_get_center_m1002191484_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C"  void Bounds_set_center_m_1083628875_0 (Bounds_t_968485816_0 * __this, Vector3_t303158795_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t303158795_0  Bounds_get_size_m1627996388_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C"  void Bounds_set_size_m_1474229253_0 (Bounds_t_968485816_0 * __this, Vector3_t303158795_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t303158795_0  Bounds_get_extents_m_217643118_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C"  void Bounds_set_extents_m_1465390263_0 (Bounds_t_968485816_0 * __this, Vector3_t303158795_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C"  Vector3_t303158795_0  Bounds_get_min_m_432060141_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t303158795_0  Bounds_get_max_m1544215121_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds_SetMinMax_m1523110422_0 (Bounds_t_968485816_0 * __this, Vector3_t303158795_0  ___min, Vector3_t303158795_0  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C"  void Bounds_Encapsulate_m1131417218_0 (Bounds_t_968485816_0 * __this, Vector3_t303158795_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C"  String_t* Bounds_ToString_m1966597703_0 (Bounds_t_968485816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Bounds_op_Equality_m_2133137016_0 (Object_t * __this /* static, unused */, Bounds_t_968485816_0  ___lhs, Bounds_t_968485816_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Bounds_op_Inequality_m_753303611_0 (Object_t * __this /* static, unused */, Bounds_t_968485816_0  ___lhs, Bounds_t_968485816_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
