#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeS1191325154.h"

// Google.Sharpen.AtomicInteger
struct AtomicInteger_t4174655693;
// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;
// Firebase.Database.Internal.TubeSock.IThreadInitializer
struct IThreadInitializer_t1126722907;
// Firebase.Database.Internal.TubeSock.WebSocketHandshake
struct WebSocketHandshake_t11059436;
// Google.Sharpen.Thread
struct Thread_t1322377586;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Firebase.Database.Internal.TubeSock.WebSocketReceiver
struct WebSocketReceiver_t719632682;
// System.Object
struct Il2CppObject;
// System.Uri
struct Uri_t19570940;
// Firebase.Database.Internal.TubeSock.WebSocketWriter
struct WebSocketWriter_t3581815132;
// Firebase.Database.Internal.TubeSock.IWebSocketEventHandler
struct IWebSocketEventHandler_t1069955734;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.TubeSock.WebSocket
struct  WebSocket_t2930208447  : public Il2CppObject
{
public:
	// System.Int32 Firebase.Database.Internal.TubeSock.WebSocket::_clientId
	int32_t ____clientId_3;
	// Firebase.Database.Internal.TubeSock.WebSocketHandshake Firebase.Database.Internal.TubeSock.WebSocket::_handshake
	WebSocketHandshake_t11059436 * ____handshake_4;
	// Google.Sharpen.Thread Firebase.Database.Internal.TubeSock.WebSocket::_innerThread
	Thread_t1322377586 * ____innerThread_5;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.TubeSock.WebSocket::_logger
	LogWrapper_t438307305 * ____logger_6;
	// Firebase.Database.Internal.TubeSock.WebSocketReceiver Firebase.Database.Internal.TubeSock.WebSocket::_receiver
	WebSocketReceiver_t719632682 * ____receiver_7;
	// System.Object Firebase.Database.Internal.TubeSock.WebSocket::_sync
	Il2CppObject * ____sync_8;
	// System.Uri Firebase.Database.Internal.TubeSock.WebSocket::_url
	Uri_t19570940 * ____url_9;
	// Firebase.Database.Internal.TubeSock.WebSocketWriter Firebase.Database.Internal.TubeSock.WebSocket::_writer
	WebSocketWriter_t3581815132 * ____writer_10;
	// Firebase.Database.Internal.TubeSock.IWebSocketEventHandler Firebase.Database.Internal.TubeSock.WebSocket::_eventHandler
	Il2CppObject * ____eventHandler_11;
	// System.Net.Sockets.TcpClient modreq(System.Runtime.CompilerServices.IsVolatile) Firebase.Database.Internal.TubeSock.WebSocket::_socket
	TcpClient_t408947970 * ____socket_12;
	// Firebase.Database.Internal.TubeSock.WebSocket/State modreq(System.Runtime.CompilerServices.IsVolatile) Firebase.Database.Internal.TubeSock.WebSocket::_state
	int32_t ____state_13;

public:
	inline static int32_t get_offset_of__clientId_3() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____clientId_3)); }
	inline int32_t get__clientId_3() const { return ____clientId_3; }
	inline int32_t* get_address_of__clientId_3() { return &____clientId_3; }
	inline void set__clientId_3(int32_t value)
	{
		____clientId_3 = value;
	}

	inline static int32_t get_offset_of__handshake_4() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____handshake_4)); }
	inline WebSocketHandshake_t11059436 * get__handshake_4() const { return ____handshake_4; }
	inline WebSocketHandshake_t11059436 ** get_address_of__handshake_4() { return &____handshake_4; }
	inline void set__handshake_4(WebSocketHandshake_t11059436 * value)
	{
		____handshake_4 = value;
		Il2CppCodeGenWriteBarrier(&____handshake_4, value);
	}

	inline static int32_t get_offset_of__innerThread_5() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____innerThread_5)); }
	inline Thread_t1322377586 * get__innerThread_5() const { return ____innerThread_5; }
	inline Thread_t1322377586 ** get_address_of__innerThread_5() { return &____innerThread_5; }
	inline void set__innerThread_5(Thread_t1322377586 * value)
	{
		____innerThread_5 = value;
		Il2CppCodeGenWriteBarrier(&____innerThread_5, value);
	}

	inline static int32_t get_offset_of__logger_6() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____logger_6)); }
	inline LogWrapper_t438307305 * get__logger_6() const { return ____logger_6; }
	inline LogWrapper_t438307305 ** get_address_of__logger_6() { return &____logger_6; }
	inline void set__logger_6(LogWrapper_t438307305 * value)
	{
		____logger_6 = value;
		Il2CppCodeGenWriteBarrier(&____logger_6, value);
	}

	inline static int32_t get_offset_of__receiver_7() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____receiver_7)); }
	inline WebSocketReceiver_t719632682 * get__receiver_7() const { return ____receiver_7; }
	inline WebSocketReceiver_t719632682 ** get_address_of__receiver_7() { return &____receiver_7; }
	inline void set__receiver_7(WebSocketReceiver_t719632682 * value)
	{
		____receiver_7 = value;
		Il2CppCodeGenWriteBarrier(&____receiver_7, value);
	}

	inline static int32_t get_offset_of__sync_8() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____sync_8)); }
	inline Il2CppObject * get__sync_8() const { return ____sync_8; }
	inline Il2CppObject ** get_address_of__sync_8() { return &____sync_8; }
	inline void set__sync_8(Il2CppObject * value)
	{
		____sync_8 = value;
		Il2CppCodeGenWriteBarrier(&____sync_8, value);
	}

	inline static int32_t get_offset_of__url_9() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____url_9)); }
	inline Uri_t19570940 * get__url_9() const { return ____url_9; }
	inline Uri_t19570940 ** get_address_of__url_9() { return &____url_9; }
	inline void set__url_9(Uri_t19570940 * value)
	{
		____url_9 = value;
		Il2CppCodeGenWriteBarrier(&____url_9, value);
	}

	inline static int32_t get_offset_of__writer_10() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____writer_10)); }
	inline WebSocketWriter_t3581815132 * get__writer_10() const { return ____writer_10; }
	inline WebSocketWriter_t3581815132 ** get_address_of__writer_10() { return &____writer_10; }
	inline void set__writer_10(WebSocketWriter_t3581815132 * value)
	{
		____writer_10 = value;
		Il2CppCodeGenWriteBarrier(&____writer_10, value);
	}

	inline static int32_t get_offset_of__eventHandler_11() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____eventHandler_11)); }
	inline Il2CppObject * get__eventHandler_11() const { return ____eventHandler_11; }
	inline Il2CppObject ** get_address_of__eventHandler_11() { return &____eventHandler_11; }
	inline void set__eventHandler_11(Il2CppObject * value)
	{
		____eventHandler_11 = value;
		Il2CppCodeGenWriteBarrier(&____eventHandler_11, value);
	}

	inline static int32_t get_offset_of__socket_12() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____socket_12)); }
	inline TcpClient_t408947970 * get__socket_12() const { return ____socket_12; }
	inline TcpClient_t408947970 ** get_address_of__socket_12() { return &____socket_12; }
	inline void set__socket_12(TcpClient_t408947970 * value)
	{
		____socket_12 = value;
		Il2CppCodeGenWriteBarrier(&____socket_12, value);
	}

	inline static int32_t get_offset_of__state_13() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447, ____state_13)); }
	inline int32_t get__state_13() const { return ____state_13; }
	inline int32_t* get_address_of__state_13() { return &____state_13; }
	inline void set__state_13(int32_t value)
	{
		____state_13 = value;
	}
};

struct WebSocket_t2930208447_StaticFields
{
public:
	// Google.Sharpen.AtomicInteger Firebase.Database.Internal.TubeSock.WebSocket::ClientCount
	AtomicInteger_t4174655693 * ___ClientCount_0;
	// Google.Sharpen.ThreadFactory Firebase.Database.Internal.TubeSock.WebSocket::_threadFactory
	ThreadFactory_t1392637388 * ____threadFactory_1;
	// Firebase.Database.Internal.TubeSock.IThreadInitializer Firebase.Database.Internal.TubeSock.WebSocket::_intializer
	Il2CppObject * ____intializer_2;

public:
	inline static int32_t get_offset_of_ClientCount_0() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447_StaticFields, ___ClientCount_0)); }
	inline AtomicInteger_t4174655693 * get_ClientCount_0() const { return ___ClientCount_0; }
	inline AtomicInteger_t4174655693 ** get_address_of_ClientCount_0() { return &___ClientCount_0; }
	inline void set_ClientCount_0(AtomicInteger_t4174655693 * value)
	{
		___ClientCount_0 = value;
		Il2CppCodeGenWriteBarrier(&___ClientCount_0, value);
	}

	inline static int32_t get_offset_of__threadFactory_1() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447_StaticFields, ____threadFactory_1)); }
	inline ThreadFactory_t1392637388 * get__threadFactory_1() const { return ____threadFactory_1; }
	inline ThreadFactory_t1392637388 ** get_address_of__threadFactory_1() { return &____threadFactory_1; }
	inline void set__threadFactory_1(ThreadFactory_t1392637388 * value)
	{
		____threadFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____threadFactory_1, value);
	}

	inline static int32_t get_offset_of__intializer_2() { return static_cast<int32_t>(offsetof(WebSocket_t2930208447_StaticFields, ____intializer_2)); }
	inline Il2CppObject * get__intializer_2() const { return ____intializer_2; }
	inline Il2CppObject ** get_address_of__intializer_2() { return &____intializer_2; }
	inline void set__intializer_2(Il2CppObject * value)
	{
		____intializer_2 = value;
		Il2CppCodeGenWriteBarrier(&____intializer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
