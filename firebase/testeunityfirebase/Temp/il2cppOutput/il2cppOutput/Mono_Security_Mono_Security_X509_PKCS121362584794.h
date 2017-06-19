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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3592472866;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t1362584795  : public Il2CppObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t3397334013* ____password_17;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t4252133567 * ____keyBags_18;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t4252133567 * ____secretBags_19;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t3592472866 * ____certs_20;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_21;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_22;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_23;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_24;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t4252133567 * ____safeBags_25;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t2510243513 * ____rng_26;

public:
	inline static int32_t get_offset_of__password_17() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____password_17)); }
	inline ByteU5BU5D_t3397334013* get__password_17() const { return ____password_17; }
	inline ByteU5BU5D_t3397334013** get_address_of__password_17() { return &____password_17; }
	inline void set__password_17(ByteU5BU5D_t3397334013* value)
	{
		____password_17 = value;
		Il2CppCodeGenWriteBarrier(&____password_17, value);
	}

	inline static int32_t get_offset_of__keyBags_18() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____keyBags_18)); }
	inline ArrayList_t4252133567 * get__keyBags_18() const { return ____keyBags_18; }
	inline ArrayList_t4252133567 ** get_address_of__keyBags_18() { return &____keyBags_18; }
	inline void set__keyBags_18(ArrayList_t4252133567 * value)
	{
		____keyBags_18 = value;
		Il2CppCodeGenWriteBarrier(&____keyBags_18, value);
	}

	inline static int32_t get_offset_of__secretBags_19() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____secretBags_19)); }
	inline ArrayList_t4252133567 * get__secretBags_19() const { return ____secretBags_19; }
	inline ArrayList_t4252133567 ** get_address_of__secretBags_19() { return &____secretBags_19; }
	inline void set__secretBags_19(ArrayList_t4252133567 * value)
	{
		____secretBags_19 = value;
		Il2CppCodeGenWriteBarrier(&____secretBags_19, value);
	}

	inline static int32_t get_offset_of__certs_20() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____certs_20)); }
	inline X509CertificateCollection_t3592472866 * get__certs_20() const { return ____certs_20; }
	inline X509CertificateCollection_t3592472866 ** get_address_of__certs_20() { return &____certs_20; }
	inline void set__certs_20(X509CertificateCollection_t3592472866 * value)
	{
		____certs_20 = value;
		Il2CppCodeGenWriteBarrier(&____certs_20, value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_21() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____keyBagsChanged_21)); }
	inline bool get__keyBagsChanged_21() const { return ____keyBagsChanged_21; }
	inline bool* get_address_of__keyBagsChanged_21() { return &____keyBagsChanged_21; }
	inline void set__keyBagsChanged_21(bool value)
	{
		____keyBagsChanged_21 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_22() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____secretBagsChanged_22)); }
	inline bool get__secretBagsChanged_22() const { return ____secretBagsChanged_22; }
	inline bool* get_address_of__secretBagsChanged_22() { return &____secretBagsChanged_22; }
	inline void set__secretBagsChanged_22(bool value)
	{
		____secretBagsChanged_22 = value;
	}

	inline static int32_t get_offset_of__certsChanged_23() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____certsChanged_23)); }
	inline bool get__certsChanged_23() const { return ____certsChanged_23; }
	inline bool* get_address_of__certsChanged_23() { return &____certsChanged_23; }
	inline void set__certsChanged_23(bool value)
	{
		____certsChanged_23 = value;
	}

	inline static int32_t get_offset_of__iterations_24() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____iterations_24)); }
	inline int32_t get__iterations_24() const { return ____iterations_24; }
	inline int32_t* get_address_of__iterations_24() { return &____iterations_24; }
	inline void set__iterations_24(int32_t value)
	{
		____iterations_24 = value;
	}

	inline static int32_t get_offset_of__safeBags_25() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____safeBags_25)); }
	inline ArrayList_t4252133567 * get__safeBags_25() const { return ____safeBags_25; }
	inline ArrayList_t4252133567 ** get_address_of__safeBags_25() { return &____safeBags_25; }
	inline void set__safeBags_25(ArrayList_t4252133567 * value)
	{
		____safeBags_25 = value;
		Il2CppCodeGenWriteBarrier(&____safeBags_25, value);
	}

	inline static int32_t get_offset_of__rng_26() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795, ____rng_26)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_26() const { return ____rng_26; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_26() { return &____rng_26; }
	inline void set__rng_26(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_26 = value;
		Il2CppCodeGenWriteBarrier(&____rng_26, value);
	}
};

struct PKCS12_t1362584795_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_16;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_27;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map5_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map6_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map7_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map8_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map9_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapA_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapB_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapC_35;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_16() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___recommendedIterationCount_16)); }
	inline int32_t get_recommendedIterationCount_16() const { return ___recommendedIterationCount_16; }
	inline int32_t* get_address_of_recommendedIterationCount_16() { return &___recommendedIterationCount_16; }
	inline void set_recommendedIterationCount_16(int32_t value)
	{
		___recommendedIterationCount_16 = value;
	}

	inline static int32_t get_offset_of_password_max_length_27() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___password_max_length_27)); }
	inline int32_t get_password_max_length_27() const { return ___password_max_length_27; }
	inline int32_t* get_address_of_password_max_length_27() { return &___password_max_length_27; }
	inline void set_password_max_length_27(int32_t value)
	{
		___password_max_length_27 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_28() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24map5_28)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map5_28() const { return ___U3CU3Ef__switchU24map5_28; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map5_28() { return &___U3CU3Ef__switchU24map5_28; }
	inline void set_U3CU3Ef__switchU24map5_28(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map5_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_29() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24map6_29)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map6_29() const { return ___U3CU3Ef__switchU24map6_29; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map6_29() { return &___U3CU3Ef__switchU24map6_29; }
	inline void set_U3CU3Ef__switchU24map6_29(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map6_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map6_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_30() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24map7_30)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map7_30() const { return ___U3CU3Ef__switchU24map7_30; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map7_30() { return &___U3CU3Ef__switchU24map7_30; }
	inline void set_U3CU3Ef__switchU24map7_30(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map7_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_31() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24map8_31)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map8_31() const { return ___U3CU3Ef__switchU24map8_31; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map8_31() { return &___U3CU3Ef__switchU24map8_31; }
	inline void set_U3CU3Ef__switchU24map8_31(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map8_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_32() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24map9_32)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map9_32() const { return ___U3CU3Ef__switchU24map9_32; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map9_32() { return &___U3CU3Ef__switchU24map9_32; }
	inline void set_U3CU3Ef__switchU24map9_32(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map9_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_33() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24mapA_33)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapA_33() const { return ___U3CU3Ef__switchU24mapA_33; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapA_33() { return &___U3CU3Ef__switchU24mapA_33; }
	inline void set_U3CU3Ef__switchU24mapA_33(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapA_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_34() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24mapB_34)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapB_34() const { return ___U3CU3Ef__switchU24mapB_34; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapB_34() { return &___U3CU3Ef__switchU24mapB_34; }
	inline void set_U3CU3Ef__switchU24mapB_34(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapB_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_35() { return static_cast<int32_t>(offsetof(PKCS12_t1362584795_StaticFields, ___U3CU3Ef__switchU24mapC_35)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapC_35() const { return ___U3CU3Ef__switchU24mapC_35; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapC_35() { return &___U3CU3Ef__switchU24mapC_35; }
	inline void set_U3CU3Ef__switchU24mapC_35(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapC_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
