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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1829365492_0;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1995457670_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void BaseEventData__ctor_m_1653956408_0 (BaseEventData_t1723209434_0 * __this, EventSystem_t1829365492_0 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C"  BaseInputModule_t1995457670_0 * BaseEventData_get_currentInputModule_m_685533421_0 (BaseEventData_t1723209434_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C"  GameObject_t_1666380968_0 * BaseEventData_get_selectedObject_m_743760304_0 (BaseEventData_t1723209434_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C"  void BaseEventData_set_selectedObject_m_2096827313_0 (BaseEventData_t1723209434_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
