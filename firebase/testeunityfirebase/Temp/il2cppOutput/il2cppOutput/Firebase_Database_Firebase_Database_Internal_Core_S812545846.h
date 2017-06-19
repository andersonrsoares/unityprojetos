#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>
struct IDictionary_2_t4243616403;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable259
struct  Callable259_t812545846  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node> Firebase.Database.Internal.Core.SyncTree/Callable259::_changedChildren
	Il2CppObject* ____changedChildren_0;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable259::_enclosing
	SyncTree_t528142079 * ____enclosing_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.SyncTree/Callable259::_path
	Path_t2568473163 * ____path_2;

public:
	inline static int32_t get_offset_of__changedChildren_0() { return static_cast<int32_t>(offsetof(Callable259_t812545846, ____changedChildren_0)); }
	inline Il2CppObject* get__changedChildren_0() const { return ____changedChildren_0; }
	inline Il2CppObject** get_address_of__changedChildren_0() { return &____changedChildren_0; }
	inline void set__changedChildren_0(Il2CppObject* value)
	{
		____changedChildren_0 = value;
		Il2CppCodeGenWriteBarrier(&____changedChildren_0, value);
	}

	inline static int32_t get_offset_of__enclosing_1() { return static_cast<int32_t>(offsetof(Callable259_t812545846, ____enclosing_1)); }
	inline SyncTree_t528142079 * get__enclosing_1() const { return ____enclosing_1; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_1() { return &____enclosing_1; }
	inline void set__enclosing_1(SyncTree_t528142079 * value)
	{
		____enclosing_1 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(Callable259_t812545846, ____path_2)); }
	inline Path_t2568473163 * get__path_2() const { return ____path_2; }
	inline Path_t2568473163 ** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(Path_t2568473163 * value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
