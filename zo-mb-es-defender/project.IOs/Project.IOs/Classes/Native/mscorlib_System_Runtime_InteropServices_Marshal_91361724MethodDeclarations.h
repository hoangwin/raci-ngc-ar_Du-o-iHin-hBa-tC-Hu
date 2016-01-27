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

// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m802981325_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m98320635_0 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1683535972_0 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t1362406281_0* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m275157126_0 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t2048601427_0* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m536122811_0 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m_1312539677_0 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m_1323057685_0 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
