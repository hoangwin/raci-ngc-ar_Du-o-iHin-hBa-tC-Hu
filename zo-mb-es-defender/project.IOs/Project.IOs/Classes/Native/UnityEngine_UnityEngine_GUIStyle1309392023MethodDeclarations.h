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
struct GUIStyle_t1309392023_0;
// UnityEngine.GUIStyleState
struct GUIStyleState_t_1218319096_0;
// UnityEngine.RectOffset
struct RectOffset_t843113088_0;
// UnityEngine.Font
struct Font_t694783816_0;
// UnityEngine.GUIContent
struct GUIContent_t_756995663_0;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t565265588_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"
#include "UnityEngine_UnityEngine_ImagePosition_1138926539.h"
#include "UnityEngine_UnityEngine_TextAnchor569725145.h"
#include "UnityEngine_UnityEngine_TextClipping_809660770.h"
#include "UnityEngine_UnityEngine_FontStyle1957327325.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments1403610795.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSele_2020512548.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m_629074495_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m_2083973860_0 (GUIStyle_t1309392023_0 * __this, GUIStyle_t1309392023_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C"  void GUIStyle__cctor_m1781956100_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C"  void GUIStyle_Finalize_m1258476043_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InternalOnAfterDeserialize()
extern "C"  void GUIStyle_InternalOnAfterDeserialize_m1316894156_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_normal_m_1505498354_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_normal(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_normal_m_333914529_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_hover_m_1442338099_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_hover(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_hover_m_490210610_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_active_m1570427943_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_active(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_active_m_1398223864_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_onNormal_m1675201777_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onNormal(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onNormal_m1461827296_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_onHover_m_1522420536_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onHover(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onHover_m_386815961_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_onActive_m1207191918_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onActive(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onActive_m504713485_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_focused_m_1738587668_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_focused(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_focused_m1547304893_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
extern "C"  GUIStyleState_t_1218319096_0 * GUIStyle_get_onFocused_m_1702567725_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onFocused(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onFocused_m_1057753438_0 (GUIStyle_t1309392023_0 * __this, GUIStyleState_t_1218319096_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
extern "C"  RectOffset_t843113088_0 * GUIStyle_get_border_m_1618687695_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_border_m1243171088_0 (GUIStyle_t1309392023_0 * __this, RectOffset_t843113088_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C"  RectOffset_t843113088_0 * GUIStyle_get_margin_m1012250163_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_margin_m_1765001416_0 (GUIStyle_t1309392023_0 * __this, RectOffset_t843113088_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C"  RectOffset_t843113088_0 * GUIStyle_get_padding_m_218050542_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m_572158041_0 (GUIStyle_t1309392023_0 * __this, RectOffset_t843113088_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_overflow()
extern "C"  RectOffset_t843113088_0 * GUIStyle_get_overflow_m1125058093_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_overflow(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_overflow_m_559543584_0 (GUIStyle_t1309392023_0 * __this, RectOffset_t843113088_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_clipOffset()
extern "C"  Vector2_t1869242736_0  GUIStyle_get_clipOffset_m_1406384798_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_clipOffset_m_423353953_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C"  Font_t694783816_0 * GUIStyle_get_font_m1489712926_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m312124587_0 (GUIStyle_t1309392023_0 * __this, Font_t694783816_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C"  float GUIStyle_get_lineHeight_m2132859383_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Internal_Draw_m_684874083_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m_288507612_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m_1160511484_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, String_t* ___text, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.Texture,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m_773957070_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, Texture_t565265588_0 * ___image, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m_2010672493_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C"  void GUIStyle_Draw_m2055025106_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Draw_m1435796321_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C"  void GUIStyle_DrawCursor_m_567630439_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, int32_t ___Character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void GUIStyle_DrawWithTextSelection_m_2079785394_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, bool ___drawSelectionAsComposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C"  void GUIStyle_DrawWithTextSelection_m_1103305139_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C"  GUIStyle_t1309392023_0 * GUIStyle_get_none_m_70696346_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C"  Vector2_t1869242736_0  GUIStyle_GetCursorPixelPosition_m_1806396602_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  int32_t GUIStyle_GetCursorStringIndex_m326283516_0 (GUIStyle_t1309392023_0 * __this, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetNumCharactersThatFitWithinWidth(System.String,System.Single)
extern "C"  int32_t GUIStyle_GetNumCharactersThatFitWithinWidth_m_534901213_0 (GUIStyle_t1309392023_0 * __this, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C"  Vector2_t1869242736_0  GUIStyle_CalcSize_m_40220417_0 (GUIStyle_t1309392023_0 * __this, GUIContent_t_756995663_0 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  GUIStyle_CalcSizeWithConstraints_m_177134097_0 (GUIStyle_t1309392023_0 * __this, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0  ___constraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  GUIStyle_CalcScreenSize_m1349129130_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0  ___contentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C"  float GUIStyle_CalcHeight_m1685124037_0 (GUIStyle_t1309392023_0 * __this, GUIContent_t_756995663_0 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C"  bool GUIStyle_get_isHeightDependantOnWidth_m1706997031_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C"  void GUIStyle_CalcMinMaxWidth_m2027503105_0 (GUIStyle_t1309392023_0 * __this, GUIContent_t_756995663_0 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C"  String_t* GUIStyle_ToString_m_1248297060_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C"  void GUIStyle_Init_m_422768565_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C"  void GUIStyle_InitCopy_m_618180791_0 (GUIStyle_t1309392023_0 * __this, GUIStyle_t1309392023_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C"  void GUIStyle_Cleanup_m1915255373_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C"  String_t* GUIStyle_get_name_m753291950_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C"  void GUIStyle_set_name_m1034188361_0 (GUIStyle_t1309392023_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C"  IntPtr_t GUIStyle_GetStyleStatePtr_m1972527409_0 (GUIStyle_t1309392023_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
extern "C"  void GUIStyle_AssignStyleState_m_1629692349_0 (GUIStyle_t1309392023_0 * __this, int32_t ___idx, IntPtr_t ___srcStyleState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C"  IntPtr_t GUIStyle_GetRectOffsetPtr_m_71738408_0 (GUIStyle_t1309392023_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C"  void GUIStyle_AssignRectOffset_m_1296863716_0 (GUIStyle_t1309392023_0 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C"  int32_t GUIStyle_get_imagePosition_m1104201320_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
extern "C"  void GUIStyle_set_imagePosition_m327170707_0 (GUIStyle_t1309392023_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
extern "C"  int32_t GUIStyle_get_alignment_m_781528265_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m1024943876_0 (GUIStyle_t1309392023_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C"  bool GUIStyle_get_wordWrap_m_639918184_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m2043927261_0 (GUIStyle_t1309392023_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
extern "C"  int32_t GUIStyle_get_clipping_m_1540266655_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
extern "C"  void GUIStyle_set_clipping_m_1436546476_0 (GUIStyle_t1309392023_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C"  Vector2_t1869242736_0  GUIStyle_get_contentOffset_m1904924583_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_contentOffset_m2138084868_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_get_contentOffset_m_1627701618_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_set_contentOffset_m1314037746_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_Internal_clipOffset()
extern "C"  Vector2_t1869242736_0  GUIStyle_get_Internal_clipOffset_m_57229848_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_Internal_clipOffset_m118330819_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_Internal_clipOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_get_Internal_clipOffset_m_958339731_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_set_Internal_clipOffset_m2024478897_0 (GUIStyle_t1309392023_0 * __this, Vector2_t1869242736_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C"  float GUIStyle_get_fixedWidth_m97997484_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
extern "C"  void GUIStyle_set_fixedWidth_m_1732948539_0 (GUIStyle_t1309392023_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C"  float GUIStyle_get_fixedHeight_m414733479_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C"  void GUIStyle_set_fixedHeight_m1517737608_0 (GUIStyle_t1309392023_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C"  bool GUIStyle_get_stretchWidth_m1223411161_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C"  void GUIStyle_set_stretchWidth_m1198647818_0 (GUIStyle_t1309392023_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C"  bool GUIStyle_get_stretchHeight_m_898204596_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C"  void GUIStyle_set_stretchHeight_m421727883_0 (GUIStyle_t1309392023_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C"  float GUIStyle_Internal_GetLineHeight_m_1791672970_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C"  void GUIStyle_SetFontInternal_m_159904297_0 (GUIStyle_t1309392023_0 * __this, Font_t694783816_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternalDuringLoadingThread()
extern "C"  Font_t694783816_0 * GUIStyle_GetFontInternalDuringLoadingThread_m229734483_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C"  Font_t694783816_0 * GUIStyle_GetFontInternal_m_785223972_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
extern "C"  int32_t GUIStyle_get_fontSize_m_726404432_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m_279625753_0 (GUIStyle_t1309392023_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
extern "C"  int32_t GUIStyle_get_fontStyle_m_1170602456_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void GUIStyle_set_fontStyle_m_334436717_0 (GUIStyle_t1309392023_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_richText()
extern "C"  bool GUIStyle_get_richText_m1518013201_0 (GUIStyle_t1309392023_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C"  void GUIStyle_set_richText_m1853532836_0 (GUIStyle_t1309392023_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C"  void GUIStyle_Internal_Draw_m694122665_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, Internal_DrawArguments_t1403610795_0 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Internal_Draw2_m878252945_0 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_Draw2_m_1321483510_0 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Internal_DrawPrefixLabel_m1693575069_0 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_DrawPrefixLabel_m557487542_0 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C"  float GUIStyle_Internal_GetCursorFlashOffset_m_1117707994_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C"  void GUIStyle_Internal_DrawCursor_m1394927592_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___pos, Color_t_2138957840_0  ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m512401185_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, int32_t ___pos, Color_t_2138957840_0 * ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C"  void GUIStyle_Internal_DrawWithTextSelection_m_2036188683_0 (Object_t * __this /* static, unused */, GUIContent_t_756995663_0 * ___content, Internal_DrawWithTextSelectionArguments_t_2020512548_0 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C"  void GUIStyle_SetDefaultFont_m2095841351_0 (Object_t * __this /* static, unused */, Font_t694783816_0 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_GetCursorPixelPosition_m823797035_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, int32_t ___cursorStringIndex, Vector2_t1869242736_0 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m562482816_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, int32_t ___cursorStringIndex, Vector2_t1869242736_0 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  int32_t GUIStyle_Internal_GetCursorStringIndex_m1491806746_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0  ___position, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C"  int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m_1220649015_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t_2081412107_0 * ___position, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0 * ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetNumCharactersThatFitWithinWidth(System.IntPtr,System.String,System.Single)
extern "C"  int32_t GUIStyle_Internal_GetNumCharactersThatFitWithinWidth_m2132182605_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_CalcSize_m1309259680_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_CalcSizeWithConstraints_m_919711318_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0  ___maxSize, Vector2_t1869242736_0 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints_m1203344891_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t_756995663_0 * ___content, Vector2_t1869242736_0 * ___maxSize, Vector2_t1869242736_0 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C"  float GUIStyle_Internal_CalcHeight_m350880591_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t_756995663_0 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C"  void GUIStyle_Internal_CalcMinMaxWidth_m_634660433_0 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t_756995663_0 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C"  GUIStyle_t1309392023_0 * GUIStyle_op_Implicit_m781448948_0 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
