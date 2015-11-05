#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t66;
// UnityEngine.Sprite
struct Sprite_t52;
// UnityEngine.GameObject
struct GameObject_t7;
// MainMenu
struct MainMenu_t136;
// UnityEngine.UI.Image
struct Image_t57;
// AButton[]
struct AButtonU5BU5D_t137;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MainMenu
struct  MainMenu_t136  : public MonoBehaviour_t3
{
	// UnityEngine.Sprite[] MainMenu::sprStart
	SpriteU5BU5D_t66* ___sprStart_2;
	// UnityEngine.Sprite MainMenu::sprStartDisable
	Sprite_t52 * ___sprStartDisable_3;
	// UnityEngine.Sprite MainMenu::sprButtonEnable
	Sprite_t52 * ___sprButtonEnable_4;
	// UnityEngine.Sprite MainMenu::sprButtonDisable
	Sprite_t52 * ___sprButtonDisable_5;
	// UnityEngine.GameObject MainMenu::panelUI
	GameObject_t7 * ___panelUI_6;
	// UnityEngine.GameObject MainMenu::panelLevel
	GameObject_t7 * ___panelLevel_7;
	// UnityEngine.Sprite MainMenu::imageMusicOn
	Sprite_t52 * ___imageMusicOn_9;
	// UnityEngine.Sprite MainMenu::imageMusicOff
	Sprite_t52 * ___imageMusicOff_10;
	// UnityEngine.UI.Image MainMenu::imageMusic
	Image_t57 * ___imageMusic_11;
	// UnityEngine.Sprite MainMenu::imageSFXOn
	Sprite_t52 * ___imageSFXOn_12;
	// UnityEngine.Sprite MainMenu::imageSFXOff
	Sprite_t52 * ___imageSFXOff_13;
	// UnityEngine.UI.Image MainMenu::imageSFX
	Image_t57 * ___imageSFX_14;
	// AButton[] MainMenu::gameObjectArrayButton
	AButtonU5BU5D_t137* ___gameObjectArrayButton_15;
};
struct MainMenu_t136_StaticFields{
	// MainMenu MainMenu::instance
	MainMenu_t136 * ___instance_8;
};
