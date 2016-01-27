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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t_752367606_0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t_400063483_0;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t300855991_0;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t373605255_0;
// System.IO.BinaryReader
struct BinaryReader_t_1569001593_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F_317248741.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Ty892438032.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m_123135294_0 (BinaryFormatter_t_752367606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void BinaryFormatter__ctor_m_544826245_0 (BinaryFormatter_t_752367606_0 * __this, Object_t * ___selector, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C"  Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m219714691_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void BinaryFormatter_set_AssemblyFormat_m_710122169_0 (BinaryFormatter_t_752367606_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C"  SerializationBinder_t300855991_0 * BinaryFormatter_get_Binder_m_110957093_0 (BinaryFormatter_t_752367606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C"  StreamingContext_t2060733842_0  BinaryFormatter_get_Context_m1251360709_0 (BinaryFormatter_t_752367606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C"  Object_t * BinaryFormatter_get_SurrogateSelector_m1039166190_0 (BinaryFormatter_t_752367606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C"  int32_t BinaryFormatter_get_FilterLevel_m117513938_0 (BinaryFormatter_t_752367606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C"  Object_t * BinaryFormatter_Deserialize_m_1523113825_0 (BinaryFormatter_t_752367606_0 * __this, Stream_t_500356931_0 * ___serializationStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C"  Object_t * BinaryFormatter_NoCheckDeserialize_m1968202401_0 (BinaryFormatter_t_752367606_0 * __this, Stream_t_500356931_0 * ___serializationStream, HeaderHandler_t373605255_0 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C"  void BinaryFormatter_ReadBinaryHeader_m470465428_0 (BinaryFormatter_t_752367606_0 * __this, BinaryReader_t_1569001593_0 * ___reader, bool* ___hasHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
