#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.Scheduler
struct Scheduler_t2347715885;
// System.Collections.Generic.List`1<Google.Sharpen.IScheduledITask>
struct List_1_t2498470206;
// System.Threading.Thread
struct Thread_t241561612;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.Scheduler
struct  Scheduler_t2347715885  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Google.Sharpen.IScheduledITask> Google.Sharpen.Scheduler::tasks
	List_1_t2498470206 * ___tasks_1;
	// System.Threading.Thread Google.Sharpen.Scheduler::scheduler
	Thread_t241561612 * ___scheduler_2;
	// System.Threading.AutoResetEvent Google.Sharpen.Scheduler::newTask
	AutoResetEvent_t15112628 * ___newTask_3;

public:
	inline static int32_t get_offset_of_tasks_1() { return static_cast<int32_t>(offsetof(Scheduler_t2347715885, ___tasks_1)); }
	inline List_1_t2498470206 * get_tasks_1() const { return ___tasks_1; }
	inline List_1_t2498470206 ** get_address_of_tasks_1() { return &___tasks_1; }
	inline void set_tasks_1(List_1_t2498470206 * value)
	{
		___tasks_1 = value;
		Il2CppCodeGenWriteBarrier(&___tasks_1, value);
	}

	inline static int32_t get_offset_of_scheduler_2() { return static_cast<int32_t>(offsetof(Scheduler_t2347715885, ___scheduler_2)); }
	inline Thread_t241561612 * get_scheduler_2() const { return ___scheduler_2; }
	inline Thread_t241561612 ** get_address_of_scheduler_2() { return &___scheduler_2; }
	inline void set_scheduler_2(Thread_t241561612 * value)
	{
		___scheduler_2 = value;
		Il2CppCodeGenWriteBarrier(&___scheduler_2, value);
	}

	inline static int32_t get_offset_of_newTask_3() { return static_cast<int32_t>(offsetof(Scheduler_t2347715885, ___newTask_3)); }
	inline AutoResetEvent_t15112628 * get_newTask_3() const { return ___newTask_3; }
	inline AutoResetEvent_t15112628 ** get_address_of_newTask_3() { return &___newTask_3; }
	inline void set_newTask_3(AutoResetEvent_t15112628 * value)
	{
		___newTask_3 = value;
		Il2CppCodeGenWriteBarrier(&___newTask_3, value);
	}
};

struct Scheduler_t2347715885_StaticFields
{
public:
	// Google.Sharpen.Scheduler Google.Sharpen.Scheduler::Instance
	Scheduler_t2347715885 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t2347715885_StaticFields, ___Instance_0)); }
	inline Scheduler_t2347715885 * get_Instance_0() const { return ___Instance_0; }
	inline Scheduler_t2347715885 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Scheduler_t2347715885 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
