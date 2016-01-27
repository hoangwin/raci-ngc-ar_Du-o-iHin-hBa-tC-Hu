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

// System.Security.Cryptography.CryptographicException
struct CryptographicException_t_847622937_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t_116002698_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Security.Cryptography.CryptographicException::.ctor()
extern "C"  void CryptographicException__ctor_m297795329_0 (CryptographicException_t_847622937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C"  void CryptographicException__ctor_m_1879075837_0 (CryptographicException_t_847622937_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
extern "C"  void CryptographicException__ctor_m1012314467_0 (CryptographicException_t_847622937_0 * __this, String_t* ___message, Exception_t_116002698_0 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
extern "C"  void CryptographicException__ctor_m406825529_0 (CryptographicException_t_847622937_0 * __this, String_t* ___format, String_t* ___insert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void CryptographicException__ctor_m_2095036666_0 (CryptographicException_t_847622937_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
