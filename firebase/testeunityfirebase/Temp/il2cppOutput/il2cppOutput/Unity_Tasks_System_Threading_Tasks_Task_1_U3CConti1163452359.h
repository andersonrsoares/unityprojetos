﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.String>>>
struct Action_1_t1243175667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1/<ContinueWith>c__AnonStorey0<System.Collections.Generic.IEnumerable`1<System.String>>
struct  U3CContinueWithU3Ec__AnonStorey0_t1163452359  : public Il2CppObject
{
public:
	// System.Action`1<System.Threading.Tasks.Task`1<T>> System.Threading.Tasks.Task`1/<ContinueWith>c__AnonStorey0::continuation
	Action_1_t1243175667 * ___continuation_0;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey0_t1163452359, ___continuation_0)); }
	inline Action_1_t1243175667 * get_continuation_0() const { return ___continuation_0; }
	inline Action_1_t1243175667 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Action_1_t1243175667 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier(&___continuation_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
