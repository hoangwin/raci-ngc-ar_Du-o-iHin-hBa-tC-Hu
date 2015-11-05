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

// UnityEngine.Rigidbody
struct Rigidbody_t275;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" void Rigidbody_MovePosition_m970 (Rigidbody_t275 * __this, Vector3_t17  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_CALL_MovePosition_m3525 (Object_t * __this /* static, unused */, Rigidbody_t275 * ___self, Vector3_t17 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_MoveRotation_m972 (Rigidbody_t275 * __this, Quaternion_t18  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_CALL_MoveRotation_m3526 (Object_t * __this /* static, unused */, Rigidbody_t275 * ___self, Quaternion_t18 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
