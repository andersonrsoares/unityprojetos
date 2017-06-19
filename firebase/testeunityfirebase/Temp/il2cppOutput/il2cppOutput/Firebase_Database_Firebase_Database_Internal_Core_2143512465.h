#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_R713238209.h"

// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.ITransactionHandler
struct ITransactionHandler_t384952127;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/TransactionData
struct  TransactionData_t2143512465  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.Repo/TransactionData::AbortReason
	DatabaseError_t1067746743 * ___AbortReason_0;
	// System.Boolean Firebase.Database.Internal.Core.Repo/TransactionData::ApplyLocally
	bool ___ApplyLocally_1;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.Repo/TransactionData::CurrentInputSnapshot
	Node_t2640059010 * ___CurrentInputSnapshot_2;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.Repo/TransactionData::CurrentOutputSnapshotRaw
	Node_t2640059010 * ___CurrentOutputSnapshotRaw_3;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.Repo/TransactionData::CurrentOutputSnapshotResolved
	Node_t2640059010 * ___CurrentOutputSnapshotResolved_4;
	// System.Int64 Firebase.Database.Internal.Core.Repo/TransactionData::CurrentWriteId
	int64_t ___CurrentWriteId_5;
	// Firebase.Database.ITransactionHandler Firebase.Database.Internal.Core.Repo/TransactionData::Handler
	Il2CppObject * ___Handler_6;
	// System.Int64 Firebase.Database.Internal.Core.Repo/TransactionData::Order
	int64_t ___Order_7;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.Core.Repo/TransactionData::OutstandingHandler
	EventHandler_1_t3816151702 * ___OutstandingHandler_8;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Repo/TransactionData::Path
	Path_t2568473163 * ___Path_9;
	// System.Int32 Firebase.Database.Internal.Core.Repo/TransactionData::RetryCount
	int32_t ___RetryCount_10;
	// Firebase.Database.Internal.Core.Repo/TransactionStatus Firebase.Database.Internal.Core.Repo/TransactionData::Status
	int32_t ___Status_11;

public:
	inline static int32_t get_offset_of_AbortReason_0() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___AbortReason_0)); }
	inline DatabaseError_t1067746743 * get_AbortReason_0() const { return ___AbortReason_0; }
	inline DatabaseError_t1067746743 ** get_address_of_AbortReason_0() { return &___AbortReason_0; }
	inline void set_AbortReason_0(DatabaseError_t1067746743 * value)
	{
		___AbortReason_0 = value;
		Il2CppCodeGenWriteBarrier(&___AbortReason_0, value);
	}

	inline static int32_t get_offset_of_ApplyLocally_1() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___ApplyLocally_1)); }
	inline bool get_ApplyLocally_1() const { return ___ApplyLocally_1; }
	inline bool* get_address_of_ApplyLocally_1() { return &___ApplyLocally_1; }
	inline void set_ApplyLocally_1(bool value)
	{
		___ApplyLocally_1 = value;
	}

	inline static int32_t get_offset_of_CurrentInputSnapshot_2() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___CurrentInputSnapshot_2)); }
	inline Node_t2640059010 * get_CurrentInputSnapshot_2() const { return ___CurrentInputSnapshot_2; }
	inline Node_t2640059010 ** get_address_of_CurrentInputSnapshot_2() { return &___CurrentInputSnapshot_2; }
	inline void set_CurrentInputSnapshot_2(Node_t2640059010 * value)
	{
		___CurrentInputSnapshot_2 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentInputSnapshot_2, value);
	}

	inline static int32_t get_offset_of_CurrentOutputSnapshotRaw_3() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___CurrentOutputSnapshotRaw_3)); }
	inline Node_t2640059010 * get_CurrentOutputSnapshotRaw_3() const { return ___CurrentOutputSnapshotRaw_3; }
	inline Node_t2640059010 ** get_address_of_CurrentOutputSnapshotRaw_3() { return &___CurrentOutputSnapshotRaw_3; }
	inline void set_CurrentOutputSnapshotRaw_3(Node_t2640059010 * value)
	{
		___CurrentOutputSnapshotRaw_3 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentOutputSnapshotRaw_3, value);
	}

	inline static int32_t get_offset_of_CurrentOutputSnapshotResolved_4() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___CurrentOutputSnapshotResolved_4)); }
	inline Node_t2640059010 * get_CurrentOutputSnapshotResolved_4() const { return ___CurrentOutputSnapshotResolved_4; }
	inline Node_t2640059010 ** get_address_of_CurrentOutputSnapshotResolved_4() { return &___CurrentOutputSnapshotResolved_4; }
	inline void set_CurrentOutputSnapshotResolved_4(Node_t2640059010 * value)
	{
		___CurrentOutputSnapshotResolved_4 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentOutputSnapshotResolved_4, value);
	}

	inline static int32_t get_offset_of_CurrentWriteId_5() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___CurrentWriteId_5)); }
	inline int64_t get_CurrentWriteId_5() const { return ___CurrentWriteId_5; }
	inline int64_t* get_address_of_CurrentWriteId_5() { return &___CurrentWriteId_5; }
	inline void set_CurrentWriteId_5(int64_t value)
	{
		___CurrentWriteId_5 = value;
	}

	inline static int32_t get_offset_of_Handler_6() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___Handler_6)); }
	inline Il2CppObject * get_Handler_6() const { return ___Handler_6; }
	inline Il2CppObject ** get_address_of_Handler_6() { return &___Handler_6; }
	inline void set_Handler_6(Il2CppObject * value)
	{
		___Handler_6 = value;
		Il2CppCodeGenWriteBarrier(&___Handler_6, value);
	}

	inline static int32_t get_offset_of_Order_7() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___Order_7)); }
	inline int64_t get_Order_7() const { return ___Order_7; }
	inline int64_t* get_address_of_Order_7() { return &___Order_7; }
	inline void set_Order_7(int64_t value)
	{
		___Order_7 = value;
	}

	inline static int32_t get_offset_of_OutstandingHandler_8() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___OutstandingHandler_8)); }
	inline EventHandler_1_t3816151702 * get_OutstandingHandler_8() const { return ___OutstandingHandler_8; }
	inline EventHandler_1_t3816151702 ** get_address_of_OutstandingHandler_8() { return &___OutstandingHandler_8; }
	inline void set_OutstandingHandler_8(EventHandler_1_t3816151702 * value)
	{
		___OutstandingHandler_8 = value;
		Il2CppCodeGenWriteBarrier(&___OutstandingHandler_8, value);
	}

	inline static int32_t get_offset_of_Path_9() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___Path_9)); }
	inline Path_t2568473163 * get_Path_9() const { return ___Path_9; }
	inline Path_t2568473163 ** get_address_of_Path_9() { return &___Path_9; }
	inline void set_Path_9(Path_t2568473163 * value)
	{
		___Path_9 = value;
		Il2CppCodeGenWriteBarrier(&___Path_9, value);
	}

	inline static int32_t get_offset_of_RetryCount_10() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___RetryCount_10)); }
	inline int32_t get_RetryCount_10() const { return ___RetryCount_10; }
	inline int32_t* get_address_of_RetryCount_10() { return &___RetryCount_10; }
	inline void set_RetryCount_10(int32_t value)
	{
		___RetryCount_10 = value;
	}

	inline static int32_t get_offset_of_Status_11() { return static_cast<int32_t>(offsetof(TransactionData_t2143512465, ___Status_11)); }
	inline int32_t get_Status_11() const { return ___Status_11; }
	inline int32_t* get_address_of_Status_11() { return &___Status_11; }
	inline void set_Status_11(int32_t value)
	{
		___Status_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
