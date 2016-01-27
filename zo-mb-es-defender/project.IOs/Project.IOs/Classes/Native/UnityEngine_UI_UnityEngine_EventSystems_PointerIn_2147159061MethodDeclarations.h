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

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t_2147159061_0;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t28317626_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEven354649701.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEv_1198848138.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
extern "C"  void MouseState__ctor_m_1218357491_0 (MouseState_t_2147159061_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
extern "C"  bool MouseState_AnyPressesThisFrame_m942422561_0 (MouseState_t_2147159061_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
extern "C"  bool MouseState_AnyReleasesThisFrame_m985115530_0 (MouseState_t_2147159061_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  ButtonState_t28317626_0 * MouseState_GetButtonState_m337580068_0 (MouseState_t_2147159061_0 * __this, int32_t ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
extern "C"  void MouseState_SetButtonState_m_1965044933_0 (MouseState_t_2147159061_0 * __this, int32_t ___button, int32_t ___stateForMouseButton, PointerEventData_t1857092352_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
