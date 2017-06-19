#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/WSABUF
struct  WSABUF_t2199312694 
{
public:
	// System.Int32 System.Net.Sockets.Socket/WSABUF::len
	int32_t ___len_0;
	// System.IntPtr System.Net.Sockets.Socket/WSABUF::buf
	IntPtr_t ___buf_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(WSABUF_t2199312694, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_buf_1() { return static_cast<int32_t>(offsetof(WSABUF_t2199312694, ___buf_1)); }
	inline IntPtr_t get_buf_1() const { return ___buf_1; }
	inline IntPtr_t* get_address_of_buf_1() { return &___buf_1; }
	inline void set_buf_1(IntPtr_t value)
	{
		___buf_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
