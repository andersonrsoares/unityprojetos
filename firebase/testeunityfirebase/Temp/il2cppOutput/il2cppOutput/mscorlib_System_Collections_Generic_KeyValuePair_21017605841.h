#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1318758358;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.FirebaseDatabase>
struct  KeyValuePair_2_t1017605841 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RepoInfo_t4079583710 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	FirebaseDatabase_t1318758358 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1017605841, ___key_0)); }
	inline RepoInfo_t4079583710 * get_key_0() const { return ___key_0; }
	inline RepoInfo_t4079583710 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RepoInfo_t4079583710 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1017605841, ___value_1)); }
	inline FirebaseDatabase_t1318758358 * get_value_1() const { return ___value_1; }
	inline FirebaseDatabase_t1318758358 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(FirebaseDatabase_t1318758358 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
