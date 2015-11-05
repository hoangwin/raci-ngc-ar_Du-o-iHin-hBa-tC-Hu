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

// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t1734;
// System.Byte[]
struct ByteU5BU5D_t820;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.ToBase64Transform::System.IDisposable.Dispose()
extern "C" void ToBase64Transform_System_IDisposable_Dispose_m10261 (ToBase64Transform_t1734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Finalize()
extern "C" void ToBase64Transform_Finalize_m10262 (ToBase64Transform_t1734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanReuseTransform()
extern "C" bool ToBase64Transform_get_CanReuseTransform_m10263 (ToBase64Transform_t1734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_InputBlockSize()
extern "C" int32_t ToBase64Transform_get_InputBlockSize_m10264 (ToBase64Transform_t1734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_OutputBlockSize()
extern "C" int32_t ToBase64Transform_get_OutputBlockSize_m10265 (ToBase64Transform_t1734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Dispose(System.Boolean)
extern "C" void ToBase64Transform_Dispose_m10266 (ToBase64Transform_t1734 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ToBase64Transform_TransformBlock_m10267 (ToBase64Transform_t1734 * __this, ByteU5BU5D_t820* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t820* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" void ToBase64Transform_InternalTransformBlock_m10268 (Object_t * __this /* static, unused */, ByteU5BU5D_t820* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t820* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t820* ToBase64Transform_TransformFinalBlock_m10269 (ToBase64Transform_t1734 * __this, ByteU5BU5D_t820* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::InternalTransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t820* ToBase64Transform_InternalTransformFinalBlock_m10270 (Object_t * __this /* static, unused */, ByteU5BU5D_t820* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
