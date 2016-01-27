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

// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// UnityEngine.Object[]
struct ObjectU5BU5D_t_436107704_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Quaternion_1951689871.h"
#include "UnityEngine_UnityEngine_HideFlags1895777476.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m197157284_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t_1540828846_0 * Object_Internal_CloneSingle_m260620116_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t_1540828846_0 * Object_Internal_InstantiateSingle_m_1518664699_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___data, Vector3_t303158795_0  ___pos, Quaternion_t52999491_0  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t_1540828846_0 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m_362547046_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___data, Vector3_t303158795_0 * ___pos, Quaternion_t52999491_0 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m_15554743_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m_765998984_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C"  void Object_DestroyImmediate_m_731650064_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m409483991_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t_436107704_0* Object_FindObjectsOfType_m2121813744_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m_783109175_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m1844937612_0 (Object_t_1540828846_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m_1964204322_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
extern "C"  int32_t Object_get_hideFlags_m_136016427_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m786116970_0 (Object_t_1540828846_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C"  void Object_DestroyObject_m282495858_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C"  void Object_DestroyObject_m_1951473315_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindSceneObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t_436107704_0* Object_FindSceneObjectsOfType_m1833688338_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfTypeIncludingAssets(System.Type)
extern "C"  ObjectU5BU5D_t_436107704_0* Object_FindObjectsOfTypeIncludingAssets_m_306115870_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C"  String_t* Object_ToString_m1947404527_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::DoesObjectWithInstanceIDExist(System.Int32)
extern "C"  bool Object_DoesObjectWithInstanceIDExist_m_1724172022_0 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C"  bool Object_Equals_m_265338383_0 (Object_t_1540828846_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m_863325237_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_CompareBaseObjects_m_340971082_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___lhs, Object_t_1540828846_0 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C"  bool Object_IsNativeObjectAlive_m_238749681_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C"  int32_t Object_GetInstanceID_m1920497914_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C"  IntPtr_t Object_GetCachedPtr_m943750213_0 (Object_t_1540828846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t_1540828846_0 * Object_Instantiate_m938141395_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___original, Vector3_t303158795_0  ___position, Quaternion_t52999491_0  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C"  Object_t_1540828846_0 * Object_Instantiate_m_1855811807_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m1711119106_0 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C"  Object_t_1540828846_0 * Object_FindObjectOfType_m_1964563233_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m1167108095_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m_1091692364_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___x, Object_t_1540828846_0 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m81930277_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___x, Object_t_1540828846_0 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Object_t_1540828846_0_marshal(const Object_t_1540828846_0& unmarshaled, Object_t_1540828846_0_marshaled& marshaled);
extern "C" void Object_t_1540828846_0_marshal_back(const Object_t_1540828846_0_marshaled& marshaled, Object_t_1540828846_0& unmarshaled);
extern "C" void Object_t_1540828846_0_marshal_cleanup(Object_t_1540828846_0_marshaled& marshaled);
