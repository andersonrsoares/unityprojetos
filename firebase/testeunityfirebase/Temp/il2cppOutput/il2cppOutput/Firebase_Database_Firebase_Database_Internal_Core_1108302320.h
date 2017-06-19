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
// Firebase.Database.Internal.Core.View.View
struct View_t798282663;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/ListenContainer
struct  ListenContainer_t1108302320  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/ListenContainer::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// Firebase.Database.Internal.Core.Tag Firebase.Database.Internal.Core.SyncTree/ListenContainer::Tag
	Tag_t2439924210 * ___Tag_1;
	// Firebase.Database.Internal.Core.View.View Firebase.Database.Internal.Core.SyncTree/ListenContainer::View
	View_t798282663 * ___View_2;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(ListenContainer_t1108302320, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of_Tag_1() { return static_cast<int32_t>(offsetof(ListenContainer_t1108302320, ___Tag_1)); }
	inline Tag_t2439924210 * get_Tag_1() const { return ___Tag_1; }
	inline Tag_t2439924210 ** get_address_of_Tag_1() { return &___Tag_1; }
	inline void set_Tag_1(Tag_t2439924210 * value)
	{
		___Tag_1 = value;
		Il2CppCodeGenWriteBarrier(&___Tag_1, value);
	}

	inline static int32_t get_offset_of_View_2() { return static_cast<int32_t>(offsetof(ListenContainer_t1108302320, ___View_2)); }
	inline View_t798282663 * get_View_2() const { return ___View_2; }
	inline View_t798282663 ** get_address_of_View_2() { return &___View_2; }
	inline void set_View_2(View_t798282663 * value)
	{
		___View_2 = value;
		Il2CppCodeGenWriteBarrier(&___View_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
