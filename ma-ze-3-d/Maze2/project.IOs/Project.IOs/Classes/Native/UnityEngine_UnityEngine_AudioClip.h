#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t686;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t687;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.AudioClip
struct  AudioClip_t162  : public Object_t245
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t686 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t687 * ___m_PCMSetPositionCallback_3;
};
