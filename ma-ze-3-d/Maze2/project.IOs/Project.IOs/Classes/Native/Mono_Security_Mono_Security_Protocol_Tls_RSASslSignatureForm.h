#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t1044;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1127;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t181;

#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t1182  : public AsymmetricSignatureFormatter_t1183
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t1044 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1127 * ___hash_1;
};
struct RSASslSignatureFormatter_t1182_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t181 * ___U3CU3Ef__switchU24map16_2;
};
