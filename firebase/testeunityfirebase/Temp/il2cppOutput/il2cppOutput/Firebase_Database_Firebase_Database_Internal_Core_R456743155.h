#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// Firebase.Database.Internal.Core.Repo/TransactionData
struct TransactionData_t2143512465;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/RequestResultCallback817/Runnable838
struct  Runnable838_t456743155  : public Il2CppObject
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.Internal.Core.Repo/RequestResultCallback817/Runnable838::_snap
	DataSnapshot_t1287895350 * ____snap_0;
	// Firebase.Database.Internal.Core.Repo/TransactionData Firebase.Database.Internal.Core.Repo/RequestResultCallback817/Runnable838::_txn
	TransactionData_t2143512465 * ____txn_1;

public:
	inline static int32_t get_offset_of__snap_0() { return static_cast<int32_t>(offsetof(Runnable838_t456743155, ____snap_0)); }
	inline DataSnapshot_t1287895350 * get__snap_0() const { return ____snap_0; }
	inline DataSnapshot_t1287895350 ** get_address_of__snap_0() { return &____snap_0; }
	inline void set__snap_0(DataSnapshot_t1287895350 * value)
	{
		____snap_0 = value;
		Il2CppCodeGenWriteBarrier(&____snap_0, value);
	}

	inline static int32_t get_offset_of__txn_1() { return static_cast<int32_t>(offsetof(Runnable838_t456743155, ____txn_1)); }
	inline TransactionData_t2143512465 * get__txn_1() const { return ____txn_1; }
	inline TransactionData_t2143512465 ** get_address_of__txn_1() { return &____txn_1; }
	inline void set__txn_1(TransactionData_t2143512465 * value)
	{
		____txn_1 = value;
		Il2CppCodeGenWriteBarrier(&____txn_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
