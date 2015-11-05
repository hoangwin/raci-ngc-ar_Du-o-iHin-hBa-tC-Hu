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

// TJoyStick
struct TJoyStick_t65;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t243;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TJoyStick4Way.h"
#include "AssemblyU2DCSharp_TJoyStick8Way.h"

// System.Void TJoyStick::.ctor()
extern "C" void TJoyStick__ctor_m717 (TJoyStick_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::.cctor()
extern "C" void TJoyStick__cctor_m718 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::Start()
extern "C" void TJoyStick_Start_m719 (TJoyStick_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::init()
extern "C" void TJoyStick_init_m720 (TJoyStick_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::Update()
extern "C" void TJoyStick_Update_m721 (TJoyStick_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::ButtonDown(UnityEngine.EventSystems.BaseEventData)
extern "C" void TJoyStick_ButtonDown_m722 (TJoyStick_t65 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::ButtonUp(UnityEngine.EventSystems.BaseEventData)
extern "C" void TJoyStick_ButtonUp_m723 (TJoyStick_t65 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::ButtonDrag(UnityEngine.EventSystems.BaseEventData)
extern "C" void TJoyStick_ButtonDrag_m724 (TJoyStick_t65 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TJoyStick::OnMove()
extern "C" void TJoyStick_OnMove_m725 (TJoyStick_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TJoyStick4Way TJoyStick::Get4Way()
extern "C" int32_t TJoyStick_Get4Way_m726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TJoyStick8Way TJoyStick::Get8Way()
extern "C" int32_t TJoyStick_Get8Way_m727 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
