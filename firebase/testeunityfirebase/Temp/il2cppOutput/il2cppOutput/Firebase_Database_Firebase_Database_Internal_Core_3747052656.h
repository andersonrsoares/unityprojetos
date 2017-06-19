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
// Firebase.Database.Internal.Core.Repo/TransactionData
struct TransactionData_t2143512465;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/Runnable1144
struct  Runnable1144_t3747052656  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.Repo/Runnable1144::_abortError
	DatabaseError_t1067746743 * ____abortError_0;
	// Firebase.Database.Internal.Core.Repo/TransactionData Firebase.Database.Internal.Core.Repo/Runnable1144::_transaction
	TransactionData_t2143512465 * ____transaction_1;

public:
	inline static int32_t get_offset_of__abortError_0() { return static_cast<int32_t>(offsetof(Runnable1144_t3747052656, ____abortError_0)); }
	inline DatabaseError_t1067746743 * get__abortError_0() const { return ____abortError_0; }
	inline DatabaseError_t1067746743 ** get_address_of__abortError_0() { return &____abortError_0; }
	inline void set__abortError_0(DatabaseError_t1067746743 * value)
	{
		____abortError_0 = value;
		Il2CppCodeGenWriteBarrier(&____abortError_0, value);
	}

	inline static int32_t get_offset_of__transaction_1() { return static_cast<int32_t>(offsetof(Runnable1144_t3747052656, ____transaction_1)); }
	inline TransactionData_t2143512465 * get__transaction_1() const { return ____transaction_1; }
	inline TransactionData_t2143512465 ** get_address_of__transaction_1() { return &____transaction_1; }
	inline void set__transaction_1(TransactionData_t2143512465 * value)
	{
		____transaction_1 = value;
		Il2CppCodeGenWriteBarrier(&____transaction_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
