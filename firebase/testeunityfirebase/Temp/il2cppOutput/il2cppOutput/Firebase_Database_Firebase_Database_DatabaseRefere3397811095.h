#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Func`2<Firebase.Database.MutableData,Firebase.Database.TransactionResult>
struct Func_2_t3583558628;
// System.Action`3<Firebase.Database.DatabaseError,System.Boolean,Firebase.Database.DataSnapshot>
struct Action_3_t1656227171;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference/TransactionHandlerImpl
struct  TransactionHandlerImpl_t3397811095  : public Il2CppObject
{
public:
	// System.Func`2<Firebase.Database.MutableData,Firebase.Database.TransactionResult> Firebase.Database.DatabaseReference/TransactionHandlerImpl::_transaction
	Func_2_t3583558628 * ____transaction_0;
	// System.Action`3<Firebase.Database.DatabaseError,System.Boolean,Firebase.Database.DataSnapshot> Firebase.Database.DatabaseReference/TransactionHandlerImpl::_onComplete
	Action_3_t1656227171 * ____onComplete_1;

public:
	inline static int32_t get_offset_of__transaction_0() { return static_cast<int32_t>(offsetof(TransactionHandlerImpl_t3397811095, ____transaction_0)); }
	inline Func_2_t3583558628 * get__transaction_0() const { return ____transaction_0; }
	inline Func_2_t3583558628 ** get_address_of__transaction_0() { return &____transaction_0; }
	inline void set__transaction_0(Func_2_t3583558628 * value)
	{
		____transaction_0 = value;
		Il2CppCodeGenWriteBarrier(&____transaction_0, value);
	}

	inline static int32_t get_offset_of__onComplete_1() { return static_cast<int32_t>(offsetof(TransactionHandlerImpl_t3397811095, ____onComplete_1)); }
	inline Action_3_t1656227171 * get__onComplete_1() const { return ____onComplete_1; }
	inline Action_3_t1656227171 ** get_address_of__onComplete_1() { return &____onComplete_1; }
	inline void set__onComplete_1(Action_3_t1656227171 * value)
	{
		____onComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
