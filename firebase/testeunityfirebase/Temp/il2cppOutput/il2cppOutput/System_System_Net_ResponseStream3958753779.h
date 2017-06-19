#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.Net.HttpListenerResponse
struct HttpListenerResponse_t3926738757;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ResponseStream
struct  ResponseStream_t3958753779  : public Stream_t3255436806
{
public:
	// System.Net.HttpListenerResponse System.Net.ResponseStream::response
	HttpListenerResponse_t3926738757 * ___response_2;
	// System.Boolean System.Net.ResponseStream::ignore_errors
	bool ___ignore_errors_3;
	// System.Boolean System.Net.ResponseStream::disposed
	bool ___disposed_4;
	// System.Boolean System.Net.ResponseStream::trailer_sent
	bool ___trailer_sent_5;
	// System.IO.Stream System.Net.ResponseStream::stream
	Stream_t3255436806 * ___stream_6;

public:
	inline static int32_t get_offset_of_response_2() { return static_cast<int32_t>(offsetof(ResponseStream_t3958753779, ___response_2)); }
	inline HttpListenerResponse_t3926738757 * get_response_2() const { return ___response_2; }
	inline HttpListenerResponse_t3926738757 ** get_address_of_response_2() { return &___response_2; }
	inline void set_response_2(HttpListenerResponse_t3926738757 * value)
	{
		___response_2 = value;
		Il2CppCodeGenWriteBarrier(&___response_2, value);
	}

	inline static int32_t get_offset_of_ignore_errors_3() { return static_cast<int32_t>(offsetof(ResponseStream_t3958753779, ___ignore_errors_3)); }
	inline bool get_ignore_errors_3() const { return ___ignore_errors_3; }
	inline bool* get_address_of_ignore_errors_3() { return &___ignore_errors_3; }
	inline void set_ignore_errors_3(bool value)
	{
		___ignore_errors_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(ResponseStream_t3958753779, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_trailer_sent_5() { return static_cast<int32_t>(offsetof(ResponseStream_t3958753779, ___trailer_sent_5)); }
	inline bool get_trailer_sent_5() const { return ___trailer_sent_5; }
	inline bool* get_address_of_trailer_sent_5() { return &___trailer_sent_5; }
	inline void set_trailer_sent_5(bool value)
	{
		___trailer_sent_5 = value;
	}

	inline static int32_t get_offset_of_stream_6() { return static_cast<int32_t>(offsetof(ResponseStream_t3958753779, ___stream_6)); }
	inline Stream_t3255436806 * get_stream_6() const { return ___stream_6; }
	inline Stream_t3255436806 ** get_address_of_stream_6() { return &___stream_6; }
	inline void set_stream_6(Stream_t3255436806 * value)
	{
		___stream_6 = value;
		Il2CppCodeGenWriteBarrier(&___stream_6, value);
	}
};

struct ResponseStream_t3958753779_StaticFields
{
public:
	// System.Byte[] System.Net.ResponseStream::crlf
	ByteU5BU5D_t3397334013* ___crlf_7;

public:
	inline static int32_t get_offset_of_crlf_7() { return static_cast<int32_t>(offsetof(ResponseStream_t3958753779_StaticFields, ___crlf_7)); }
	inline ByteU5BU5D_t3397334013* get_crlf_7() const { return ___crlf_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_crlf_7() { return &___crlf_7; }
	inline void set_crlf_7(ByteU5BU5D_t3397334013* value)
	{
		___crlf_7 = value;
		Il2CppCodeGenWriteBarrier(&___crlf_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
