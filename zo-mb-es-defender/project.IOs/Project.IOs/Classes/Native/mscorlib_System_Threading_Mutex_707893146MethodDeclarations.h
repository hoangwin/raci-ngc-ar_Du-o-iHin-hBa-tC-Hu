﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.Mutex
struct Mutex_t_707893146_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern "C"  void Mutex__ctor_m_1645958979_0 (Mutex_t_707893146_0 * __this, bool ___initiallyOwned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C"  IntPtr_t Mutex_CreateMutex_internal_m_1942010720_0 (Object_t * __this /* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C"  bool Mutex_ReleaseMutex_internal_m919103208_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
extern "C"  void Mutex_ReleaseMutex_m2143813124_0 (Mutex_t_707893146_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
