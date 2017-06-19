#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.WebsocketConnection/IDelegate
struct IDelegate_t529353265;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Firebase.Database.Internal.Connection.WebsocketConnection/IWsClient
struct IWsClient_t3032876639;
// Google.Sharpen.Future`1<System.Object>
struct Future_1_t4121840302;
// Firebase.Database.Internal.Connection.Util.StringListReader
struct StringListReader_t1703758004;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.WebsocketConnection
struct  WebsocketConnection_t1372375221  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.ConnectionContext Firebase.Database.Internal.Connection.WebsocketConnection::_connectionContext
	ConnectionContext_t671917741 * ____connectionContext_1;
	// Firebase.Database.Internal.Connection.WebsocketConnection/IDelegate Firebase.Database.Internal.Connection.WebsocketConnection::_delegate
	Il2CppObject * ____delegate_2;
	// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Connection.WebsocketConnection::_executorService
	ScheduledThreadPoolExecutor_t2537379786 * ____executorService_3;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Connection.WebsocketConnection::_logger
	LogWrapper_t438307305 * ____logger_4;
	// Firebase.Database.Internal.Connection.WebsocketConnection/IWsClient Firebase.Database.Internal.Connection.WebsocketConnection::_conn
	Il2CppObject * ____conn_5;
	// Google.Sharpen.Future`1<System.Object> Firebase.Database.Internal.Connection.WebsocketConnection::_connectTimeout
	Il2CppObject* ____connectTimeout_6;
	// System.Boolean Firebase.Database.Internal.Connection.WebsocketConnection::_everConnected
	bool ____everConnected_7;
	// Firebase.Database.Internal.Connection.Util.StringListReader Firebase.Database.Internal.Connection.WebsocketConnection::_frameReader
	StringListReader_t1703758004 * ____frameReader_8;
	// System.Boolean Firebase.Database.Internal.Connection.WebsocketConnection::_isClosed
	bool ____isClosed_9;
	// Google.Sharpen.Future`1<System.Object> Firebase.Database.Internal.Connection.WebsocketConnection::_keepAlive
	Il2CppObject* ____keepAlive_10;
	// System.Int64 Firebase.Database.Internal.Connection.WebsocketConnection::_totalFrames
	int64_t ____totalFrames_11;

public:
	inline static int32_t get_offset_of__connectionContext_1() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____connectionContext_1)); }
	inline ConnectionContext_t671917741 * get__connectionContext_1() const { return ____connectionContext_1; }
	inline ConnectionContext_t671917741 ** get_address_of__connectionContext_1() { return &____connectionContext_1; }
	inline void set__connectionContext_1(ConnectionContext_t671917741 * value)
	{
		____connectionContext_1 = value;
		Il2CppCodeGenWriteBarrier(&____connectionContext_1, value);
	}

	inline static int32_t get_offset_of__delegate_2() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____delegate_2)); }
	inline Il2CppObject * get__delegate_2() const { return ____delegate_2; }
	inline Il2CppObject ** get_address_of__delegate_2() { return &____delegate_2; }
	inline void set__delegate_2(Il2CppObject * value)
	{
		____delegate_2 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_2, value);
	}

	inline static int32_t get_offset_of__executorService_3() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____executorService_3)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get__executorService_3() const { return ____executorService_3; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of__executorService_3() { return &____executorService_3; }
	inline void set__executorService_3(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		____executorService_3 = value;
		Il2CppCodeGenWriteBarrier(&____executorService_3, value);
	}

	inline static int32_t get_offset_of__logger_4() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____logger_4)); }
	inline LogWrapper_t438307305 * get__logger_4() const { return ____logger_4; }
	inline LogWrapper_t438307305 ** get_address_of__logger_4() { return &____logger_4; }
	inline void set__logger_4(LogWrapper_t438307305 * value)
	{
		____logger_4 = value;
		Il2CppCodeGenWriteBarrier(&____logger_4, value);
	}

	inline static int32_t get_offset_of__conn_5() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____conn_5)); }
	inline Il2CppObject * get__conn_5() const { return ____conn_5; }
	inline Il2CppObject ** get_address_of__conn_5() { return &____conn_5; }
	inline void set__conn_5(Il2CppObject * value)
	{
		____conn_5 = value;
		Il2CppCodeGenWriteBarrier(&____conn_5, value);
	}

	inline static int32_t get_offset_of__connectTimeout_6() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____connectTimeout_6)); }
	inline Il2CppObject* get__connectTimeout_6() const { return ____connectTimeout_6; }
	inline Il2CppObject** get_address_of__connectTimeout_6() { return &____connectTimeout_6; }
	inline void set__connectTimeout_6(Il2CppObject* value)
	{
		____connectTimeout_6 = value;
		Il2CppCodeGenWriteBarrier(&____connectTimeout_6, value);
	}

	inline static int32_t get_offset_of__everConnected_7() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____everConnected_7)); }
	inline bool get__everConnected_7() const { return ____everConnected_7; }
	inline bool* get_address_of__everConnected_7() { return &____everConnected_7; }
	inline void set__everConnected_7(bool value)
	{
		____everConnected_7 = value;
	}

	inline static int32_t get_offset_of__frameReader_8() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____frameReader_8)); }
	inline StringListReader_t1703758004 * get__frameReader_8() const { return ____frameReader_8; }
	inline StringListReader_t1703758004 ** get_address_of__frameReader_8() { return &____frameReader_8; }
	inline void set__frameReader_8(StringListReader_t1703758004 * value)
	{
		____frameReader_8 = value;
		Il2CppCodeGenWriteBarrier(&____frameReader_8, value);
	}

	inline static int32_t get_offset_of__isClosed_9() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____isClosed_9)); }
	inline bool get__isClosed_9() const { return ____isClosed_9; }
	inline bool* get_address_of__isClosed_9() { return &____isClosed_9; }
	inline void set__isClosed_9(bool value)
	{
		____isClosed_9 = value;
	}

	inline static int32_t get_offset_of__keepAlive_10() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____keepAlive_10)); }
	inline Il2CppObject* get__keepAlive_10() const { return ____keepAlive_10; }
	inline Il2CppObject** get_address_of__keepAlive_10() { return &____keepAlive_10; }
	inline void set__keepAlive_10(Il2CppObject* value)
	{
		____keepAlive_10 = value;
		Il2CppCodeGenWriteBarrier(&____keepAlive_10, value);
	}

	inline static int32_t get_offset_of__totalFrames_11() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221, ____totalFrames_11)); }
	inline int64_t get__totalFrames_11() const { return ____totalFrames_11; }
	inline int64_t* get_address_of__totalFrames_11() { return &____totalFrames_11; }
	inline void set__totalFrames_11(int64_t value)
	{
		____totalFrames_11 = value;
	}
};

struct WebsocketConnection_t1372375221_StaticFields
{
public:
	// System.Int64 Firebase.Database.Internal.Connection.WebsocketConnection::_connectionId
	int64_t ____connectionId_0;

public:
	inline static int32_t get_offset_of__connectionId_0() { return static_cast<int32_t>(offsetof(WebsocketConnection_t1372375221_StaticFields, ____connectionId_0)); }
	inline int64_t get__connectionId_0() const { return ____connectionId_0; }
	inline int64_t* get_address_of__connectionId_0() { return &____connectionId_0; }
	inline void set__connectionId_0(int64_t value)
	{
		____connectionId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
