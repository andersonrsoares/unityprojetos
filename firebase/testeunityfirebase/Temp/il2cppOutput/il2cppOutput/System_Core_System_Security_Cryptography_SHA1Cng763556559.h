#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_SHA13336793149.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.SHA1
struct SHA1_t3336793149;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Cng
struct  SHA1Cng_t763556559  : public SHA1_t3336793149
{
public:
	// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1Cng::hash
	SHA1_t3336793149 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA1Cng_t763556559, ___hash_5)); }
	inline SHA1_t3336793149 * get_hash_5() const { return ___hash_5; }
	inline SHA1_t3336793149 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA1_t3336793149 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier(&___hash_5, value);
	}
};

struct SHA1Cng_t763556559_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA1Cng::Empty
	ByteU5BU5D_t3397334013* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA1Cng_t763556559_StaticFields, ___Empty_4)); }
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
