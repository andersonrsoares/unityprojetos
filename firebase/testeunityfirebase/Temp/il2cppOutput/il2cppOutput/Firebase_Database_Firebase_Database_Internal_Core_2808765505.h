#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Tag
struct Tag_t2439924210;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable357
struct  Callable357_t2808765505  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable357::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.SyncTree/Callable357::_path
	Path_t2568473163 * ____path_1;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SyncTree/Callable357::_snap
	Node_t2640059010 * ____snap_2;
	// Firebase.Database.Internal.Core.Tag Firebase.Database.Internal.Core.SyncTree/Callable357::_tag
	Tag_t2439924210 * ____tag_3;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Callable357_t2808765505, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__path_1() { return static_cast<int32_t>(offsetof(Callable357_t2808765505, ____path_1)); }
	inline Path_t2568473163 * get__path_1() const { return ____path_1; }
	inline Path_t2568473163 ** get_address_of__path_1() { return &____path_1; }
	inline void set__path_1(Path_t2568473163 * value)
	{
		____path_1 = value;
		Il2CppCodeGenWriteBarrier(&____path_1, value);
	}

	inline static int32_t get_offset_of__snap_2() { return static_cast<int32_t>(offsetof(Callable357_t2808765505, ____snap_2)); }
	inline Node_t2640059010 * get__snap_2() const { return ____snap_2; }
	inline Node_t2640059010 ** get_address_of__snap_2() { return &____snap_2; }
	inline void set__snap_2(Node_t2640059010 * value)
	{
		____snap_2 = value;
		Il2CppCodeGenWriteBarrier(&____snap_2, value);
	}

	inline static int32_t get_offset_of__tag_3() { return static_cast<int32_t>(offsetof(Callable357_t2808765505, ____tag_3)); }
	inline Tag_t2439924210 * get__tag_3() const { return ____tag_3; }
	inline Tag_t2439924210 ** get_address_of__tag_3() { return &____tag_3; }
	inline void set__tag_3(Tag_t2439924210 * value)
	{
		____tag_3 = value;
		Il2CppCodeGenWriteBarrier(&____tag_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
