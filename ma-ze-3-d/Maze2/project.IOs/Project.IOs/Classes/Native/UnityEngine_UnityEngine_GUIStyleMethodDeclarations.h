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

// UnityEngine.GUIStyle
struct GUIStyle_t723;
// UnityEngine.GUIStyleState
struct GUIStyleState_t733;
// UnityEngine.RectOffset
struct RectOffset_t478;
// UnityEngine.Font
struct Font_t375;
// UnityEngine.GUIContent
struct GUIContent_t717;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_ImagePosition.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSelectionArgume.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m3956 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m3957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m3958 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t733 * GUIStyle_get_normal_m3959 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t478 * GUIStyle_get_margin_m3960 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t478 * GUIStyle_get_padding_m3961 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C" Font_t375 * GUIStyle_get_font_m3962 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m3963 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m3964 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m3965 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawCursor_m3966 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___controlID, int32_t ___Character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" void GUIStyle_DrawWithTextSelection_m3967 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, bool ___drawSelectionAsComposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawWithTextSelection_m3968 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t723 * GUIStyle_get_none_m3969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t115  GUIStyle_GetCursorPixelPosition_m3970 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_GetCursorStringIndex_m3971 (GUIStyle_t723 * __this, Rect_t27  ___position, GUIContent_t717 * ___content, Vector2_t115  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t115  GUIStyle_CalcSize_m3972 (GUIStyle_t723 * __this, GUIContent_t717 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m3973 (GUIStyle_t723 * __this, GUIContent_t717 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m3974 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m3975 (GUIStyle_t723 * __this, GUIContent_t717 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m3976 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m3977 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m3978 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m3979 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m3980 (GUIStyle_t723 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m3981 (GUIStyle_t723 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m3982 (GUIStyle_t723 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m3983 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m3984 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C" Vector2_t115  GUIStyle_get_contentOffset_m3985 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_contentOffset_m3986 (GUIStyle_t723 * __this, Vector2_t115  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_contentOffset_m3987 (GUIStyle_t723 * __this, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_contentOffset_m3988 (GUIStyle_t723 * __this, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_Internal_clipOffset_m3989 (GUIStyle_t723 * __this, Vector2_t115  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_Internal_clipOffset_m3990 (GUIStyle_t723 * __this, Vector2_t115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m3991 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m3992 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m3993 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m3994 (GUIStyle_t723 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m3995 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m3996 (GUIStyle_t723 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m3997 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C" Font_t375 * GUIStyle_GetFontInternal_m3998 (GUIStyle_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m3999 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m4000 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t27 * ___position, GUIContent_t717 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C" float GUIStyle_Internal_GetCursorFlashOffset_m4001 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C" void GUIStyle_Internal_DrawCursor_m4002 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___pos, Color_t26  ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m4003 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t27 * ___position, GUIContent_t717 * ___content, int32_t ___pos, Color_t26 * ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C" void GUIStyle_Internal_DrawWithTextSelection_m4004 (Object_t * __this /* static, unused */, GUIContent_t717 * ___content, Internal_DrawWithTextSelectionArguments_t739 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m4005 (Object_t * __this /* static, unused */, Font_t375 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m4006 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t27  ___position, GUIContent_t717 * ___content, int32_t ___cursorStringIndex, Vector2_t115 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m4007 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t27 * ___position, GUIContent_t717 * ___content, int32_t ___cursorStringIndex, Vector2_t115 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_Internal_GetCursorStringIndex_m4008 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t27  ___position, GUIContent_t717 * ___content, Vector2_t115  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m4009 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t27 * ___position, GUIContent_t717 * ___content, Vector2_t115 * ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m4010 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t717 * ___content, Vector2_t115 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m4011 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t717 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m4012 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t717 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
