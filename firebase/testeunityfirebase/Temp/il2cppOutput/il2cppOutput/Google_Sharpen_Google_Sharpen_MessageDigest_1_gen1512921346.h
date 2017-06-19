#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_Sharpen_Google_Sharpen_MessageDigest1820469897.h"

// System.Object
struct Il2CppObject;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t3531341937;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.MessageDigest`1<System.Object>
struct  MessageDigest_1_t1512921346  : public MessageDigest_t1820469897
{
public:
	// TAlgorithm Google.Sharpen.MessageDigest`1::_hash
	Il2CppObject * ____hash_0;
	// System.Security.Cryptography.CryptoStream Google.Sharpen.MessageDigest`1::_stream
	CryptoStream_t3531341937 * ____stream_1;

public:
	inline static int32_t get_offset_of__hash_0() { return static_cast<int32_t>(offsetof(MessageDigest_1_t1512921346, ____hash_0)); }
	inline Il2CppObject * get__hash_0() const { return ____hash_0; }
	inline Il2CppObject ** get_address_of__hash_0() { return &____hash_0; }
	inline void set__hash_0(Il2CppObject * value)
	{
		____hash_0 = value;
		Il2CppCodeGenWriteBarrier(&____hash_0, value);
	}

	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(MessageDigest_1_t1512921346, ____stream_1)); }
	inline CryptoStream_t3531341937 * get__stream_1() const { return ____stream_1; }
	inline CryptoStream_t3531341937 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(CryptoStream_t3531341937 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier(&____stream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
