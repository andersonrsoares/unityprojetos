#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Unity_Tasks_System_Threading_CancellationTokenRegi1708859357.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t954311528;
// System.Func`2<System.Threading.Tasks.Task,System.Int32>
struct Func_2_t3433958786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey0`1<System.Int32>
struct  U3CContinueWithU3Ec__AnonStorey0_1_t3942954583  : public Il2CppObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey0`1::tcs
	TaskCompletionSource_1_t954311528 * ___tcs_0;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey0`1::continuation
	Func_2_t3433958786 * ___continuation_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey0`1::cancellation
	CancellationTokenRegistration_t1708859357  ___cancellation_2;

public:
	inline static int32_t get_offset_of_tcs_0() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey0_1_t3942954583, ___tcs_0)); }
	inline TaskCompletionSource_1_t954311528 * get_tcs_0() const { return ___tcs_0; }
	inline TaskCompletionSource_1_t954311528 ** get_address_of_tcs_0() { return &___tcs_0; }
	inline void set_tcs_0(TaskCompletionSource_1_t954311528 * value)
	{
		___tcs_0 = value;
		Il2CppCodeGenWriteBarrier(&___tcs_0, value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey0_1_t3942954583, ___continuation_1)); }
	inline Func_2_t3433958786 * get_continuation_1() const { return ___continuation_1; }
	inline Func_2_t3433958786 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Func_2_t3433958786 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier(&___continuation_1, value);
	}

	inline static int32_t get_offset_of_cancellation_2() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey0_1_t3942954583, ___cancellation_2)); }
	inline CancellationTokenRegistration_t1708859357  get_cancellation_2() const { return ___cancellation_2; }
	inline CancellationTokenRegistration_t1708859357 * get_address_of_cancellation_2() { return &___cancellation_2; }
	inline void set_cancellation_2(CancellationTokenRegistration_t1708859357  value)
	{
		___cancellation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
