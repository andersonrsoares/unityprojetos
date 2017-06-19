#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable506
struct  Callable506_t476518459  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.SyncTree/Callable506::_cancelError
	DatabaseError_t1067746743 * ____cancelError_0;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable506::_enclosing
	SyncTree_t528142079 * ____enclosing_1;
	// Firebase.Database.Internal.Core.EventRegistration Firebase.Database.Internal.Core.SyncTree/Callable506::_eventRegistration
	EventRegistration_t4222917807 * ____eventRegistration_2;
	// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.SyncTree/Callable506::_query
	QuerySpec_t377558711 * ____query_3;

public:
	inline static int32_t get_offset_of__cancelError_0() { return static_cast<int32_t>(offsetof(Callable506_t476518459, ____cancelError_0)); }
	inline DatabaseError_t1067746743 * get__cancelError_0() const { return ____cancelError_0; }
	inline DatabaseError_t1067746743 ** get_address_of__cancelError_0() { return &____cancelError_0; }
	inline void set__cancelError_0(DatabaseError_t1067746743 * value)
	{
		____cancelError_0 = value;
		Il2CppCodeGenWriteBarrier(&____cancelError_0, value);
	}

	inline static int32_t get_offset_of__enclosing_1() { return static_cast<int32_t>(offsetof(Callable506_t476518459, ____enclosing_1)); }
	inline SyncTree_t528142079 * get__enclosing_1() const { return ____enclosing_1; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_1() { return &____enclosing_1; }
	inline void set__enclosing_1(SyncTree_t528142079 * value)
	{
		____enclosing_1 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_1, value);
	}

	inline static int32_t get_offset_of__eventRegistration_2() { return static_cast<int32_t>(offsetof(Callable506_t476518459, ____eventRegistration_2)); }
	inline EventRegistration_t4222917807 * get__eventRegistration_2() const { return ____eventRegistration_2; }
	inline EventRegistration_t4222917807 ** get_address_of__eventRegistration_2() { return &____eventRegistration_2; }
	inline void set__eventRegistration_2(EventRegistration_t4222917807 * value)
	{
		____eventRegistration_2 = value;
		Il2CppCodeGenWriteBarrier(&____eventRegistration_2, value);
	}

	inline static int32_t get_offset_of__query_3() { return static_cast<int32_t>(offsetof(Callable506_t476518459, ____query_3)); }
	inline QuerySpec_t377558711 * get__query_3() const { return ____query_3; }
	inline QuerySpec_t377558711 ** get_address_of__query_3() { return &____query_3; }
	inline void set__query_3(QuerySpec_t377558711 * value)
	{
		____query_3 = value;
		Il2CppCodeGenWriteBarrier(&____query_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
