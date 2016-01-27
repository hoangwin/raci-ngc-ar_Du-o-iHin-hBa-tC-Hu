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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t_61538887_0;
// UnityEngine.Component
struct Component_t_437510044_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t380153633_0;
// UnityEngine.UI.IClippable
struct IClippable_t_1903931948_0;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t777270095_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C"  void MaskUtilities__ctor_m1760365795_0 (MaskUtilities_t_61538887_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_Notify2DMaskStateChanged_m1704785167_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_NotifyStencilStateChanged_m1527407683_0 (Object_t * __this /* static, unused */, Component_t_437510044_0 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C"  Transform_t_495934667_0 * MaskUtilities_FindRootSortOverrideCanvas_m433286381_0 (Object_t * __this /* static, unused */, Transform_t_495934667_0 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t MaskUtilities_GetStencilDepth_m_862211508_0 (Object_t * __this /* static, unused */, Transform_t_495934667_0 * ___transform, Transform_t_495934667_0 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C"  RectMask2D_t380153633_0 * MaskUtilities_GetRectMaskForClippable_m_760816224_0 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C"  void MaskUtilities_GetRectMasksForClip_m1540508301_0 (Object_t * __this /* static, unused */, RectMask2D_t380153633_0 * ___clipper, List_1_t777270095_0 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
