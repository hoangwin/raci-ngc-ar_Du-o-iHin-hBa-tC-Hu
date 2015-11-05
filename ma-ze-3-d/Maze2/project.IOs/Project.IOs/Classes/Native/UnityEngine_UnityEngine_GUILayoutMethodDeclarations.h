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
struct GUILayoutOptionU5BU5D_t254;
// UnityEngine.GUIContent
struct GUIContent_t717;
// UnityEngine.GUIStyle
struct GUIStyle_t723;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t255;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m774 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m3810 (Object_t * __this /* static, unused */, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m775 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m3811 (Object_t * __this /* static, unused */, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,System.Int32,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m777 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_DoTextField_m3812 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t723 * ___style, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m772 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m3813 (Object_t * __this /* static, unused */, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, GUILayoutOptionU5BU5D_t254* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m771 (Object_t * __this /* static, unused */, Rect_t27  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m3814 (Object_t * __this /* static, unused */, Rect_t27  ___screenRect, GUIContent_t717 * ___content, GUIStyle_t723 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m784 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t255 * GUILayout_Width_m773 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t255 * GUILayout_Height_m3815 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
