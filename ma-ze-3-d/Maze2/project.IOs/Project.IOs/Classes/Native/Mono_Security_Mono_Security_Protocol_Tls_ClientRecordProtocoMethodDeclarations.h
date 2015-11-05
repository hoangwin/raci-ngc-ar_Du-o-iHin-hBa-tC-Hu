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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1160;
// System.IO.Stream
struct Stream_t1177;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1158;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1179;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1168;
// System.Byte[]
struct ByteU5BU5D_t820;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m5975 (ClientRecordProtocol_t1160 * __this, Stream_t1177 * ___innerStream, ClientContext_t1158 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1179 * ClientRecordProtocol_GetMessage_m5976 (ClientRecordProtocol_t1160 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m5977 (ClientRecordProtocol_t1160 * __this, TlsStream_t1168 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1179 * ClientRecordProtocol_createClientHandshakeMessage_m5978 (ClientRecordProtocol_t1160 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t1179 * ClientRecordProtocol_createServerHandshakeMessage_m5979 (ClientRecordProtocol_t1160 * __this, uint8_t ___type, ByteU5BU5D_t820* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
