#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Core.View.QuerySpec>
struct ICollection_1_t1329634016;
// Firebase.Database.Internal.Core.SyncTree/IListenProvider
struct IListenProvider_t493868681;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Firebase.Database.Internal.Core.WriteTree
struct WriteTree_t736318673;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.Tag>
struct IDictionary_2_t1307269735;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Tag,Firebase.Database.Internal.Core.View.QuerySpec>
struct IDictionary_2_t2448576677;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint>
struct ImmutableTree_1_t1000466367;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree
struct  SyncTree_t528142079  : public Il2CppObject
{
public:
	// System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Core.View.QuerySpec> Firebase.Database.Internal.Core.SyncTree::_keepSyncedQueries
	Il2CppObject* ____keepSyncedQueries_1;
	// Firebase.Database.Internal.Core.SyncTree/IListenProvider Firebase.Database.Internal.Core.SyncTree::_listenProvider
	Il2CppObject * ____listenProvider_2;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.SyncTree::_logger
	LogWrapper_t438307305 * ____logger_3;
	// Firebase.Database.Internal.Core.WriteTree Firebase.Database.Internal.Core.SyncTree::_pendingWriteTree
	WriteTree_t736318673 * ____pendingWriteTree_4;
	// Firebase.Database.Internal.Core.Persistence.IPersistenceManager Firebase.Database.Internal.Core.SyncTree::_persistenceManager
	Il2CppObject * ____persistenceManager_5;
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.View.QuerySpec,Firebase.Database.Internal.Core.Tag> Firebase.Database.Internal.Core.SyncTree::_queryToTagMap
	Il2CppObject* ____queryToTagMap_6;
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.Tag,Firebase.Database.Internal.Core.View.QuerySpec> Firebase.Database.Internal.Core.SyncTree::_tagToQueryMap
	Il2CppObject* ____tagToQueryMap_7;
	// System.Int64 Firebase.Database.Internal.Core.SyncTree::_nextQueryTag
	int64_t ____nextQueryTag_8;
	// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Core.SyncPoint> Firebase.Database.Internal.Core.SyncTree::_syncPointTree
	ImmutableTree_1_t1000466367 * ____syncPointTree_9;

public:
	inline static int32_t get_offset_of__keepSyncedQueries_1() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____keepSyncedQueries_1)); }
	inline Il2CppObject* get__keepSyncedQueries_1() const { return ____keepSyncedQueries_1; }
	inline Il2CppObject** get_address_of__keepSyncedQueries_1() { return &____keepSyncedQueries_1; }
	inline void set__keepSyncedQueries_1(Il2CppObject* value)
	{
		____keepSyncedQueries_1 = value;
		Il2CppCodeGenWriteBarrier(&____keepSyncedQueries_1, value);
	}

	inline static int32_t get_offset_of__listenProvider_2() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____listenProvider_2)); }
	inline Il2CppObject * get__listenProvider_2() const { return ____listenProvider_2; }
	inline Il2CppObject ** get_address_of__listenProvider_2() { return &____listenProvider_2; }
	inline void set__listenProvider_2(Il2CppObject * value)
	{
		____listenProvider_2 = value;
		Il2CppCodeGenWriteBarrier(&____listenProvider_2, value);
	}

	inline static int32_t get_offset_of__logger_3() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____logger_3)); }
	inline LogWrapper_t438307305 * get__logger_3() const { return ____logger_3; }
	inline LogWrapper_t438307305 ** get_address_of__logger_3() { return &____logger_3; }
	inline void set__logger_3(LogWrapper_t438307305 * value)
	{
		____logger_3 = value;
		Il2CppCodeGenWriteBarrier(&____logger_3, value);
	}

	inline static int32_t get_offset_of__pendingWriteTree_4() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____pendingWriteTree_4)); }
	inline WriteTree_t736318673 * get__pendingWriteTree_4() const { return ____pendingWriteTree_4; }
	inline WriteTree_t736318673 ** get_address_of__pendingWriteTree_4() { return &____pendingWriteTree_4; }
	inline void set__pendingWriteTree_4(WriteTree_t736318673 * value)
	{
		____pendingWriteTree_4 = value;
		Il2CppCodeGenWriteBarrier(&____pendingWriteTree_4, value);
	}

	inline static int32_t get_offset_of__persistenceManager_5() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____persistenceManager_5)); }
	inline Il2CppObject * get__persistenceManager_5() const { return ____persistenceManager_5; }
	inline Il2CppObject ** get_address_of__persistenceManager_5() { return &____persistenceManager_5; }
	inline void set__persistenceManager_5(Il2CppObject * value)
	{
		____persistenceManager_5 = value;
		Il2CppCodeGenWriteBarrier(&____persistenceManager_5, value);
	}

	inline static int32_t get_offset_of__queryToTagMap_6() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____queryToTagMap_6)); }
	inline Il2CppObject* get__queryToTagMap_6() const { return ____queryToTagMap_6; }
	inline Il2CppObject** get_address_of__queryToTagMap_6() { return &____queryToTagMap_6; }
	inline void set__queryToTagMap_6(Il2CppObject* value)
	{
		____queryToTagMap_6 = value;
		Il2CppCodeGenWriteBarrier(&____queryToTagMap_6, value);
	}

	inline static int32_t get_offset_of__tagToQueryMap_7() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____tagToQueryMap_7)); }
	inline Il2CppObject* get__tagToQueryMap_7() const { return ____tagToQueryMap_7; }
	inline Il2CppObject** get_address_of__tagToQueryMap_7() { return &____tagToQueryMap_7; }
	inline void set__tagToQueryMap_7(Il2CppObject* value)
	{
		____tagToQueryMap_7 = value;
		Il2CppCodeGenWriteBarrier(&____tagToQueryMap_7, value);
	}

	inline static int32_t get_offset_of__nextQueryTag_8() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____nextQueryTag_8)); }
	inline int64_t get__nextQueryTag_8() const { return ____nextQueryTag_8; }
	inline int64_t* get_address_of__nextQueryTag_8() { return &____nextQueryTag_8; }
	inline void set__nextQueryTag_8(int64_t value)
	{
		____nextQueryTag_8 = value;
	}

	inline static int32_t get_offset_of__syncPointTree_9() { return static_cast<int32_t>(offsetof(SyncTree_t528142079, ____syncPointTree_9)); }
	inline ImmutableTree_1_t1000466367 * get__syncPointTree_9() const { return ____syncPointTree_9; }
	inline ImmutableTree_1_t1000466367 ** get_address_of__syncPointTree_9() { return &____syncPointTree_9; }
	inline void set__syncPointTree_9(ImmutableTree_1_t1000466367 * value)
	{
		____syncPointTree_9 = value;
		Il2CppCodeGenWriteBarrier(&____syncPointTree_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
