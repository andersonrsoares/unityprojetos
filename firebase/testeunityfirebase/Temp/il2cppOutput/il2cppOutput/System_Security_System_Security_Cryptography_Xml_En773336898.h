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

// System.Security.Cryptography.Xml.EncryptionProperty
struct  EncryptionProperty_t773336898  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptionProperty::id
	String_t* ___id_0;
	// System.String System.Security.Cryptography.Xml.EncryptionProperty::target
	String_t* ___target_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(EncryptionProperty_t773336898, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(EncryptionProperty_t773336898, ___target_1)); }
	inline String_t* get_target_1() const { return ___target_1; }
	inline String_t** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(String_t* value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
