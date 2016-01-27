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

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1421903087_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioConfigurationChangeHandler__ctor_m114228029_0 (AudioConfigurationChangeHandler_t1421903087_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C"  void AudioConfigurationChangeHandler_Invoke_m635374412_0 (AudioConfigurationChangeHandler_t1421903087_0 * __this, bool ___deviceWasChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t1421903087_0(Il2CppObject* delegate, bool ___deviceWasChanged);
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * AudioConfigurationChangeHandler_BeginInvoke_m_1876296699_0 (AudioConfigurationChangeHandler_t1421903087_0 * __this, bool ___deviceWasChanged, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AudioConfigurationChangeHandler_EndInvoke_m_2057866509_0 (AudioConfigurationChangeHandler_t1421903087_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
