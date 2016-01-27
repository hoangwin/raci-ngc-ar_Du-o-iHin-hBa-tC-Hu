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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray208299363.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Ray__ctor_m_915933249_0 (Ray_t_169914375_0 * __this, Vector3_t303158795_0  ___origin, Vector3_t303158795_0  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t303158795_0  Ray_get_origin_m_627314462_0 (Ray_t_169914375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t303158795_0  Ray_get_direction_m2126130655_0 (Ray_t_169914375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C"  Vector3_t303158795_0  Ray_GetPoint_m_1679320884_0 (Ray_t_169914375_0 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m2019179238_0 (Ray_t_169914375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
