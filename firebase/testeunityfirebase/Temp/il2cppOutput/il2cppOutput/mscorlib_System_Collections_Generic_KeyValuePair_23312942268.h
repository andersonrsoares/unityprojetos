#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.CompoundWrite>
struct  KeyValuePair_2_t3312942268 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ChildKey_t1197802383 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CompoundWrite_t496419158 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3312942268, ___key_0)); }
	inline ChildKey_t1197802383 * get_key_0() const { return ___key_0; }
	inline ChildKey_t1197802383 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ChildKey_t1197802383 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3312942268, ___value_1)); }
	inline CompoundWrite_t496419158 * get_value_1() const { return ___value_1; }
	inline CompoundWrite_t496419158 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(CompoundWrite_t496419158 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
