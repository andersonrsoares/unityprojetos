#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.ThreadGroup
struct ThreadGroup_t2181833315;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;
// System.Threading.Thread
struct Thread_t241561612;
// Google.Sharpen.Thread
struct Thread_t1322377586;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.Thread
struct  Thread_t1322377586  : public Il2CppObject
{
public:
	// System.Boolean Google.Sharpen.Thread::interrupted
	bool ___interrupted_1;
	// Google.Sharpen.Runnable Google.Sharpen.Thread::runnable
	Il2CppObject * ___runnable_2;
	// Google.Sharpen.ThreadGroup Google.Sharpen.Thread::tgroup
	ThreadGroup_t2181833315 * ___tgroup_3;
	// System.Threading.Thread Google.Sharpen.Thread::thread
	Thread_t241561612 * ___thread_4;

public:
	inline static int32_t get_offset_of_interrupted_1() { return static_cast<int32_t>(offsetof(Thread_t1322377586, ___interrupted_1)); }
	inline bool get_interrupted_1() const { return ___interrupted_1; }
	inline bool* get_address_of_interrupted_1() { return &___interrupted_1; }
	inline void set_interrupted_1(bool value)
	{
		___interrupted_1 = value;
	}

	inline static int32_t get_offset_of_runnable_2() { return static_cast<int32_t>(offsetof(Thread_t1322377586, ___runnable_2)); }
	inline Il2CppObject * get_runnable_2() const { return ___runnable_2; }
	inline Il2CppObject ** get_address_of_runnable_2() { return &___runnable_2; }
	inline void set_runnable_2(Il2CppObject * value)
	{
		___runnable_2 = value;
		Il2CppCodeGenWriteBarrier(&___runnable_2, value);
	}

	inline static int32_t get_offset_of_tgroup_3() { return static_cast<int32_t>(offsetof(Thread_t1322377586, ___tgroup_3)); }
	inline ThreadGroup_t2181833315 * get_tgroup_3() const { return ___tgroup_3; }
	inline ThreadGroup_t2181833315 ** get_address_of_tgroup_3() { return &___tgroup_3; }
	inline void set_tgroup_3(ThreadGroup_t2181833315 * value)
	{
		___tgroup_3 = value;
		Il2CppCodeGenWriteBarrier(&___tgroup_3, value);
	}

	inline static int32_t get_offset_of_thread_4() { return static_cast<int32_t>(offsetof(Thread_t1322377586, ___thread_4)); }
	inline Thread_t241561612 * get_thread_4() const { return ___thread_4; }
	inline Thread_t241561612 ** get_address_of_thread_4() { return &___thread_4; }
	inline void set_thread_4(Thread_t241561612 * value)
	{
		___thread_4 = value;
		Il2CppCodeGenWriteBarrier(&___thread_4, value);
	}
};

struct Thread_t1322377586_StaticFields
{
public:
	// Google.Sharpen.ThreadGroup Google.Sharpen.Thread::defaultGroup
	ThreadGroup_t2181833315 * ___defaultGroup_0;

public:
	inline static int32_t get_offset_of_defaultGroup_0() { return static_cast<int32_t>(offsetof(Thread_t1322377586_StaticFields, ___defaultGroup_0)); }
	inline ThreadGroup_t2181833315 * get_defaultGroup_0() const { return ___defaultGroup_0; }
	inline ThreadGroup_t2181833315 ** get_address_of_defaultGroup_0() { return &___defaultGroup_0; }
	inline void set_defaultGroup_0(ThreadGroup_t2181833315 * value)
	{
		___defaultGroup_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultGroup_0, value);
	}
};

struct Thread_t1322377586_ThreadStaticFields
{
public:
	// Google.Sharpen.Thread Google.Sharpen.Thread::wrapperThread
	Thread_t1322377586 * ___wrapperThread_5;

public:
	inline static int32_t get_offset_of_wrapperThread_5() { return static_cast<int32_t>(offsetof(Thread_t1322377586_ThreadStaticFields, ___wrapperThread_5)); }
	inline Thread_t1322377586 * get_wrapperThread_5() const { return ___wrapperThread_5; }
	inline Thread_t1322377586 ** get_address_of_wrapperThread_5() { return &___wrapperThread_5; }
	inline void set_wrapperThread_5(Thread_t1322377586 * value)
	{
		___wrapperThread_5 = value;
		Il2CppCodeGenWriteBarrier(&___wrapperThread_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
