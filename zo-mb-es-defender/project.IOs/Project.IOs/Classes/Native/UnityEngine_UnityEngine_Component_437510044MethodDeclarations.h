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
struct Component_t_437510044_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t2086800570_0;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t_897440588_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "UnityEngine_UnityEngine_SendMessageOptions_1731689182.h"

// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m205306948_0 (Component_t_437510044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t_495934667_0 * Component_get_transform_m_1448260031_0 (Component_t_437510044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t_1666380968_0 * Component_get_gameObject_m_1171140771_0 (Component_t_437510044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t_437510044_0 * Component_GetComponent_m2006302189_0 (Component_t_437510044_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m_1594152589_0 (Component_t_437510044_0 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
extern "C"  Component_t_437510044_0 * Component_GetComponent_m_1821134654_0 (Component_t_437510044_0 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C"  Component_t_437510044_0 * Component_GetComponentInChildren_m_309963681_0 (Component_t_437510044_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t_437510044_0 * Component_GetComponentInChildren_m_369337872_0 (Component_t_437510044_0 * __this, Type_t * ___t, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type)
extern "C"  ComponentU5BU5D_t2086800570_0* Component_GetComponentsInChildren_m843288020_0 (Component_t_437510044_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t2086800570_0* Component_GetComponentsInChildren_m908027537_0 (Component_t_437510044_0 * __this, Type_t * ___t, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t_437510044_0 * Component_GetComponentInParent_m_1495564796_0 (Component_t_437510044_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type)
extern "C"  ComponentU5BU5D_t2086800570_0* Component_GetComponentsInParent_m_102782667_0 (Component_t_437510044_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t2086800570_0* Component_GetComponentsInParent_m1920178904_0 (Component_t_437510044_0 * __this, Type_t * ___t, bool ___includeInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t2086800570_0* Component_GetComponents_m637589504_0 (Component_t_437510044_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C"  void Component_GetComponentsForListInternal_m_53138905_0 (Component_t_437510044_0 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void Component_GetComponents_m_1842793077_0 (Component_t_437510044_0 * __this, Type_t * ___type, List_1_t_897440588_0 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014_0 (Component_t_437510044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::set_tag(System.String)
extern "C"  void Component_set_tag_m_2673793_0 (Component_t_437510044_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C"  bool Component_CompareTag_m_851674931_0 (Component_t_437510044_0 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m_1710878509_0 (Component_t_437510044_0 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,System.Object)
extern "C"  void Component_SendMessageUpwards_m325086847_0 (Component_t_437510044_0 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String)
extern "C"  void Component_SendMessageUpwards_m2041012277_0 (Component_t_437510044_0 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessageUpwards(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessageUpwards_m19741277_0 (Component_t_437510044_0 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m_2053535163_0 (Component_t_437510044_0 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object)
extern "C"  void Component_SendMessage_m913946877_0 (Component_t_437510044_0 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C"  void Component_SendMessage_m_679288709_0 (Component_t_437510044_0 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m_95385721_0 (Component_t_437510044_0 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m_2064782764_0 (Component_t_437510044_0 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object)
extern "C"  void Component_BroadcastMessage_m1308086896_0 (Component_t_437510044_0 * __this, String_t* ___methodName, Object_t * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String)
extern "C"  void Component_BroadcastMessage_m1706240890_0 (Component_t_437510044_0 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_BroadcastMessage_m444672650_0 (Component_t_437510044_0 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
