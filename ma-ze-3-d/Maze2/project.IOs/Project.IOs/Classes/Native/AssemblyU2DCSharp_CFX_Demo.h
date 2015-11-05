#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t10;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t11;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CFX_Demo
struct  CFX_Demo_t8  : public MonoBehaviour_t3
{
	// System.Boolean CFX_Demo::orderedSpawns
	bool ___orderedSpawns_2;
	// System.Single CFX_Demo::step
	float ___step_3;
	// System.Single CFX_Demo::range
	float ___range_4;
	// System.Single CFX_Demo::order
	float ___order_5;
	// UnityEngine.Material CFX_Demo::groundMat
	Material_t9 * ___groundMat_6;
	// UnityEngine.Material CFX_Demo::waterMat
	Material_t9 * ___waterMat_7;
	// UnityEngine.GameObject[] CFX_Demo::ParticleExamples
	GameObjectU5BU5D_t10* ___ParticleExamples_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> CFX_Demo::ParticlesYOffsetD
	Dictionary_2_t11 * ___ParticlesYOffsetD_9;
	// System.Int32 CFX_Demo::exampleIndex
	int32_t ___exampleIndex_10;
	// System.String CFX_Demo::randomSpawnsDelay
	String_t* ___randomSpawnsDelay_11;
	// System.Boolean CFX_Demo::randomSpawns
	bool ___randomSpawns_12;
	// System.Boolean CFX_Demo::slowMo
	bool ___slowMo_13;
};
