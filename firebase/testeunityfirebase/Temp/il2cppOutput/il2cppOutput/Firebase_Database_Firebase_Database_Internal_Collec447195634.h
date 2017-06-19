#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.NamedNode,System.Object>
struct ImmutableSortedMap_2_t1517776026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Collection.ImmutableSortedSet`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct  ImmutableSortedSet_1_t447195634  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<T,System.Object> Firebase.Database.Internal.Collection.ImmutableSortedSet`1::_map
	ImmutableSortedMap_2_t1517776026 * ____map_0;

public:
	inline static int32_t get_offset_of__map_0() { return static_cast<int32_t>(offsetof(ImmutableSortedSet_1_t447195634, ____map_0)); }
	inline ImmutableSortedMap_2_t1517776026 * get__map_0() const { return ____map_0; }
	inline ImmutableSortedMap_2_t1517776026 ** get_address_of__map_0() { return &____map_0; }
	inline void set__map_0(ImmutableSortedMap_2_t1517776026 * value)
	{
		____map_0 = value;
		Il2CppCodeGenWriteBarrier(&____map_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
