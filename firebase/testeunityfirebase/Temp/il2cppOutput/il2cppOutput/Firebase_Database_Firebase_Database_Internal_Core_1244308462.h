#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
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
	PersistentConnection_t1904999661 * ____connection_4;
	// Firebase.Database.Internal.Core.Context Firebase.Database.Internal.Core.Repo::_ctx
	Context_t3486154757 * ____ctx_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.Core.Repo::_firebaseDatabase
	FirebaseDatabase_t1318758358 * ____firebaseDatabase_6;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Repo::_dataLogger
	LogWrapper_t438307305 * ____dataLogger_7;
	// Firebase.Database.Internal.Core.View.EventRaiser Firebase.Database.Internal.Core.Repo::_eventRaiser
	EventRaiser_t2009560 * ____eventRaiser_8;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Repo::_operationLogger
	LogWrapper_t438307305 * ____operationLogger_9;
	// Firebase.Database.Internal.Core.RepoInfo Firebase.Database.Internal.Core.Repo::_repoInfo
	RepoInfo_t4079583710 * ____repoInfo_10;
	// Firebase.Database.Internal.Utilities.OffsetClock Firebase.Database.Internal.Core.Repo::_serverClock
	OffsetClock_t3991894683 * ____serverClock_11;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Repo::_transactionLogger
	LogWrapper_t438307305 * ____transactionLogger_12;
	// System.Boolean Firebase.Database.Internal.Core.Repo::_hijackHash
	bool ____hijackHash_13;
	// Firebase.Database.Internal.Core.SnapshotHolder Firebase.Database.Internal.Core.Repo::_infoData
	SnapshotHolder_t2504102480 * ____infoData_14;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.Repo::_infoSyncTree
	SyncTree_t528142079 * ____infoSyncTree_15;
	// System.Boolean Firebase.Database.Internal.Core.Repo::_loggedTransactionPersistenceWarning
	bool ____loggedTransactionPersistenceWarning_16;
	// System.Int64 Firebase.Database.Internal.Core.Repo::_nextWriteId
	int64_t ____nextWriteId_17;
	// Firebase.Database.Internal.Core.SparseSnapshotTree Firebase.Database.Internal.Core.Repo::_onDisconnectTree
	SparseSnapshotTree_t504080338 * ____onDisconnectTree_18;
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.Repo::_serverSyncTree
	SyncTree_t528142079 * ____serverSyncTree_19;
	// System.Int64 Firebase.Database.Internal.Core.Repo::_transactionOrder
	int64_t ____transactionOrder_20;
	// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>> Firebase.Database.Internal.Core.Repo::_transactionQueueTree
	Tree_1_t3109747774 * ____transactionQueueTree_21;
	// System.Int64 Firebase.Database.Internal.Core.Repo::DataUpdateCount
	int64_t ___DataUpdateCount_22;

public:
	inline static int32_t get_offset_of__connection_4() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____connection_4)); }
	inline PersistentConnection_t1904999661 * get__connection_4() const { return ____connection_4; }
	inline PersistentConnection_t1904999661 ** get_address_of__connection_4() { return &____connection_4; }
	inline void set__connection_4(PersistentConnection_t1904999661 * value)
	{
		____connection_4 = value;
		Il2CppCodeGenWriteBarrier(&____connection_4, value);
	}

	inline static int32_t get_offset_of__ctx_5() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____ctx_5)); }
	inline Context_t3486154757 * get__ctx_5() const { return ____ctx_5; }
	inline Context_t3486154757 ** get_address_of__ctx_5() { return &____ctx_5; }
	inline void set__ctx_5(Context_t3486154757 * value)
	{
		____ctx_5 = value;
		Il2CppCodeGenWriteBarrier(&____ctx_5, value);
	}

	inline static int32_t get_offset_of__firebaseDatabase_6() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____firebaseDatabase_6)); }
	inline FirebaseDatabase_t1318758358 * get__firebaseDatabase_6() const { return ____firebaseDatabase_6; }
	inline FirebaseDatabase_t1318758358 ** get_address_of__firebaseDatabase_6() { return &____firebaseDatabase_6; }
	inline void set__firebaseDatabase_6(FirebaseDatabase_t1318758358 * value)
	{
		____firebaseDatabase_6 = value;
		Il2CppCodeGenWriteBarrier(&____firebaseDatabase_6, value);
	}

	inline static int32_t get_offset_of__dataLogger_7() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____dataLogger_7)); }
	inline LogWrapper_t438307305 * get__dataLogger_7() const { return ____dataLogger_7; }
	inline LogWrapper_t438307305 ** get_address_of__dataLogger_7() { return &____dataLogger_7; }
	inline void set__dataLogger_7(LogWrapper_t438307305 * value)
	{
		____dataLogger_7 = value;
		Il2CppCodeGenWriteBarrier(&____dataLogger_7, value);
	}

	inline static int32_t get_offset_of__eventRaiser_8() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____eventRaiser_8)); }
	inline EventRaiser_t2009560 * get__eventRaiser_8() const { return ____eventRaiser_8; }
	inline EventRaiser_t2009560 ** get_address_of__eventRaiser_8() { return &____eventRaiser_8; }
	inline void set__eventRaiser_8(EventRaiser_t2009560 * value)
	{
		____eventRaiser_8 = value;
		Il2CppCodeGenWriteBarrier(&____eventRaiser_8, value);
	}

	inline static int32_t get_offset_of__operationLogger_9() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____operationLogger_9)); }
	inline LogWrapper_t438307305 * get__operationLogger_9() const { return ____operationLogger_9; }
	inline LogWrapper_t438307305 ** get_address_of__operationLogger_9() { return &____operationLogger_9; }
	inline void set__operationLogger_9(LogWrapper_t438307305 * value)
	{
		____operationLogger_9 = value;
		Il2CppCodeGenWriteBarrier(&____operationLogger_9, value);
	}

	inline static int32_t get_offset_of__repoInfo_10() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____repoInfo_10)); }
	inline RepoInfo_t4079583710 * get__repoInfo_10() const { return ____repoInfo_10; }
	inline RepoInfo_t4079583710 ** get_address_of__repoInfo_10() { return &____repoInfo_10; }
	inline void set__repoInfo_10(RepoInfo_t4079583710 * value)
	{
		____repoInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&____repoInfo_10, value);
	}

	inline static int32_t get_offset_of__serverClock_11() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____serverClock_11)); }
	inline OffsetClock_t3991894683 * get__serverClock_11() const { return ____serverClock_11; }
	inline OffsetClock_t3991894683 ** get_address_of__serverClock_11() { return &____serverClock_11; }
	inline void set__serverClock_11(OffsetClock_t3991894683 * value)
	{
		____serverClock_11 = value;
		Il2CppCodeGenWriteBarrier(&____serverClock_11, value);
	}

	inline static int32_t get_offset_of__transactionLogger_12() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____transactionLogger_12)); }
	inline LogWrapper_t438307305 * get__transactionLogger_12() const { return ____transactionLogger_12; }
	inline LogWrapper_t438307305 ** get_address_of__transactionLogger_12() { return &____transactionLogger_12; }
	inline void set__transactionLogger_12(LogWrapper_t438307305 * value)
	{
		____transactionLogger_12 = value;
		Il2CppCodeGenWriteBarrier(&____transactionLogger_12, value);
	}

	inline static int32_t get_offset_of__hijackHash_13() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____hijackHash_13)); }
	inline bool get__hijackHash_13() const { return ____hijackHash_13; }
	inline bool* get_address_of__hijackHash_13() { return &____hijackHash_13; }
	inline void set__hijackHash_13(bool value)
	{
		____hijackHash_13 = value;
	}

	inline static int32_t get_offset_of__infoData_14() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____infoData_14)); }
	inline SnapshotHolder_t2504102480 * get__infoData_14() const { return ____infoData_14; }
	inline SnapshotHolder_t2504102480 ** get_address_of__infoData_14() { return &____infoData_14; }
	inline void set__infoData_14(SnapshotHolder_t2504102480 * value)
	{
		____infoData_14 = value;
		Il2CppCodeGenWriteBarrier(&____infoData_14, value);
	}

	inline static int32_t get_offset_of__infoSyncTree_15() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____infoSyncTree_15)); }
	inline SyncTree_t528142079 * get__infoSyncTree_15() const { return ____infoSyncTree_15; }
	inline SyncTree_t528142079 ** get_address_of__infoSyncTree_15() { return &____infoSyncTree_15; }
	inline void set__infoSyncTree_15(SyncTree_t528142079 * value)
	{
		____infoSyncTree_15 = value;
		Il2CppCodeGenWriteBarrier(&____infoSyncTree_15, value);
	}

	inline static int32_t get_offset_of__loggedTransactionPersistenceWarning_16() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____loggedTransactionPersistenceWarning_16)); }
	inline bool get__loggedTransactionPersistenceWarning_16() const { return ____loggedTransactionPersistenceWarning_16; }
	inline bool* get_address_of__loggedTransactionPersistenceWarning_16() { return &____loggedTransactionPersistenceWarning_16; }
	inline void set__loggedTransactionPersistenceWarning_16(bool value)
	{
		____loggedTransactionPersistenceWarning_16 = value;
	}

	inline static int32_t get_offset_of__nextWriteId_17() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____nextWriteId_17)); }
	inline int64_t get__nextWriteId_17() const { return ____nextWriteId_17; }
	inline int64_t* get_address_of__nextWriteId_17() { return &____nextWriteId_17; }
	inline void set__nextWriteId_17(int64_t value)
	{
		____nextWriteId_17 = value;
	}

	inline static int32_t get_offset_of__onDisconnectTree_18() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____onDisconnectTree_18)); }
	inline SparseSnapshotTree_t504080338 * get__onDisconnectTree_18() const { return ____onDisconnectTree_18; }
	inline SparseSnapshotTree_t504080338 ** get_address_of__onDisconnectTree_18() { return &____onDisconnectTree_18; }
	inline void set__onDisconnectTree_18(SparseSnapshotTree_t504080338 * value)
	{
		____onDisconnectTree_18 = value;
		Il2CppCodeGenWriteBarrier(&____onDisconnectTree_18, value);
	}

	inline static int32_t get_offset_of__serverSyncTree_19() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____serverSyncTree_19)); }
	inline SyncTree_t528142079 * get__serverSyncTree_19() const { return ____serverSyncTree_19; }
	inline SyncTree_t528142079 ** get_address_of__serverSyncTree_19() { return &____serverSyncTree_19; }
	inline void set__serverSyncTree_19(SyncTree_t528142079 * value)
	{
		____serverSyncTree_19 = value;
		Il2CppCodeGenWriteBarrier(&____serverSyncTree_19, value);
	}

	inline static int32_t get_offset_of__transactionOrder_20() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____transactionOrder_20)); }
	inline int64_t get__transactionOrder_20() const { return ____transactionOrder_20; }
	inline int64_t* get_address_of__transactionOrder_20() { return &____transactionOrder_20; }
	inline void set__transactionOrder_20(int64_t value)
	{
		____transactionOrder_20 = value;
	}

	inline static int32_t get_offset_of__transactionQueueTree_21() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ____transactionQueueTree_21)); }
	inline Tree_1_t3109747774 * get__transactionQueueTree_21() const { return ____transactionQueueTree_21; }
	inline Tree_1_t3109747774 ** get_address_of__transactionQueueTree_21() { return &____transactionQueueTree_21; }
	inline void set__transactionQueueTree_21(Tree_1_t3109747774 * value)
	{
		____transactionQueueTree_21 = value;
		Il2CppCodeGenWriteBarrier(&____transactionQueueTree_21, value);
	}

	inline static int32_t get_offset_of_DataUpdateCount_22() { return static_cast<int32_t>(offsetof(Repo_t1244308462, ___DataUpdateCount_22)); }
	inline int64_t get_DataUpdateCount_22() const { return ___DataUpdateCount_22; }
	inline int64_t* get_address_of_DataUpdateCount_22() { return &___DataUpdateCount_22; }
	inline void set_DataUpdateCount_22(int64_t value)
	{
		___DataUpdateCount_22 = value;
	}
};

struct Repo_t1244308462_StaticFields
{
public:
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.Core.Repo::<>f__am$cache0
	EventHandler_1_t3816151702 * ___U3CU3Ef__amU24cache0_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_23() { return static_cast<int32_t>(offsetof(Repo_t1244308462_StaticFields, ___U3CU3Ef__amU24cache0_23)); }
	inline EventHandler_1_t3816151702 * get_U3CU3Ef__amU24cache0_23() const { return ___U3CU3Ef__amU24cache0_23; }
	inline EventHandler_1_t3816151702 ** get_address_of_U3CU3Ef__amU24cache0_23() { return &___U3CU3Ef__amU24cache0_23; }
	inline void set_U3CU3Ef__amU24cache0_23(EventHandler_1_t3816151702 * value)
	{
		___U3CU3Ef__amU24cache0_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
