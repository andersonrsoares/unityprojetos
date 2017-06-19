#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Security_System_Security_Cryptography_Xml_Ke279567104.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoX509Data
struct  KeyInfoX509Data_t1803297193  : public KeyInfoClause_t279567104
{
public:
	// System.Byte[] System.Security.Cryptography.Xml.KeyInfoX509Data::x509crl
	ByteU5BU5D_t3397334013* ___x509crl_0;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::IssuerSerialList
	ArrayList_t4252133567 * ___IssuerSerialList_1;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::SubjectKeyIdList
	ArrayList_t4252133567 * ___SubjectKeyIdList_2;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::SubjectNameList
	ArrayList_t4252133567 * ___SubjectNameList_3;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::X509CertificateList
	ArrayList_t4252133567 * ___X509CertificateList_4;

public:
	inline static int32_t get_offset_of_x509crl_0() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t1803297193, ___x509crl_0)); }
	inline ByteU5BU5D_t3397334013* get_x509crl_0() const { return ___x509crl_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_x509crl_0() { return &___x509crl_0; }
	inline void set_x509crl_0(ByteU5BU5D_t3397334013* value)
	{
		___x509crl_0 = value;
		Il2CppCodeGenWriteBarrier(&___x509crl_0, value);
	}

	inline static int32_t get_offset_of_IssuerSerialList_1() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t1803297193, ___IssuerSerialList_1)); }
	inline ArrayList_t4252133567 * get_IssuerSerialList_1() const { return ___IssuerSerialList_1; }
	inline ArrayList_t4252133567 ** get_address_of_IssuerSerialList_1() { return &___IssuerSerialList_1; }
	inline void set_IssuerSerialList_1(ArrayList_t4252133567 * value)
	{
		___IssuerSerialList_1 = value;
		Il2CppCodeGenWriteBarrier(&___IssuerSerialList_1, value);
	}

	inline static int32_t get_offset_of_SubjectKeyIdList_2() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t1803297193, ___SubjectKeyIdList_2)); }
	inline ArrayList_t4252133567 * get_SubjectKeyIdList_2() const { return ___SubjectKeyIdList_2; }
	inline ArrayList_t4252133567 ** get_address_of_SubjectKeyIdList_2() { return &___SubjectKeyIdList_2; }
	inline void set_SubjectKeyIdList_2(ArrayList_t4252133567 * value)
	{
		___SubjectKeyIdList_2 = value;
		Il2CppCodeGenWriteBarrier(&___SubjectKeyIdList_2, value);
	}

	inline static int32_t get_offset_of_SubjectNameList_3() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t1803297193, ___SubjectNameList_3)); }
	inline ArrayList_t4252133567 * get_SubjectNameList_3() const { return ___SubjectNameList_3; }
	inline ArrayList_t4252133567 ** get_address_of_SubjectNameList_3() { return &___SubjectNameList_3; }
	inline void set_SubjectNameList_3(ArrayList_t4252133567 * value)
	{
		___SubjectNameList_3 = value;
		Il2CppCodeGenWriteBarrier(&___SubjectNameList_3, value);
	}

	inline static int32_t get_offset_of_X509CertificateList_4() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t1803297193, ___X509CertificateList_4)); }
	inline ArrayList_t4252133567 * get_X509CertificateList_4() const { return ___X509CertificateList_4; }
	inline ArrayList_t4252133567 ** get_address_of_X509CertificateList_4() { return &___X509CertificateList_4; }
	inline void set_X509CertificateList_4(ArrayList_t4252133567 * value)
	{
		___X509CertificateList_4 = value;
		Il2CppCodeGenWriteBarrier(&___X509CertificateList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
