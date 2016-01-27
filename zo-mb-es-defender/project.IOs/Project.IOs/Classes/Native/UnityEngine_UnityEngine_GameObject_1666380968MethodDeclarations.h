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

// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// UnityEngine.Component
struct Component_t_437510044_0;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2086800570_0;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "UnityEngine_UnityEngine_SendMessageOptions_1731689182.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m_1919234074_0 (GameObject_t_1666380968_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern "C"  void GameObject__ctor_m1633632305_0 (GameObject_t_1666380968_0 * __this, String_t* ___name, TypeU5BU5D_t1362412059_0* ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t_437510044_0 * GameObject_GetComponent_m306258075_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void GameObject_GetComponentFastPath_m481070871_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t_437510044_0 * GameObject_GetComponentInChildren_m_31641556_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C"  Component_t_437510044_0 * GameObject_GetComponentInParent_m1235194528_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t2086800570_0* GameObject_GetComponents_m297658252_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t2086800570_0* GameObject_GetComponentsInChildren_m993725821_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t2086800570_0* GameObject_GetComponentsInParent_m1568786844_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  Array_t * GameObject_GetComponentsInternal_m_808442897_0 (GameObject_t_1666380968_0 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t_495934667_0 * GameObject_get_transform_m1175301637_0 (GameObject_t_1666380968_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C"  int32_t GameObject_get_layer_m_5372874_0 (GameObject_t_1666380968_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C"  void GameObject_set_layer_m_1020323501_0 (GameObject_t_1666380968_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m_398044319_0 (GameObject_t_1666380968_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1067050293_0 (GameObject_t_1666380968_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C"  bool GameObject_get_activeInHierarchy_m745092789_0 (GameObject_t_1666380968_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094_0 (GameObject_t_1666380968_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C"  void GameObject_set_tag_m717375123_0 (GameObject_t_1666380968_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m71956653_0 (GameObject_t_1666380968_0 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C"  Component_t_437510044_0 * GameObject_Internal_AddComponentWithType_m214735204_0 (GameObject_t_1666380968_0 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t_437510044_0 * GameObject_AddComponent_m_537401682_0 (GameObject_t_1666380968_0 * __this, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C"  void GameObject_Internal_CreateGameObject_m_866768701_0 (Object_t * __this /* static, unused */, GameObject_t_1666380968_0 * ___mono, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t_1666380968_0 * GameObject_Find_m836511350_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
