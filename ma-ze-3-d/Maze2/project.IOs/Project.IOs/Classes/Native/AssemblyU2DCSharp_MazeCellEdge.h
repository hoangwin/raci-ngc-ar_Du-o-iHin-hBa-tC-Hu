#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MazeCell
struct MazeCell_t141;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MazeDirection.h"

// MazeCellEdge
struct  MazeCellEdge_t145  : public MonoBehaviour_t3
{
	// MazeCell MazeCellEdge::cell
	MazeCell_t141 * ___cell_2;
	// MazeCell MazeCellEdge::otherCell
	MazeCell_t141 * ___otherCell_3;
	// MazeDirection MazeCellEdge::direction
	int32_t ___direction_4;
};
