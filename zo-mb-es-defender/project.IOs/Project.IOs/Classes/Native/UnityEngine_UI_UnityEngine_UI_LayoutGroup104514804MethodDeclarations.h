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

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t104514804_0;
// UnityEngine.RectOffset
struct RectOffset_t843113088_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t1591543727_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor569725145.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern "C"  void LayoutGroup__ctor_m_1223821088_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C"  RectOffset_t843113088_0 * LayoutGroup_get_padding_m1653511445_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern "C"  void LayoutGroup_set_padding_m_1210456220_0 (LayoutGroup_t104514804_0 * __this, RectOffset_t843113088_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C"  int32_t LayoutGroup_get_childAlignment_m496467742_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern "C"  void LayoutGroup_set_childAlignment_m_1428858049_0 (LayoutGroup_t104514804_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern "C"  RectTransform_t_308607983_0 * LayoutGroup_get_rectTransform_m_1268743627_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C"  List_1_t1591543727_0 * LayoutGroup_get_rectChildren_m_1168748068_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C"  void LayoutGroup_CalculateLayoutInputHorizontal_m212315684_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C"  float LayoutGroup_get_minWidth_m_183221805_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C"  float LayoutGroup_get_preferredWidth_m_723001498_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C"  float LayoutGroup_get_flexibleWidth_m_2109997644_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C"  float LayoutGroup_get_minHeight_m_2024956350_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C"  float LayoutGroup_get_preferredHeight_m_393803471_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C"  float LayoutGroup_get_flexibleHeight_m1179676157_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C"  int32_t LayoutGroup_get_layoutPriority_m341239179_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C"  void LayoutGroup_OnEnable_m_1467477424_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern "C"  void LayoutGroup_OnDisable_m110368921_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C"  void LayoutGroup_OnDidApplyAnimationProperties_m_384830385_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalMinSize_m_1694266344_0 (LayoutGroup_t104514804_0 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalPreferredSize_m1139568599_0 (LayoutGroup_t104514804_0 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalFlexibleSize_m906156187_0 (LayoutGroup_t104514804_0 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C"  float LayoutGroup_GetStartOffset_m_914408123_0 (LayoutGroup_t104514804_0 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void LayoutGroup_SetLayoutInputForAxis_m239459768_0 (LayoutGroup_t104514804_0 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C"  void LayoutGroup_SetChildAlongAxis_m_1562950140_0 (LayoutGroup_t104514804_0 * __this, RectTransform_t_308607983_0 * ___rect, int32_t ___axis, float ___pos, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern "C"  bool LayoutGroup_get_isRootLayoutGroup_m_4855130_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C"  void LayoutGroup_OnRectTransformDimensionsChange_m_222123328_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C"  void LayoutGroup_OnTransformChildrenChanged_m_2112490146_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C"  void LayoutGroup_SetDirty_m_694588338_0 (LayoutGroup_t104514804_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
