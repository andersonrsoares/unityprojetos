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
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.String
struct String_t;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3158419191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMACAlgorithm
struct  HMACAlgorithm_t2394286522  : public Il2CppObject
{
public:
	// System.Byte[] Mono.Security.Cryptography.HMACAlgorithm::key
	ByteU5BU5D_t3397334013* ___key_0;
	// System.Byte[] Mono.Security.Cryptography.HMACAlgorithm::hash
	ByteU5BU5D_t3397334013* ___hash_1;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMACAlgorithm::algo
	HashAlgorithm_t2624936259 * ___algo_2;
	// System.String Mono.Security.Cryptography.HMACAlgorithm::hashName
	String_t* ___hashName_3;
	// Mono.Security.Cryptography.BlockProcessor Mono.Security.Cryptography.HMACAlgorithm::block
	BlockProcessor_t3158419191 * ___block_4;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2394286522, ___key_0)); }
	inline ByteU5BU5D_t3397334013* get_key_0() const { return ___key_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ByteU5BU5D_t3397334013* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2394286522, ___hash_1)); }
	inline ByteU5BU5D_t3397334013* get_hash_1() const { return ___hash_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(ByteU5BU5D_t3397334013* value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier(&___hash_1, value);
	}

	inline static int32_t get_offset_of_algo_2() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2394286522, ___algo_2)); }
	inline HashAlgorithm_t2624936259 * get_algo_2() const { return ___algo_2; }
	inline HashAlgorithm_t2624936259 ** get_address_of_algo_2() { return &___algo_2; }
	inline void set_algo_2(HashAlgorithm_t2624936259 * value)
	{
		___algo_2 = value;
		Il2CppCodeGenWriteBarrier(&___algo_2, value);
	}

	inline static int32_t get_offset_of_hashName_3() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2394286522, ___hashName_3)); }
	inline String_t* get_hashName_3() const { return ___hashName_3; }
	inline String_t** get_address_of_hashName_3() { return &___hashName_3; }
	inline void set_hashName_3(String_t* value)
	{
		___hashName_3 = value;
		Il2CppCodeGenWriteBarrier(&___hashName_3, value);
	}

	inline static int32_t get_offset_of_block_4() { return static_cast<int32_t>(offsetof(HMACAlgorithm_t2394286522, ___block_4)); }
	inline BlockProcessor_t3158419191 * get_block_4() const { return ___block_4; }
	inline BlockProcessor_t3158419191 ** get_address_of_block_4() { return &___block_4; }
	inline void set_block_4(BlockProcessor_t3158419191 * value)
	{
		___block_4 = value;
		Il2CppCodeGenWriteBarrier(&___block_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
