#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MazeCellEdge[]
struct MazeCellEdgeU5BU5D_t144;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_IntVector2.h"

// MazeCell
struct  MazeCell_t141  : public MonoBehaviour_t3
{
	// IntVector2 MazeCell::coordinates
	IntVector2_t70  ___coordinates_2;
	// MazeCellEdge[] MazeCell::edges
	MazeCellEdgeU5BU5D_t144* ___edges_3;
	// System.Int32 MazeCell::initializedEdgeCount
	int32_t ___initializedEdgeCount_4;
	// System.Int32 MazeCell::value
	int32_t ___value_5;
};
