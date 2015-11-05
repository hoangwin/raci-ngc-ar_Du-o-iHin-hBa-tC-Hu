#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t14;
// UnityEngine.Renderer
struct Renderer_t15;
// UnityEngine.Collider
struct Collider_t16;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t10;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t19;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// CFX_Demo_New
struct  CFX_Demo_New_t13  : public MonoBehaviour_t3
{
	// UnityEngine.GUIText CFX_Demo_New::EffectLabel
	GUIText_t14 * ___EffectLabel_2;
	// UnityEngine.GUIText CFX_Demo_New::EffectIndexLabel
	GUIText_t14 * ___EffectIndexLabel_3;
	// UnityEngine.Renderer CFX_Demo_New::groundRenderer
	Renderer_t15 * ___groundRenderer_4;
	// UnityEngine.Collider CFX_Demo_New::groundCollider
	Collider_t16 * ___groundCollider_5;
	// UnityEngine.GameObject[] CFX_Demo_New::ParticleExamples
	GameObjectU5BU5D_t10* ___ParticleExamples_6;
	// System.Int32 CFX_Demo_New::exampleIndex
	int32_t ___exampleIndex_7;
	// System.Boolean CFX_Demo_New::slowMo
	bool ___slowMo_8;
	// UnityEngine.Vector3 CFX_Demo_New::defaultCamPosition
	Vector3_t17  ___defaultCamPosition_9;
	// UnityEngine.Quaternion CFX_Demo_New::defaultCamRotation
	Quaternion_t18  ___defaultCamRotation_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CFX_Demo_New::onScreenParticles
	List_1_t19 * ___onScreenParticles_11;
};
