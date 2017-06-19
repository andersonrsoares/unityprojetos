#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t3918504081;
// System.Action`1<System.Action>
struct Action_1_t3028271134;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t2185976090;
// System.AggregateException
struct AggregateException_t420812976;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1843236107  : public Il2CppObject
{
public:
	// System.Object System.Threading.Tasks.Task::mutex
	Il2CppObject * ___mutex_2;
	// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>> System.Threading.Tasks.Task::continuations
	Il2CppObject* ___continuations_3;
	// System.AggregateException System.Threading.Tasks.Task::exception
	AggregateException_t420812976 * ___exception_4;
	// System.Boolean System.Threading.Tasks.Task::isCanceled
	bool ___isCanceled_5;
	// System.Boolean System.Threading.Tasks.Task::isCompleted
	bool ___isCompleted_6;

public:
	inline static int32_t get_offset_of_mutex_2() { return static_cast<int32_t>(offsetof(Task_t1843236107, ___mutex_2)); }
	inline Il2CppObject * get_mutex_2() const { return ___mutex_2; }
	inline Il2CppObject ** get_address_of_mutex_2() { return &___mutex_2; }
	inline void set_mutex_2(Il2CppObject * value)
	{
		___mutex_2 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_2, value);
	}

	inline static int32_t get_offset_of_continuations_3() { return static_cast<int32_t>(offsetof(Task_t1843236107, ___continuations_3)); }
	inline Il2CppObject* get_continuations_3() const { return ___continuations_3; }
	inline Il2CppObject** get_address_of_continuations_3() { return &___continuations_3; }
	inline void set_continuations_3(Il2CppObject* value)
	{
		___continuations_3 = value;
		Il2CppCodeGenWriteBarrier(&___continuations_3, value);
	}

	inline static int32_t get_offset_of_exception_4() { return static_cast<int32_t>(offsetof(Task_t1843236107, ___exception_4)); }
	inline AggregateException_t420812976 * get_exception_4() const { return ___exception_4; }
	inline AggregateException_t420812976 ** get_address_of_exception_4() { return &___exception_4; }
	inline void set_exception_4(AggregateException_t420812976 * value)
	{
		___exception_4 = value;
		Il2CppCodeGenWriteBarrier(&___exception_4, value);
	}

	inline static int32_t get_offset_of_isCanceled_5() { return static_cast<int32_t>(offsetof(Task_t1843236107, ___isCanceled_5)); }
	inline bool get_isCanceled_5() const { return ___isCanceled_5; }
	inline bool* get_address_of_isCanceled_5() { return &___isCanceled_5; }
	inline void set_isCanceled_5(bool value)
	{
		___isCanceled_5 = value;
	}

	inline static int32_t get_offset_of_isCompleted_6() { return static_cast<int32_t>(offsetof(Task_t1843236107, ___isCompleted_6)); }
	inline bool get_isCompleted_6() const { return ___isCompleted_6; }
	inline bool* get_address_of_isCompleted_6() { return &___isCompleted_6; }
	inline void set_isCompleted_6(bool value)
	{
		___isCompleted_6 = value;
	}
};

struct Task_t1843236107_StaticFields
{
public:
	// System.Threading.ThreadLocal`1<System.Int32> System.Threading.Tasks.Task::executionDepth
	ThreadLocal_1_t3918504081 * ___executionDepth_0;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::immediateExecutor
	Action_1_t3028271134 * ___immediateExecutor_1;

public:
	inline static int32_t get_offset_of_executionDepth_0() { return static_cast<int32_t>(offsetof(Task_t1843236107_StaticFields, ___executionDepth_0)); }
	inline ThreadLocal_1_t3918504081 * get_executionDepth_0() const { return ___executionDepth_0; }
	inline ThreadLocal_1_t3918504081 ** get_address_of_executionDepth_0() { return &___executionDepth_0; }
	inline void set_executionDepth_0(ThreadLocal_1_t3918504081 * value)
	{
		___executionDepth_0 = value;
		Il2CppCodeGenWriteBarrier(&___executionDepth_0, value);
	}

	inline static int32_t get_offset_of_immediateExecutor_1() { return static_cast<int32_t>(offsetof(Task_t1843236107_StaticFields, ___immediateExecutor_1)); }
	inline Action_1_t3028271134 * get_immediateExecutor_1() const { return ___immediateExecutor_1; }
	inline Action_1_t3028271134 ** get_address_of_immediateExecutor_1() { return &___immediateExecutor_1; }
	inline void set_immediateExecutor_1(Action_1_t3028271134 * value)
	{
		___immediateExecutor_1 = value;
		Il2CppCodeGenWriteBarrier(&___immediateExecutor_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
