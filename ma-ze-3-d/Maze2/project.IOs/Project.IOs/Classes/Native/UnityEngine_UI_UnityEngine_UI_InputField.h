#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t411;
// System.Char[]
struct CharU5BU5D_t266;
// UnityEngine.UI.Text
struct Text_t56;
// UnityEngine.UI.Graphic
struct Graphic_t378;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t403;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t405;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t407;
// UnityEngine.RectTransform
struct RectTransform_t285;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t412;
// UnityEngine.TextGenerator
struct TextGenerator_t413;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t379;
// UnityEngine.Mesh
struct Mesh_t383;
// UnityEngine.Coroutine
struct Coroutine_t268;
struct Coroutine_t268_marshaled;
// UnityEngine.Event
struct Event_t414;
struct Event_t414_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t181;

#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
#include "UnityEngine_UnityEngine_Color.h"

// UnityEngine.UI.InputField
struct  InputField_t409  : public Selectable_t354
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t411 * ___m_Keyboard_19;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t56 * ___m_TextComponent_21;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t378 * ___m_Placeholder_22;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_23;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_24;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	uint16_t ___m_AsteriskChar_25;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_26;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_27;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_28;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_29;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_30;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_EndEdit
	SubmitEvent_t403 * ___m_EndEdit_31;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChange
	OnChangeEvent_t405 * ___m_OnValueChange_32;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t407 * ___m_OnValidateInput_33;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t26  ___m_SelectionColor_34;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_35;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_36;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_38;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t285 * ___caretRectTrans_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t412* ___m_CursorVerts_40;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t413 * ___m_InputTextCache_41;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t379 * ___m_CachedInputRenderer_42;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_43;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t383 * ___m_Mesh_44;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_45;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_46;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_47;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_48;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_49;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t268 * ___m_BlinkCoroutine_50;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_51;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_52;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_53;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t268 * ___m_DragCoroutine_54;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_55;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_56;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_57;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t414 * ___m_ProcessingEvent_58;
};
struct InputField_t409_StaticFields{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t266* ___kSeparators_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.UI.InputField::<>f__switch$map0
	Dictionary_2_t181 * ___U3CU3Ef__switchU24map0_59;
};
