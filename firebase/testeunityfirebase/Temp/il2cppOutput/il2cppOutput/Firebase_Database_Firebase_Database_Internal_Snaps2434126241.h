#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.RangeMerge
struct  RangeMerge_t2434126241  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Snapshot.RangeMerge::_optExclusiveStart
	Path_t2568473163 * ____optExclusiveStart_0;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Snapshot.RangeMerge::_optInclusiveEnd
	Path_t2568473163 * ____optInclusiveEnd_1;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.RangeMerge::_snap
	Node_t2640059010 * ____snap_2;

public:
	inline static int32_t get_offset_of__optExclusiveStart_0() { return static_cast<int32_t>(offsetof(RangeMerge_t2434126241, ____optExclusiveStart_0)); }
	inline Path_t2568473163 * get__optExclusiveStart_0() const { return ____optExclusiveStart_0; }
	inline Path_t2568473163 ** get_address_of__optExclusiveStart_0() { return &____optExclusiveStart_0; }
	inline void set__optExclusiveStart_0(Path_t2568473163 * value)
	{
		____optExclusiveStart_0 = value;
		Il2CppCodeGenWriteBarrier(&____optExclusiveStart_0, value);
	}

	inline static int32_t get_offset_of__optInclusiveEnd_1() { return static_cast<int32_t>(offsetof(RangeMerge_t2434126241, ____optInclusiveEnd_1)); }
	inline Path_t2568473163 * get__optInclusiveEnd_1() const { return ____optInclusiveEnd_1; }
	inline Path_t2568473163 ** get_address_of__optInclusiveEnd_1() { return &____optInclusiveEnd_1; }
	inline void set__optInclusiveEnd_1(Path_t2568473163 * value)
	{
		____optInclusiveEnd_1 = value;
		Il2CppCodeGenWriteBarrier(&____optInclusiveEnd_1, value);
	}

	inline static int32_t get_offset_of__snap_2() { return static_cast<int32_t>(offsetof(RangeMerge_t2434126241, ____snap_2)); }
	inline Node_t2640059010 * get__snap_2() const { return ____snap_2; }
	inline Node_t2640059010 ** get_address_of__snap_2() { return &____snap_2; }
	inline void set__snap_2(Node_t2640059010 * value)
	{
		____snap_2 = value;
		Il2CppCodeGenWriteBarrier(&____snap_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
