﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t_1767557738_0;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t_521124047_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Single2055008215.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void PCMReaderCallback__ctor_m_77474588_0 (PCMReaderCallback_t_1767557738_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C"  void PCMReaderCallback_Invoke_m_684577481_0 (PCMReaderCallback_t_1767557738_0 * __this, SingleU5BU5D_t_521124047_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t_1767557738_0(Il2CppObject* delegate, SingleU5BU5D_t_521124047_0* ___data);
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C"  Object_t * PCMReaderCallback_BeginInvoke_m_1175871804_0 (PCMReaderCallback_t_1767557738_0 * __this, SingleU5BU5D_t_521124047_0* ___data, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C"  void PCMReaderCallback_EndInvoke_m909664362_0 (PCMReaderCallback_t_1767557738_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;