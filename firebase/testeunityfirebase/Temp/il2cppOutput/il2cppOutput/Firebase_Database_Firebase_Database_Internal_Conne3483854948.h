#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock
struct WsClientTubesock_t1111414532;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock/Runnable75
struct  Runnable75_t3483854948  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock/Runnable75::_enclosing
	WsClientTubesock_t1111414532 * ____enclosing_0;
	// System.String Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock/Runnable75::_logMessage
	String_t* ____logMessage_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable75_t3483854948, ____enclosing_0)); }
	inline WsClientTubesock_t1111414532 * get__enclosing_0() const { return ____enclosing_0; }
	inline WsClientTubesock_t1111414532 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(WsClientTubesock_t1111414532 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__logMessage_1() { return static_cast<int32_t>(offsetof(Runnable75_t3483854948, ____logMessage_1)); }
	inline String_t* get__logMessage_1() const { return ____logMessage_1; }
	inline String_t** get_address_of__logMessage_1() { return &____logMessage_1; }
	inline void set__logMessage_1(String_t* value)
	{
		____logMessage_1 = value;
		Il2CppCodeGenWriteBarrier(&____logMessage_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
