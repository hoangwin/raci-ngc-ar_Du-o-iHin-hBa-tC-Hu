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

// UnityEngine.Component
struct Component_t270;
// UnityEngine.Transform
struct Transform_t23;
// UnityEngine.GameObject
struct GameObject_t7;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t529;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3424 (Component_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t23 * Component_get_transform_m745 (Component_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t7 * Component_get_gameObject_m733 (Component_t270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t270 * Component_GetComponent_m2924 (Component_t270 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m3425 (Component_t270 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t270 * Component_GetComponentInChildren_m3426 (Component_t270 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C" Component_t270 * Component_GetComponentInParent_m3427 (Component_t270 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3428 (Component_t270 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m2644 (Component_t270 * __this, Type_t * ___type, List_1_t529 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
