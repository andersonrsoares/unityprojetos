#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne1747391121.h"

// Firebase.Database.Internal.Connection.Connection/IDelegate
struct IDelegate_t2674759336;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Firebase.Database.Internal.Connection.WebsocketConnection
struct WebsocketConnection_t1372375221;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.Connection
struct  Connection_t2339493528  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.Connection/IDelegate Firebase.Database.Internal.Connection.Connection::_delegate
	Il2CppObject * ____delegate_1;
	// Firebase.Database.Internal.Connection.HostInfo Firebase.Database.Internal.Connection.Connection::_hostInfo
	HostInfo_t2292118836 * ____hostInfo_2;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Connection.Connection::_logger
	LogWrapper_t438307305 * ____logger_3;
	// Firebase.Database.Internal.Connection.WebsocketConnection Firebase.Database.Internal.Connection.Connection::_conn
	WebsocketConnection_t1372375221 * ____conn_4;
	// Firebase.Database.Internal.Connection.Connection/State Firebase.Database.Internal.Connection.Connection::_state
	int32_t ____state_5;

public:
	inline static int32_t get_offset_of__delegate_1() { return static_cast<int32_t>(offsetof(Connection_t2339493528, ____delegate_1)); }
	inline Il2CppObject * get__delegate_1() const { return ____delegate_1; }
	inline Il2CppObject ** get_address_of__delegate_1() { return &____delegate_1; }
	inline void set__delegate_1(Il2CppObject * value)
	{
		____delegate_1 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_1, value);
	}

	inline static int32_t get_offset_of__hostInfo_2() { return static_cast<int32_t>(offsetof(Connection_t2339493528, ____hostInfo_2)); }
	inline HostInfo_t2292118836 * get__hostInfo_2() const { return ____hostInfo_2; }
	inline HostInfo_t2292118836 ** get_address_of__hostInfo_2() { return &____hostInfo_2; }
	inline void set__hostInfo_2(HostInfo_t2292118836 * value)
	{
		____hostInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&____hostInfo_2, value);
	}

	inline static int32_t get_offset_of__logger_3() { return static_cast<int32_t>(offsetof(Connection_t2339493528, ____logger_3)); }
	inline LogWrapper_t438307305 * get__logger_3() const { return ____logger_3; }
	inline LogWrapper_t438307305 ** get_address_of__logger_3() { return &____logger_3; }
	inline void set__logger_3(LogWrapper_t438307305 * value)
	{
		____logger_3 = value;
		Il2CppCodeGenWriteBarrier(&____logger_3, value);
	}

	inline static int32_t get_offset_of__conn_4() { return static_cast<int32_t>(offsetof(Connection_t2339493528, ____conn_4)); }
	inline WebsocketConnection_t1372375221 * get__conn_4() const { return ____conn_4; }
	inline WebsocketConnection_t1372375221 ** get_address_of__conn_4() { return &____conn_4; }
	inline void set__conn_4(WebsocketConnection_t1372375221 * value)
	{
		____conn_4 = value;
		Il2CppCodeGenWriteBarrier(&____conn_4, value);
	}

	inline static int32_t get_offset_of__state_5() { return static_cast<int32_t>(offsetof(Connection_t2339493528, ____state_5)); }
	inline int32_t get__state_5() const { return ____state_5; }
	inline int32_t* get_address_of__state_5() { return &____state_5; }
	inline void set__state_5(int32_t value)
	{
		____state_5 = value;
	}
};

struct Connection_t2339493528_StaticFields
{
public:
	// System.Int64 Firebase.Database.Internal.Connection.Connection::_connectionIds
	int64_t ____connectionIds_0;

public:
	inline static int32_t get_offset_of__connectionIds_0() { return static_cast<int32_t>(offsetof(Connection_t2339493528_StaticFields, ____connectionIds_0)); }
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
