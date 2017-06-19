#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Conne1904999661.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne3450828338.h"

// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider
struct ConnectionAuthTokenProvider_t3406713242;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.PersistentConnection/IDelegate
struct IDelegate_t3654812693;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec,Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen>
struct IDictionary_2_t4232093055;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect>
struct IList_1_t3558703954;
// System.Collections.Generic.IDictionary`2<System.Int64,Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut>
struct IDictionary_2_t4058385543;
// System.Collections.Generic.IDictionary`2<System.Int64,Firebase.Database.Internal.Connection.PersistentConnectionImpl/IConnectionRequestCallback>
struct IDictionary_2_t1224395369;
// Firebase.Database.Internal.Connection.Util.RetryHelper
struct RetryHelper_t2341283196;
// System.String
struct String_t;
// Google.Sharpen.Future`1<System.Object>
struct Future_1_t4121840302;
// Firebase.Database.Internal.Connection.Connection
struct Connection_t2339493528;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl
struct  PersistentConnectionImpl_t1099507887  : public PersistentConnection_t1904999661
{
public:
	// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider Firebase.Database.Internal.Connection.PersistentConnectionImpl::_authTokenProvider
	ConnectionAuthTokenProvider_t3406713242 * ____authTokenProvider_1;
	// Firebase.Database.Internal.Connection.ConnectionContext Firebase.Database.Internal.Connection.PersistentConnectionImpl::_context
	ConnectionContext_t671917741 * ____context_2;
	// Firebase.Database.Internal.Connection.PersistentConnection/IDelegate Firebase.Database.Internal.Connection.PersistentConnectionImpl::_delegate
	Il2CppObject * ____delegate_3;
	// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Connection.PersistentConnectionImpl::_executorService
	ScheduledThreadPoolExecutor_t2537379786 * ____executorService_4;
	// Firebase.Database.Internal.Connection.HostInfo Firebase.Database.Internal.Connection.PersistentConnectionImpl::_hostInfo
	HostInfo_t2292118836 * ____hostInfo_5;
	// System.Collections.Generic.HashSet`1<System.String> Firebase.Database.Internal.Connection.PersistentConnectionImpl::_interruptReasons
	HashSet_1_t362681087 * ____interruptReasons_6;
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec,Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen> Firebase.Database.Internal.Connection.PersistentConnectionImpl::_listens
	Il2CppObject* ____listens_7;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Connection.PersistentConnectionImpl::_logger
	LogWrapper_t438307305 * ____logger_8;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect> Firebase.Database.Internal.Connection.PersistentConnectionImpl::_onDisconnectRequestQueue
	Il2CppObject* ____onDisconnectRequestQueue_9;
	// System.Collections.Generic.IDictionary`2<System.Int64,Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut> Firebase.Database.Internal.Connection.PersistentConnectionImpl::_outstandingPuts
	Il2CppObject* ____outstandingPuts_10;
	// System.Collections.Generic.IDictionary`2<System.Int64,Firebase.Database.Internal.Connection.PersistentConnectionImpl/IConnectionRequestCallback> Firebase.Database.Internal.Connection.PersistentConnectionImpl::_requestCbHash
	Il2CppObject* ____requestCbHash_11;
	// Firebase.Database.Internal.Connection.Util.RetryHelper Firebase.Database.Internal.Connection.PersistentConnectionImpl::_retryHelper
	RetryHelper_t2341283196 * ____retryHelper_12;
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl::_authToken
	String_t* ____authToken_13;
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl::_cachedHost
	String_t* ____cachedHost_14;
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionState Firebase.Database.Internal.Connection.PersistentConnectionImpl::_connectionState
	int32_t ____connectionState_15;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_currentGetTokenAttempt
	int64_t ____currentGetTokenAttempt_16;
	// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::_firstConnection
	bool ____firstConnection_17;
	// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::_forceAuthTokenRefresh
	bool ____forceAuthTokenRefresh_18;
	// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::_hasOnDisconnects
	bool ____hasOnDisconnects_19;
	// Google.Sharpen.Future`1<System.Object> Firebase.Database.Internal.Connection.PersistentConnectionImpl::_inactivityTimer
	Il2CppObject* ____inactivityTimer_20;
	// System.Int32 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_invalidAuthTokenCount
	int32_t ____invalidAuthTokenCount_21;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_lastConnectionEstablishedTime
	int64_t ____lastConnectionEstablishedTime_22;
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl::_lastSessionId
	String_t* ____lastSessionId_23;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_lastWriteTimestamp
	int64_t ____lastWriteTimestamp_24;
	// Firebase.Database.Internal.Connection.Connection Firebase.Database.Internal.Connection.PersistentConnectionImpl::_realtime
	Connection_t2339493528 * ____realtime_25;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_requestCounter
	int64_t ____requestCounter_26;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_writeCounter
	int64_t ____writeCounter_27;

public:
	inline static int32_t get_offset_of__authTokenProvider_1() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____authTokenProvider_1)); }
	inline ConnectionAuthTokenProvider_t3406713242 * get__authTokenProvider_1() const { return ____authTokenProvider_1; }
	inline ConnectionAuthTokenProvider_t3406713242 ** get_address_of__authTokenProvider_1() { return &____authTokenProvider_1; }
	inline void set__authTokenProvider_1(ConnectionAuthTokenProvider_t3406713242 * value)
	{
		____authTokenProvider_1 = value;
		Il2CppCodeGenWriteBarrier(&____authTokenProvider_1, value);
	}

	inline static int32_t get_offset_of__context_2() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____context_2)); }
	inline ConnectionContext_t671917741 * get__context_2() const { return ____context_2; }
	inline ConnectionContext_t671917741 ** get_address_of__context_2() { return &____context_2; }
	inline void set__context_2(ConnectionContext_t671917741 * value)
	{
		____context_2 = value;
		Il2CppCodeGenWriteBarrier(&____context_2, value);
	}

	inline static int32_t get_offset_of__delegate_3() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____delegate_3)); }
	inline Il2CppObject * get__delegate_3() const { return ____delegate_3; }
	inline Il2CppObject ** get_address_of__delegate_3() { return &____delegate_3; }
	inline void set__delegate_3(Il2CppObject * value)
	{
		____delegate_3 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_3, value);
	}

	inline static int32_t get_offset_of__executorService_4() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____executorService_4)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get__executorService_4() const { return ____executorService_4; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of__executorService_4() { return &____executorService_4; }
	inline void set__executorService_4(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		____executorService_4 = value;
		Il2CppCodeGenWriteBarrier(&____executorService_4, value);
	}

	inline static int32_t get_offset_of__hostInfo_5() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____hostInfo_5)); }
	inline HostInfo_t2292118836 * get__hostInfo_5() const { return ____hostInfo_5; }
	inline HostInfo_t2292118836 ** get_address_of__hostInfo_5() { return &____hostInfo_5; }
	inline void set__hostInfo_5(HostInfo_t2292118836 * value)
	{
		____hostInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&____hostInfo_5, value);
	}

	inline static int32_t get_offset_of__interruptReasons_6() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____interruptReasons_6)); }
	inline HashSet_1_t362681087 * get__interruptReasons_6() const { return ____interruptReasons_6; }
	inline HashSet_1_t362681087 ** get_address_of__interruptReasons_6() { return &____interruptReasons_6; }
	inline void set__interruptReasons_6(HashSet_1_t362681087 * value)
	{
		____interruptReasons_6 = value;
		Il2CppCodeGenWriteBarrier(&____interruptReasons_6, value);
	}

	inline static int32_t get_offset_of__listens_7() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____listens_7)); }
	inline Il2CppObject* get__listens_7() const { return ____listens_7; }
	inline Il2CppObject** get_address_of__listens_7() { return &____listens_7; }
	inline void set__listens_7(Il2CppObject* value)
	{
		____listens_7 = value;
		Il2CppCodeGenWriteBarrier(&____listens_7, value);
	}

	inline static int32_t get_offset_of__logger_8() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____logger_8)); }
	inline LogWrapper_t438307305 * get__logger_8() const { return ____logger_8; }
	inline LogWrapper_t438307305 ** get_address_of__logger_8() { return &____logger_8; }
	inline void set__logger_8(LogWrapper_t438307305 * value)
	{
		____logger_8 = value;
		Il2CppCodeGenWriteBarrier(&____logger_8, value);
	}

	inline static int32_t get_offset_of__onDisconnectRequestQueue_9() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____onDisconnectRequestQueue_9)); }
	inline Il2CppObject* get__onDisconnectRequestQueue_9() const { return ____onDisconnectRequestQueue_9; }
	inline Il2CppObject** get_address_of__onDisconnectRequestQueue_9() { return &____onDisconnectRequestQueue_9; }
	inline void set__onDisconnectRequestQueue_9(Il2CppObject* value)
	{
		____onDisconnectRequestQueue_9 = value;
		Il2CppCodeGenWriteBarrier(&____onDisconnectRequestQueue_9, value);
	}

	inline static int32_t get_offset_of__outstandingPuts_10() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____outstandingPuts_10)); }
	inline Il2CppObject* get__outstandingPuts_10() const { return ____outstandingPuts_10; }
	inline Il2CppObject** get_address_of__outstandingPuts_10() { return &____outstandingPuts_10; }
	inline void set__outstandingPuts_10(Il2CppObject* value)
	{
		____outstandingPuts_10 = value;
		Il2CppCodeGenWriteBarrier(&____outstandingPuts_10, value);
	}

	inline static int32_t get_offset_of__requestCbHash_11() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____requestCbHash_11)); }
	inline Il2CppObject* get__requestCbHash_11() const { return ____requestCbHash_11; }
	inline Il2CppObject** get_address_of__requestCbHash_11() { return &____requestCbHash_11; }
	inline void set__requestCbHash_11(Il2CppObject* value)
	{
		____requestCbHash_11 = value;
		Il2CppCodeGenWriteBarrier(&____requestCbHash_11, value);
	}

	inline static int32_t get_offset_of__retryHelper_12() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____retryHelper_12)); }
	inline RetryHelper_t2341283196 * get__retryHelper_12() const { return ____retryHelper_12; }
	inline RetryHelper_t2341283196 ** get_address_of__retryHelper_12() { return &____retryHelper_12; }
	inline void set__retryHelper_12(RetryHelper_t2341283196 * value)
	{
		____retryHelper_12 = value;
		Il2CppCodeGenWriteBarrier(&____retryHelper_12, value);
	}

	inline static int32_t get_offset_of__authToken_13() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____authToken_13)); }
	inline String_t* get__authToken_13() const { return ____authToken_13; }
	inline String_t** get_address_of__authToken_13() { return &____authToken_13; }
	inline void set__authToken_13(String_t* value)
	{
		____authToken_13 = value;
		Il2CppCodeGenWriteBarrier(&____authToken_13, value);
	}

	inline static int32_t get_offset_of__cachedHost_14() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____cachedHost_14)); }
	inline String_t* get__cachedHost_14() const { return ____cachedHost_14; }
	inline String_t** get_address_of__cachedHost_14() { return &____cachedHost_14; }
	inline void set__cachedHost_14(String_t* value)
	{
		____cachedHost_14 = value;
		Il2CppCodeGenWriteBarrier(&____cachedHost_14, value);
	}

	inline static int32_t get_offset_of__connectionState_15() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____connectionState_15)); }
	inline int32_t get__connectionState_15() const { return ____connectionState_15; }
	inline int32_t* get_address_of__connectionState_15() { return &____connectionState_15; }
	inline void set__connectionState_15(int32_t value)
	{
		____connectionState_15 = value;
	}

	inline static int32_t get_offset_of__currentGetTokenAttempt_16() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____currentGetTokenAttempt_16)); }
	inline int64_t get__currentGetTokenAttempt_16() const { return ____currentGetTokenAttempt_16; }
	inline int64_t* get_address_of__currentGetTokenAttempt_16() { return &____currentGetTokenAttempt_16; }
	inline void set__currentGetTokenAttempt_16(int64_t value)
	{
		____currentGetTokenAttempt_16 = value;
	}

	inline static int32_t get_offset_of__firstConnection_17() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____firstConnection_17)); }
	inline bool get__firstConnection_17() const { return ____firstConnection_17; }
	inline bool* get_address_of__firstConnection_17() { return &____firstConnection_17; }
	inline void set__firstConnection_17(bool value)
	{
		____firstConnection_17 = value;
	}

	inline static int32_t get_offset_of__forceAuthTokenRefresh_18() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____forceAuthTokenRefresh_18)); }
	inline bool get__forceAuthTokenRefresh_18() const { return ____forceAuthTokenRefresh_18; }
	inline bool* get_address_of__forceAuthTokenRefresh_18() { return &____forceAuthTokenRefresh_18; }
	inline void set__forceAuthTokenRefresh_18(bool value)
	{
		____forceAuthTokenRefresh_18 = value;
	}

	inline static int32_t get_offset_of__hasOnDisconnects_19() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____hasOnDisconnects_19)); }
	inline bool get__hasOnDisconnects_19() const { return ____hasOnDisconnects_19; }
	inline bool* get_address_of__hasOnDisconnects_19() { return &____hasOnDisconnects_19; }
	inline void set__hasOnDisconnects_19(bool value)
	{
		____hasOnDisconnects_19 = value;
	}

	inline static int32_t get_offset_of__inactivityTimer_20() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____inactivityTimer_20)); }
	inline Il2CppObject* get__inactivityTimer_20() const { return ____inactivityTimer_20; }
	inline Il2CppObject** get_address_of__inactivityTimer_20() { return &____inactivityTimer_20; }
	inline void set__inactivityTimer_20(Il2CppObject* value)
	{
		____inactivityTimer_20 = value;
		Il2CppCodeGenWriteBarrier(&____inactivityTimer_20, value);
	}

	inline static int32_t get_offset_of__invalidAuthTokenCount_21() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____invalidAuthTokenCount_21)); }
	inline int32_t get__invalidAuthTokenCount_21() const { return ____invalidAuthTokenCount_21; }
	inline int32_t* get_address_of__invalidAuthTokenCount_21() { return &____invalidAuthTokenCount_21; }
	inline void set__invalidAuthTokenCount_21(int32_t value)
	{
		____invalidAuthTokenCount_21 = value;
	}

	inline static int32_t get_offset_of__lastConnectionEstablishedTime_22() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____lastConnectionEstablishedTime_22)); }
	inline int64_t get__lastConnectionEstablishedTime_22() const { return ____lastConnectionEstablishedTime_22; }
	inline int64_t* get_address_of__lastConnectionEstablishedTime_22() { return &____lastConnectionEstablishedTime_22; }
	inline void set__lastConnectionEstablishedTime_22(int64_t value)
	{
		____lastConnectionEstablishedTime_22 = value;
	}

	inline static int32_t get_offset_of__lastSessionId_23() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____lastSessionId_23)); }
	inline String_t* get__lastSessionId_23() const { return ____lastSessionId_23; }
	inline String_t** get_address_of__lastSessionId_23() { return &____lastSessionId_23; }
	inline void set__lastSessionId_23(String_t* value)
	{
		____lastSessionId_23 = value;
		Il2CppCodeGenWriteBarrier(&____lastSessionId_23, value);
	}

	inline static int32_t get_offset_of__lastWriteTimestamp_24() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____lastWriteTimestamp_24)); }
	inline int64_t get__lastWriteTimestamp_24() const { return ____lastWriteTimestamp_24; }
	inline int64_t* get_address_of__lastWriteTimestamp_24() { return &____lastWriteTimestamp_24; }
	inline void set__lastWriteTimestamp_24(int64_t value)
	{
		____lastWriteTimestamp_24 = value;
	}

	inline static int32_t get_offset_of__realtime_25() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____realtime_25)); }
	inline Connection_t2339493528 * get__realtime_25() const { return ____realtime_25; }
	inline Connection_t2339493528 ** get_address_of__realtime_25() { return &____realtime_25; }
	inline void set__realtime_25(Connection_t2339493528 * value)
	{
		____realtime_25 = value;
		Il2CppCodeGenWriteBarrier(&____realtime_25, value);
	}

	inline static int32_t get_offset_of__requestCounter_26() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____requestCounter_26)); }
	inline int64_t get__requestCounter_26() const { return ____requestCounter_26; }
	inline int64_t* get_address_of__requestCounter_26() { return &____requestCounter_26; }
	inline void set__requestCounter_26(int64_t value)
	{
		____requestCounter_26 = value;
	}

	inline static int32_t get_offset_of__writeCounter_27() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887, ____writeCounter_27)); }
	inline int64_t get__writeCounter_27() const { return ____writeCounter_27; }
	inline int64_t* get_address_of__writeCounter_27() { return &____writeCounter_27; }
	inline void set__writeCounter_27(int64_t value)
	{
		____writeCounter_27 = value;
	}
};

struct PersistentConnectionImpl_t1099507887_StaticFields
{
public:
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::_connectionIds
	int64_t ____connectionIds_0;

public:
	inline static int32_t get_offset_of__connectionIds_0() { return static_cast<int32_t>(offsetof(PersistentConnectionImpl_t1099507887_StaticFields, ____connectionIds_0)); }
	inline int64_t get__connectionIds_0() const { return ____connectionIds_0; }
	inline int64_t* get_address_of__connectionIds_0() { return &____connectionIds_0; }
	inline void set__connectionIds_0(int64_t value)
	{
		____connectionIds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
