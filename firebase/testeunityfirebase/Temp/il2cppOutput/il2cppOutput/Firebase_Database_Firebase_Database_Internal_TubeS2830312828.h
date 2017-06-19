#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.TubeSock.WebSocketMessage
struct  WebSocketMessage_t2830312828  : public Il2CppObject
{
public:
	// System.Byte[] Firebase.Database.Internal.TubeSock.WebSocketMessage::_byteMessage
	ByteU5BU5D_t3397334013* ____byteMessage_0;
	// System.Byte Firebase.Database.Internal.TubeSock.WebSocketMessage::_opcode
	uint8_t ____opcode_1;
	// System.String Firebase.Database.Internal.TubeSock.WebSocketMessage::_stringMessage
	String_t* ____stringMessage_2;

public:
	inline static int32_t get_offset_of__byteMessage_0() { return static_cast<int32_t>(offsetof(WebSocketMessage_t2830312828, ____byteMessage_0)); }
	inline ByteU5BU5D_t3397334013* get__byteMessage_0() const { return ____byteMessage_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__byteMessage_0() { return &____byteMessage_0; }
	inline void set__byteMessage_0(ByteU5BU5D_t3397334013* value)
	{
		____byteMessage_0 = value;
		Il2CppCodeGenWriteBarrier(&____byteMessage_0, value);
	}

	inline static int32_t get_offset_of__opcode_1() { return static_cast<int32_t>(offsetof(WebSocketMessage_t2830312828, ____opcode_1)); }
	inline uint8_t get__opcode_1() const { return ____opcode_1; }
	inline uint8_t* get_address_of__opcode_1() { return &____opcode_1; }
	inline void set__opcode_1(uint8_t value)
	{
		____opcode_1 = value;
	}

	inline static int32_t get_offset_of__stringMessage_2() { return static_cast<int32_t>(offsetof(WebSocketMessage_t2830312828, ____stringMessage_2)); }
	inline String_t* get__stringMessage_2() const { return ____stringMessage_2; }
	inline String_t** get_address_of__stringMessage_2() { return &____stringMessage_2; }
	inline void set__stringMessage_2(String_t* value)
	{
		____stringMessage_2 = value;
		Il2CppCodeGenWriteBarrier(&____stringMessage_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
