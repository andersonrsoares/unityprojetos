#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// Firebase.Database.Internal.Core.View.View
struct View_t798282663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.View.QueryParams,Firebase.Database.Internal.Core.View.View>
struct  KeyValuePair_2_t2059584600 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	QueryParams_t526937568 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	View_t798282663 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2059584600, ___key_0)); }
	inline QueryParams_t526937568 * get_key_0() const { return ___key_0; }
	inline QueryParams_t526937568 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(QueryParams_t526937568 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2059584600, ___value_1)); }
	inline View_t798282663 * get_value_1() const { return ___value_1; }
	inline View_t798282663 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(View_t798282663 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
