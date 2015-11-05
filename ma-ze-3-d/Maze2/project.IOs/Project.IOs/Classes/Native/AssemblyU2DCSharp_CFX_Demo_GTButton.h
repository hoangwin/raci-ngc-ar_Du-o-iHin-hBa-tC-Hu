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
// UnityEngine.GameObject
struct GameObject_t7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"

// CFX_Demo_GTButton
struct  CFX_Demo_GTButton_t25  : public MonoBehaviour_t3
{
	// UnityEngine.Color CFX_Demo_GTButton::NormalColor
	Color_t26  ___NormalColor_2;
	// UnityEngine.Color CFX_Demo_GTButton::HoverColor
	Color_t26  ___HoverColor_3;
	// System.String CFX_Demo_GTButton::Callback
	String_t* ___Callback_4;
	// UnityEngine.GameObject CFX_Demo_GTButton::Receiver
	GameObject_t7 * ___Receiver_5;
	// UnityEngine.Rect CFX_Demo_GTButton::CollisionRect
	Rect_t27  ___CollisionRect_6;
	// System.Boolean CFX_Demo_GTButton::Over
	bool ___Over_7;
};
