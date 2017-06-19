#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_MD51507972490.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.MD5
struct MD5_t1507972490;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5Cng
struct  MD5Cng_t952537784  : public MD5_t1507972490
{
public:
	// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5Cng::hash
	MD5_t1507972490 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(MD5Cng_t952537784, ___hash_5)); }
	inline MD5_t1507972490 * get_hash_5() const { return ___hash_5; }
	inline MD5_t1507972490 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(MD5_t1507972490 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier(&___hash_5, value);
	}
};

struct MD5Cng_t952537784_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.MD5Cng::Empty
	ByteU5BU5D_t3397334013* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(MD5Cng_t952537784_StaticFields, ___Empty_4)); }
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
