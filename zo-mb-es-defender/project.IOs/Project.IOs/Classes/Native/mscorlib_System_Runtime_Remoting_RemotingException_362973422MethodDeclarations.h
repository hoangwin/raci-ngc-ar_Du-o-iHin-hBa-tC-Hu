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

// System.Runtime.Remoting.RemotingException
struct RemotingException_t_362973422_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern "C"  void RemotingException__ctor_m2114716040_0 (RemotingException_t_362973422_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C"  void RemotingException__ctor_m_726472226_0 (RemotingException_t_362973422_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RemotingException__ctor_m1737420075_0 (RemotingException_t_362973422_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String,System.Exception)
extern "C"  void RemotingException__ctor_m_734746370_0 (RemotingException_t_362973422_0 * __this, String_t* ___message, Exception_t_116002698_0 * ___InnerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
