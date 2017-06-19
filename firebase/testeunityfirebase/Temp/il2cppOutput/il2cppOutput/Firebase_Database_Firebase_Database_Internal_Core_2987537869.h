#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Repo/TransactionData
struct TransactionData_t2143512465;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/Runnable1019
struct  Runnable1019_t2987537869  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/Runnable1019::_enclosing
	Repo_t1244308462 * ____enclosing_0;
	// Firebase.Database.Internal.Core.Repo/TransactionData Firebase.Database.Internal.Core.Repo/Runnable1019::_transaction
	TransactionData_t2143512465 * ____transaction_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable1019_t2987537869, ____enclosing_0)); }
	inline Repo_t1244308462 * get__enclosing_0() const { return ____enclosing_0; }
	inline Repo_t1244308462 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Repo_t1244308462 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__transaction_1() { return static_cast<int32_t>(offsetof(Runnable1019_t2987537869, ____transaction_1)); }
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
