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

// SuperInt
struct SuperInt_t155;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void SuperInt::.ctor(System.Int32,System.String)
extern "C" void SuperInt__ctor_m381 (SuperInt_t155 * __this, int32_t ___initv, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SuperInt::Get()
extern "C" int32_t SuperInt_Get_m382 (SuperInt_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperInt::Set(System.Int32)
extern "C" void SuperInt_Set_m383 (SuperInt_t155 * __this, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperInt::SetAndSave(System.Int32)
extern "C" void SuperInt_SetAndSave_m384 (SuperInt_t155 * __this, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperInt::Plus(System.Int32)
extern "C" void SuperInt_Plus_m385 (SuperInt_t155 * __this, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperInt::PlusAndSave(System.Int32)
extern "C" void SuperInt_PlusAndSave_m386 (SuperInt_t155 * __this, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperInt::Save()
extern "C" void SuperInt_Save_m387 (SuperInt_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperInt::Load()
extern "C" void SuperInt_Load_m388 (SuperInt_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
