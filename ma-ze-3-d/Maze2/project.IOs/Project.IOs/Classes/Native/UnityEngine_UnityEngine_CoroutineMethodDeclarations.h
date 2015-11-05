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

// UnityEngine.Coroutine
struct Coroutine_t268;
struct Coroutine_t268_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2988 (Coroutine_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2989 (Coroutine_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2990 (Coroutine_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t268_marshal(const Coroutine_t268& unmarshaled, Coroutine_t268_marshaled& marshaled);
extern "C" void Coroutine_t268_marshal_back(const Coroutine_t268_marshaled& marshaled, Coroutine_t268& unmarshaled);
extern "C" void Coroutine_t268_marshal_cleanup(Coroutine_t268_marshaled& marshaled);
