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

// UnityEngine.WWW
struct WWW_t49;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t820;
// System.String[]
struct StringU5BU5D_t265;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t821;
// System.Text.Encoding
struct Encoding_t822;
// UnityEngine.Texture2D
struct Texture2D_t241;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m848 (WWW_t49 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m3325 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m3326 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m3327 (WWW_t49 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m3328 (WWW_t49 * __this, String_t* ___url, ByteU5BU5D_t820* ___postData, StringU5BU5D_t265* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t821 * WWW_get_responseHeaders_m3329 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m3330 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m850 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t822 * WWW_GetTextEncoder_m3331 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t820* WWW_get_bytes_m3332 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m849 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C" Texture2D_t241 * WWW_GetTexture_m3333 (WWW_t49 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C" Texture2D_t241 * WWW_get_texture_m851 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m3334 (WWW_t49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t821 * WWW_ParseHTTPHeaderString_m3335 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
