#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable170
struct  Callable170_t718437514  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.SyncTree/Callable170::_children
	CompoundWrite_t496419158 * ____children_0;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable170::_enclosing
	SyncTree_t528142079 * ____enclosing_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.SyncTree/Callable170::_path
	Path_t2568473163 * ____path_2;
	// System.Boolean Firebase.Database.Internal.Core.SyncTree/Callable170::_persist
	bool ____persist_3;
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.SyncTree/Callable170::_unresolvedChildren
	CompoundWrite_t496419158 * ____unresolvedChildren_4;
	// System.Int64 Firebase.Database.Internal.Core.SyncTree/Callable170::_writeId
	int64_t ____writeId_5;

public:
	inline static int32_t get_offset_of__children_0() { return static_cast<int32_t>(offsetof(Callable170_t718437514, ____children_0)); }
	inline CompoundWrite_t496419158 * get__children_0() const { return ____children_0; }
	inline CompoundWrite_t496419158 ** get_address_of__children_0() { return &____children_0; }
	inline void set__children_0(CompoundWrite_t496419158 * value)
	{
		____children_0 = value;
		Il2CppCodeGenWriteBarrier(&____children_0, value);
	}

	inline static int32_t get_offset_of__enclosing_1() { return static_cast<int32_t>(offsetof(Callable170_t718437514, ____enclosing_1)); }
	inline SyncTree_t528142079 * get__enclosing_1() const { return ____enclosing_1; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_1() { return &____enclosing_1; }
	inline void set__enclosing_1(SyncTree_t528142079 * value)
	{
		____enclosing_1 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(Callable170_t718437514, ____path_2)); }
	inline Path_t2568473163 * get__path_2() const { return ____path_2; }
	inline Path_t2568473163 ** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(Path_t2568473163 * value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}

	inline static int32_t get_offset_of__persist_3() { return static_cast<int32_t>(offsetof(Callable170_t718437514, ____persist_3)); }
	inline bool get__persist_3() const { return ____persist_3; }
	inline bool* get_address_of__persist_3() { return &____persist_3; }
	inline void set__persist_3(bool value)
	{
		____persist_3 = value;
	}

	inline static int32_t get_offset_of__unresolvedChildren_4() { return static_cast<int32_t>(offsetof(Callable170_t718437514, ____unresolvedChildren_4)); }
	inline CompoundWrite_t496419158 * get__unresolvedChildren_4() const { return ____unresolvedChildren_4; }
	inline CompoundWrite_t496419158 ** get_address_of__unresolvedChildren_4() { return &____unresolvedChildren_4; }
	inline void set__unresolvedChildren_4(CompoundWrite_t496419158 * value)
	{
		____unresolvedChildren_4 = value;
		Il2CppCodeGenWriteBarrier(&____unresolvedChildren_4, value);
	}

	inline static int32_t get_offset_of__writeId_5() { return static_cast<int32_t>(offsetof(Callable170_t718437514, ____writeId_5)); }
	inline int64_t get__writeId_5() const { return ____writeId_5; }
	inline int64_t* get_address_of__writeId_5() { return &____writeId_5; }
	inline void set__writeId_5(int64_t value)
	{
		____writeId_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
