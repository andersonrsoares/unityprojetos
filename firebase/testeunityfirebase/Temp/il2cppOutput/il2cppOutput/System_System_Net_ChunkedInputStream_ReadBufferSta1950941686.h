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
// System.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t1095258651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ChunkedInputStream/ReadBufferState
struct  ReadBufferState_t1950941686  : public Il2CppObject
{
public:
	// System.Byte[] System.Net.ChunkedInputStream/ReadBufferState::Buffer
	ByteU5BU5D_t3397334013* ___Buffer_0;
	// System.Int32 System.Net.ChunkedInputStream/ReadBufferState::Offset
	int32_t ___Offset_1;
	// System.Int32 System.Net.ChunkedInputStream/ReadBufferState::Count
	int32_t ___Count_2;
	// System.Int32 System.Net.ChunkedInputStream/ReadBufferState::InitialCount
	int32_t ___InitialCount_3;
	// System.Net.HttpStreamAsyncResult System.Net.ChunkedInputStream/ReadBufferState::Ares
	HttpStreamAsyncResult_t1095258651 * ___Ares_4;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(ReadBufferState_t1950941686, ___Buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___Buffer_0, value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ReadBufferState_t1950941686, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(ReadBufferState_t1950941686, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_InitialCount_3() { return static_cast<int32_t>(offsetof(ReadBufferState_t1950941686, ___InitialCount_3)); }
	inline int32_t get_InitialCount_3() const { return ___InitialCount_3; }
	inline int32_t* get_address_of_InitialCount_3() { return &___InitialCount_3; }
	inline void set_InitialCount_3(int32_t value)
	{
		___InitialCount_3 = value;
	}

	inline static int32_t get_offset_of_Ares_4() { return static_cast<int32_t>(offsetof(ReadBufferState_t1950941686, ___Ares_4)); }
	inline HttpStreamAsyncResult_t1095258651 * get_Ares_4() const { return ___Ares_4; }
	inline HttpStreamAsyncResult_t1095258651 ** get_address_of_Ares_4() { return &___Ares_4; }
	inline void set_Ares_4(HttpStreamAsyncResult_t1095258651 * value)
	{
		___Ares_4 = value;
		Il2CppCodeGenWriteBarrier(&___Ares_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
