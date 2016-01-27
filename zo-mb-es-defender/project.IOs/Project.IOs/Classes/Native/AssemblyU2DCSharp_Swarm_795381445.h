#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_1666380968_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"

// Swarm
struct  Swarm_t_795381445_0  : public MonoBehaviour_t279269927_0
{
	// UnityEngine.GameObject Swarm::bird
	GameObject_t_1666380968_0 * ___bird_2;
	// System.Int32 Swarm::birdsCount
	int32_t ___birdsCount_3;
	// System.Single Swarm::swarmRadius
	float ___swarmRadius_4;
	// System.Single Swarm::birdsDistance
	float ___birdsDistance_5;
	// System.Single Swarm::amplitude
	float ___amplitude_6;
	// System.Single Swarm::speed
	float ___speed_7;
	// System.Single Swarm::angle
	float ___angle_8;
	// UnityEngine.Vector3 Swarm::lastPosition
	Vector3_t303158795_0  ___lastPosition_9;
};
