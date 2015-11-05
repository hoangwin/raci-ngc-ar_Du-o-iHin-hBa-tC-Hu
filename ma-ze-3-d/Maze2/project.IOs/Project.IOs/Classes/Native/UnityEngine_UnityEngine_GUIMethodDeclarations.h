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

// UnityEngine.GUISkin
struct GUISkin_t714;
// UnityEngine.GUIContent
struct GUIContent_t717;
// UnityEngine.GUIStyle
struct GUIStyle_t723;
// System.String
struct String_t;
// UnityEngine.TextEditor
struct TextEditor_t793;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t712;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m3780 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m3781 (Object_t * __this /* static, unused */, DateTime_t716  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m3782 (Object_t * __this /* static, unused */, GUISkin_t714 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t714 * GUI_get_skin_m3783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m3784 (Object_t * __this /* static, unused */, GUISkin_t714 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m3785 (Object_t * __this /* static, unused */, Rect_t27  ___position, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m3786 (Object_t * __this /* static, unused */, Rect_t27  ___position, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m3787 (Object_t * __this /* static, unused */, Rect_t27  ___position, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m3788 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C" void GUI_DoTextField_m3789 (Object_t * __this /* static, unused */, Rect_t27  ___position, int32_t ___id, GUIContent_t717 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C" void GUI_DoTextField_m3790 (Object_t * __this /* static, unused */, Rect_t27  ___position, int32_t ___id, GUIContent_t717 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t723 * ___style, String_t* ___secureText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m3791 (Object_t * __this /* static, unused */, Rect_t27  ___position, int32_t ___id, GUIContent_t717 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t723 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m3792 (Object_t * __this /* static, unused */, Rect_t27  ___position, int32_t ___id, GUIContent_t717 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t723 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t793 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForDesktop_m3793 (Object_t * __this /* static, unused */, Rect_t27  ___position, int32_t ___id, GUIContent_t717 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t723 * ___style, TextEditor_t793 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m3794 (Object_t * __this /* static, unused */, Rect_t27  ___position, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m3795 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m3796 (Object_t * __this /* static, unused */, WindowFunction_t712 * ___func, int32_t ___id, GUISkin_t714 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m3797 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m3798 (Object_t * __this /* static, unused */, Rect_t27  ___position, GUIContent_t717 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m3799 (Object_t * __this /* static, unused */, Rect_t27 * ___position, GUIContent_t717 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m3800 (Object_t * __this /* static, unused */, Rect_t27  ___position, GUIContent_t717 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m3801 (Object_t * __this /* static, unused */, Rect_t27 * ___position, GUIContent_t717 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
