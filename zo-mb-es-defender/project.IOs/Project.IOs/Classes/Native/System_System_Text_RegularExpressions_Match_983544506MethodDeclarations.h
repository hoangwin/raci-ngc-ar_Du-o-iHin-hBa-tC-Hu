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

// System.Text.RegularExpressions.Match
struct Match_t_983544506_0;
// System.Text.RegularExpressions.Regex
struct Regex_t1583948920_0;
// System.Text.RegularExpressions.IMachine
struct IMachine_t256775685_0;
// System.String
struct String_t;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t_859638128_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C"  void Match__ctor_m478172746_0 (Match_t_983544506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m920678511_0 (Match_t_983544506_0 * __this, Regex_t1583948920_0 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m_1842453652_0 (Match_t_983544506_0 * __this, Regex_t1583948920_0 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C"  void Match__cctor_m1223592703_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C"  Match_t_983544506_0 * Match_get_Empty_m_713605383_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C"  GroupCollection_t_859638128_0 * Match_get_Groups_m_242628490_0 (Match_t_983544506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C"  Match_t_983544506_0 * Match_NextMatch_m1088868049_0 (Match_t_983544506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C"  Regex_t1583948920_0 * Match_get_Regex_m_768964529_0 (Match_t_983544506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
