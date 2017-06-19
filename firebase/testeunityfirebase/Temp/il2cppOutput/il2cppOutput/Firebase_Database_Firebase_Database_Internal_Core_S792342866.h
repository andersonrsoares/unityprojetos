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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable318
struct  Callable318_t792342866  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable318::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.SyncTree/Callable318::_path
	Path_t2568473163 * ____path_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Callable318_t792342866, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__path_1() { return static_cast<int32_t>(offsetof(Callable318_t792342866, ____path_1)); }
	inline Path_t2568473163 * get__path_1() const { return ____path_1; }
	inline Path_t2568473163 ** get_address_of__path_1() { return &____path_1; }
	inline void set__path_1(Path_t2568473163 * value)
	{
		____path_1 = value;
		Il2CppCodeGenWriteBarrier(&____path_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
