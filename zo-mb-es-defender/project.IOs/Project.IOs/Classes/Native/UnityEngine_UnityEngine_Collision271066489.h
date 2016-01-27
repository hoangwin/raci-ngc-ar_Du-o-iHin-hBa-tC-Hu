#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t841305018_0;
// UnityEngine.Collider
struct Collider_t480889919_0;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t_1661286427_0;

#include "mscorlib_System_Object_1786876978.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// UnityEngine.Collision
struct  Collision_t271066489_0  : public Object_t
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t303158795_0  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t303158795_0  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t841305018_0 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t480889919_0 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t_1661286427_0* ___m_Contacts_4;
};
