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
struct GameObject_t7;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t56;
// UnityEngine.UI.Selectable
struct Selectable_t354;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m1381 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t7 * DefaultControls_CreateUIElementRoot_m1382 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t115  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t7 * DefaultControls_CreateUIObject_m1383 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t7 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m1384 (Object_t * __this /* static, unused */, Text_t56 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m1385 (Object_t * __this /* static, unused */, Selectable_t354 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m1386 (Object_t * __this /* static, unused */, GameObject_t7 * ___child, GameObject_t7 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m1387 (Object_t * __this /* static, unused */, GameObject_t7 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreatePanel_m1388 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateButton_m1389 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateText_m1390 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateImage_m1391 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateRawImage_m1392 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateSlider_m1393 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateScrollbar_m1394 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateToggle_m1395 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateInputField_m1396 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateDropdown_m1397 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t7 * DefaultControls_CreateScrollView_m1398 (Object_t * __this /* static, unused */, Resources_t360  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
