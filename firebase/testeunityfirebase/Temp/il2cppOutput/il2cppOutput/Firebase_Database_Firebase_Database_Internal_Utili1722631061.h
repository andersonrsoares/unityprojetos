#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.Validation
struct  Validation_t1722631061  : public Il2CppObject
{
public:

public:
};

struct Validation_t1722631061_StaticFields
{
public:
	// System.String Firebase.Database.Internal.Utilities.Validation::InvalidPathRegex
	String_t* ___InvalidPathRegex_0;
	// System.String Firebase.Database.Internal.Utilities.Validation::InvalidKeyRegex
	String_t* ___InvalidKeyRegex_1;

public:
	inline static int32_t get_offset_of_InvalidPathRegex_0() { return static_cast<int32_t>(offsetof(Validation_t1722631061_StaticFields, ___InvalidPathRegex_0)); }
	inline String_t* get_InvalidPathRegex_0() const { return ___InvalidPathRegex_0; }
	inline String_t** get_address_of_InvalidPathRegex_0() { return &___InvalidPathRegex_0; }
	inline void set_InvalidPathRegex_0(String_t* value)
	{
		___InvalidPathRegex_0 = value;
		Il2CppCodeGenWriteBarrier(&___InvalidPathRegex_0, value);
	}

	inline static int32_t get_offset_of_InvalidKeyRegex_1() { return static_cast<int32_t>(offsetof(Validation_t1722631061_StaticFields, ___InvalidKeyRegex_1)); }
	inline String_t* get_InvalidKeyRegex_1() const { return ___InvalidKeyRegex_1; }
	inline String_t** get_address_of_InvalidKeyRegex_1() { return &___InvalidKeyRegex_1; }
	inline void set_InvalidKeyRegex_1(String_t* value)
	{
		___InvalidKeyRegex_1 = value;
		Il2CppCodeGenWriteBarrier(&___InvalidKeyRegex_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
