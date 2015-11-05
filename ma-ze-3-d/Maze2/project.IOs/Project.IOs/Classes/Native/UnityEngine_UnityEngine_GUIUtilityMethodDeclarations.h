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

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.GUISkin
struct GUISkin_t714;
// System.Exception
struct Exception_t252;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FocusType.h"

// System.Void UnityEngine.GUIUtility::.cctor()
extern "C" void GUIUtility__cctor_m4013 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C" float GUIUtility_get_pixelsPerPoint_m4014 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(UnityEngine.FocusType)
extern "C" int32_t GUIUtility_GetControlID_m4015 (Object_t * __this /* static, unused */, int32_t ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
extern "C" Object_t * GUIUtility_GetStateObject_m4016 (Object_t * __this /* static, unused */, Type_t * ___t, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
extern "C" int32_t GUIUtility_get_hotControl_m4017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
extern "C" void GUIUtility_set_hotControl_m4018 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C" GUISkin_t714 * GUIUtility_GetDefaultSkin_m4019 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C" void GUIUtility_BeginGUI_m4020 (Object_t * __this /* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C" void GUIUtility_EndGUI_m4021 (Object_t * __this /* static, unused */, int32_t ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C" bool GUIUtility_EndGUIFromException_m4022 (Object_t * __this /* static, unused */, Exception_t252 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C" void GUIUtility_CheckOnGUI_m4023 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
extern "C" float GUIUtility_Internal_GetPixelsPerPoint_m4024 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
extern "C" int32_t GUIUtility_GetControlID_m4025 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
extern "C" int32_t GUIUtility_Internal_GetHotControl_m4026 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
extern "C" void GUIUtility_Internal_SetHotControl_m4027 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C" int32_t GUIUtility_get_keyboardControl_m4028 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_keyboardControl(System.Int32)
extern "C" void GUIUtility_set_keyboardControl_m4029 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
extern "C" String_t* GUIUtility_get_systemCopyBuffer_m2739 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
extern "C" void GUIUtility_set_systemCopyBuffer_m2740 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C" GUISkin_t714 * GUIUtility_Internal_GetDefaultSkin_m4030 (Object_t * __this /* static, unused */, int32_t ___skinMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C" void GUIUtility_Internal_ExitGUI_m4031 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C" int32_t GUIUtility_Internal_GetGUIDepth_m4032 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)
extern "C" void GUIUtility_set_mouseUsed_m4033 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_textFieldInput(System.Boolean)
extern "C" void GUIUtility_set_textFieldInput_m4034 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
