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
// Firebase.Database.Internal.Core.Tag
struct Tag_t2439924210;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable330
struct  Callable330_t436112508  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable330::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// Firebase.Database.Internal.Core.Tag Firebase.Database.Internal.Core.SyncTree/Callable330::_tag
	Tag_t2439924210 * ____tag_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Callable330_t436112508, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__tag_1() { return static_cast<int32_t>(offsetof(Callable330_t436112508, ____tag_1)); }
	inline Tag_t2439924210 * get__tag_1() const { return ____tag_1; }
	inline Tag_t2439924210 ** get_address_of__tag_1() { return &____tag_1; }
	inline void set__tag_1(Tag_t2439924210 * value)
	{
		____tag_1 = value;
		Il2CppCodeGenWriteBarrier(&____tag_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
