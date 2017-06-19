#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_t1795361321  : public Il2CppObject
{
public:
	// System.Object System.Threading.CancellationTokenSource::mutex
	Il2CppObject * ___mutex_0;
	// System.Action System.Threading.CancellationTokenSource::actions
	Action_t3226471752 * ___actions_1;

public:
	inline static int32_t get_offset_of_mutex_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t1795361321, ___mutex_0)); }
	inline Il2CppObject * get_mutex_0() const { return ___mutex_0; }
	inline Il2CppObject ** get_address_of_mutex_0() { return &___mutex_0; }
	inline void set_mutex_0(Il2CppObject * value)
	{
		___mutex_0 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_0, value);
	}

	inline static int32_t get_offset_of_actions_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t1795361321, ___actions_1)); }
	inline Action_t3226471752 * get_actions_1() const { return ___actions_1; }
	inline Action_t3226471752 ** get_address_of_actions_1() { return &___actions_1; }
	inline void set_actions_1(Action_t3226471752 * value)
	{
		___actions_1 = value;
		Il2CppCodeGenWriteBarrier(&___actions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
