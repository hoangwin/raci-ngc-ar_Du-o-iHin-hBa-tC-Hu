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

// MazeCell
struct MazeCell_t141;
// MazeCellEdge
struct MazeCellEdge_t145;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MazeDirection.h"

// System.Void MazeCell::.ctor()
extern "C" void MazeCell__ctor_m336 (MazeCell_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MazeCell::get_IsFullyInitialized()
extern "C" bool MazeCell_get_IsFullyInitialized_m337 (MazeCell_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeDirection MazeCell::get_RandomUninitializedDirection()
extern "C" int32_t MazeCell_get_RandomUninitializedDirection_m338 (MazeCell_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeCell::SetEdge(MazeDirection,MazeCellEdge)
extern "C" void MazeCell_SetEdge_m339 (MazeCell_t141 * __this, int32_t ___direction, MazeCellEdge_t145 * ___edge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
