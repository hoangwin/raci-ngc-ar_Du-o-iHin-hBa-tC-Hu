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

// UnityEngine.UI.Selectable
struct Selectable_t354;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t444;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t350;
// UnityEngine.UI.Graphic
struct Graphic_t378;
// UnityEngine.UI.Image
struct Image_t57;
// UnityEngine.Animator
struct Animator_t158;
// UnityEngine.RectTransform
struct RectTransform_t285;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t326;
// UnityEngine.Sprite
struct Sprite_t52;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t243;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t286;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
extern "C" void Selectable__ctor_m1975 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
extern "C" void Selectable__cctor_m1976 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
extern "C" List_1_t444 * Selectable_get_allSelectables_m1977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
extern "C" Navigation_t423  Selectable_get_navigation_m1978 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
extern "C" void Selectable_set_navigation_m1979 (Selectable_t354 * __this, Navigation_t423  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
extern "C" int32_t Selectable_get_transition_m1980 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
extern "C" void Selectable_set_transition_m1981 (Selectable_t354 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
extern "C" ColorBlock_t359  Selectable_get_colors_m1982 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
extern "C" void Selectable_set_colors_m1983 (Selectable_t354 * __this, ColorBlock_t359  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
extern "C" SpriteState_t442  Selectable_get_spriteState_m1984 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
extern "C" void Selectable_set_spriteState_m1985 (Selectable_t354 * __this, SpriteState_t442  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
extern "C" AnimationTriggers_t350 * Selectable_get_animationTriggers_m1986 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
extern "C" void Selectable_set_animationTriggers_m1987 (Selectable_t354 * __this, AnimationTriggers_t350 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
extern "C" Graphic_t378 * Selectable_get_targetGraphic_m1988 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
extern "C" void Selectable_set_targetGraphic_m1989 (Selectable_t354 * __this, Graphic_t378 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
extern "C" bool Selectable_get_interactable_m1990 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C" void Selectable_set_interactable_m880 (Selectable_t354 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
extern "C" bool Selectable_get_isPointerInside_m1991 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
extern "C" void Selectable_set_isPointerInside_m1992 (Selectable_t354 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
extern "C" bool Selectable_get_isPointerDown_m1993 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
extern "C" void Selectable_set_isPointerDown_m1994 (Selectable_t354 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
extern "C" bool Selectable_get_hasSelection_m1995 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
extern "C" void Selectable_set_hasSelection_m1996 (Selectable_t354 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
extern "C" Image_t57 * Selectable_get_image_m844 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
extern "C" void Selectable_set_image_m1997 (Selectable_t354 * __this, Image_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
extern "C" Animator_t158 * Selectable_get_animator_m1998 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
extern "C" void Selectable_Awake_m1999 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
extern "C" void Selectable_OnCanvasGroupChanged_m2000 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
extern "C" bool Selectable_IsInteractable_m2001 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
extern "C" void Selectable_OnDidApplyAnimationProperties_m2002 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
extern "C" void Selectable_OnEnable_m2003 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
extern "C" void Selectable_OnSetProperty_m2004 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
extern "C" void Selectable_OnDisable_m2005 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
extern "C" int32_t Selectable_get_currentSelectionState_m2006 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
extern "C" void Selectable_InstantClearState_m2007 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void Selectable_DoStateTransition_m2008 (Selectable_t354 * __this, int32_t ___state, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
extern "C" Selectable_t354 * Selectable_FindSelectable_m2009 (Selectable_t354 * __this, Vector3_t17  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
extern "C" Vector3_t17  Selectable_GetPointOnRectEdge_m2010 (Object_t * __this /* static, unused */, RectTransform_t285 * ___rect, Vector2_t115  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
extern "C" void Selectable_Navigate_m2011 (Selectable_t354 * __this, AxisEventData_t326 * ___eventData, Selectable_t354 * ___sel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
extern "C" Selectable_t354 * Selectable_FindSelectableOnLeft_m2012 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
extern "C" Selectable_t354 * Selectable_FindSelectableOnRight_m2013 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
extern "C" Selectable_t354 * Selectable_FindSelectableOnUp_m2014 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
extern "C" Selectable_t354 * Selectable_FindSelectableOnDown_m2015 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Selectable_OnMove_m2016 (Selectable_t354 * __this, AxisEventData_t326 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
extern "C" void Selectable_StartColorTween_m2017 (Selectable_t354 * __this, Color_t26  ___targetColor, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
extern "C" void Selectable_DoSpriteSwap_m2018 (Selectable_t354 * __this, Sprite_t52 * ___newSprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
extern "C" void Selectable_TriggerAnimation_m2019 (Selectable_t354 * __this, String_t* ___triggername, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsHighlighted_m2020 (Selectable_t354 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
extern "C" bool Selectable_IsPressed_m2021 (Selectable_t354 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
extern "C" bool Selectable_IsPressed_m2022 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_UpdateSelectionState_m2023 (Selectable_t354 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_EvaluateAndTransitionToSelectionState_m2024 (Selectable_t354 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
extern "C" void Selectable_InternalEvaluateAndTransitionToSelectionState_m2025 (Selectable_t354 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerDown_m2026 (Selectable_t354 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerUp_m2027 (Selectable_t354 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerEnter_m2028 (Selectable_t354 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void Selectable_OnPointerExit_m2029 (Selectable_t354 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnSelect_m2030 (Selectable_t354 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void Selectable_OnDeselect_m2031 (Selectable_t354 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
extern "C" void Selectable_Select_m2032 (Selectable_t354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
