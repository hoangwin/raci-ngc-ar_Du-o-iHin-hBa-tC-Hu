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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t1851881435_0;
// UnityEngine.GUIStyle
struct GUIStyle_t1309392023_0;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t_1465103665_0;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t797340837_0;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t_756995663_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C"  void GUILayoutUtility__cctor_m_1337211837_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C"  LayoutCache_t1851881435_0 * GUILayoutUtility_SelectIDList_m756828237_0 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C"  void GUILayoutUtility_Begin_m_1934108992_0 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutUtility_BeginWindow_m488834212_0 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C"  void GUILayoutUtility_EndGroup_m1968823816_0 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C"  void GUILayoutUtility_Layout_m_482786588_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C"  void GUILayoutUtility_LayoutFromEditorWindow_m1847418289_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutFreeGroup_m1173219546_0 (Object_t * __this /* static, unused */, GUILayoutGroup_t797340837_0 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutSingleGroup_m_747888480_0 (Object_t * __this /* static, unused */, GUILayoutGroup_t797340837_0 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C"  GUILayoutGroup_t797340837_0 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m_1304245489_0 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C"  GUILayoutGroup_t797340837_0 * GUILayoutUtility_BeginLayoutGroup_m289116843_0 (Object_t * __this /* static, unused */, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, Type_t * ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C"  void GUILayoutUtility_EndLayoutGroup_m1475744132_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutArea(UnityEngine.GUIStyle,System.Type)
extern "C"  GUILayoutGroup_t797340837_0 * GUILayoutUtility_BeginLayoutArea_m_2009506004_0 (Object_t * __this /* static, unused */, GUIStyle_t1309392023_0 * ___style, Type_t * ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t_2081412107_0  GUILayoutUtility_GetRect_m_653567245_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t_2081412107_0  GUILayoutUtility_DoGetRect_m33366174_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, GUIStyle_t1309392023_0 * ___style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C"  GUIStyle_t1309392023_0 * GUILayoutUtility_get_spaceStyle_m1918520192_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C"  Rect_t_2081412107_0  GUILayoutUtility_Internal_GetWindowRect_m1287880151_0 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_GetWindowRect(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_GetWindowRect_m_1058302833_0 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t_2081412107_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C"  void GUILayoutUtility_Internal_MoveWindow_m_1077517877_0 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t_2081412107_0  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m1347894376_0 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t_2081412107_0 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
