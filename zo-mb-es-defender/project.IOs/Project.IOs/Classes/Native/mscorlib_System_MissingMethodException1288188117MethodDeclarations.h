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

// System.MissingMethodException
struct MissingMethodException_t1288188117_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.MissingMethodException::.ctor()
extern "C"  void MissingMethodException__ctor_m_396537581_0 (MissingMethodException_t1288188117_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
extern "C"  void MissingMethodException__ctor_m554852425_0 (MissingMethodException_t1288188117_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMethodException__ctor_m406932064_0 (MissingMethodException_t1288188117_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern "C"  void MissingMethodException__ctor_m_1814379957_0 (MissingMethodException_t1288188117_0 * __this, String_t* ___className, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
extern "C"  String_t* MissingMethodException_get_Message_m_77760846_0 (MissingMethodException_t1288188117_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
