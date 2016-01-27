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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t624177749_0;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1408942635_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_RaycastHit_416754629.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction_647400125.h"
#include "UnityEngine_UnityEngine_Ray208299363.h"
#include "UnityEngine_UnityEngine_Quaternion_1951689871.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m2036777053_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___origin, Vector3_t303158795_0  ___direction, RaycastHit_t_416754629_0 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C"  bool Physics_Raycast_m1198428297_0 (Object_t * __this /* static, unused */, Ray_t_169914375_0  ___ray, RaycastHit_t_416754629_0 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m233619224_0 (Object_t * __this /* static, unused */, Ray_t_169914375_0  ___ray, RaycastHit_t_416754629_0 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  RaycastHitU5BU5D_t624177749_0* Physics_RaycastAll_m_1570627821_0 (Object_t * __this /* static, unused */, Ray_t_169914375_0  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t624177749_0* Physics_RaycastAll_m410413656_0 (Object_t * __this /* static, unused */, Ray_t_169914375_0  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t624177749_0* Physics_RaycastAll_m_386703705_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___origin, Vector3_t303158795_0  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  RaycastHitU5BU5D_t624177749_0* Physics_INTERNAL_CALL_RaycastAll_m2126789092_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0 * ___origin, Vector3_t303158795_0 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  ColliderU5BU5D_t1408942635_0* Physics_OverlapBox_m2005875016_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___center, Vector3_t303158795_0  ___halfExtents, Quaternion_t52999491_0  ___orientation, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider[] UnityEngine.Physics::INTERNAL_CALL_OverlapBox(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  ColliderU5BU5D_t1408942635_0* Physics_INTERNAL_CALL_OverlapBox_m_1767385552_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0 * ___center, Vector3_t303158795_0 * ___halfExtents, Quaternion_t52999491_0 * ___orientation, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m1160243045_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0  ___origin, Vector3_t303158795_0  ___direction, RaycastHit_t_416754629_0 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m93849932_0 (Object_t * __this /* static, unused */, Vector3_t303158795_0 * ___origin, Vector3_t303158795_0 * ___direction, RaycastHit_t_416754629_0 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
