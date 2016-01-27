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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Plane1952878203.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Ray208299363.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m545259745_0 (Plane_t1952878203_0 * __this, Vector3_t303158795_0  ___inNormal, Vector3_t303158795_0  ___inPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C"  Vector3_t303158795_0  Plane_get_normal_m1872443823_0 (Plane_t1952878203_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C"  float Plane_get_distance_m1834776091_0 (Plane_t1952878203_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C"  bool Plane_Raycast_m1768805700_0 (Plane_t1952878203_0 * __this, Ray_t_169914375_0  ___ray, float* ___enter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
