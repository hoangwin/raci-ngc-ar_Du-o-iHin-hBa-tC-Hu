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

// System.Threading.Timer/Scheduler
struct Scheduler_t_2141714762_0;
// System.Threading.Timer
struct Timer_t1342296676_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Threading.Timer/Scheduler::.ctor()
extern "C"  void Scheduler__ctor_m_578701554_0 (Scheduler_t_2141714762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern "C"  void Scheduler__cctor_m_47715489_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern "C"  Scheduler_t_2141714762_0 * Scheduler_get_Instance_m1989471839_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C"  void Scheduler_Remove_m1930366072_0 (Scheduler_t_2141714762_0 * __this, Timer_t1342296676_0 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C"  void Scheduler_Change_m_231378554_0 (Scheduler_t_2141714762_0 * __this, Timer_t1342296676_0 * ___timer, int64_t ___new_next_run, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern "C"  void Scheduler_Add_m376749205_0 (Scheduler_t_2141714762_0 * __this, Timer_t1342296676_0 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C"  int32_t Scheduler_InternalRemove_m_983761641_0 (Scheduler_t_2141714762_0 * __this, Timer_t1342296676_0 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern "C"  void Scheduler_SchedulerThread_m_2085394511_0 (Scheduler_t_2141714762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C"  void Scheduler_ShrinkIfNeeded_m_2108144185_0 (Scheduler_t_2141714762_0 * __this, ArrayList_t2138871437_0 * ___list, int32_t ___initial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
