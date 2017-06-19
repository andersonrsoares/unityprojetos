#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_RequestStream550151197.h"

// System.Net.ChunkStream
struct ChunkStream_t91719323;
// System.Net.HttpListenerContext
struct HttpListenerContext_t506453093;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ChunkedInputStream
struct  ChunkedInputStream_t2788158730  : public RequestStream_t550151197
{
public:
	// System.Boolean System.Net.ChunkedInputStream::disposed
	bool ___disposed_8;
	// System.Net.ChunkStream System.Net.ChunkedInputStream::decoder
	ChunkStream_t91719323 * ___decoder_9;
	// System.Net.HttpListenerContext System.Net.ChunkedInputStream::context
	HttpListenerContext_t506453093 * ___context_10;
	// System.Boolean System.Net.ChunkedInputStream::no_more_data
	bool ___no_more_data_11;

public:
	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t2788158730, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t2788158730, ___decoder_9)); }
	inline ChunkStream_t91719323 * get_decoder_9() const { return ___decoder_9; }
	inline ChunkStream_t91719323 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(ChunkStream_t91719323 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_9, value);
	}

	inline static int32_t get_offset_of_context_10() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t2788158730, ___context_10)); }
	inline HttpListenerContext_t506453093 * get_context_10() const { return ___context_10; }
	inline HttpListenerContext_t506453093 ** get_address_of_context_10() { return &___context_10; }
	inline void set_context_10(HttpListenerContext_t506453093 * value)
	{
		___context_10 = value;
		Il2CppCodeGenWriteBarrier(&___context_10, value);
	}

	inline static int32_t get_offset_of_no_more_data_11() { return static_cast<int32_t>(offsetof(ChunkedInputStream_t2788158730, ___no_more_data_11)); }
	inline bool get_no_more_data_11() const { return ___no_more_data_11; }
	inline bool* get_address_of_no_more_data_11() { return &___no_more_data_11; }
	inline void set_no_more_data_11(bool value)
	{
		___no_more_data_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
