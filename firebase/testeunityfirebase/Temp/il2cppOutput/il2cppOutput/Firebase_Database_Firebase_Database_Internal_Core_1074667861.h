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
// Firebase.Database.Internal.Utilities.IClock
struct IClock_t2325879361;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable188
struct  Callable188_t1074667861  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable188::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// System.Boolean Firebase.Database.Internal.Core.SyncTree/Callable188::_persist
	bool ____persist_1;
	// System.Boolean Firebase.Database.Internal.Core.SyncTree/Callable188::_revert
	bool ____revert_2;
	// Firebase.Database.Internal.Utilities.IClock Firebase.Database.Internal.Core.SyncTree/Callable188::_serverClock
	Il2CppObject * ____serverClock_3;
	// System.Int64 Firebase.Database.Internal.Core.SyncTree/Callable188::_writeId
	int64_t ____writeId_4;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Callable188_t1074667861, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__persist_1() { return static_cast<int32_t>(offsetof(Callable188_t1074667861, ____persist_1)); }
	inline bool get__persist_1() const { return ____persist_1; }
	inline bool* get_address_of__persist_1() { return &____persist_1; }
	inline void set__persist_1(bool value)
	{
		____persist_1 = value;
	}

	inline static int32_t get_offset_of__revert_2() { return static_cast<int32_t>(offsetof(Callable188_t1074667861, ____revert_2)); }
	inline bool get__revert_2() const { return ____revert_2; }
	inline bool* get_address_of__revert_2() { return &____revert_2; }
	inline void set__revert_2(bool value)
	{
		____revert_2 = value;
	}

	inline static int32_t get_offset_of__serverClock_3() { return static_cast<int32_t>(offsetof(Callable188_t1074667861, ____serverClock_3)); }
	inline Il2CppObject * get__serverClock_3() const { return ____serverClock_3; }
	inline Il2CppObject ** get_address_of__serverClock_3() { return &____serverClock_3; }
	inline void set__serverClock_3(Il2CppObject * value)
	{
		____serverClock_3 = value;
		Il2CppCodeGenWriteBarrier(&____serverClock_3, value);
	}

	inline static int32_t get_offset_of__writeId_4() { return static_cast<int32_t>(offsetof(Callable188_t1074667861, ____writeId_4)); }
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
