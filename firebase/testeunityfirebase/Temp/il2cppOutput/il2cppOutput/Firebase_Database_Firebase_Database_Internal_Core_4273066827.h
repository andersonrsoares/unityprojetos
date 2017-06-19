#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_1410970950.h"

// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Core.View.Filter.IndexedFilter
struct IndexedFilter_t4046762215;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.Filter.RangedFilter
struct  RangedFilter_t4273066827  : public NodeFilter_t1410970950
{
public:
	// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::_endPost
	NamedNode_t787885785 * ____endPost_0;
	// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.Filter.RangedFilter::_index
	Index_t2425062456 * ____index_1;
	// Firebase.Database.Internal.Core.View.Filter.IndexedFilter Firebase.Database.Internal.Core.View.Filter.RangedFilter::_indexedFilter
	IndexedFilter_t4046762215 * ____indexedFilter_2;
	// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::_startPost
	NamedNode_t787885785 * ____startPost_3;

public:
	inline static int32_t get_offset_of__endPost_0() { return static_cast<int32_t>(offsetof(RangedFilter_t4273066827, ____endPost_0)); }
	inline NamedNode_t787885785 * get__endPost_0() const { return ____endPost_0; }
	inline NamedNode_t787885785 ** get_address_of__endPost_0() { return &____endPost_0; }
	inline void set__endPost_0(NamedNode_t787885785 * value)
	{
		____endPost_0 = value;
		Il2CppCodeGenWriteBarrier(&____endPost_0, value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(RangedFilter_t4273066827, ____index_1)); }
	inline Index_t2425062456 * get__index_1() const { return ____index_1; }
	inline Index_t2425062456 ** get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(Index_t2425062456 * value)
	{
		____index_1 = value;
		Il2CppCodeGenWriteBarrier(&____index_1, value);
	}

	inline static int32_t get_offset_of__indexedFilter_2() { return static_cast<int32_t>(offsetof(RangedFilter_t4273066827, ____indexedFilter_2)); }
	inline IndexedFilter_t4046762215 * get__indexedFilter_2() const { return ____indexedFilter_2; }
	inline IndexedFilter_t4046762215 ** get_address_of__indexedFilter_2() { return &____indexedFilter_2; }
	inline void set__indexedFilter_2(IndexedFilter_t4046762215 * value)
	{
		____indexedFilter_2 = value;
		Il2CppCodeGenWriteBarrier(&____indexedFilter_2, value);
	}

	inline static int32_t get_offset_of__startPost_3() { return static_cast<int32_t>(offsetof(RangedFilter_t4273066827, ____startPost_3)); }
	inline NamedNode_t787885785 * get__startPost_3() const { return ____startPost_3; }
	inline NamedNode_t787885785 ** get_address_of__startPost_3() { return &____startPost_3; }
	inline void set__startPost_3(NamedNode_t787885785 * value)
	{
		____startPost_3 = value;
		Il2CppCodeGenWriteBarrier(&____startPost_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
