#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// Firebase.Database.Internal.Core.Repo/TransactionData
struct TransactionData_t2143512465;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/Runnable1028
struct  Runnable1028_t2584253343  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.Repo/Runnable1028::_callbackError
	DatabaseError_t1067746743 * ____callbackError_0;
	// Firebase.Database.DataSnapshot Firebase.Database.Internal.Core.Repo/Runnable1028::_snapshot
	DataSnapshot_t1287895350 * ____snapshot_1;
	// Firebase.Database.Internal.Core.Repo/TransactionData Firebase.Database.Internal.Core.Repo/Runnable1028::_transaction
	TransactionData_t2143512465 * ____transaction_2;

public:
	inline static int32_t get_offset_of__callbackError_0() { return static_cast<int32_t>(offsetof(Runnable1028_t2584253343, ____callbackError_0)); }
	inline DatabaseError_t1067746743 * get__callbackError_0() const { return ____callbackError_0; }
	inline DatabaseError_t1067746743 ** get_address_of__callbackError_0() { return &____callbackError_0; }
	inline void set__callbackError_0(DatabaseError_t1067746743 * value)
	{
		____callbackError_0 = value;
		Il2CppCodeGenWriteBarrier(&____callbackError_0, value);
	}

	inline static int32_t get_offset_of__snapshot_1() { return static_cast<int32_t>(offsetof(Runnable1028_t2584253343, ____snapshot_1)); }
	inline DataSnapshot_t1287895350 * get__snapshot_1() const { return ____snapshot_1; }
	inline DataSnapshot_t1287895350 ** get_address_of__snapshot_1() { return &____snapshot_1; }
	inline void set__snapshot_1(DataSnapshot_t1287895350 * value)
	{
		____snapshot_1 = value;
		Il2CppCodeGenWriteBarrier(&____snapshot_1, value);
	}

	inline static int32_t get_offset_of__transaction_2() { return static_cast<int32_t>(offsetof(Runnable1028_t2584253343, ____transaction_2)); }
	inline TransactionData_t2143512465 * get__transaction_2() const { return ____transaction_2; }
	inline TransactionData_t2143512465 ** get_address_of__transaction_2() { return &____transaction_2; }
	inline void set__transaction_2(TransactionData_t2143512465 * value)
	{
		____transaction_2 = value;
		Il2CppCodeGenWriteBarrier(&____transaction_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
