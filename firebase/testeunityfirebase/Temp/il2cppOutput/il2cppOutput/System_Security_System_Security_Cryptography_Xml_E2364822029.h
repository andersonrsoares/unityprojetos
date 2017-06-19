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
// System.Security.Cryptography.Xml.TransformChain
struct TransformChain_t251592321;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedReference
struct  EncryptedReference_t2364822029  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptedReference::referenceType
	String_t* ___referenceType_0;
	// System.String System.Security.Cryptography.Xml.EncryptedReference::uri
	String_t* ___uri_1;
	// System.Security.Cryptography.Xml.TransformChain System.Security.Cryptography.Xml.EncryptedReference::tc
	TransformChain_t251592321 * ___tc_2;

public:
	inline static int32_t get_offset_of_referenceType_0() { return static_cast<int32_t>(offsetof(EncryptedReference_t2364822029, ___referenceType_0)); }
	inline String_t* get_referenceType_0() const { return ___referenceType_0; }
	inline String_t** get_address_of_referenceType_0() { return &___referenceType_0; }
	inline void set_referenceType_0(String_t* value)
	{
		___referenceType_0 = value;
		Il2CppCodeGenWriteBarrier(&___referenceType_0, value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(EncryptedReference_t2364822029, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier(&___uri_1, value);
	}

	inline static int32_t get_offset_of_tc_2() { return static_cast<int32_t>(offsetof(EncryptedReference_t2364822029, ___tc_2)); }
	inline TransformChain_t251592321 * get_tc_2() const { return ___tc_2; }
	inline TransformChain_t251592321 ** get_address_of_tc_2() { return &___tc_2; }
	inline void set_tc_2(TransformChain_t251592321 * value)
	{
		___tc_2 = value;
		Il2CppCodeGenWriteBarrier(&___tc_2, value);
	}
};

struct EncryptedReference_t2364822029_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedReference::<>f__switch$map2
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedReference::<>f__switch$map3
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map3_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_3() { return static_cast<int32_t>(offsetof(EncryptedReference_t2364822029_StaticFields, ___U3CU3Ef__switchU24map2_3)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2_3() const { return ___U3CU3Ef__switchU24map2_3; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2_3() { return &___U3CU3Ef__switchU24map2_3; }
	inline void set_U3CU3Ef__switchU24map2_3(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_4() { return static_cast<int32_t>(offsetof(EncryptedReference_t2364822029_StaticFields, ___U3CU3Ef__switchU24map3_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map3_4() const { return ___U3CU3Ef__switchU24map3_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map3_4() { return &___U3CU3Ef__switchU24map3_4; }
	inline void set_U3CU3Ef__switchU24map3_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
