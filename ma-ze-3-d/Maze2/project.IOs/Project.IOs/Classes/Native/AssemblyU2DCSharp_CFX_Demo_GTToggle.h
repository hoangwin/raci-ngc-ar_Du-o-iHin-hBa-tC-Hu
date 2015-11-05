#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t29;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.GUIText
struct GUIText_t14;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"

// CFX_Demo_GTToggle
struct  CFX_Demo_GTToggle_t28  : public MonoBehaviour_t3
{
	// UnityEngine.Texture CFX_Demo_GTToggle::Normal
	Texture_t29 * ___Normal_2;
	// UnityEngine.Texture CFX_Demo_GTToggle::Hover
	Texture_t29 * ___Hover_3;
	// UnityEngine.Color CFX_Demo_GTToggle::NormalColor
	Color_t26  ___NormalColor_4;
	// UnityEngine.Color CFX_Demo_GTToggle::DisabledColor
	Color_t26  ___DisabledColor_5;
	// System.Boolean CFX_Demo_GTToggle::State
	bool ___State_6;
	// System.String CFX_Demo_GTToggle::Callback
	String_t* ___Callback_7;
	// UnityEngine.GameObject CFX_Demo_GTToggle::Receiver
	GameObject_t7 * ___Receiver_8;
	// UnityEngine.Rect CFX_Demo_GTToggle::CollisionRect
	Rect_t27  ___CollisionRect_9;
	// System.Boolean CFX_Demo_GTToggle::Over
	bool ___Over_10;
	// UnityEngine.GUIText CFX_Demo_GTToggle::Label
	GUIText_t14 * ___Label_11;
};
