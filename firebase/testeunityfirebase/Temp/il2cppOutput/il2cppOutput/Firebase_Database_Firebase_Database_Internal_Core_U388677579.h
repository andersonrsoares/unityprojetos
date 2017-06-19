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
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.UserWriteRecord
struct  UserWriteRecord_t388677579  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.UserWriteRecord::_merge
	CompoundWrite_t496419158 * ____merge_0;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.UserWriteRecord::_overwrite
	Node_t2640059010 * ____overwrite_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.UserWriteRecord::_path
	Path_t2568473163 * ____path_2;
	// System.Boolean Firebase.Database.Internal.Core.UserWriteRecord::_visible
	bool ____visible_3;
	// System.Int64 Firebase.Database.Internal.Core.UserWriteRecord::_writeId
	int64_t ____writeId_4;

public:
	inline static int32_t get_offset_of__merge_0() { return static_cast<int32_t>(offsetof(UserWriteRecord_t388677579, ____merge_0)); }
	inline CompoundWrite_t496419158 * get__merge_0() const { return ____merge_0; }
	inline CompoundWrite_t496419158 ** get_address_of__merge_0() { return &____merge_0; }
	inline void set__merge_0(CompoundWrite_t496419158 * value)
	{
		____merge_0 = value;
		Il2CppCodeGenWriteBarrier(&____merge_0, value);
	}

	inline static int32_t get_offset_of__overwrite_1() { return static_cast<int32_t>(offsetof(UserWriteRecord_t388677579, ____overwrite_1)); }
	inline Node_t2640059010 * get__overwrite_1() const { return ____overwrite_1; }
	inline Node_t2640059010 ** get_address_of__overwrite_1() { return &____overwrite_1; }
	inline void set__overwrite_1(Node_t2640059010 * value)
	{
		____overwrite_1 = value;
		Il2CppCodeGenWriteBarrier(&____overwrite_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(UserWriteRecord_t388677579, ____path_2)); }
	inline Path_t2568473163 * get__path_2() const { return ____path_2; }
	inline Path_t2568473163 ** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(Path_t2568473163 * value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}

	inline static int32_t get_offset_of__visible_3() { return static_cast<int32_t>(offsetof(UserWriteRecord_t388677579, ____visible_3)); }
	inline bool get__visible_3() const { return ____visible_3; }
	inline bool* get_address_of__visible_3() { return &____visible_3; }
	inline void set__visible_3(bool value)
	{
		____visible_3 = value;
	}

	inline static int32_t get_offset_of__writeId_4() { return static_cast<int32_t>(offsetof(UserWriteRecord_t388677579, ____writeId_4)); }
	inline int64_t get__writeId_4() const { return ____writeId_4; }
	inline int64_t* get_address_of__writeId_4() { return &____writeId_4; }
	inline void set__writeId_4(int64_t value)
	{
		____writeId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
