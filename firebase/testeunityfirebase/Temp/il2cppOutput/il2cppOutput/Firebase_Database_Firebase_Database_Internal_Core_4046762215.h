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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.Filter.IndexedFilter
struct  IndexedFilter_t4046762215  : public NodeFilter_t1410970950
{
public:
	// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.Filter.IndexedFilter::_index
	Index_t2425062456 * ____index_0;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(IndexedFilter_t4046762215, ____index_0)); }
	inline Index_t2425062456 * get__index_0() const { return ____index_0; }
	inline Index_t2425062456 ** get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(Index_t2425062456 * value)
	{
		____index_0 = value;
		Il2CppCodeGenWriteBarrier(&____index_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
