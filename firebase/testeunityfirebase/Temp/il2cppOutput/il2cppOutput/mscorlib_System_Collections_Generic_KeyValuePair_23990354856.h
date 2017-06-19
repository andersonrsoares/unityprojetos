#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec
struct ListenQuerySpec_t2050960365;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen
struct OutstandingListen_t67058648;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec,Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen>
struct  KeyValuePair_2_t3990354856 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ListenQuerySpec_t2050960365 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	OutstandingListen_t67058648 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3990354856, ___key_0)); }
	inline ListenQuerySpec_t2050960365 * get_key_0() const { return ___key_0; }
	inline ListenQuerySpec_t2050960365 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ListenQuerySpec_t2050960365 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3990354856, ___value_1)); }
	inline OutstandingListen_t67058648 * get_value_1() const { return ___value_1; }
	inline OutstandingListen_t67058648 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(OutstandingListen_t67058648 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
