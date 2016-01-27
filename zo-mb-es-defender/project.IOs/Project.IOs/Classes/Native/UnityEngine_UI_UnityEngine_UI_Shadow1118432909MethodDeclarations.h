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

// UnityEngine.UI.Shadow
struct Shadow_t1118432909_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t_1618830941_0;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1436978849_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Color321454252581.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C"  void Shadow__ctor_m924057531_0 (Shadow_t1118432909_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C"  Color_t_2138957840_0  Shadow_get_effectColor_m792481977_0 (Shadow_t1118432909_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C"  void Shadow_set_effectColor_m_1184910452_0 (Shadow_t1118432909_0 * __this, Color_t_2138957840_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C"  Vector2_t1869242736_0  Shadow_get_effectDistance_m1859706485_0 (Shadow_t1118432909_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C"  void Shadow_set_effectDistance_m1951993364_0 (Shadow_t1118432909_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C"  bool Shadow_get_useGraphicAlpha_m103020179_0 (Shadow_t1118432909_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C"  void Shadow_set_useGraphicAlpha_m141905402_0 (Shadow_t1118432909_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void Shadow_ApplyShadowZeroAlloc_m2132231878_0 (Shadow_t1118432909_0 * __this, List_1_t_1618830941_0 * ___verts, Color32_t1454252581_0  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void Shadow_ApplyShadow_m1951874787_0 (Shadow_t1118432909_0 * __this, List_1_t_1618830941_0 * ___verts, Color32_t1454252581_0  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Shadow_ModifyMesh_m_1571513465_0 (Shadow_t1118432909_0 * __this, VertexHelper_t1436978849_0 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
