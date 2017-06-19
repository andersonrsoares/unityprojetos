#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.RangeMerge
struct  RangeMerge_t98025219  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.RangeMerge::_optExclusiveStart
	Il2CppObject* ____optExclusiveStart_0;
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.RangeMerge::_optInclusiveEnd
	Il2CppObject* ____optInclusiveEnd_1;
	// System.Object Firebase.Database.Internal.Connection.RangeMerge::_snap
	Il2CppObject * ____snap_2;

public:
	inline static int32_t get_offset_of__optExclusiveStart_0() { return static_cast<int32_t>(offsetof(RangeMerge_t98025219, ____optExclusiveStart_0)); }
	inline Il2CppObject* get__optExclusiveStart_0() const { return ____optExclusiveStart_0; }
	inline Il2CppObject** get_address_of__optExclusiveStart_0() { return &____optExclusiveStart_0; }
	inline void set__optExclusiveStart_0(Il2CppObject* value)
	{
		____optExclusiveStart_0 = value;
		Il2CppCodeGenWriteBarrier(&____optExclusiveStart_0, value);
	}

	inline static int32_t get_offset_of__optInclusiveEnd_1() { return static_cast<int32_t>(offsetof(RangeMerge_t98025219, ____optInclusiveEnd_1)); }
	inline Il2CppObject* get__optInclusiveEnd_1() const { return ____optInclusiveEnd_1; }
	inline Il2CppObject** get_address_of__optInclusiveEnd_1() { return &____optInclusiveEnd_1; }
	inline void set__optInclusiveEnd_1(Il2CppObject* value)
	{
		____optInclusiveEnd_1 = value;
		Il2CppCodeGenWriteBarrier(&____optInclusiveEnd_1, value);
	}

	inline static int32_t get_offset_of__snap_2() { return static_cast<int32_t>(offsetof(RangeMerge_t98025219, ____snap_2)); }
	inline Il2CppObject * get__snap_2() const { return ____snap_2; }
	inline Il2CppObject ** get_address_of__snap_2() { return &____snap_2; }
	inline void set__snap_2(Il2CppObject * value)
	{
		____snap_2 = value;
		Il2CppCodeGenWriteBarrier(&____snap_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
