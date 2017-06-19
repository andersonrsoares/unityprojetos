#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.WebsocketConnection
struct WebsocketConnection_t1372375221;
// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock
struct  WsClientTubesock_t1111414532  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.WebsocketConnection Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::_enclosing
	WebsocketConnection_t1372375221 * ____enclosing_0;
	// Firebase.Database.Internal.TubeSock.WebSocket Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::_ws
	WebSocket_t2930208447 * ____ws_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(WsClientTubesock_t1111414532, ____enclosing_0)); }
	inline WebsocketConnection_t1372375221 * get__enclosing_0() const { return ____enclosing_0; }
	inline WebsocketConnection_t1372375221 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(WebsocketConnection_t1372375221 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__ws_1() { return static_cast<int32_t>(offsetof(WsClientTubesock_t1111414532, ____ws_1)); }
	inline WebSocket_t2930208447 * get__ws_1() const { return ____ws_1; }
	inline WebSocket_t2930208447 ** get_address_of__ws_1() { return &____ws_1; }
	inline void set__ws_1(WebSocket_t2930208447 * value)
	{
		____ws_1 = value;
		Il2CppCodeGenWriteBarrier(&____ws_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
