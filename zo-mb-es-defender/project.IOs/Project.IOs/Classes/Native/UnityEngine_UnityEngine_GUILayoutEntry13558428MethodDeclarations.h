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

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t13558428_0;
// UnityEngine.GUIStyle
struct GUIStyle_t1309392023_0;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t_1465103665_0;
// UnityEngine.RectOffset
struct RectOffset_t843113088_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry__ctor_m_287501577_0 (GUILayoutEntry_t13558428_0 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t1309392023_0 * ____style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutEntry__ctor_m1108032822_0 (GUILayoutEntry_t13558428_0 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t1309392023_0 * ____style, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C"  void GUILayoutEntry__cctor_m_584659169_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C"  GUIStyle_t1309392023_0 * GUILayoutEntry_get_style_m998192810_0 (GUILayoutEntry_t13558428_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry_set_style_m70917293_0 (GUILayoutEntry_t13558428_0 * __this, GUIStyle_t1309392023_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C"  RectOffset_t843113088_0 * GUILayoutEntry_get_margin_m1657422058_0 (GUILayoutEntry_t13558428_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C"  void GUILayoutEntry_CalcWidth_m_1774871137_0 (GUILayoutEntry_t13558428_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C"  void GUILayoutEntry_CalcHeight_m1069006192_0 (GUILayoutEntry_t13558428_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C"  void GUILayoutEntry_SetHorizontal_m1828181654_0 (GUILayoutEntry_t13558428_0 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C"  void GUILayoutEntry_SetVertical_m_1966363848_0 (GUILayoutEntry_t13558428_0 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry_ApplyStyleSettings_m371609721_0 (GUILayoutEntry_t13558428_0 * __this, GUIStyle_t1309392023_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutEntry_ApplyOptions_m115321759_0 (GUILayoutEntry_t13558428_0 * __this, GUILayoutOptionU5BU5D_t_1465103665_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C"  String_t* GUILayoutEntry_ToString_m1331406279_0 (GUILayoutEntry_t13558428_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
