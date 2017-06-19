#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_1410970950.h"

// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Core.View.Filter.RangedFilter
struct RangedFilter_t4273066827;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.Filter.LimitedFilter
struct  LimitedFilter_t4117501338  : public NodeFilter_t1410970950
{
public:
	// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.Filter.LimitedFilter::_index
	Index_t2425062456 * ____index_0;
	// System.Int32 Firebase.Database.Internal.Core.View.Filter.LimitedFilter::_limit
	int32_t ____limit_1;
	// Firebase.Database.Internal.Core.View.Filter.RangedFilter Firebase.Database.Internal.Core.View.Filter.LimitedFilter::_rangedFilter
	RangedFilter_t4273066827 * ____rangedFilter_2;
	// System.Boolean Firebase.Database.Internal.Core.View.Filter.LimitedFilter::_reverse
	bool ____reverse_3;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(LimitedFilter_t4117501338, ____index_0)); }
	inline Index_t2425062456 * get__index_0() const { return ____index_0; }
	inline Index_t2425062456 ** get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(Index_t2425062456 * value)
	{
		____index_0 = value;
		Il2CppCodeGenWriteBarrier(&____index_0, value);
	}

	inline static int32_t get_offset_of__limit_1() { return static_cast<int32_t>(offsetof(LimitedFilter_t4117501338, ____limit_1)); }
	inline int32_t get__limit_1() const { return ____limit_1; }
	inline int32_t* get_address_of__limit_1() { return &____limit_1; }
	inline void set__limit_1(int32_t value)
	{
		____limit_1 = value;
	}

	inline static int32_t get_offset_of__rangedFilter_2() { return static_cast<int32_t>(offsetof(LimitedFilter_t4117501338, ____rangedFilter_2)); }
	inline RangedFilter_t4273066827 * get__rangedFilter_2() const { return ____rangedFilter_2; }
	inline RangedFilter_t4273066827 ** get_address_of__rangedFilter_2() { return &____rangedFilter_2; }
	inline void set__rangedFilter_2(RangedFilter_t4273066827 * value)
	{
		____rangedFilter_2 = value;
		Il2CppCodeGenWriteBarrier(&____rangedFilter_2, value);
	}

	inline static int32_t get_offset_of__reverse_3() { return static_cast<int32_t>(offsetof(LimitedFilter_t4117501338, ____reverse_3)); }
	inline bool get__reverse_3() const { return ____reverse_3; }
	inline bool* get_address_of__reverse_3() { return &____reverse_3; }
	inline void set__reverse_3(bool value)
	{
		____reverse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
