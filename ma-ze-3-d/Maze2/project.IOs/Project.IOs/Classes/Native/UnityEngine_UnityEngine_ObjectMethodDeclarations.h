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
struct Object_t245;
struct Object_t245_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_HideFlags.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m3412 (Object_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t245 * Object_Internal_CloneSingle_m3413 (Object_t * __this /* static, unused */, Object_t245 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m3414 (Object_t * __this /* static, unused */, Object_t245 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m735 (Object_t * __this /* static, unused */, Object_t245 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m3415 (Object_t * __this /* static, unused */, Object_t245 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m855 (Object_t * __this /* static, unused */, Object_t245 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m764 (Object_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m873 (Object_t245 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m854 (Object_t * __this /* static, unused */, Object_t245 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m842 (Object_t245 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C" void Object_DestroyObject_m3416 (Object_t * __this /* static, unused */, Object_t245 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C" void Object_DestroyObject_m887 (Object_t * __this /* static, unused */, Object_t245 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m3417 (Object_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C" bool Object_Equals_m3418 (Object_t245 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m3419 (Object_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m3420 (Object_t * __this /* static, unused */, Object_t245 * ___lhs, Object_t245 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m3421 (Object_t * __this /* static, unused */, Object_t245 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m837 (Object_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m3422 (Object_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m3423 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m919 (Object_t * __this /* static, unused */, Object_t245 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m789 (Object_t * __this /* static, unused */, Object_t245 * ___x, Object_t245 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m742 (Object_t * __this /* static, unused */, Object_t245 * ___x, Object_t245 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Object_t245_marshal(const Object_t245& unmarshaled, Object_t245_marshaled& marshaled);
extern "C" void Object_t245_marshal_back(const Object_t245_marshaled& marshaled, Object_t245& unmarshaled);
extern "C" void Object_t245_marshal_cleanup(Object_t245_marshaled& marshaled);
