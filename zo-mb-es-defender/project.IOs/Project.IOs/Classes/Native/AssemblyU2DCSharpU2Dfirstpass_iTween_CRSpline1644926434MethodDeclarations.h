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

// iTween/CRSpline
struct CRSpline_t1644926434_0;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t_434103371_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C"  void CRSpline__ctor_m307003237_0 (CRSpline_t1644926434_0 * __this, Vector3U5BU5D_t_434103371_0* ___pts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C"  Vector3_t303158795_0  CRSpline_Interp_m_317313107_0 (CRSpline_t1644926434_0 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
