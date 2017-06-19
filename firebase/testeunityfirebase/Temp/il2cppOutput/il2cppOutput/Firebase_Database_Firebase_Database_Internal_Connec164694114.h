#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557
struct Runnable557_t3816656261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557/GetTokenCallback567
struct  GetTokenCallback567_t164694114  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557 Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557/GetTokenCallback567::_enclosing
	Runnable557_t3816656261 * ____enclosing_0;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557/GetTokenCallback567::_thisGetTokenAttempt
	int64_t ____thisGetTokenAttempt_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(GetTokenCallback567_t164694114, ____enclosing_0)); }
	inline Runnable557_t3816656261 * get__enclosing_0() const { return ____enclosing_0; }
	inline Runnable557_t3816656261 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Runnable557_t3816656261 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__thisGetTokenAttempt_1() { return static_cast<int32_t>(offsetof(GetTokenCallback567_t164694114, ____thisGetTokenAttempt_1)); }
	inline int64_t get__thisGetTokenAttempt_1() const { return ____thisGetTokenAttempt_1; }
	inline int64_t* get_address_of__thisGetTokenAttempt_1() { return &____thisGetTokenAttempt_1; }
	inline void set__thisGetTokenAttempt_1(int64_t value)
	{
		____thisGetTokenAttempt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
