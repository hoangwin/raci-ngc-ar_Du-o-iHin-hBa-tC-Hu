#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.OidCollection
struct OidCollection_t379843247_0;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t846388512_0;

#include "mscorlib_System_Object_1786876978.h"
#include "System_System_Security_Cryptography_X509Certifica_1902378753.h"
#include "System_System_Security_Cryptography_X509Certificat1814642268.h"
#include "mscorlib_System_TimeSpan_1119131324.h"
#include "System_System_Security_Cryptography_X509Certifica_2089117063.h"
#include "mscorlib_System_DateTime_1242318096.h"

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct  X509ChainPolicy_t_1641763762_0  : public Object_t
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_t379843247_0 * ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_t379843247_0 * ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509Certificate2Collection_t846388512_0 * ___store_2;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_4;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t_1119131324_0  ___timeout_5;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_6;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t_1242318096_0  ___vtime_7;
};
