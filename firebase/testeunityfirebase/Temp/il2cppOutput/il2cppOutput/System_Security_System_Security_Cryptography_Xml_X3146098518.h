#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_Tr729562346.h"

// System.Security.Cryptography.Xml.EncryptedXml
struct EncryptedXml_t2829945639;
// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDecryptionTransform
struct  XmlDecryptionTransform_t3146098518  : public Transform_t729562346
{
public:
	// System.Security.Cryptography.Xml.EncryptedXml System.Security.Cryptography.Xml.XmlDecryptionTransform::encryptedXml
	EncryptedXml_t2829945639 * ___encryptedXml_3;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.XmlDecryptionTransform::exceptUris
	ArrayList_t4252133567 * ___exceptUris_4;

public:
	inline static int32_t get_offset_of_encryptedXml_3() { return static_cast<int32_t>(offsetof(XmlDecryptionTransform_t3146098518, ___encryptedXml_3)); }
	inline EncryptedXml_t2829945639 * get_encryptedXml_3() const { return ___encryptedXml_3; }
	inline EncryptedXml_t2829945639 ** get_address_of_encryptedXml_3() { return &___encryptedXml_3; }
	inline void set_encryptedXml_3(EncryptedXml_t2829945639 * value)
	{
		___encryptedXml_3 = value;
		Il2CppCodeGenWriteBarrier(&___encryptedXml_3, value);
	}

	inline static int32_t get_offset_of_exceptUris_4() { return static_cast<int32_t>(offsetof(XmlDecryptionTransform_t3146098518, ___exceptUris_4)); }
	inline ArrayList_t4252133567 * get_exceptUris_4() const { return ___exceptUris_4; }
	inline ArrayList_t4252133567 ** get_address_of_exceptUris_4() { return &___exceptUris_4; }
	inline void set_exceptUris_4(ArrayList_t4252133567 * value)
	{
		___exceptUris_4 = value;
		Il2CppCodeGenWriteBarrier(&___exceptUris_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
