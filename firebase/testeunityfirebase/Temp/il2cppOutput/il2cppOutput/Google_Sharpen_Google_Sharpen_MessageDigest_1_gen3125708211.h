#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_Sharpen_Google_Sharpen_MessageDigest1820469897.h"

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t7268864;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t3531341937;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.MessageDigest`1<System.Security.Cryptography.SHA1Managed>
struct  MessageDigest_1_t3125708211  : public MessageDigest_t1820469897
{
public:
	// TAlgorithm Google.Sharpen.MessageDigest`1::_hash
	SHA1Managed_t7268864 * ____hash_0;
	// System.Security.Cryptography.CryptoStream Google.Sharpen.MessageDigest`1::_stream
	CryptoStream_t3531341937 * ____stream_1;

public:
	inline static int32_t get_offset_of__hash_0() { return static_cast<int32_t>(offsetof(MessageDigest_1_t3125708211, ____hash_0)); }
	inline SHA1Managed_t7268864 * get__hash_0() const { return ____hash_0; }
	inline SHA1Managed_t7268864 ** get_address_of__hash_0() { return &____hash_0; }
	inline void set__hash_0(SHA1Managed_t7268864 * value)
	{
		____hash_0 = value;
		Il2CppCodeGenWriteBarrier(&____hash_0, value);
	}

	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(MessageDigest_1_t3125708211, ____stream_1)); }
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
