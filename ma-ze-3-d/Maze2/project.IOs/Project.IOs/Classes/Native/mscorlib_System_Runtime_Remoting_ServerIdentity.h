#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t918;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1578;

#include "mscorlib_System_Runtime_Remoting_Identity.h"

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t1277  : public Identity_t1631
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t918 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t1578 * ____context_9;
};
