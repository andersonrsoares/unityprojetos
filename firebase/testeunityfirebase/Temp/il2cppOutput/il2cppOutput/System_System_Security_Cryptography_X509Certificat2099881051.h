#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Security_Cryptography_X509Certificat1320896183.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1962003286.h"

// System.String
struct String_t;
// System.Security.Cryptography.OidCollection
struct OidCollection_t3790243618;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t2099881051  : public X509Extension_t1320896183
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t3790243618 * ____enhKeyUsage_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__enhKeyUsage_6() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051, ____enhKeyUsage_6)); }
	inline OidCollection_t3790243618 * get__enhKeyUsage_6() const { return ____enhKeyUsage_6; }
	inline OidCollection_t3790243618 ** get_address_of__enhKeyUsage_6() { return &____enhKeyUsage_6; }
	inline void set__enhKeyUsage_6(OidCollection_t3790243618 * value)
	{
		____enhKeyUsage_6 = value;
		Il2CppCodeGenWriteBarrier(&____enhKeyUsage_6, value);
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
	}
};

struct X509EnhancedKeyUsageExtension_t2099881051_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$map1A
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1A_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_8() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051_StaticFields, ___U3CU3Ef__switchU24map1A_8)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1A_8() const { return ___U3CU3Ef__switchU24map1A_8; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1A_8() { return &___U3CU3Ef__switchU24map1A_8; }
	inline void set_U3CU3Ef__switchU24map1A_8(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1A_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1A_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
