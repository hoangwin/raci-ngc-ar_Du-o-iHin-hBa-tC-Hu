#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t_1335394806_0;

#include "mscorlib_System_Security_Cryptography_AsymmetricS_1940221401.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t_1713967109_0  : public AsymmetricSignatureFormatter_t_1940221401_0
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t_1501125859_0 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t_1335394806_0 * ___hash_1;
};
