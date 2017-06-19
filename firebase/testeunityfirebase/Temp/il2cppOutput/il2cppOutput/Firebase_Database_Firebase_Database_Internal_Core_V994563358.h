#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.CacheNode
struct  CacheNode_t994563358  : public Il2CppObject
{
public:
	// System.Boolean Firebase.Database.Internal.Core.View.CacheNode::_filtered
	bool ____filtered_0;
	// System.Boolean Firebase.Database.Internal.Core.View.CacheNode::_fullyInitialized
	bool ____fullyInitialized_1;
	// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.CacheNode::_indexedNode
	IndexedNode_t376444473 * ____indexedNode_2;

public:
	inline static int32_t get_offset_of__filtered_0() { return static_cast<int32_t>(offsetof(CacheNode_t994563358, ____filtered_0)); }
	inline bool get__filtered_0() const { return ____filtered_0; }
	inline bool* get_address_of__filtered_0() { return &____filtered_0; }
	inline void set__filtered_0(bool value)
	{
		____filtered_0 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_1() { return static_cast<int32_t>(offsetof(CacheNode_t994563358, ____fullyInitialized_1)); }
	inline bool get__fullyInitialized_1() const { return ____fullyInitialized_1; }
	inline bool* get_address_of__fullyInitialized_1() { return &____fullyInitialized_1; }
	inline void set__fullyInitialized_1(bool value)
	{
		____fullyInitialized_1 = value;
	}

	inline static int32_t get_offset_of__indexedNode_2() { return static_cast<int32_t>(offsetof(CacheNode_t994563358, ____indexedNode_2)); }
	inline IndexedNode_t376444473 * get__indexedNode_2() const { return ____indexedNode_2; }
	inline IndexedNode_t376444473 ** get_address_of__indexedNode_2() { return &____indexedNode_2; }
	inline void set__indexedNode_2(IndexedNode_t376444473 * value)
	{
		____indexedNode_2 = value;
		Il2CppCodeGenWriteBarrier(&____indexedNode_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
