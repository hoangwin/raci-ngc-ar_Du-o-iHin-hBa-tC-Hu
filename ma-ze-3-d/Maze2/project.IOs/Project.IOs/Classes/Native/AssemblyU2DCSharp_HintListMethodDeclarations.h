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

// HintList
struct HintList_t71;
// Level
struct Level_t74;
// Hint
struct Hint_t69;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IntVector2.h"

// System.Void HintList::.ctor()
extern "C" void HintList__ctor_m176 (HintList_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HintList::generationHintList(Level,IntVector2)
extern "C" void HintList_generationHintList_m177 (HintList_t71 * __this, Level_t74 * ___level, IntVector2_t70  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Hint HintList::CreateAHint(IntVector2,IntVector2)
extern "C" Hint_t69 * HintList_CreateAHint_m178 (HintList_t71 * __this, IntVector2_t70  ___coordinates, IntVector2_t70  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HintList::cleanAll()
extern "C" void HintList_cleanAll_m179 (HintList_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
