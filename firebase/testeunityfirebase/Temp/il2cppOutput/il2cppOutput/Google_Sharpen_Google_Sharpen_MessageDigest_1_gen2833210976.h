#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_Sharpen_Google_Sharpen_MessageDigest1820469897.h"

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t4009738925;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t3531341937;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.MessageDigest`1<System.Security.Cryptography.MD5CryptoServiceProvider>
struct  MessageDigest_1_t2833210976  : public MessageDigest_t1820469897
{
public:
	// TAlgorithm Google.Sharpen.MessageDigest`1::_hash
	MD5CryptoServiceProvider_t4009738925 * ____hash_0;
	// System.Security.Cryptography.CryptoStream Google.Sharpen.MessageDigest`1::_stream
	CryptoStream_t3531341937 * ____stream_1;

public:
	inline static int32_t get_offset_of__hash_0() { return static_cast<int32_t>(offsetof(MessageDigest_1_t2833210976, ____hash_0)); }
	inline MD5CryptoServiceProvider_t4009738925 * get__hash_0() const { return ____hash_0; }
	inline MD5CryptoServiceProvider_t4009738925 ** get_address_of__hash_0() { return &____hash_0; }
	inline void set__hash_0(MD5CryptoServiceProvider_t4009738925 * value)
	{
		____hash_0 = value;
		Il2CppCodeGenWriteBarrier(&____hash_0, value);
	}

	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(MessageDigest_1_t2833210976, ____stream_1)); }
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
