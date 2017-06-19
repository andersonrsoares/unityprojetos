#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_E2404077154.h"

// System.String
struct String_t;
// System.Security.Cryptography.Xml.ReferenceList
struct ReferenceList_t1582251325;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedKey
struct  EncryptedKey_t3186175257  : public EncryptedType_t2404077154
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptedKey::carriedKeyName
	String_t* ___carriedKeyName_8;
	// System.String System.Security.Cryptography.Xml.EncryptedKey::recipient
	String_t* ___recipient_9;
	// System.Security.Cryptography.Xml.ReferenceList System.Security.Cryptography.Xml.EncryptedKey::referenceList
	ReferenceList_t1582251325 * ___referenceList_10;

public:
	inline static int32_t get_offset_of_carriedKeyName_8() { return static_cast<int32_t>(offsetof(EncryptedKey_t3186175257, ___carriedKeyName_8)); }
	inline String_t* get_carriedKeyName_8() const { return ___carriedKeyName_8; }
	inline String_t** get_address_of_carriedKeyName_8() { return &___carriedKeyName_8; }
	inline void set_carriedKeyName_8(String_t* value)
	{
		___carriedKeyName_8 = value;
		Il2CppCodeGenWriteBarrier(&___carriedKeyName_8, value);
	}

	inline static int32_t get_offset_of_recipient_9() { return static_cast<int32_t>(offsetof(EncryptedKey_t3186175257, ___recipient_9)); }
	inline String_t* get_recipient_9() const { return ___recipient_9; }
	inline String_t** get_address_of_recipient_9() { return &___recipient_9; }
	inline void set_recipient_9(String_t* value)
	{
		___recipient_9 = value;
		Il2CppCodeGenWriteBarrier(&___recipient_9, value);
	}

	inline static int32_t get_offset_of_referenceList_10() { return static_cast<int32_t>(offsetof(EncryptedKey_t3186175257, ___referenceList_10)); }
	inline ReferenceList_t1582251325 * get_referenceList_10() const { return ___referenceList_10; }
	inline ReferenceList_t1582251325 ** get_address_of_referenceList_10() { return &___referenceList_10; }
	inline void set_referenceList_10(ReferenceList_t1582251325 * value)
	{
		___referenceList_10 = value;
		Il2CppCodeGenWriteBarrier(&___referenceList_10, value);
	}
};

struct EncryptedKey_t3186175257_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedKey::<>f__switch$map6
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map6_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedKey::<>f__switch$map7
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map7_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_11() { return static_cast<int32_t>(offsetof(EncryptedKey_t3186175257_StaticFields, ___U3CU3Ef__switchU24map6_11)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map6_11() const { return ___U3CU3Ef__switchU24map6_11; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map6_11() { return &___U3CU3Ef__switchU24map6_11; }
	inline void set_U3CU3Ef__switchU24map6_11(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map6_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map6_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_12() { return static_cast<int32_t>(offsetof(EncryptedKey_t3186175257_StaticFields, ___U3CU3Ef__switchU24map7_12)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map7_12() const { return ___U3CU3Ef__switchU24map7_12; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map7_12() { return &___U3CU3Ef__switchU24map7_12; }
	inline void set_U3CU3Ef__switchU24map7_12(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map7_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
