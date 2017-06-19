#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;
// Firebase.Database.Internal.TubeSock.IWebSocketEventHandler
struct IWebSocketEventHandler_t1069955734;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// Firebase.Database.Internal.TubeSock.MessageBuilderFactory/IBuilder
struct IBuilder_t3782858154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.TubeSock.WebSocketReceiver
struct  WebSocketReceiver_t719632682  : public Il2CppObject
{
public:
	// System.Byte[] Firebase.Database.Internal.TubeSock.WebSocketReceiver::_inputHeader
	ByteU5BU5D_t3397334013* ____inputHeader_0;
	// Firebase.Database.Internal.TubeSock.WebSocket Firebase.Database.Internal.TubeSock.WebSocketReceiver::_websocket
	WebSocket_t2930208447 * ____websocket_1;
	// Firebase.Database.Internal.TubeSock.IWebSocketEventHandler Firebase.Database.Internal.TubeSock.WebSocketReceiver::_eventHandler
	Il2CppObject * ____eventHandler_2;
	// System.IO.BinaryReader Firebase.Database.Internal.TubeSock.WebSocketReceiver::_input
	BinaryReader_t2491843768 * ____input_3;
	// Firebase.Database.Internal.TubeSock.MessageBuilderFactory/IBuilder Firebase.Database.Internal.TubeSock.WebSocketReceiver::_pendingBuilder
	Il2CppObject * ____pendingBuilder_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Firebase.Database.Internal.TubeSock.WebSocketReceiver::_stop
	bool ____stop_5;

public:
	inline static int32_t get_offset_of__inputHeader_0() { return static_cast<int32_t>(offsetof(WebSocketReceiver_t719632682, ____inputHeader_0)); }
	inline ByteU5BU5D_t3397334013* get__inputHeader_0() const { return ____inputHeader_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__inputHeader_0() { return &____inputHeader_0; }
	inline void set__inputHeader_0(ByteU5BU5D_t3397334013* value)
	{
		____inputHeader_0 = value;
		Il2CppCodeGenWriteBarrier(&____inputHeader_0, value);
	}

	inline static int32_t get_offset_of__websocket_1() { return static_cast<int32_t>(offsetof(WebSocketReceiver_t719632682, ____websocket_1)); }
	inline WebSocket_t2930208447 * get__websocket_1() const { return ____websocket_1; }
	inline WebSocket_t2930208447 ** get_address_of__websocket_1() { return &____websocket_1; }
	inline void set__websocket_1(WebSocket_t2930208447 * value)
	{
		____websocket_1 = value;
		Il2CppCodeGenWriteBarrier(&____websocket_1, value);
	}

	inline static int32_t get_offset_of__eventHandler_2() { return static_cast<int32_t>(offsetof(WebSocketReceiver_t719632682, ____eventHandler_2)); }
	inline Il2CppObject * get__eventHandler_2() const { return ____eventHandler_2; }
	inline Il2CppObject ** get_address_of__eventHandler_2() { return &____eventHandler_2; }
	inline void set__eventHandler_2(Il2CppObject * value)
	{
		____eventHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&____eventHandler_2, value);
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(WebSocketReceiver_t719632682, ____input_3)); }
	inline BinaryReader_t2491843768 * get__input_3() const { return ____input_3; }
	inline BinaryReader_t2491843768 ** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(BinaryReader_t2491843768 * value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier(&____input_3, value);
	}

	inline static int32_t get_offset_of__pendingBuilder_4() { return static_cast<int32_t>(offsetof(WebSocketReceiver_t719632682, ____pendingBuilder_4)); }
	inline Il2CppObject * get__pendingBuilder_4() const { return ____pendingBuilder_4; }
	inline Il2CppObject ** get_address_of__pendingBuilder_4() { return &____pendingBuilder_4; }
	inline void set__pendingBuilder_4(Il2CppObject * value)
	{
		____pendingBuilder_4 = value;
		Il2CppCodeGenWriteBarrier(&____pendingBuilder_4, value);
	}

	inline static int32_t get_offset_of__stop_5() { return static_cast<int32_t>(offsetof(WebSocketReceiver_t719632682, ____stop_5)); }
	inline bool get__stop_5() const { return ____stop_5; }
	inline bool* get_address_of__stop_5() { return &____stop_5; }
	inline void set__stop_5(bool value)
	{
		____stop_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
