#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MazeDirection[]
struct MazeDirectionU5BU5D_t148;
// IntVector2[]
struct IntVector2U5BU5D_t149;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t150;

#include "mscorlib_System_Object.h"

// MazeDirections
struct  MazeDirections_t147  : public Object_t
{
};
struct MazeDirections_t147_StaticFields{
	// MazeDirection[] MazeDirections::opposites
	MazeDirectionU5BU5D_t148* ___opposites_1;
	// IntVector2[] MazeDirections::vectors
	IntVector2U5BU5D_t149* ___vectors_2;
	// UnityEngine.Quaternion[] MazeDirections::rotations
	QuaternionU5BU5D_t150* ___rotations_3;
};
