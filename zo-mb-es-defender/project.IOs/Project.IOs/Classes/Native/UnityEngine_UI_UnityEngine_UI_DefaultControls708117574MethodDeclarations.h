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

// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t221418124_0;
// UnityEngine.UI.Selectable
struct Selectable_t876188297_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resou661252136.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C"  void DefaultControls__cctor_m564778157_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateUIElementRoot_m_1978546649_0 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t1869242736_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateUIObject_m_1484573184_0 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t_1666380968_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C"  void DefaultControls_SetDefaultTextValues_m1707718380_0 (Object_t * __this /* static, unused */, Text_t221418124_0 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C"  void DefaultControls_SetDefaultColorTransitionValues_m1736608236_0 (Object_t * __this /* static, unused */, Selectable_t876188297_0 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void DefaultControls_SetParentAndAlign_m_1246068794_0 (Object_t * __this /* static, unused */, GameObject_t_1666380968_0 * ___child, GameObject_t_1666380968_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C"  void DefaultControls_SetLayerRecursively_m_1385116315_0 (Object_t * __this /* static, unused */, GameObject_t_1666380968_0 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreatePanel_m2069659875_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateButton_m717585179_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateText_m_1756514066_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateImage_m_1473404308_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateRawImage_m_1721970126_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateSlider_m_769801900_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateScrollbar_m770089625_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateToggle_m1568873127_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateInputField_m2017153345_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateDropdown_m1384069408_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C"  GameObject_t_1666380968_0 * DefaultControls_CreateScrollView_m_1559862647_0 (Object_t * __this /* static, unused */, Resources_t661252136_0  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
