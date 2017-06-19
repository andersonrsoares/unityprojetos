#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.Database.Internal.Core.Tag
struct Tag_t2439924210;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Tag,Firebase.Database.Internal.Core.View.QuerySpec>
struct  KeyValuePair_2_t2206838478 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Tag_t2439924210 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	QuerySpec_t377558711 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2206838478, ___key_0)); }
	inline Tag_t2439924210 * get_key_0() const { return ___key_0; }
	inline Tag_t2439924210 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Tag_t2439924210 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2206838478, ___value_1)); }
	inline QuerySpec_t377558711 * get_value_1() const { return ___value_1; }
	inline QuerySpec_t377558711 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(QuerySpec_t377558711 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
