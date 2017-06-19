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

// Google.Sharpen.Thread
struct Thread_t1322377586;
// Google.Sharpen.BlockingCollection`1<System.IO.MemoryStream>
struct BlockingCollection_1_t1115832862;
// System.Random
struct Random_t1044426839;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.TubeSock.WebSocketWriter
struct  WebSocketWriter_t3581815132  : public Il2CppObject
{
public:
	// Google.Sharpen.Thread Firebase.Database.Internal.TubeSock.WebSocketWriter::_innerThread
	Thread_t1322377586 * ____innerThread_0;
	// Google.Sharpen.BlockingCollection`1<System.IO.MemoryStream> Firebase.Database.Internal.TubeSock.WebSocketWriter::_pendingBuffers
	BlockingCollection_1_t1115832862 * ____pendingBuffers_1;
	// System.Random Firebase.Database.Internal.TubeSock.WebSocketWriter::_random
	Random_t1044426839 * ____random_2;
	// System.Object Firebase.Database.Internal.TubeSock.WebSocketWriter::_sync
	Il2CppObject * ____sync_3;
	// Firebase.Database.Internal.TubeSock.WebSocket Firebase.Database.Internal.TubeSock.WebSocketWriter::_websocket
	WebSocket_t2930208447 * ____websocket_4;
	// System.IO.BinaryWriter Firebase.Database.Internal.TubeSock.WebSocketWriter::_channel
	BinaryWriter_t3179371318 * ____channel_5;
	// System.Boolean Firebase.Database.Internal.TubeSock.WebSocketWriter::_closeSent
	bool ____closeSent_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Firebase.Database.Internal.TubeSock.WebSocketWriter::_stop
	bool ____stop_7;

public:
	inline static int32_t get_offset_of__innerThread_0() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____innerThread_0)); }
	inline Thread_t1322377586 * get__innerThread_0() const { return ____innerThread_0; }
	inline Thread_t1322377586 ** get_address_of__innerThread_0() { return &____innerThread_0; }
	inline void set__innerThread_0(Thread_t1322377586 * value)
	{
		____innerThread_0 = value;
		Il2CppCodeGenWriteBarrier(&____innerThread_0, value);
	}

	inline static int32_t get_offset_of__pendingBuffers_1() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____pendingBuffers_1)); }
	inline BlockingCollection_1_t1115832862 * get__pendingBuffers_1() const { return ____pendingBuffers_1; }
	inline BlockingCollection_1_t1115832862 ** get_address_of__pendingBuffers_1() { return &____pendingBuffers_1; }
	inline void set__pendingBuffers_1(BlockingCollection_1_t1115832862 * value)
	{
		____pendingBuffers_1 = value;
		Il2CppCodeGenWriteBarrier(&____pendingBuffers_1, value);
	}

	inline static int32_t get_offset_of__random_2() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____random_2)); }
	inline Random_t1044426839 * get__random_2() const { return ____random_2; }
	inline Random_t1044426839 ** get_address_of__random_2() { return &____random_2; }
	inline void set__random_2(Random_t1044426839 * value)
	{
		____random_2 = value;
		Il2CppCodeGenWriteBarrier(&____random_2, value);
	}

	inline static int32_t get_offset_of__sync_3() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____sync_3)); }
	inline Il2CppObject * get__sync_3() const { return ____sync_3; }
	inline Il2CppObject ** get_address_of__sync_3() { return &____sync_3; }
	inline void set__sync_3(Il2CppObject * value)
	{
		____sync_3 = value;
		Il2CppCodeGenWriteBarrier(&____sync_3, value);
	}

	inline static int32_t get_offset_of__websocket_4() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____websocket_4)); }
	inline WebSocket_t2930208447 * get__websocket_4() const { return ____websocket_4; }
	inline WebSocket_t2930208447 ** get_address_of__websocket_4() { return &____websocket_4; }
	inline void set__websocket_4(WebSocket_t2930208447 * value)
	{
		____websocket_4 = value;
		Il2CppCodeGenWriteBarrier(&____websocket_4, value);
	}

	inline static int32_t get_offset_of__channel_5() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____channel_5)); }
	inline BinaryWriter_t3179371318 * get__channel_5() const { return ____channel_5; }
	inline BinaryWriter_t3179371318 ** get_address_of__channel_5() { return &____channel_5; }
	inline void set__channel_5(BinaryWriter_t3179371318 * value)
	{
		____channel_5 = value;
		Il2CppCodeGenWriteBarrier(&____channel_5, value);
	}

	inline static int32_t get_offset_of__closeSent_6() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____closeSent_6)); }
	inline bool get__closeSent_6() const { return ____closeSent_6; }
	inline bool* get_address_of__closeSent_6() { return &____closeSent_6; }
	inline void set__closeSent_6(bool value)
	{
		____closeSent_6 = value;
	}

	inline static int32_t get_offset_of__stop_7() { return static_cast<int32_t>(offsetof(WebSocketWriter_t3581815132, ____stop_7)); }
	inline bool get__stop_7() const { return ____stop_7; }
	inline bool* get_address_of__stop_7() { return &____stop_7; }
	inline void set__stop_7(bool value)
	{
		____stop_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
