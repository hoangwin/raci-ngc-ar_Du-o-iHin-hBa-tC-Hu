#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SoundEngine
struct SoundEngine_t160;
// UnityEngine.AudioClip
struct AudioClip_t162;

#include "codegen/il2cpp-codegen.h"

// System.Void SoundEngine::.ctor()
extern "C" void SoundEngine__ctor_m424 (SoundEngine_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::.cctor()
extern "C" void SoundEngine__cctor_m425 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::Start()
extern "C" void SoundEngine_Start_m426 (SoundEngine_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::playLoop(UnityEngine.AudioClip)
extern "C" void SoundEngine_playLoop_m427 (Object_t * __this /* static, unused */, AudioClip_t162 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::play(UnityEngine.AudioClip)
extern "C" void SoundEngine_play_m428 (Object_t * __this /* static, unused */, AudioClip_t162 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::stop()
extern "C" void SoundEngine_stop_m429 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundEngine::Update()
extern "C" void SoundEngine_Update_m430 (SoundEngine_t160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
