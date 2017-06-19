#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.Util.RetryHelper
struct RetryHelper_t2341283196;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.Util.RetryHelper/Runnable53
struct  Runnable53_t2038207663  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.Util.RetryHelper Firebase.Database.Internal.Connection.Util.RetryHelper/Runnable53::_enclosing
	RetryHelper_t2341283196 * ____enclosing_0;
	// Google.Sharpen.Runnable Firebase.Database.Internal.Connection.Util.RetryHelper/Runnable53::_runnable
	Il2CppObject * ____runnable_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable53_t2038207663, ____enclosing_0)); }
	inline RetryHelper_t2341283196 * get__enclosing_0() const { return ____enclosing_0; }
	inline RetryHelper_t2341283196 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(RetryHelper_t2341283196 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__runnable_1() { return static_cast<int32_t>(offsetof(Runnable53_t2038207663, ____runnable_1)); }
	inline Il2CppObject * get__runnable_1() const { return ____runnable_1; }
	inline Il2CppObject ** get_address_of__runnable_1() { return &____runnable_1; }
	inline void set__runnable_1(Il2CppObject * value)
	{
		____runnable_1 = value;
		Il2CppCodeGenWriteBarrier(&____runnable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
