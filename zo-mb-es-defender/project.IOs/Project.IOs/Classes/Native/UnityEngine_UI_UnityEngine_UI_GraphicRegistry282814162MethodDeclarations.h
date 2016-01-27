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

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t282814162_0;
// UnityEngine.Canvas
struct Canvas_t1350974697_0;
// UnityEngine.UI.Graphic
struct Graphic_t1127530957_0;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t_1552181830_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C"  void GraphicRegistry__ctor_m226766314_0 (GraphicRegistry_t282814162_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C"  void GraphicRegistry__cctor_m_97197559_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C"  GraphicRegistry_t282814162_0 * GraphicRegistry_get_instance_m2112667631_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C"  void GraphicRegistry_RegisterGraphicForCanvas_m_2010740734_0 (Object_t * __this /* static, unused */, Canvas_t1350974697_0 * ___c, Graphic_t1127530957_0 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C"  void GraphicRegistry_UnregisterGraphicForCanvas_m820096873_0 (Object_t * __this /* static, unused */, Canvas_t1350974697_0 * ___c, Graphic_t1127530957_0 * ___graphic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C"  Object_t* GraphicRegistry_GetGraphicsForCanvas_m_421486912_0 (Object_t * __this /* static, unused */, Canvas_t1350974697_0 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
