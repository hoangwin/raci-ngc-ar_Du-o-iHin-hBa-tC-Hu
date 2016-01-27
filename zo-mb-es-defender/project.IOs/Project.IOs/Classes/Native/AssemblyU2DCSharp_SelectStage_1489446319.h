#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t1558980289_0;
// UnityEngine.Transform[]
struct TransformU5BU5D_t1125787804_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// SelectStage
struct SelectStage_t_1489446319_0;
// UnityEngine.UI.Text
struct Text_t221418124_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// SelectStage
struct  SelectStage_t_1489446319_0  : public MonoBehaviour_t279269927_0
{
	// UnityEngine.Sprite[] SelectStage::m_AllImageLevel
	SpriteU5BU5D_t1558980289_0* ___m_AllImageLevel_2;
	// System.Int32 SelectStage::m_SelectLevel
	int32_t ___m_SelectLevel_3;
	// System.Int32 SelectStage::m_Index
	int32_t ___m_Index_4;
	// System.Int32 SelectStage::m_page
	int32_t ___m_page_5;
	// UnityEngine.Transform[] SelectStage::m_Postion
	TransformU5BU5D_t1125787804_0* ___m_Postion_6;
	// UnityEngine.Transform SelectStage::m_ImageSelectPostion
	Transform_t_495934667_0 * ___m_ImageSelectPostion_7;
	// UnityEngine.UI.Text SelectStage::m_TextPage
	Text_t221418124_0 * ___m_TextPage_9;
	// System.Single SelectStage::axisValue
	float ___axisValue_10;
};
struct SelectStage_t_1489446319_0_StaticFields{
	// SelectStage SelectStage::m_Instance
	SelectStage_t_1489446319_0 * ___m_Instance_8;
};
