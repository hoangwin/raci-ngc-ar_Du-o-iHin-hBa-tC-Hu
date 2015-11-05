#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Maze
struct Maze_t63;
// MazeCell
struct MazeCell_t141;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// Player
struct Player_t64;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IntVector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_MazeDirection.h"

// System.Void Maze::.ctor()
extern "C" void Maze__ctor_m321 (Maze_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IntVector2 Maze::get_RandomCoordinates()
extern "C" IntVector2_t70  Maze_get_RandomCoordinates_m322 (Maze_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Maze::ContainsCoordinates(IntVector2)
extern "C" bool Maze_ContainsCoordinates_m323 (Maze_t63 * __this, IntVector2_t70  ___coordinate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeCell Maze::GetCell(IntVector2)
extern "C" MazeCell_t141 * Maze_GetCell_m324 (Maze_t63 * __this, IntVector2_t70  ___coordinates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Maze::Generate2()
extern "C" Object_t * Maze_Generate2_m325 (Maze_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Maze::DoNextGenerationStep2(System.Int32,System.Int32,System.Int32)
extern "C" void Maze_DoNextGenerationStep2_m326 (Maze_t63 * __this, int32_t ___x, int32_t ___y, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeCell Maze::CreateCell(IntVector2)
extern "C" MazeCell_t141 * Maze_CreateCell_m327 (Maze_t63 * __this, IntVector2_t70  ___coordinates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeCell Maze::findCell(UnityEngine.Vector3)
extern "C" MazeCell_t141 * Maze_findCell_m328 (Maze_t63 * __this, Vector3_t17  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Maze::CreateWall(MazeCell,MazeCell,MazeDirection)
extern "C" void Maze_CreateWall_m329 (Maze_t63 * __this, MazeCell_t141 * ___cell, MazeCell_t141 * ___otherCell, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Maze::setPlayerBegin(Player)
extern "C" void Maze_setPlayerBegin_m330 (Maze_t63 * __this, Player_t64 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeCell Maze::getLongNextMazeCell(MazeCell,MazeDirection)
extern "C" MazeCell_t141 * Maze_getLongNextMazeCell_m331 (Maze_t63 * __this, MazeCell_t141 * ____currentCell, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Maze::checkMoveDirection(MazeCell,MazeDirection)
extern "C" bool Maze_checkMoveDirection_m332 (Maze_t63 * __this, MazeCell_t141 * ____currentCell, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Maze::destroyAll()
extern "C" void Maze_destroyAll_m333 (Maze_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Maze::showHintList()
extern "C" void Maze_showHintList_m334 (Maze_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Maze::stopShowHintList(System.Single)
extern "C" Object_t * Maze_stopShowHintList_m335 (Maze_t63 * __this, float ___waitTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
