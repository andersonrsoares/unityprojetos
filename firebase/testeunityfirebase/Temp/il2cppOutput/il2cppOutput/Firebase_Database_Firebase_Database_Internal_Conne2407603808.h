#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback629
struct  ConnectionRequestCallback629_t2407603808  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.IRequestResultCallback Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback629::_onComplete
	Il2CppObject * ____onComplete_0;

public:
	inline static int32_t get_offset_of__onComplete_0() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback629_t2407603808, ____onComplete_0)); }
	inline Il2CppObject * get__onComplete_0() const { return ____onComplete_0; }
	inline Il2CppObject ** get_address_of__onComplete_0() { return &____onComplete_0; }
	inline void set__onComplete_0(Il2CppObject * value)
	{
		____onComplete_0 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
