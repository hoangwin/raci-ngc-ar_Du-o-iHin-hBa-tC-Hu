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

// System.MissingFieldException
struct MissingFieldException_t227259630_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.MissingFieldException::.ctor()
extern "C"  void MissingFieldException__ctor_m1161042282_0 (MissingFieldException_t227259630_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.String)
extern "C"  void MissingFieldException__ctor_m_228472328_0 (MissingFieldException_t227259630_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingFieldException__ctor_m637279469_0 (MissingFieldException_t227259630_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingFieldException::get_Message()
extern "C"  String_t* MissingFieldException_get_Message_m481101937_0 (MissingFieldException_t227259630_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;