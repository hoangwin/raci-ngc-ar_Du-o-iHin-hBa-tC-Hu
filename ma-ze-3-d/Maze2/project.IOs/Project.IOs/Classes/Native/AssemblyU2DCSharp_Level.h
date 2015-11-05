#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[,]
struct Int32U5BU2CU5D_t114;
// System.Int32[]
struct Int32U5BU5D_t38;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Level
struct  Level_t74  : public Object_t
{
	// System.Int32 Level::WIDTH
	int32_t ___WIDTH_0;
	// System.Int32 Level::HEIGHT
	int32_t ___HEIGHT_1;
	// System.Int32[,] Level::array2D
	Int32U5BU2CU5D_t114* ___array2D_2;
	// System.Int32[] Level::HintArray
	Int32U5BU5D_t38* ___HintArray_3;
	// UnityEngine.Vector2 Level::POS_BEGIN
	Vector2_t115  ___POS_BEGIN_4;
	// UnityEngine.Vector2 Level::POS_END
	Vector2_t115  ___POS_END_5;
};
