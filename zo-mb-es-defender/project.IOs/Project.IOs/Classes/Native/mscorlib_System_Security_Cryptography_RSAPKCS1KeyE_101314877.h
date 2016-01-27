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
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t_940353368_0;

#include "mscorlib_System_Security_Cryptography_AsymmetricKey938401775.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t_101314877_0  : public AsymmetricKeyExchangeFormatter_t938401775_0
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t_1501125859_0 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t_940353368_0 * ___random_1;
};
