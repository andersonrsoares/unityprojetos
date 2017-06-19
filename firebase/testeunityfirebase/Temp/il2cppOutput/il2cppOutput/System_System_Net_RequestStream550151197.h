#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.RequestStream
struct  RequestStream_t550151197  : public Stream_t3255436806
{
public:
	// System.Byte[] System.Net.RequestStream::buffer
	ByteU5BU5D_t3397334013* ___buffer_2;
	// System.Int32 System.Net.RequestStream::offset
	int32_t ___offset_3;
	// System.Int32 System.Net.RequestStream::length
	int32_t ___length_4;
	// System.Int64 System.Net.RequestStream::remaining_body
	int64_t ___remaining_body_5;
	// System.Boolean System.Net.RequestStream::disposed
	bool ___disposed_6;
	// System.IO.Stream System.Net.RequestStream::stream
	Stream_t3255436806 * ___stream_7;

public:
	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(RequestStream_t550151197, ___buffer_2)); }
	inline ByteU5BU5D_t3397334013* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t3397334013* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(RequestStream_t550151197, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(RequestStream_t550151197, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_remaining_body_5() { return static_cast<int32_t>(offsetof(RequestStream_t550151197, ___remaining_body_5)); }
	inline int64_t get_remaining_body_5() const { return ___remaining_body_5; }
	inline int64_t* get_address_of_remaining_body_5() { return &___remaining_body_5; }
	inline void set_remaining_body_5(int64_t value)
	{
		___remaining_body_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(RequestStream_t550151197, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_stream_7() { return static_cast<int32_t>(offsetof(RequestStream_t550151197, ___stream_7)); }
	inline Stream_t3255436806 * get_stream_7() const { return ___stream_7; }
	inline Stream_t3255436806 ** get_address_of_stream_7() { return &___stream_7; }
	inline void set_stream_7(Stream_t3255436806 * value)
	{
		___stream_7 = value;
		Il2CppCodeGenWriteBarrier(&___stream_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
