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

// System.Runtime.Remoting.ConfigHandler
struct ConfigHandler_t_820426210_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t2041912417_0;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1821518838_0;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t32799001_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_1119131324.h"

// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern "C"  void ConfigHandler__ctor_m_496266653_0 (ConfigHandler_t_820426210_0 * __this, bool ___onlyDelayedChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern "C"  void ConfigHandler_ValidatePath_m_1105979807_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___element, StringU5BU5D_t_1137506664_0* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern "C"  bool ConfigHandler_CheckPath_m_1998507555_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnStartParsing_m_1996175232_0 (ConfigHandler_t_820426210_0 * __this, SmallXmlParser_t2041912417_0 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void ConfigHandler_OnProcessingInstruction_m1977038436_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C"  void ConfigHandler_OnIgnorableWhitespace_m1819705975_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_OnStartElement_m_1727943931_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ParseElement_m713051069_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C"  void ConfigHandler_OnEndElement_m_1094323178_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadCustomProviderData_m784203316_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadLifetine_m_104764794_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern "C"  TimeSpan_t_1119131324_0  ConfigHandler_ParseTime_m1231083163_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadChannel_m90614780_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  ProviderData_t32799001_0 * ConfigHandler_ReadProvider_m1441445958_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientActivated_m225401690_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceActivated_m907987684_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientWellKnown_m_88013762_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceWellKnown_m1495748104_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadInteropXml_m539906871_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadPreload_m455851711_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* ConfigHandler_GetNotNull_m_1840287045_0 (ConfigHandler_t_820426210_0 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern "C"  String_t* ConfigHandler_ExtractAssembly_m_1301190638_0 (ConfigHandler_t_820426210_0 * __this, String_t** ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C"  void ConfigHandler_OnChars_m2004226744_0 (ConfigHandler_t_820426210_0 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnEndParsing_m_1766280355_0 (ConfigHandler_t_820426210_0 * __this, SmallXmlParser_t2041912417_0 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
