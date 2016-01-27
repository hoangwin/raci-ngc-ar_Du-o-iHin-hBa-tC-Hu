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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t_1465103665_0;
// UnityEngine.GUIContent
struct GUIContent_t_756995663_0;
// UnityEngine.GUIStyle
struct GUIStyle_t1309392023_0;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t1084591873_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m_828856317_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m_504752578_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m_972258293_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1965952312_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m212592284_0 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m_40720286_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m_36430331_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m_594782606_0 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m1515022372_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m297596185_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m_997268273_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m_1566737031_0 (Object_t * __this /* static, unused */, Rect_t_2081412107_0  ___screenRect, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m1904221074_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t1084591873_0 * GUILayout_Width_m261136689_0 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t1084591873_0 * GUILayout_Height_m607115982_0 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
