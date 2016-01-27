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
struct GUISkin_t_1962280189_0;
// UnityEngine.GUIContent
struct GUIContent_t_756995663_0;
// UnityEngine.GUIStyle
struct GUIStyle_t1309392023_0;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t216204521_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1321863889_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m_1570960342_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m_903290741_0 (Object_t * __this /* static, unused */, GUISkin_t_1962280189_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t_1962280189_0 * GUI_get_skin_m_1985396306_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m_691679909_0 (Object_t * __this /* static, unused */, GUISkin_t_1962280189_0 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m98409281_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m_116012432_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m_1375693087_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_BeginGroup_m_788459013_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C"  void GUI_EndGroup_m1672170830_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m634477008_0 (Object_t * __this /* static, unused */, WindowFunction_t216204521_0 * ___func, int32_t ___id, GUISkin_t_1962280189_0 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m470833806_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m_1880650721_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m_1508619524_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m1396731179_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m603378840_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
