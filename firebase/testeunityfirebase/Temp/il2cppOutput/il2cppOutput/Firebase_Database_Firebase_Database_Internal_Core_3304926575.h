#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.EventGenerator
struct  EventGenerator_t3304926575  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.EventGenerator::_index
	Index_t2425062456 * ____index_0;
	// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.View.EventGenerator::_query
	QuerySpec_t377558711 * ____query_1;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(EventGenerator_t3304926575, ____index_0)); }
	inline Index_t2425062456 * get__index_0() const { return ____index_0; }
	inline Index_t2425062456 ** get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(Index_t2425062456 * value)
	{
		____index_0 = value;
		Il2CppCodeGenWriteBarrier(&____index_0, value);
	}

	inline static int32_t get_offset_of__query_1() { return static_cast<int32_t>(offsetof(EventGenerator_t3304926575, ____query_1)); }
	inline QuerySpec_t377558711 * get__query_1() const { return ____query_1; }
	inline QuerySpec_t377558711 ** get_address_of__query_1() { return &____query_1; }
	inline void set__query_1(QuerySpec_t377558711 * value)
	{
		____query_1 = value;
		Il2CppCodeGenWriteBarrier(&____query_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
