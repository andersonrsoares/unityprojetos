#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.FutureVoid
struct FutureVoid_t3180437;
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t954311528;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureVoid/<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t1008459717  : public Il2CppObject
{
public:
	// Firebase.FutureVoid Firebase.FutureVoid/<GetTask>c__AnonStorey0::fu
	FutureVoid_t3180437 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Int32> Firebase.FutureVoid/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t954311528 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t1008459717, ___fu_0)); }
	inline FutureVoid_t3180437 * get_fu_0() const { return ___fu_0; }
	inline FutureVoid_t3180437 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(FutureVoid_t3180437 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier(&___fu_0, value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t1008459717, ___tcs_1)); }
	inline TaskCompletionSource_1_t954311528 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t954311528 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t954311528 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier(&___tcs_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
