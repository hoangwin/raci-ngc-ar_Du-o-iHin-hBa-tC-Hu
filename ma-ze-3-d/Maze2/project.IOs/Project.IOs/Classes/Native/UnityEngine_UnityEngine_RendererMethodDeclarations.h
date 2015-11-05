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

// UnityEngine.Renderer
struct Renderer_t15;
// UnityEngine.Material
struct Material_t9;
// UnityEngine.Material[]
struct MaterialU5BU5D_t60;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" bool Renderer_get_enabled_m780 (Renderer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m781 (Renderer_t15 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t9 * Renderer_get_material_m928 (Renderer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m788 (Renderer_t15 * __this, Material_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t60* Renderer_get_materials_m948 (Renderer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2525 (Renderer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2526 (Renderer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
