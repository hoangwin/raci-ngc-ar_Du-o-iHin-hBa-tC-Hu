﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t_1478333383_0;

#include "mscorlib_System_Object_1786876978.h"
#include "UnityEngine_UnityEngine_Events_PersistentListener_1488041110.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState168557484.h"

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t_1245293891_0  : public Object_t
{
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t_1540828846_0 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t_1478333383_0 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;
};
