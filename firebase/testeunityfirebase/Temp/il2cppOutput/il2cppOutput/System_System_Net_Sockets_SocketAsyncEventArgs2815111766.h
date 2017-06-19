#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"
#include "System_System_Net_Sockets_SocketAsyncOperation985258694.h"
#include "System_System_Net_Sockets_IPPacketInformation2752501689.h"
#include "System_System_Net_Sockets_TransmitFileOptions994250290.h"
#include "System_System_Net_Sockets_SocketError307542793.h"
#include "System_System_Net_Sockets_SocketFlags2353657790.h"

// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t3135158083;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t1406418938;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.EndPoint
struct EndPoint_t4156119363;
// System.Net.Sockets.SendPacketsElement[]
struct SendPacketsElementU5BU5D_t612434972;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncEventArgs
struct  SocketAsyncEventArgs_t2815111766  : public EventArgs_t3289624707
{
public:
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferList
	Il2CppObject* ____bufferList_1;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::curSocket
	Socket_t3821512045 * ___curSocket_2;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t1406418938 * ___Completed_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t3821512045 * ___U3CAcceptSocketU3Ek__BackingField_4;
	// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::<Buffer>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CBufferU3Ek__BackingField_5;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_6;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::<DisconnectReuseSocket>k__BackingField
	bool ___U3CDisconnectReuseSocketU3Ek__BackingField_8;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField_9;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_10;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::<RemoteEndPoint>k__BackingField
	EndPoint_t4156119363 * ___U3CRemoteEndPointU3Ek__BackingField_11;
	// System.Net.Sockets.IPPacketInformation System.Net.Sockets.SocketAsyncEventArgs::<ReceiveMessageFromPacketInfo>k__BackingField
	IPPacketInformation_t2752501689  ___U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12;
	// System.Net.Sockets.SendPacketsElement[] System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsElements>k__BackingField
	SendPacketsElementU5BU5D_t612434972* ___U3CSendPacketsElementsU3Ek__BackingField_13;
	// System.Net.Sockets.TransmitFileOptions System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsFlags>k__BackingField
	int32_t ___U3CSendPacketsFlagsU3Ek__BackingField_14;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField_15;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_16;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField_17;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	Il2CppObject * ___U3CUserTokenU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of__bufferList_1() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ____bufferList_1)); }
	inline Il2CppObject* get__bufferList_1() const { return ____bufferList_1; }
	inline Il2CppObject** get_address_of__bufferList_1() { return &____bufferList_1; }
	inline void set__bufferList_1(Il2CppObject* value)
	{
		____bufferList_1 = value;
		Il2CppCodeGenWriteBarrier(&____bufferList_1, value);
	}

	inline static int32_t get_offset_of_curSocket_2() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___curSocket_2)); }
	inline Socket_t3821512045 * get_curSocket_2() const { return ___curSocket_2; }
	inline Socket_t3821512045 ** get_address_of_curSocket_2() { return &___curSocket_2; }
	inline void set_curSocket_2(Socket_t3821512045 * value)
	{
		___curSocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___curSocket_2, value);
	}

	inline static int32_t get_offset_of_Completed_3() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___Completed_3)); }
	inline EventHandler_1_t1406418938 * get_Completed_3() const { return ___Completed_3; }
	inline EventHandler_1_t1406418938 ** get_address_of_Completed_3() { return &___Completed_3; }
	inline void set_Completed_3(EventHandler_1_t1406418938 * value)
	{
		___Completed_3 = value;
		Il2CppCodeGenWriteBarrier(&___Completed_3, value);
	}

	inline static int32_t get_offset_of_U3CAcceptSocketU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CAcceptSocketU3Ek__BackingField_4)); }
	inline Socket_t3821512045 * get_U3CAcceptSocketU3Ek__BackingField_4() const { return ___U3CAcceptSocketU3Ek__BackingField_4; }
	inline Socket_t3821512045 ** get_address_of_U3CAcceptSocketU3Ek__BackingField_4() { return &___U3CAcceptSocketU3Ek__BackingField_4; }
	inline void set_U3CAcceptSocketU3Ek__BackingField_4(Socket_t3821512045 * value)
	{
		___U3CAcceptSocketU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAcceptSocketU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CBufferU3Ek__BackingField_5)); }
	inline ByteU5BU5D_t3397334013* get_U3CBufferU3Ek__BackingField_5() const { return ___U3CBufferU3Ek__BackingField_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CBufferU3Ek__BackingField_5() { return &___U3CBufferU3Ek__BackingField_5; }
	inline void set_U3CBufferU3Ek__BackingField_5(ByteU5BU5D_t3397334013* value)
	{
		___U3CBufferU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBufferU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CBytesTransferredU3Ek__BackingField_6)); }
	inline int32_t get_U3CBytesTransferredU3Ek__BackingField_6() const { return ___U3CBytesTransferredU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_6() { return &___U3CBytesTransferredU3Ek__BackingField_6; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_6(int32_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectReuseSocketU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CDisconnectReuseSocketU3Ek__BackingField_8)); }
	inline bool get_U3CDisconnectReuseSocketU3Ek__BackingField_8() const { return ___U3CDisconnectReuseSocketU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CDisconnectReuseSocketU3Ek__BackingField_8() { return &___U3CDisconnectReuseSocketU3Ek__BackingField_8; }
	inline void set_U3CDisconnectReuseSocketU3Ek__BackingField_8(bool value)
	{
		___U3CDisconnectReuseSocketU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLastOperationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CLastOperationU3Ek__BackingField_9)); }
	inline int32_t get_U3CLastOperationU3Ek__BackingField_9() const { return ___U3CLastOperationU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CLastOperationU3Ek__BackingField_9() { return &___U3CLastOperationU3Ek__BackingField_9; }
	inline void set_U3CLastOperationU3Ek__BackingField_9(int32_t value)
	{
		___U3CLastOperationU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3COffsetU3Ek__BackingField_10)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_10() const { return ___U3COffsetU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_10() { return &___U3COffsetU3Ek__BackingField_10; }
	inline void set_U3COffsetU3Ek__BackingField_10(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRemoteEndPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CRemoteEndPointU3Ek__BackingField_11)); }
	inline EndPoint_t4156119363 * get_U3CRemoteEndPointU3Ek__BackingField_11() const { return ___U3CRemoteEndPointU3Ek__BackingField_11; }
	inline EndPoint_t4156119363 ** get_address_of_U3CRemoteEndPointU3Ek__BackingField_11() { return &___U3CRemoteEndPointU3Ek__BackingField_11; }
	inline void set_U3CRemoteEndPointU3Ek__BackingField_11(EndPoint_t4156119363 * value)
	{
		___U3CRemoteEndPointU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRemoteEndPointU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12)); }
	inline IPPacketInformation_t2752501689  get_U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12() const { return ___U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12; }
	inline IPPacketInformation_t2752501689 * get_address_of_U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12() { return &___U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12; }
	inline void set_U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12(IPPacketInformation_t2752501689  value)
	{
		___U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CSendPacketsElementsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CSendPacketsElementsU3Ek__BackingField_13)); }
	inline SendPacketsElementU5BU5D_t612434972* get_U3CSendPacketsElementsU3Ek__BackingField_13() const { return ___U3CSendPacketsElementsU3Ek__BackingField_13; }
	inline SendPacketsElementU5BU5D_t612434972** get_address_of_U3CSendPacketsElementsU3Ek__BackingField_13() { return &___U3CSendPacketsElementsU3Ek__BackingField_13; }
	inline void set_U3CSendPacketsElementsU3Ek__BackingField_13(SendPacketsElementU5BU5D_t612434972* value)
	{
		___U3CSendPacketsElementsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSendPacketsElementsU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CSendPacketsFlagsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CSendPacketsFlagsU3Ek__BackingField_14)); }
	inline int32_t get_U3CSendPacketsFlagsU3Ek__BackingField_14() const { return ___U3CSendPacketsFlagsU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CSendPacketsFlagsU3Ek__BackingField_14() { return &___U3CSendPacketsFlagsU3Ek__BackingField_14; }
	inline void set_U3CSendPacketsFlagsU3Ek__BackingField_14(int32_t value)
	{
		___U3CSendPacketsFlagsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CSendPacketsSendSizeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CSendPacketsSendSizeU3Ek__BackingField_15)); }
	inline int32_t get_U3CSendPacketsSendSizeU3Ek__BackingField_15() const { return ___U3CSendPacketsSendSizeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CSendPacketsSendSizeU3Ek__BackingField_15() { return &___U3CSendPacketsSendSizeU3Ek__BackingField_15; }
	inline void set_U3CSendPacketsSendSizeU3Ek__BackingField_15(int32_t value)
	{
		___U3CSendPacketsSendSizeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSocketErrorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CSocketErrorU3Ek__BackingField_16)); }
	inline int32_t get_U3CSocketErrorU3Ek__BackingField_16() const { return ___U3CSocketErrorU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CSocketErrorU3Ek__BackingField_16() { return &___U3CSocketErrorU3Ek__BackingField_16; }
	inline void set_U3CSocketErrorU3Ek__BackingField_16(int32_t value)
	{
		___U3CSocketErrorU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSocketFlagsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CSocketFlagsU3Ek__BackingField_17)); }
	inline int32_t get_U3CSocketFlagsU3Ek__BackingField_17() const { return ___U3CSocketFlagsU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CSocketFlagsU3Ek__BackingField_17() { return &___U3CSocketFlagsU3Ek__BackingField_17; }
	inline void set_U3CSocketFlagsU3Ek__BackingField_17(int32_t value)
	{
		___U3CSocketFlagsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CUserTokenU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t2815111766, ___U3CUserTokenU3Ek__BackingField_18)); }
	inline Il2CppObject * get_U3CUserTokenU3Ek__BackingField_18() const { return ___U3CUserTokenU3Ek__BackingField_18; }
	inline Il2CppObject ** get_address_of_U3CUserTokenU3Ek__BackingField_18() { return &___U3CUserTokenU3Ek__BackingField_18; }
	inline void set_U3CUserTokenU3Ek__BackingField_18(Il2CppObject * value)
	{
		___U3CUserTokenU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserTokenU3Ek__BackingField_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
