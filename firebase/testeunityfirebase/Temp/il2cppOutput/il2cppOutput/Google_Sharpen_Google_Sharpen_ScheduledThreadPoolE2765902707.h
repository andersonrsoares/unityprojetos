#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// Google.Sharpen.Thread
struct Thread_t1322377586;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.ScheduledThreadPoolExecutor/Task`1<System.Object>
struct  Task_1_t2765902707  : public Il2CppObject
{
public:
	// Google.Sharpen.Thread Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::thread
	Thread_t1322377586 * ___thread_0;
	// System.Boolean Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::canceled
	bool ___canceled_1;
	// System.Boolean Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::completed
	bool ___completed_2;
	// System.Threading.ManualResetEvent Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::doneEvent
	ManualResetEvent_t926074657 * ___doneEvent_3;
	// Google.Sharpen.Runnable Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::Action
	Il2CppObject * ___Action_4;
	// System.DateTime Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::<DueTime>k__BackingField
	DateTime_t693205669  ___U3CDueTimeU3Ek__BackingField_5;
	// Google.Sharpen.ScheduledThreadPoolExecutor Google.Sharpen.ScheduledThreadPoolExecutor/Task`1::<Executor>k__BackingField
	ScheduledThreadPoolExecutor_t2537379786 * ___U3CExecutorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_thread_0() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___thread_0)); }
	inline Thread_t1322377586 * get_thread_0() const { return ___thread_0; }
	inline Thread_t1322377586 ** get_address_of_thread_0() { return &___thread_0; }
	inline void set_thread_0(Thread_t1322377586 * value)
	{
		___thread_0 = value;
		Il2CppCodeGenWriteBarrier(&___thread_0, value);
	}

	inline static int32_t get_offset_of_canceled_1() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___canceled_1)); }
	inline bool get_canceled_1() const { return ___canceled_1; }
	inline bool* get_address_of_canceled_1() { return &___canceled_1; }
	inline void set_canceled_1(bool value)
	{
		___canceled_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___completed_2)); }
	inline bool get_completed_2() const { return ___completed_2; }
	inline bool* get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(bool value)
	{
		___completed_2 = value;
	}

	inline static int32_t get_offset_of_doneEvent_3() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___doneEvent_3)); }
	inline ManualResetEvent_t926074657 * get_doneEvent_3() const { return ___doneEvent_3; }
	inline ManualResetEvent_t926074657 ** get_address_of_doneEvent_3() { return &___doneEvent_3; }
	inline void set_doneEvent_3(ManualResetEvent_t926074657 * value)
	{
		___doneEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___doneEvent_3, value);
	}

	inline static int32_t get_offset_of_Action_4() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___Action_4)); }
	inline Il2CppObject * get_Action_4() const { return ___Action_4; }
	inline Il2CppObject ** get_address_of_Action_4() { return &___Action_4; }
	inline void set_Action_4(Il2CppObject * value)
	{
		___Action_4 = value;
		Il2CppCodeGenWriteBarrier(&___Action_4, value);
	}

	inline static int32_t get_offset_of_U3CDueTimeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___U3CDueTimeU3Ek__BackingField_5)); }
	inline DateTime_t693205669  get_U3CDueTimeU3Ek__BackingField_5() const { return ___U3CDueTimeU3Ek__BackingField_5; }
	inline DateTime_t693205669 * get_address_of_U3CDueTimeU3Ek__BackingField_5() { return &___U3CDueTimeU3Ek__BackingField_5; }
	inline void set_U3CDueTimeU3Ek__BackingField_5(DateTime_t693205669  value)
	{
		___U3CDueTimeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CExecutorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Task_1_t2765902707, ___U3CExecutorU3Ek__BackingField_6)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get_U3CExecutorU3Ek__BackingField_6() const { return ___U3CExecutorU3Ek__BackingField_6; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of_U3CExecutorU3Ek__BackingField_6() { return &___U3CExecutorU3Ek__BackingField_6; }
	inline void set_U3CExecutorU3Ek__BackingField_6(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		___U3CExecutorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExecutorU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
