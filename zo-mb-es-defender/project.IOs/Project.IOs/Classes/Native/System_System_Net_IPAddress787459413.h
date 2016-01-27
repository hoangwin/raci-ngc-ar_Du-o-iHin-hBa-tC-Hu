#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt16[]
struct UInt16U5BU5D_t_675529178_0;
// System.Net.IPAddress
struct IPAddress_t787459413_0;

#include "mscorlib_System_Object_1786876978.h"
#include "System_System_Net_Sockets_AddressFamily_7309416.h"

// System.Net.IPAddress
struct  IPAddress_t787459413_0  : public Object_t
{
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t_675529178_0* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;
};
struct IPAddress_t787459413_0_StaticFields{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t787459413_0 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t787459413_0 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t787459413_0 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t787459413_0 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t787459413_0 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t787459413_0 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t787459413_0 * ___IPv6None_10;
};
