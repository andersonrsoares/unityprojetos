#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_HttpConnection_InputState645345234.h"
#include "System_System_Net_HttpConnection_LineState3023263642.h"

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.IO.Stream
struct Stream_t3255436806;
// System.Net.EndPointListener
struct EndPointListener_t822992745;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.HttpListenerContext
struct HttpListenerContext_t506453093;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Net.ListenerPrefix
struct ListenerPrefix_t577622550;
// System.Net.RequestStream
struct RequestStream_t550151197;
// System.Net.ResponseStream
struct ResponseStream_t3958753779;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpConnection
struct  HttpConnection_t1376630038  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket System.Net.HttpConnection::sock
	Socket_t3821512045 * ___sock_1;
	// System.IO.Stream System.Net.HttpConnection::stream
	Stream_t3255436806 * ___stream_2;
	// System.Net.EndPointListener System.Net.HttpConnection::epl
	EndPointListener_t822992745 * ___epl_3;
	// System.IO.MemoryStream System.Net.HttpConnection::ms
	MemoryStream_t743994179 * ___ms_4;
	// System.Byte[] System.Net.HttpConnection::buffer
	ByteU5BU5D_t3397334013* ___buffer_5;
	// System.Net.HttpListenerContext System.Net.HttpConnection::context
	HttpListenerContext_t506453093 * ___context_6;
	// System.Text.StringBuilder System.Net.HttpConnection::current_line
	StringBuilder_t1221177846 * ___current_line_7;
	// System.Net.ListenerPrefix System.Net.HttpConnection::prefix
	ListenerPrefix_t577622550 * ___prefix_8;
	// System.Net.RequestStream System.Net.HttpConnection::i_stream
	RequestStream_t550151197 * ___i_stream_9;
	// System.Net.ResponseStream System.Net.HttpConnection::o_stream
	ResponseStream_t3958753779 * ___o_stream_10;
	// System.Boolean System.Net.HttpConnection::chunked
	bool ___chunked_11;
	// System.Int32 System.Net.HttpConnection::chunked_uses
	int32_t ___chunked_uses_12;
	// System.Boolean System.Net.HttpConnection::context_bound
	bool ___context_bound_13;
	// System.Boolean System.Net.HttpConnection::secure
	bool ___secure_14;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Net.HttpConnection::key
	AsymmetricAlgorithm_t784058677 * ___key_15;
	// System.Net.HttpConnection/InputState System.Net.HttpConnection::input_state
	int32_t ___input_state_16;
	// System.Net.HttpConnection/LineState System.Net.HttpConnection::line_state
	int32_t ___line_state_17;
	// System.Int32 System.Net.HttpConnection::position
	int32_t ___position_18;

public:
	inline static int32_t get_offset_of_sock_1() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___sock_1)); }
	inline Socket_t3821512045 * get_sock_1() const { return ___sock_1; }
	inline Socket_t3821512045 ** get_address_of_sock_1() { return &___sock_1; }
	inline void set_sock_1(Socket_t3821512045 * value)
	{
		___sock_1 = value;
		Il2CppCodeGenWriteBarrier(&___sock_1, value);
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___stream_2)); }
	inline Stream_t3255436806 * get_stream_2() const { return ___stream_2; }
	inline Stream_t3255436806 ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(Stream_t3255436806 * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier(&___stream_2, value);
	}

	inline static int32_t get_offset_of_epl_3() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___epl_3)); }
	inline EndPointListener_t822992745 * get_epl_3() const { return ___epl_3; }
	inline EndPointListener_t822992745 ** get_address_of_epl_3() { return &___epl_3; }
	inline void set_epl_3(EndPointListener_t822992745 * value)
	{
		___epl_3 = value;
		Il2CppCodeGenWriteBarrier(&___epl_3, value);
	}

	inline static int32_t get_offset_of_ms_4() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___ms_4)); }
	inline MemoryStream_t743994179 * get_ms_4() const { return ___ms_4; }
	inline MemoryStream_t743994179 ** get_address_of_ms_4() { return &___ms_4; }
	inline void set_ms_4(MemoryStream_t743994179 * value)
	{
		___ms_4 = value;
		Il2CppCodeGenWriteBarrier(&___ms_4, value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___buffer_5)); }
	inline ByteU5BU5D_t3397334013* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3397334013* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_5, value);
	}

	inline static int32_t get_offset_of_context_6() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___context_6)); }
	inline HttpListenerContext_t506453093 * get_context_6() const { return ___context_6; }
	inline HttpListenerContext_t506453093 ** get_address_of_context_6() { return &___context_6; }
	inline void set_context_6(HttpListenerContext_t506453093 * value)
	{
		___context_6 = value;
		Il2CppCodeGenWriteBarrier(&___context_6, value);
	}

	inline static int32_t get_offset_of_current_line_7() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___current_line_7)); }
	inline StringBuilder_t1221177846 * get_current_line_7() const { return ___current_line_7; }
	inline StringBuilder_t1221177846 ** get_address_of_current_line_7() { return &___current_line_7; }
	inline void set_current_line_7(StringBuilder_t1221177846 * value)
	{
		___current_line_7 = value;
		Il2CppCodeGenWriteBarrier(&___current_line_7, value);
	}

	inline static int32_t get_offset_of_prefix_8() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___prefix_8)); }
	inline ListenerPrefix_t577622550 * get_prefix_8() const { return ___prefix_8; }
	inline ListenerPrefix_t577622550 ** get_address_of_prefix_8() { return &___prefix_8; }
	inline void set_prefix_8(ListenerPrefix_t577622550 * value)
	{
		___prefix_8 = value;
		Il2CppCodeGenWriteBarrier(&___prefix_8, value);
	}

	inline static int32_t get_offset_of_i_stream_9() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___i_stream_9)); }
	inline RequestStream_t550151197 * get_i_stream_9() const { return ___i_stream_9; }
	inline RequestStream_t550151197 ** get_address_of_i_stream_9() { return &___i_stream_9; }
	inline void set_i_stream_9(RequestStream_t550151197 * value)
	{
		___i_stream_9 = value;
		Il2CppCodeGenWriteBarrier(&___i_stream_9, value);
	}

	inline static int32_t get_offset_of_o_stream_10() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___o_stream_10)); }
	inline ResponseStream_t3958753779 * get_o_stream_10() const { return ___o_stream_10; }
	inline ResponseStream_t3958753779 ** get_address_of_o_stream_10() { return &___o_stream_10; }
	inline void set_o_stream_10(ResponseStream_t3958753779 * value)
	{
		___o_stream_10 = value;
		Il2CppCodeGenWriteBarrier(&___o_stream_10, value);
	}

	inline static int32_t get_offset_of_chunked_11() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___chunked_11)); }
	inline bool get_chunked_11() const { return ___chunked_11; }
	inline bool* get_address_of_chunked_11() { return &___chunked_11; }
	inline void set_chunked_11(bool value)
	{
		___chunked_11 = value;
	}

	inline static int32_t get_offset_of_chunked_uses_12() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___chunked_uses_12)); }
	inline int32_t get_chunked_uses_12() const { return ___chunked_uses_12; }
	inline int32_t* get_address_of_chunked_uses_12() { return &___chunked_uses_12; }
	inline void set_chunked_uses_12(int32_t value)
	{
		___chunked_uses_12 = value;
	}

	inline static int32_t get_offset_of_context_bound_13() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___context_bound_13)); }
	inline bool get_context_bound_13() const { return ___context_bound_13; }
	inline bool* get_address_of_context_bound_13() { return &___context_bound_13; }
	inline void set_context_bound_13(bool value)
	{
		___context_bound_13 = value;
	}

	inline static int32_t get_offset_of_secure_14() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___secure_14)); }
	inline bool get_secure_14() const { return ___secure_14; }
	inline bool* get_address_of_secure_14() { return &___secure_14; }
	inline void set_secure_14(bool value)
	{
		___secure_14 = value;
	}

	inline static int32_t get_offset_of_key_15() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___key_15)); }
	inline AsymmetricAlgorithm_t784058677 * get_key_15() const { return ___key_15; }
	inline AsymmetricAlgorithm_t784058677 ** get_address_of_key_15() { return &___key_15; }
	inline void set_key_15(AsymmetricAlgorithm_t784058677 * value)
	{
		___key_15 = value;
		Il2CppCodeGenWriteBarrier(&___key_15, value);
	}

	inline static int32_t get_offset_of_input_state_16() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___input_state_16)); }
	inline int32_t get_input_state_16() const { return ___input_state_16; }
	inline int32_t* get_address_of_input_state_16() { return &___input_state_16; }
	inline void set_input_state_16(int32_t value)
	{
		___input_state_16 = value;
	}

	inline static int32_t get_offset_of_line_state_17() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___line_state_17)); }
	inline int32_t get_line_state_17() const { return ___line_state_17; }
	inline int32_t* get_address_of_line_state_17() { return &___line_state_17; }
	inline void set_line_state_17(int32_t value)
	{
		___line_state_17 = value;
	}

	inline static int32_t get_offset_of_position_18() { return static_cast<int32_t>(offsetof(HttpConnection_t1376630038, ___position_18)); }
	inline int32_t get_position_18() const { return ___position_18; }
	inline int32_t* get_address_of_position_18() { return &___position_18; }
	inline void set_position_18(int32_t value)
	{
		___position_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
