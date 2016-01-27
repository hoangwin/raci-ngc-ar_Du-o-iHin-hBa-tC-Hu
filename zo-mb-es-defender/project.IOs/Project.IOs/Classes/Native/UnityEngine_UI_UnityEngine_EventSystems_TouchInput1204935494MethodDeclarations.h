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

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t1204935494_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
extern "C"  void TouchInputModule__ctor_m1061183348_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
extern "C"  bool TouchInputModule_get_allowActivationOnStandalone_m_1813694728_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
extern "C"  void TouchInputModule_set_allowActivationOnStandalone_m527533109_0 (TouchInputModule_t1204935494_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_forceModuleActive()
extern "C"  bool TouchInputModule_get_forceModuleActive_m1857469782_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_forceModuleActive(System.Boolean)
extern "C"  void TouchInputModule_set_forceModuleActive_m_2032027473_0 (TouchInputModule_t1204935494_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
extern "C"  void TouchInputModule_UpdateModule_m_2105822071_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
extern "C"  bool TouchInputModule_IsModuleSupported_m348464278_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
extern "C"  bool TouchInputModule_ShouldActivateModule_m336123208_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
extern "C"  bool TouchInputModule_UseFakeInput_m2112019004_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
extern "C"  void TouchInputModule_Process_m1373751353_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
extern "C"  void TouchInputModule_FakeTouches_m1587220368_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
extern "C"  void TouchInputModule_ProcessTouchEvents_m_1381428653_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void TouchInputModule_ProcessTouchPress_m_991650497_0 (TouchInputModule_t1204935494_0 * __this, PointerEventData_t1857092352_0 * ___pointerEvent, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
extern "C"  void TouchInputModule_DeactivateModule_m541440648_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
extern "C"  String_t* TouchInputModule_ToString_m_1786511051_0 (TouchInputModule_t1204935494_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
