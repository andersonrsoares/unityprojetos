#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.PersistentConnection
struct PersistentConnection_t1904999661;
// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1318758358;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Firebase.Database.Internal.Core.View.EventRaiser
struct EventRaiser_t2009560;
// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;
// Firebase.Database.Internal.Utilities.OffsetClock
struct OffsetClock_t3991894683;
// Firebase.Database.Internal.Core.SnapshotHolder
struct SnapshotHolder_t2504102480;
// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.SparseSnapshotTree
struct SparseSnapshotTree_t504080338;
// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>
struct Tree_1_t3109747774;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo
struct  Repo_t1244308462  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.PersistentConnection Firebase.Database.Internal.Core.Repo::_connection
	PersistentConnection_t1904999661 * ____connection_0;
	// Firebase.Database.Internal.Core.Context Firebase.Database.Internal.Core.Repo::_ctx
	Context_t3486154757 * ____ctx_1;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.Core.Repo::_firebaseDatabase
	FirebaseDatabase_t1318758358 * ____firebaseDatabase_2;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Repo::_dataLogger
	LogWrapper_t438307305 * ____dataLogger_3;
	// Firebase.Database.Internal.Core.View.EventRaiser Firebase.Database.Internal.Core.Repo::_eventRaiser
	EventRaiser_t2009560 * ____eventRaiser_4;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Repo::_operationLogger
	LogWrapper_t438307305 * ____operationLogger_5;
	// Firebase.Database.Internal.Core.RepoInfo Firebase.Database.Internal.Core.Repo::_repoInfo
	RepoInfo_t4079583710 * ____repoInfo_6;
	// Firebase.Database.Internal.Utilities.OffsetClock Firebase.Database.Internal.Core.Repo::_serverClock
	OffsetClock_t3991894683 * ____serverClock_7;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Repo::_transactionLogger
	LogWrapper_t438307305 * ____transactionLogger_8;
	// System.Boolean Firebase.Database.Internal.Core.Repo::_hijackHash
	bool ____hijackHash_9;
	// Firebase.Database.Internal.Core.SnapshotHolder Firebase.Database.Internal.Core.Repo::_infoData
	SnapshotHolder_t2504102480 * ____infoData_10;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.Repo::_infoSyncTree
	SyncTree_t528142079 * ____infoSyncTree_11;
	// System.Boolean Firebase.Database.Internal.Core.Repo::_loggedTransactionPersistenceWarning
	bool ____loggedTransactionPersistenceWarning_12;
	// System.Int64 Firebase.Database.Internal.Core.Repo::_nextWriteId
	int64_t ____nextWriteId_13;
	// Firebase.Database.Internal.Core.SparseSnapshotTree Firebase.Database.Internal.Core.Repo::_onDisconnectTree
	SparseSnapshotTree_t504080338 * ____onDisconnectTree_14;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.Repo::_serverSyncTree
	SyncTree_t528142079 * ____serverSyncTree_15;
	// System.Int64 Firebase.Database.Internal.Core.Repo::_transactionOrder
	int64_t ____transactionOrder_16;
	// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>> Firebase.Database.Internal.Core.Repo::_transactionQueueTree
	Tree_1_t3109747774 * ____transactionQueueTree_17;
	// System.Int64 Firebase.Database.Internal.Core.Repo::DataUpdateCount
	int64_t ___DataUpdateCount_18;

public:
	inline static int32_t get_offset_of__connection_0() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____connection_0)); }
	inline PersistentConnection_t1904999661 * get__connection_0() const { return ____connection_0; }
	inline PersistentConnection_t1904999661 ** get_address_of__connection_0() { return &____connection_0; }
	inline void set__connection_0(PersistentConnection_t1904999661 * value)
	{
		____connection_0 = value;
		Il2CppCodeGenWriteBarrier(&____connection_0, value);
	}

	inline static int32_t get_offset_of__ctx_1() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____ctx_1)); }
	inline Context_t3486154757 * get__ctx_1() const { return ____ctx_1; }
	inline Context_t3486154757 ** get_address_of__ctx_1() { return &____ctx_1; }
	inline void set__ctx_1(Context_t3486154757 * value)
	{
		____ctx_1 = value;
		Il2CppCodeGenWriteBarrier(&____ctx_1, value);
	}

	inline static int32_t get_offset_of__firebaseDatabase_2() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____firebaseDatabase_2)); }
	inline FirebaseDatabase_t1318758358 * get__firebaseDatabase_2() const { return ____firebaseDatabase_2; }
	inline FirebaseDatabase_t1318758358 ** get_address_of__firebaseDatabase_2() { return &____firebaseDatabase_2; }
	inline void set__firebaseDatabase_2(FirebaseDatabase_t1318758358 * value)
	{
		____firebaseDatabase_2 = value;
		Il2CppCodeGenWriteBarrier(&____firebaseDatabase_2, value);
	}

	inline static int32_t get_offset_of__dataLogger_3() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____dataLogger_3)); }
	inline LogWrapper_t438307305 * get__dataLogger_3() const { return ____dataLogger_3; }
	inline LogWrapper_t438307305 ** get_address_of__dataLogger_3() { return &____dataLogger_3; }
	inline void set__dataLogger_3(LogWrapper_t438307305 * value)
	{
		____dataLogger_3 = value;
		Il2CppCodeGenWriteBarrier(&____dataLogger_3, value);
	}

	inline static int32_t get_offset_of__eventRaiser_4() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____eventRaiser_4)); }
	inline EventRaiser_t2009560 * get__eventRaiser_4() const { return ____eventRaiser_4; }
	inline EventRaiser_t2009560 ** get_address_of__eventRaiser_4() { return &____eventRaiser_4; }
	inline void set__eventRaiser_4(EventRaiser_t2009560 * value)
	{
		____eventRaiser_4 = value;
		Il2CppCodeGenWriteBarrier(&____eventRaiser_4, value);
	}

	inline static int32_t get_offset_of__operationLogger_5() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____operationLogger_5)); }
	inline LogWrapper_t438307305 * get__operationLogger_5() const { return ____operationLogger_5; }
	inline LogWrapper_t438307305 ** get_address_of__operationLogger_5() { return &____operationLogger_5; }
	inline void set__operationLogger_5(LogWrapper_t438307305 * value)
	{
		____operationLogger_5 = value;
		Il2CppCodeGenWriteBarrier(&____operationLogger_5, value);
	}

	inline static int32_t get_offset_of__repoInfo_6() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____repoInfo_6)); }
	inline RepoInfo_t4079583710 * get__repoInfo_6() const { return ____repoInfo_6; }
	inline RepoInfo_t4079583710 ** get_address_of__repoInfo_6() { return &____repoInfo_6; }
	inline void set__repoInfo_6(RepoInfo_t4079583710 * value)
	{
		____repoInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&____repoInfo_6, value);
	}

	inline static int32_t get_offset_of__serverClock_7() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____serverClock_7)); }
	inline OffsetClock_t3991894683 * get__serverClock_7() const { return ____serverClock_7; }
	inline OffsetClock_t3991894683 ** get_address_of__serverClock_7() { return &____serverClock_7; }
	inline void set__serverClock_7(OffsetClock_t3991894683 * value)
	{
		____serverClock_7 = value;
		Il2CppCodeGenWriteBarrier(&____serverClock_7, value);
	}

	inline static int32_t get_offset_of__transactionLogger_8() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____transactionLogger_8)); }
	inline LogWrapper_t438307305 * get__transactionLogger_8() const { return ____transactionLogger_8; }
	inline LogWrapper_t438307305 ** get_address_of__transactionLogger_8() { return &____transactionLogger_8; }
	inline void set__transactionLogger_8(LogWrapper_t438307305 * value)
	{
		____transactionLogger_8 = value;
		Il2CppCodeGenWriteBarrier(&____transactionLogger_8, value);
	}

	inline static int32_t get_offset_of__hijackHash_9() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____hijackHash_9)); }
	inline bool get__hijackHash_9() const { return ____hijackHash_9; }
	inline bool* get_address_of__hijackHash_9() { return &____hijackHash_9; }
	inline void set__hijackHash_9(bool value)
	{
		____hijackHash_9 = value;
	}

	inline static int32_t get_offset_of__infoData_10() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____infoData_10)); }
	inline SnapshotHolder_t2504102480 * get__infoData_10() const { return ____infoData_10; }
	inline SnapshotHolder_t2504102480 ** get_address_of__infoData_10() { return &____infoData_10; }
	inline void set__infoData_10(SnapshotHolder_t2504102480 * value)
	{
		____infoData_10 = value;
		Il2CppCodeGenWriteBarrier(&____infoData_10, value);
	}

	inline static int32_t get_offset_of__infoSyncTree_11() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____infoSyncTree_11)); }
	inline SyncTree_t528142079 * get__infoSyncTree_11() const { return ____infoSyncTree_11; }
	inline SyncTree_t528142079 ** get_address_of__infoSyncTree_11() { return &____infoSyncTree_11; }
	inline void set__infoSyncTree_11(SyncTree_t528142079 * value)
	{
		____infoSyncTree_11 = value;
		Il2CppCodeGenWriteBarrier(&____infoSyncTree_11, value);
	}

	inline static int32_t get_offset_of__loggedTransactionPersistenceWarning_12() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____loggedTransactionPersistenceWarning_12)); }
	inline bool get__loggedTransactionPersistenceWarning_12() const { return ____loggedTransactionPersistenceWarning_12; }
	inline bool* get_address_of__loggedTransactionPersistenceWarning_12() { return &____loggedTransactionPersistenceWarning_12; }
	inline void set__loggedTransactionPersistenceWarning_12(bool value)
	{
		____loggedTransactionPersistenceWarning_12 = value;
	}

	inline static int32_t get_offset_of__nextWriteId_13() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____nextWriteId_13)); }
	inline int64_t get__nextWriteId_13() const { return ____nextWriteId_13; }
	inline int64_t* get_address_of__nextWriteId_13() { return &____nextWriteId_13; }
	inline void set__nextWriteId_13(int64_t value)
	{
		____nextWriteId_13 = value;
	}

	inline static int32_t get_offset_of__onDisconnectTree_14() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____onDisconnectTree_14)); }
	inline SparseSnapshotTree_t504080338 * get__onDisconnectTree_14() const { return ____onDisconnectTree_14; }
	inline SparseSnapshotTree_t504080338 ** get_address_of__onDisconnectTree_14() { return &____onDisconnectTree_14; }
	inline void set__onDisconnectTree_14(SparseSnapshotTree_t504080338 * value)
	{
		____onDisconnectTree_14 = value;
		Il2CppCodeGenWriteBarrier(&____onDisconnectTree_14, value);
	}

	inline static int32_t get_offset_of__serverSyncTree_15() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____serverSyncTree_15)); }
	inline SyncTree_t528142079 * get__serverSyncTree_15() const { return ____serverSyncTree_15; }
	inline SyncTree_t528142079 ** get_address_of__serverSyncTree_15() { return &____serverSyncTree_15; }
	inline void set__serverSyncTree_15(SyncTree_t528142079 * value)
	{
		____serverSyncTree_15 = value;
		Il2CppCodeGenWriteBarrier(&____serverSyncTree_15, value);
	}

	inline static int32_t get_offset_of__transactionOrder_16() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____transactionOrder_16)); }
	inline int64_t get__transactionOrder_16() const { return ____transactionOrder_16; }
	inline int64_t* get_address_of__transactionOrder_16() { return &____transactionOrder_16; }
	inline void set__transactionOrder_16(int64_t value)
	{
		____transactionOrder_16 = value;
	}

	inline static int32_t get_offset_of__transactionQueueTree_17() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____transactionQueueTree_17)); }
	inline Tree_1_t3109747774 * get__transactionQueueTree_17() const { return ____transactionQueueTree_17; }
	inline Tree_1_t3109747774 ** get_address_of__transactionQueueTree_17() { return &____transactionQueueTree_17; }
	inline void set__transactionQueueTree_17(Tree_1_t3109747774 * value)
	{
		____transactionQueueTree_17 = value;
		Il2CppCodeGenWriteBarrier(&____transactionQueueTree_17, value);
	}

	inline static int32_t get_offset_of_DataUpdateCount_18() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ___DataUpdateCount_18)); }
	inline int64_t get_DataUpdateCount_18() const { return ___DataUpdateCount_18; }
	inline int64_t* get_address_of_DataUpdateCount_18() { return &___DataUpdateCount_18; }
	inline void set_DataUpdateCount_18(int64_t value)
	{
		___DataUpdateCount_18 = value;
	}
};

struct Repo_t1244308462_StaticFields
{
public:
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.Core.Repo::<>f__am$cache0
	EventHandler_1_t3816151702 * ___U3CU3Ef__amU24cache0_19;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_19() { return static_cast<int32_t>(offsetof(Repo_t1244308462_StaticFields, ___U3CU3Ef__amU24cache0_19)); }
	inline EventHandler_1_t3816151702 * get_U3CU3Ef__amU24cache0_19() const { return ___U3CU3Ef__amU24cache0_19; }
	inline EventHandler_1_t3816151702 ** get_address_of_U3CU3Ef__amU24cache0_19() { return &___U3CU3Ef__amU24cache0_19; }
	inline void set_U3CU3Ef__amU24cache0_19(EventHandler_1_t3816151702 * value)
	{
		___U3CU3Ef__amU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
