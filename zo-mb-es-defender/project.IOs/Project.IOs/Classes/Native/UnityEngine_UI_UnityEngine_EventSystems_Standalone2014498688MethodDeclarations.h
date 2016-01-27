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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t2014498688_0;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t_477930492_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_Standalone1414233916.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
extern "C"  void StandaloneInputModule__ctor_m_685219036_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
extern "C"  int32_t StandaloneInputModule_get_inputMode_m1415645893_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
extern "C"  bool StandaloneInputModule_get_allowActivationOnMobileDevice_m1246375011_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
extern "C"  void StandaloneInputModule_set_allowActivationOnMobileDevice_m_1663845678_0 (StandaloneInputModule_t2014498688_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_forceModuleActive()
extern "C"  bool StandaloneInputModule_get_forceModuleActive_m_2110903582_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_forceModuleActive(System.Boolean)
extern "C"  void StandaloneInputModule_set_forceModuleActive_m_393617317_0 (StandaloneInputModule_t2014498688_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
extern "C"  float StandaloneInputModule_get_inputActionsPerSecond_m_1845529183_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
extern "C"  void StandaloneInputModule_set_inputActionsPerSecond_m_350983062_0 (StandaloneInputModule_t2014498688_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_repeatDelay()
extern "C"  float StandaloneInputModule_get_repeatDelay_m3025279_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_repeatDelay(System.Single)
extern "C"  void StandaloneInputModule_set_repeatDelay_m_1474021558_0 (StandaloneInputModule_t2014498688_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
extern "C"  String_t* StandaloneInputModule_get_horizontalAxis_m_210937213_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
extern "C"  void StandaloneInputModule_set_horizontalAxis_m_552011120_0 (StandaloneInputModule_t2014498688_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
extern "C"  String_t* StandaloneInputModule_get_verticalAxis_m869584459_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
extern "C"  void StandaloneInputModule_set_verticalAxis_m1165235646_0 (StandaloneInputModule_t2014498688_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
extern "C"  String_t* StandaloneInputModule_get_submitButton_m2045676570_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
extern "C"  void StandaloneInputModule_set_submitButton_m_348114077_0 (StandaloneInputModule_t2014498688_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
extern "C"  String_t* StandaloneInputModule_get_cancelButton_m1563746440_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
extern "C"  void StandaloneInputModule_set_cancelButton_m_1652289967_0 (StandaloneInputModule_t2014498688_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
extern "C"  void StandaloneInputModule_UpdateModule_m683437289_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
extern "C"  bool StandaloneInputModule_IsModuleSupported_m623598506_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
extern "C"  bool StandaloneInputModule_ShouldActivateModule_m221601604_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
extern "C"  void StandaloneInputModule_ActivateModule_m76610285_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
extern "C"  void StandaloneInputModule_DeactivateModule_m_1342118412_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
extern "C"  void StandaloneInputModule_Process_m_1483604871_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ProcessTouchEvents()
extern "C"  bool StandaloneInputModule_ProcessTouchEvents_m_684444469_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
extern "C"  void StandaloneInputModule_ProcessTouchPress_m774618611_0 (StandaloneInputModule_t2014498688_0 * __this, PointerEventData_t1857092352_0 * ___pointerEvent, bool ___pressed, bool ___released, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendSubmitEventToSelectedObject_m_873812003_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
extern "C"  Vector2_t1869242736_0  StandaloneInputModule_GetRawMoveVector_m2001528411_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendMoveEventToSelectedObject_m393857214_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
extern "C"  void StandaloneInputModule_ProcessMouseEvent_m_454632036_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent(System.Int32)
extern "C"  void StandaloneInputModule_ProcessMouseEvent_m_1077537007_0 (StandaloneInputModule_t2014498688_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
extern "C"  bool StandaloneInputModule_SendUpdateEventToSelectedObject_m547288770_0 (StandaloneInputModule_t2014498688_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C"  void StandaloneInputModule_ProcessMousePress_m_900947877_0 (StandaloneInputModule_t2014498688_0 * __this, MouseButtonEventData_t_477930492_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
