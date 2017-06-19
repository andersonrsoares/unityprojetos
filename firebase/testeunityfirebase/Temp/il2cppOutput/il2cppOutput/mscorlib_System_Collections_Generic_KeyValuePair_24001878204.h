#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>
struct  KeyValuePair_2_t4001878204 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Path_t2568473163 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Node_t2640059010 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4001878204, ___key_0)); }
	inline Path_t2568473163 * get_key_0() const { return ___key_0; }
	inline Path_t2568473163 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Path_t2568473163 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4001878204, ___value_1)); }
	inline Node_t2640059010 * get_value_1() const { return ___value_1; }
	inline Node_t2640059010 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Node_t2640059010 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
