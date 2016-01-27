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

// UnityEngine.AudioSource
struct AudioSource_t_1856244150_0;
// UnityEngine.AudioClip
struct AudioClip_t_2050270981_0;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.AudioSource::get_volume()
extern "C"  float AudioSource_get_volume_m66289169_0 (AudioSource_t_1856244150_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m_1517658574_0 (AudioSource_t_1856244150_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C"  float AudioSource_get_pitch_m_74394857_0 (AudioSource_t_1856244150_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m_1230550838_0 (AudioSource_t_1856244150_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C"  AudioClip_t_2050270981_0 * AudioSource_get_clip_m2127996365_0 (AudioSource_t_1856244150_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m738814682_0 (AudioSource_t_1856244150_0 * __this, AudioClip_t_2050270981_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C"  void AudioSource_Play_m889724421_0 (AudioSource_t_1856244150_0 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792_0 (AudioSource_t_1856244150_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m_842287682_0 (AudioSource_t_1856244150_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m_176067556_0 (AudioSource_t_1856244150_0 * __this, AudioClip_t_2050270981_0 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m286472761_0 (AudioSource_t_1856244150_0 * __this, AudioClip_t_2050270981_0 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C"  void AudioSource_set_playOnAwake_m858475204_0 (AudioSource_t_1856244150_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
