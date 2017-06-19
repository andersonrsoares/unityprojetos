#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.TransactionResult
struct  TransactionResult_t3107513211  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.TransactionResult::_data
	Node_t2640059010 * ____data_0;
	// System.Boolean Firebase.Database.TransactionResult::<IsSuccess>k__BackingField
	bool ___U3CIsSuccessU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(TransactionResult_t3107513211, ____data_0)); }
	inline Node_t2640059010 * get__data_0() const { return ____data_0; }
	inline Node_t2640059010 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Node_t2640059010 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier(&____data_0, value);
	}

	inline static int32_t get_offset_of_U3CIsSuccessU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TransactionResult_t3107513211, ___U3CIsSuccessU3Ek__BackingField_1)); }
	inline bool get_U3CIsSuccessU3Ek__BackingField_1() const { return ___U3CIsSuccessU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsSuccessU3Ek__BackingField_1() { return &___U3CIsSuccessU3Ek__BackingField_1; }
	inline void set_U3CIsSuccessU3Ek__BackingField_1(bool value)
	{
		___U3CIsSuccessU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
