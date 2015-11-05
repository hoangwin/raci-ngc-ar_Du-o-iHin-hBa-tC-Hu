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

// System.FormatException
struct FormatException_t1033;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FormatException::.ctor()
extern "C" void FormatException__ctor_m11166 (FormatException_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C" void FormatException__ctor_m5359 (FormatException_t1033 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FormatException__ctor_m5493 (FormatException_t1033 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
