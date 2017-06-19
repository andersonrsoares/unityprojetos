#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.ITransactionHandler
struct ITransactionHandler_t384952127;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/Runnable704
struct  Runnable704_t1253909383  : public Il2CppObject
{
public:
	// Firebase.Database.ITransactionHandler Firebase.Database.Internal.Core.Repo/Runnable704::_handler
	Il2CppObject * ____handler_0;
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.Repo/Runnable704::_innerClassError
	DatabaseError_t1067746743 * ____innerClassError_1;
	// Firebase.Database.DataSnapshot Firebase.Database.Internal.Core.Repo/Runnable704::_snap
	DataSnapshot_t1287895350 * ____snap_2;

public:
	inline static int32_t get_offset_of__handler_0() { return static_cast<int32_t>(offsetof(Runnable704_t1253909383, ____handler_0)); }
	inline Il2CppObject * get__handler_0() const { return ____handler_0; }
	inline Il2CppObject ** get_address_of__handler_0() { return &____handler_0; }
	inline void set__handler_0(Il2CppObject * value)
	{
		____handler_0 = value;
		Il2CppCodeGenWriteBarrier(&____handler_0, value);
	}

	inline static int32_t get_offset_of__innerClassError_1() { return static_cast<int32_t>(offsetof(Runnable704_t1253909383, ____innerClassError_1)); }
	inline DatabaseError_t1067746743 * get__innerClassError_1() const { return ____innerClassError_1; }
	inline DatabaseError_t1067746743 ** get_address_of__innerClassError_1() { return &____innerClassError_1; }
	inline void set__innerClassError_1(DatabaseError_t1067746743 * value)
	{
		____innerClassError_1 = value;
		Il2CppCodeGenWriteBarrier(&____innerClassError_1, value);
	}

	inline static int32_t get_offset_of__snap_2() { return static_cast<int32_t>(offsetof(Runnable704_t1253909383, ____snap_2)); }
	inline DataSnapshot_t1287895350 * get__snap_2() const { return ____snap_2; }
	inline DataSnapshot_t1287895350 ** get_address_of__snap_2() { return &____snap_2; }
	inline void set__snap_2(DataSnapshot_t1287895350 * value)
	{
		____snap_2 = value;
		Il2CppCodeGenWriteBarrier(&____snap_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
