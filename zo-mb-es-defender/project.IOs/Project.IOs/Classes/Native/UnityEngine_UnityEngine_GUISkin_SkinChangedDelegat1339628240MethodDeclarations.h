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

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t1339628240_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SkinChangedDelegate__ctor_m_389638998_0 (SkinChangedDelegate_t1339628240_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
extern "C"  void SkinChangedDelegate_Invoke_m_1493003256_0 (SkinChangedDelegate_t1339628240_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SkinChangedDelegate_t1339628240_0(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * SkinChangedDelegate_BeginInvoke_m_35805585_0 (SkinChangedDelegate_t1339628240_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SkinChangedDelegate_EndInvoke_m_1305715108_0 (SkinChangedDelegate_t1339628240_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
