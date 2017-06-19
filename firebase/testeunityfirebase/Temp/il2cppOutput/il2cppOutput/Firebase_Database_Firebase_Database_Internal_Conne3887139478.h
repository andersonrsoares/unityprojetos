#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.TubeSock.WebSocketException
struct WebSocketException_t780773228;
// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock
struct WsClientTubesock_t1111414532;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock/Runnable86
struct  Runnable86_t3887139478  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.TubeSock.WebSocketException Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock/Runnable86::_e
	WebSocketException_t780773228 * ____e_0;
	// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock/Runnable86::_enclosing
	WsClientTubesock_t1111414532 * ____enclosing_1;

public:
	inline static int32_t get_offset_of__e_0() { return static_cast<int32_t>(offsetof(Runnable86_t3887139478, ____e_0)); }
	inline WebSocketException_t780773228 * get__e_0() const { return ____e_0; }
	inline WebSocketException_t780773228 ** get_address_of__e_0() { return &____e_0; }
	inline void set__e_0(WebSocketException_t780773228 * value)
	{
		____e_0 = value;
		Il2CppCodeGenWriteBarrier(&____e_0, value);
	}

	inline static int32_t get_offset_of__enclosing_1() { return static_cast<int32_t>(offsetof(Runnable86_t3887139478, ____enclosing_1)); }
	inline WsClientTubesock_t1111414532 * get__enclosing_1() const { return ____enclosing_1; }
	inline WsClientTubesock_t1111414532 ** get_address_of__enclosing_1() { return &____enclosing_1; }
	inline void set__enclosing_1(WsClientTubesock_t1111414532 * value)
	{
		____enclosing_1 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
