#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1195404398.h"

// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.Change
struct  Change_t639587248  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.Change::_childKey
	ChildKey_t1197802383 * ____childKey_0;
	// Firebase.Database.Internal.Core.View.Event/EventType Firebase.Database.Internal.Core.View.Change::_eventType
	int32_t ____eventType_1;
	// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Change::_indexedNode
	IndexedNode_t376444473 * ____indexedNode_2;
	// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Change::_oldIndexedNode
	IndexedNode_t376444473 * ____oldIndexedNode_3;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.Change::_prevName
	ChildKey_t1197802383 * ____prevName_4;

public:
	inline static int32_t get_offset_of__childKey_0() { return static_cast<int32_t>(offsetof(Change_t639587248, ____childKey_0)); }
	inline ChildKey_t1197802383 * get__childKey_0() const { return ____childKey_0; }
	inline ChildKey_t1197802383 ** get_address_of__childKey_0() { return &____childKey_0; }
	inline void set__childKey_0(ChildKey_t1197802383 * value)
	{
		____childKey_0 = value;
		Il2CppCodeGenWriteBarrier(&____childKey_0, value);
	}

	inline static int32_t get_offset_of__eventType_1() { return static_cast<int32_t>(offsetof(Change_t639587248, ____eventType_1)); }
	inline int32_t get__eventType_1() const { return ____eventType_1; }
	inline int32_t* get_address_of__eventType_1() { return &____eventType_1; }
	inline void set__eventType_1(int32_t value)
	{
		____eventType_1 = value;
	}

	inline static int32_t get_offset_of__indexedNode_2() { return static_cast<int32_t>(offsetof(Change_t639587248, ____indexedNode_2)); }
	inline IndexedNode_t376444473 * get__indexedNode_2() const { return ____indexedNode_2; }
	inline IndexedNode_t376444473 ** get_address_of__indexedNode_2() { return &____indexedNode_2; }
	inline void set__indexedNode_2(IndexedNode_t376444473 * value)
	{
		____indexedNode_2 = value;
		Il2CppCodeGenWriteBarrier(&____indexedNode_2, value);
	}

	inline static int32_t get_offset_of__oldIndexedNode_3() { return static_cast<int32_t>(offsetof(Change_t639587248, ____oldIndexedNode_3)); }
	inline IndexedNode_t376444473 * get__oldIndexedNode_3() const { return ____oldIndexedNode_3; }
	inline IndexedNode_t376444473 ** get_address_of__oldIndexedNode_3() { return &____oldIndexedNode_3; }
	inline void set__oldIndexedNode_3(IndexedNode_t376444473 * value)
	{
		____oldIndexedNode_3 = value;
		Il2CppCodeGenWriteBarrier(&____oldIndexedNode_3, value);
	}

	inline static int32_t get_offset_of__prevName_4() { return static_cast<int32_t>(offsetof(Change_t639587248, ____prevName_4)); }
	inline ChildKey_t1197802383 * get__prevName_4() const { return ____prevName_4; }
	inline ChildKey_t1197802383 ** get_address_of__prevName_4() { return &____prevName_4; }
	inline void set__prevName_4(ChildKey_t1197802383 * value)
	{
		____prevName_4 = value;
		Il2CppCodeGenWriteBarrier(&____prevName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
