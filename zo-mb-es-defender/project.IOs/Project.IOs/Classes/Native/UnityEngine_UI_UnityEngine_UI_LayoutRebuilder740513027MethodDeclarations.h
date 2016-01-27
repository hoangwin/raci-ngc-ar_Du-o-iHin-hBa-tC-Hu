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

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t740513027_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t_897440588_0;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t854705170_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t_437510044_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate_114158782.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C"  void LayoutRebuilder__ctor_m_555279795_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C"  void LayoutRebuilder__cctor_m_247098564_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_Initialize_m_1623381806_0 (LayoutRebuilder_t740513027_0 * __this, RectTransform_t_308607983_0 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C"  void LayoutRebuilder_Clear_m_1904912472_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ReapplyDrivenProperties_m1809142560_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C"  Transform_t_495934667_0 * LayoutRebuilder_get_transform_m_936159432_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C"  bool LayoutRebuilder_IsDestroyed_m_852759002_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_StripDisabledBehavioursFromList_m_697312591_0 (Object_t * __this /* static, unused */, List_1_t_897440588_0 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ForceRebuildLayoutImmediate_m566681977_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void LayoutRebuilder_Rebuild_m_990508228_0 (LayoutRebuilder_t740513027_0 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutControl_m_348916124_0 (LayoutRebuilder_t740513027_0 * __this, RectTransform_t_308607983_0 * ___rect, UnityAction_1_t854705170_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutCalculation_m736744700_0 (LayoutRebuilder_t740513027_0 * __this, RectTransform_t_308607983_0 * ___rect, UnityAction_1_t854705170_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutForRebuild_m640589351_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  bool LayoutRebuilder_ValidLayoutGroup_m490554819_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___parent, List_1_t_897440588_0 * ___comps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  bool LayoutRebuilder_ValidController_m_1699917974_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___layoutRoot, List_1_t_897440588_0 * ___comps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutRootForRebuild_m_1515343655_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C"  void LayoutRebuilder_LayoutComplete_m498127808_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C"  void LayoutRebuilder_GraphicUpdateComplete_m_521590705_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C"  int32_t LayoutRebuilder_GetHashCode_m_1549858636_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C"  bool LayoutRebuilder_Equals_m376170852_0 (LayoutRebuilder_t740513027_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C"  String_t* LayoutRebuilder_ToString_m710744868_0 (LayoutRebuilder_t740513027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C"  void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m1645580400_0 (Object_t * __this /* static, unused */, LayoutRebuilder_t740513027_0 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C"  bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m1460852255_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__8_m259142987_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__9_m_1402302010_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__A_m_1398162178_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__B_m_751913479_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
