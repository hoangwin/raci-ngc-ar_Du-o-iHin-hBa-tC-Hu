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

// System.IO.BinaryReader
struct BinaryReader_t_1569001593_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal1989943944.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C"  void BinaryReader__ctor_m_104906290_0 (BinaryReader_t_1569001593_0 * __this, Stream_t_500356931_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryReader__ctor_m1387916481_0 (BinaryReader_t_1569001593_0 * __this, Stream_t_500356931_0 * ___input, Encoding_t_1491589107_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C"  void BinaryReader_System_IDisposable_Dispose_m_1007847772_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.BinaryReader::get_BaseStream()
extern "C"  Stream_t_500356931_0 * BinaryReader_get_BaseStream_m_1028830603_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Close()
extern "C"  void BinaryReader_Close_m_1387181049_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C"  void BinaryReader_Dispose_m_45510419_0 (BinaryReader_t_1569001593_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C"  void BinaryReader_FillBuffer_m_1197363697_0 (BinaryReader_t_1569001593_0 * __this, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C"  int32_t BinaryReader_Read_m992299333_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t BinaryReader_Read_m999452678_0 (BinaryReader_t_1569001593_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t BinaryReader_Read_m_1542418480_0 (BinaryReader_t_1569001593_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t BinaryReader_ReadCharBytes_m443749540_0 (BinaryReader_t_1569001593_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C"  int32_t BinaryReader_Read7BitEncodedInt_m1039249966_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C"  bool BinaryReader_ReadBoolean_m_1402675413_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C"  uint8_t BinaryReader_ReadByte_m99061455_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* BinaryReader_ReadBytes_m_677200841_0 (BinaryReader_t_1569001593_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C"  uint16_t BinaryReader_ReadChar_m_879769753_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C"  Decimal_t1989943944_0  BinaryReader_ReadDecimal_m_1130142869_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C"  double BinaryReader_ReadDouble_m488089323_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C"  int16_t BinaryReader_ReadInt16_m309163147_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C"  int32_t BinaryReader_ReadInt32_m1811936587_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C"  int64_t BinaryReader_ReadInt64_m1752540011_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C"  int8_t BinaryReader_ReadSByte_m1712621355_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C"  String_t* BinaryReader_ReadString_m2084208171_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C"  float BinaryReader_ReadSingle_m_6531473_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C"  uint16_t BinaryReader_ReadUInt16_m_1630806189_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C"  uint32_t BinaryReader_ReadUInt32_m1363572147_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C"  uint64_t BinaryReader_ReadUInt64_m1893783375_0 (BinaryReader_t_1569001593_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C"  void BinaryReader_CheckBuffer_m1059275266_0 (BinaryReader_t_1569001593_0 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
