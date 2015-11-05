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
// MazeWall
struct MazeWall_t142;
// MazeCell[,]
struct MazeCellU5BU2CU5D_t143;
// HintList
struct HintList_t71;
// Target
struct Target_t4;
// Maze
struct Maze_t63;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_IntVector2.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Maze
struct  Maze_t63  : public MonoBehaviour_t3
{
	// IntVector2 Maze::size
	IntVector2_t70  ___size_2;
	// MazeCell Maze::cellPrefab
	MazeCell_t141 * ___cellPrefab_3;
	// System.Single Maze::generationStepDelay
	float ___generationStepDelay_4;
	// MazeWall Maze::wallPrefab
	MazeWall_t142 * ___wallPrefab_5;
	// MazeCell[,] Maze::cells
	MazeCellU5BU2CU5D_t143* ___cells_6;
	// HintList Maze::hintListPrefab
	HintList_t71 * ___hintListPrefab_7;
	// HintList Maze::hintListInstance
	HintList_t71 * ___hintListInstance_8;
	// Target Maze::targetPrefab
	Target_t4 * ___targetPrefab_9;
	// Target Maze::targetInstance
	Target_t4 * ___targetInstance_10;
	// UnityEngine.Vector2 Maze::coordinateBegin
	Vector2_t115  ___coordinateBegin_11;
	// UnityEngine.Vector2 Maze::coordinateEnd
	Vector2_t115  ___coordinateEnd_12;
};
struct Maze_t63_StaticFields{
	// Maze Maze::instance
	Maze_t63 * ___instance_13;
};
