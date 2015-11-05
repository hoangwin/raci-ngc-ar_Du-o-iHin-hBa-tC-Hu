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

// SuperArrayInt
struct SuperArrayInt_t154;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void SuperArrayInt::.ctor(System.Int32,System.Int32,System.String)
extern "C" void SuperArrayInt__ctor_m371 (SuperArrayInt_t154 * __this, int32_t ___n, int32_t ___initv, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SuperArrayInt::Get(System.Int32)
extern "C" int32_t SuperArrayInt_Get_m372 (SuperArrayInt_t154 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::Set(System.Int32,System.Int32)
extern "C" void SuperArrayInt_Set_m373 (SuperArrayInt_t154 * __this, int32_t ___index, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::SetAll(System.Int32)
extern "C" void SuperArrayInt_SetAll_m374 (SuperArrayInt_t154 * __this, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::SetAndSave(System.Int32,System.Int32)
extern "C" void SuperArrayInt_SetAndSave_m375 (SuperArrayInt_t154 * __this, int32_t ___index, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::Plus(System.Int32,System.Int32)
extern "C" void SuperArrayInt_Plus_m376 (SuperArrayInt_t154 * __this, int32_t ___index, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::PlusAndSave(System.Int32,System.Int32)
extern "C" void SuperArrayInt_PlusAndSave_m377 (SuperArrayInt_t154 * __this, int32_t ___index, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::Save(System.Int32)
extern "C" void SuperArrayInt_Save_m378 (SuperArrayInt_t154 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::Load()
extern "C" void SuperArrayInt_Load_m379 (SuperArrayInt_t154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SuperArrayInt::AddItem(System.Int32)
extern "C" void SuperArrayInt_AddItem_m380 (SuperArrayInt_t154 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
