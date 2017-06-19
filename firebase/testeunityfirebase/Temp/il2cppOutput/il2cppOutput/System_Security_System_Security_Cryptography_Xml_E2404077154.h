#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Cryptography.Xml.CipherData
struct CipherData_t2270233253;
// System.String
struct String_t;
// System.Security.Cryptography.Xml.EncryptionMethod
struct EncryptionMethod_t718466202;
// System.Security.Cryptography.Xml.EncryptionPropertyCollection
struct EncryptionPropertyCollection_t2509585554;
// System.Security.Cryptography.Xml.KeyInfo
struct KeyInfo_t862955101;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedType
struct  EncryptedType_t2404077154  : public Il2CppObject
{
public:
	// System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::cipherData
	CipherData_t2270233253 * ___cipherData_0;
	// System.String System.Security.Cryptography.Xml.EncryptedType::encoding
	String_t* ___encoding_1;
	// System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::encryptionMethod
	EncryptionMethod_t718466202 * ___encryptionMethod_2;
	// System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::encryptionProperties
	EncryptionPropertyCollection_t2509585554 * ___encryptionProperties_3;
	// System.String System.Security.Cryptography.Xml.EncryptedType::id
	String_t* ___id_4;
	// System.Security.Cryptography.Xml.KeyInfo System.Security.Cryptography.Xml.EncryptedType::keyInfo
	KeyInfo_t862955101 * ___keyInfo_5;
	// System.String System.Security.Cryptography.Xml.EncryptedType::mimeType
	String_t* ___mimeType_6;
	// System.String System.Security.Cryptography.Xml.EncryptedType::type
	String_t* ___type_7;

public:
	inline static int32_t get_offset_of_cipherData_0() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___cipherData_0)); }
	inline CipherData_t2270233253 * get_cipherData_0() const { return ___cipherData_0; }
	inline CipherData_t2270233253 ** get_address_of_cipherData_0() { return &___cipherData_0; }
	inline void set_cipherData_0(CipherData_t2270233253 * value)
	{
		___cipherData_0 = value;
		Il2CppCodeGenWriteBarrier(&___cipherData_0, value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___encoding_1)); }
	inline String_t* get_encoding_1() const { return ___encoding_1; }
	inline String_t** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(String_t* value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_1, value);
	}

	inline static int32_t get_offset_of_encryptionMethod_2() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___encryptionMethod_2)); }
	inline EncryptionMethod_t718466202 * get_encryptionMethod_2() const { return ___encryptionMethod_2; }
	inline EncryptionMethod_t718466202 ** get_address_of_encryptionMethod_2() { return &___encryptionMethod_2; }
	inline void set_encryptionMethod_2(EncryptionMethod_t718466202 * value)
	{
		___encryptionMethod_2 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionMethod_2, value);
	}

	inline static int32_t get_offset_of_encryptionProperties_3() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___encryptionProperties_3)); }
	inline EncryptionPropertyCollection_t2509585554 * get_encryptionProperties_3() const { return ___encryptionProperties_3; }
	inline EncryptionPropertyCollection_t2509585554 ** get_address_of_encryptionProperties_3() { return &___encryptionProperties_3; }
	inline void set_encryptionProperties_3(EncryptionPropertyCollection_t2509585554 * value)
	{
		___encryptionProperties_3 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionProperties_3, value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___id_4)); }
	inline String_t* get_id_4() const { return ___id_4; }
	inline String_t** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(String_t* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier(&___id_4, value);
	}

	inline static int32_t get_offset_of_keyInfo_5() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___keyInfo_5)); }
	inline KeyInfo_t862955101 * get_keyInfo_5() const { return ___keyInfo_5; }
	inline KeyInfo_t862955101 ** get_address_of_keyInfo_5() { return &___keyInfo_5; }
	inline void set_keyInfo_5(KeyInfo_t862955101 * value)
	{
		___keyInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___keyInfo_5, value);
	}

	inline static int32_t get_offset_of_mimeType_6() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___mimeType_6)); }
	inline String_t* get_mimeType_6() const { return ___mimeType_6; }
	inline String_t** get_address_of_mimeType_6() { return &___mimeType_6; }
	inline void set_mimeType_6(String_t* value)
	{
		___mimeType_6 = value;
		Il2CppCodeGenWriteBarrier(&___mimeType_6, value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(EncryptedType_t2404077154, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier(&___type_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
