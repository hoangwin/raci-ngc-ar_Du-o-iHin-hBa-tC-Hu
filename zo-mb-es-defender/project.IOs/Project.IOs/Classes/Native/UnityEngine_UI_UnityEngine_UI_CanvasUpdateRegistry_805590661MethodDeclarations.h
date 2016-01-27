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

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t_805590661_0;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t_1828163926_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C"  void CanvasUpdateRegistry__ctor_m_257759251_0 (CanvasUpdateRegistry_t_805590661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C"  void CanvasUpdateRegistry__cctor_m_485612820_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C"  CanvasUpdateRegistry_t_805590661_0 * CanvasUpdateRegistry_get_instance_m862315367_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_ObjectValidForUpdate_m855695984_0 (CanvasUpdateRegistry_t_805590661_0 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::CleanInvalidItems()
extern "C"  void CanvasUpdateRegistry_CleanInvalidItems_m1402635291_0 (CanvasUpdateRegistry_t_805590661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C"  void CanvasUpdateRegistry_PerformUpdate_m_2094475279_0 (CanvasUpdateRegistry_t_805590661_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C"  int32_t CanvasUpdateRegistry_ParentCount_m_1927359801_0 (Object_t * __this /* static, unused */, Transform_t_495934667_0 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C"  int32_t CanvasUpdateRegistry_SortLayoutList_m_1510789191_0 (Object_t * __this /* static, unused */, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m669674528_0 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_TryRegisterCanvasElementForLayoutRebuild_m1686817711_0 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m1102256627_0 (CanvasUpdateRegistry_t_805590661_0 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m_1306517634_0 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_TryRegisterCanvasElementForGraphicRebuild_m1107442775_0 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  bool CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m752997547_0 (CanvasUpdateRegistry_t_805590661_0 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m1497083313_0 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m_554779562_0 (CanvasUpdateRegistry_t_805590661_0 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C"  void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m300585424_0 (CanvasUpdateRegistry_t_805590661_0 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C"  bool CanvasUpdateRegistry_IsRebuildingLayout_m1677873278_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C"  bool CanvasUpdateRegistry_IsRebuildingGraphics_m1758776983_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
