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

// UnityEngine.Event
struct Event_t414;
struct Event_t414_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_EventType.h"
#include "UnityEngine_UnityEngine_EventModifiers.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m2721 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(UnityEngine.Event)
extern "C" void Event__ctor_m3719 (Event_t414 * __this, Event_t414 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(System.IntPtr)
extern "C" void Event__ctor_m3720 (Event_t414 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m3721 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t115  Event_get_mousePosition_m3722 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
extern "C" void Event_set_mousePosition_m3723 (Event_t414 * __this, Vector2_t115  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C" Vector2_t115  Event_get_delta_m3724 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
extern "C" void Event_set_delta_m3725 (Event_t414 * __this, Vector2_t115  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Event::get_mouseRay()
extern "C" Ray_t249  Event_get_mouseRay_m3726 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mouseRay(UnityEngine.Ray)
extern "C" void Event_set_mouseRay_m3727 (Event_t414 * __this, Ray_t249  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_shift()
extern "C" bool Event_get_shift_m3728 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_shift(System.Boolean)
extern "C" void Event_set_shift_m3729 (Event_t414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_control()
extern "C" bool Event_get_control_m3730 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_control(System.Boolean)
extern "C" void Event_set_control_m3731 (Event_t414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_alt()
extern "C" bool Event_get_alt_m3732 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_alt(System.Boolean)
extern "C" void Event_set_alt_m3733 (Event_t414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_command()
extern "C" bool Event_get_command_m3734 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_command(System.Boolean)
extern "C" void Event_set_command_m3735 (Event_t414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_capsLock()
extern "C" bool Event_get_capsLock_m3736 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_capsLock(System.Boolean)
extern "C" void Event_set_capsLock_m3737 (Event_t414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_numeric()
extern "C" bool Event_get_numeric_m3738 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_numeric(System.Boolean)
extern "C" void Event_set_numeric_m3739 (Event_t414 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_functionKey()
extern "C" bool Event_get_functionKey_m3740 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t414 * Event_get_current_m3741 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
extern "C" void Event_set_current_m3742 (Object_t * __this /* static, unused */, Event_t414 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m3743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m3744 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m3745 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
extern "C" Event_t414 * Event_KeyboardEvent_m3746 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m3747 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m3748 (Event_t414 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m3749 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m3750 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m3751 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitCopy(UnityEngine.Event)
extern "C" void Event_InitCopy_m3752 (Event_t414 * __this, Event_t414 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitPtr(System.IntPtr)
extern "C" void Event_InitPtr_m3753 (Event_t414 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m2756 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m2757 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
extern "C" void Event_set_type_m3754 (Event_t414 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C" int32_t Event_GetTypeForControl_m3755 (Event_t414 * __this, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMousePosition(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMousePosition_m3756 (Event_t414 * __this, Vector2_t115  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMousePosition_m3757 (Object_t * __this /* static, unused */, Event_t414 * ___self, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m3758 (Event_t414 * __this, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMouseDelta(UnityEngine.Vector2)
extern "C" void Event_Internal_SetMouseDelta_m3759 (Event_t414 * __this, Vector2_t115  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)
extern "C" void Event_INTERNAL_CALL_Internal_SetMouseDelta_m3760 (Object_t * __this /* static, unused */, Event_t414 * ___self, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMouseDelta_m3761 (Event_t414 * __this, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_button()
extern "C" int32_t Event_get_button_m3762 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_button(System.Int32)
extern "C" void Event_set_button_m3763 (Event_t414 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2752 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
extern "C" void Event_set_modifiers_m3764 (Event_t414 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Event::get_pressure()
extern "C" float Event_get_pressure_m3765 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_pressure(System.Single)
extern "C" void Event_set_pressure_m3766 (Event_t414 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C" int32_t Event_get_clickCount_m3767 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
extern "C" void Event_set_clickCount_m3768 (Event_t414 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2754 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_character(System.Char)
extern "C" void Event_set_character_m3769 (Event_t414 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2758 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_commandName(System.String)
extern "C" void Event_set_commandName_m3770 (Event_t414 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2753 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
extern "C" void Event_set_keyCode_m3771 (Event_t414 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m3772 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C" void Event_Use_m3773 (Event_t414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m2759 (Object_t * __this /* static, unused */, Event_t414 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetEventCount()
extern "C" int32_t Event_GetEventCount_m3774 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Event_t414_marshal(const Event_t414& unmarshaled, Event_t414_marshaled& marshaled);
extern "C" void Event_t414_marshal_back(const Event_t414_marshaled& marshaled, Event_t414& unmarshaled);
extern "C" void Event_t414_marshal_cleanup(Event_t414_marshaled& marshaled);
