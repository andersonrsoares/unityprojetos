#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Action
struct Action_t3226471752;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1795361321;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_t1708859357 
{
public:
	// System.Action System.Threading.CancellationTokenRegistration::action
	Action_t3226471752 * ___action_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenRegistration::source
	CancellationTokenSource_t1795361321 * ___source_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t1708859357, ___action_0)); }
	inline Action_t3226471752 * get_action_0() const { return ___action_0; }
	inline Action_t3226471752 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t3226471752 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t1708859357, ___source_1)); }
	inline CancellationTokenSource_t1795361321 * get_source_1() const { return ___source_1; }
	inline CancellationTokenSource_t1795361321 ** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(CancellationTokenSource_t1795361321 * value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier(&___source_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t1708859357_marshaled_pinvoke
{
	Il2CppMethodPointer ___action_0;
	CancellationTokenSource_t1795361321 * ___source_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t1708859357_marshaled_com
{
	Il2CppMethodPointer ___action_0;
	CancellationTokenSource_t1795361321 * ___source_1;
};
