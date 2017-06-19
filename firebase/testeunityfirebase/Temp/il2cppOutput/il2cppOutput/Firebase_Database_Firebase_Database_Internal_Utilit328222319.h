#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1571883375;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.Utilities/<WrapOnComplete>c__AnonStorey0
struct  U3CWrapOnCompleteU3Ec__AnonStorey0_t328222319  : public Il2CppObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Firebase.Database.Internal.Utilities.Utilities/<WrapOnComplete>c__AnonStorey0::source
	TaskCompletionSource_1_t1571883375 * ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(U3CWrapOnCompleteU3Ec__AnonStorey0_t328222319, ___source_0)); }
	inline TaskCompletionSource_1_t1571883375 * get_source_0() const { return ___source_0; }
	inline TaskCompletionSource_1_t1571883375 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(TaskCompletionSource_1_t1571883375 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
