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

// MazeCellEdge
struct MazeCellEdge_t145;
// MazeCell
struct MazeCell_t141;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MazeDirection.h"

// System.Void MazeCellEdge::.ctor()
extern "C" void MazeCellEdge__ctor_m340 (MazeCellEdge_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeCellEdge::Initialize(MazeCell,MazeCell,MazeDirection)
extern "C" void MazeCellEdge_Initialize_m341 (MazeCellEdge_t145 * __this, MazeCell_t141 * ___cell, MazeCell_t141 * ___otherCell, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeCellEdge::OnPlayerEntered()
extern "C" void MazeCellEdge_OnPlayerEntered_m342 (MazeCellEdge_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeCellEdge::OnPlayerExited()
extern "C" void MazeCellEdge_OnPlayerExited_m343 (MazeCellEdge_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
