#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory
struct FirebaseThreadFactory_t699088793;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory/ExceptionCatcher
struct  ExceptionCatcher_t4243835735  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory/ExceptionCatcher::_enclosing
	FirebaseThreadFactory_t699088793 * ____enclosing_0;
	// Google.Sharpen.Runnable Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory/ExceptionCatcher::_inner
	Il2CppObject * ____inner_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(ExceptionCatcher_t4243835735, ____enclosing_0)); }
	inline FirebaseThreadFactory_t699088793 * get__enclosing_0() const { return ____enclosing_0; }
	inline FirebaseThreadFactory_t699088793 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(FirebaseThreadFactory_t699088793 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__inner_1() { return static_cast<int32_t>(offsetof(ExceptionCatcher_t4243835735, ____inner_1)); }
	inline Il2CppObject * get__inner_1() const { return ____inner_1; }
	inline Il2CppObject ** get_address_of__inner_1() { return &____inner_1; }
	inline void set__inner_1(Il2CppObject * value)
	{
		____inner_1 = value;
		Il2CppCodeGenWriteBarrier(&____inner_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
