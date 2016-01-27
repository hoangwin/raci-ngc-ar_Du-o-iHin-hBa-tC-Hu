#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t123034949_0;
// System.Net.IWebProxy
struct IWebProxy_t837034055_0;
// System.Object
struct Object_t;

#include "mscorlib_System_MarshalByRefObject_1586954378.h"
#include "System_System_Net_Security_AuthenticationLevel2019052806.h"

// System.Net.WebRequest
struct  WebRequest_t_178770957_0  : public MarshalByRefObject_t_1586954378_0
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;
};
struct WebRequest_t_178770957_0_StaticFields{
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t123034949_0 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	Object_t * ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	Object_t * ___lockobj_5;
};
