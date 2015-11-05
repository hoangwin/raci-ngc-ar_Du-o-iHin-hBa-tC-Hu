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

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1319;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1225;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void KeyPairPersistence__ctor_m7573 (KeyPairPersistence_t1319 * __this, CspParameters_t1225 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C" void KeyPairPersistence__ctor_m7574 (KeyPairPersistence_t1319 * __this, CspParameters_t1225 * ___parameters, String_t* ___keyPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C" void KeyPairPersistence__cctor_m7575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C" String_t* KeyPairPersistence_get_Filename_m7576 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C" String_t* KeyPairPersistence_get_KeyValue_m7577 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C" void KeyPairPersistence_set_KeyValue_m7578 (KeyPairPersistence_t1319 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C" bool KeyPairPersistence_Load_m7579 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C" void KeyPairPersistence_Save_m7580 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C" void KeyPairPersistence_Remove_m7581 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C" String_t* KeyPairPersistence_get_UserPath_m7582 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C" String_t* KeyPairPersistence_get_MachinePath_m7583 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C" bool KeyPairPersistence__CanSecure_m7584 (Object_t * __this /* static, unused */, String_t* ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C" bool KeyPairPersistence__ProtectUser_m7585 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C" bool KeyPairPersistence__ProtectMachine_m7586 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C" bool KeyPairPersistence__IsUserProtected_m7587 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence__IsMachineProtected_m7588 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C" bool KeyPairPersistence_CanSecure_m7589 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C" bool KeyPairPersistence_ProtectUser_m7590 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C" bool KeyPairPersistence_ProtectMachine_m7591 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C" bool KeyPairPersistence_IsUserProtected_m7592 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence_IsMachineProtected_m7593 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C" bool KeyPairPersistence_get_CanChange_m7594 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C" bool KeyPairPersistence_get_UseDefaultKeyContainer_m7595 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C" bool KeyPairPersistence_get_UseMachineKeyStore_m7596 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C" String_t* KeyPairPersistence_get_ContainerName_m7597 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C" CspParameters_t1225 * KeyPairPersistence_Copy_m7598 (KeyPairPersistence_t1319 * __this, CspParameters_t1225 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C" void KeyPairPersistence_FromXml_m7599 (KeyPairPersistence_t1319 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C" String_t* KeyPairPersistence_ToXml_m7600 (KeyPairPersistence_t1319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
