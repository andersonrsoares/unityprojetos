#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Auth.Future_FetchProvidersResult
struct Future_FetchProvidersResult_t3031588357;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FetchProvidersResult>
struct TaskCompletionSource_1_t3332745635;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.Future_FetchProvidersResult/<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t2221953039  : public Il2CppObject
{
public:
	// Firebase.Auth.Future_FetchProvidersResult Firebase.Auth.Future_FetchProvidersResult/<GetTask>c__AnonStorey0::fu
	Future_FetchProvidersResult_t3031588357 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FetchProvidersResult> Firebase.Auth.Future_FetchProvidersResult/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t3332745635 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t2221953039, ___fu_0)); }
	inline Future_FetchProvidersResult_t3031588357 * get_fu_0() const { return ___fu_0; }
	inline Future_FetchProvidersResult_t3031588357 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_FetchProvidersResult_t3031588357 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier(&___fu_0, value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t2221953039, ___tcs_1)); }
	inline TaskCompletionSource_1_t3332745635 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t3332745635 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t3332745635 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier(&___tcs_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
