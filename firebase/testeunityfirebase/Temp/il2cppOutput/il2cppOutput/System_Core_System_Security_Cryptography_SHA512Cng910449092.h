#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_SHA5122908163326.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.SHA512
struct SHA512_t2908163326;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Cng
struct  SHA512Cng_t910449092  : public SHA512_t2908163326
{
public:
	// System.Security.Cryptography.SHA512 System.Security.Cryptography.SHA512Cng::hash
	SHA512_t2908163326 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA512Cng_t910449092, ___hash_5)); }
	inline SHA512_t2908163326 * get_hash_5() const { return ___hash_5; }
	inline SHA512_t2908163326 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA512_t2908163326 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier(&___hash_5, value);
	}
};

struct SHA512Cng_t910449092_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Cng::Empty
	ByteU5BU5D_t3397334013* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA512Cng_t910449092_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t3397334013* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t3397334013* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
