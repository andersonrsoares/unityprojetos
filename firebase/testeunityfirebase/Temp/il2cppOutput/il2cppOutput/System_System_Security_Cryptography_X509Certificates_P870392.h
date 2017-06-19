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
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t463456204;
// System.Security.Cryptography.Oid
struct Oid_t3221867120;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t870392  : public Il2CppObject
{
public:
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t784058677 * ____key_2;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t463456204 * ____keyValue_3;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t463456204 * ____params_4;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t3221867120 * ____oid_5;

public:
	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____key_2)); }
	inline AsymmetricAlgorithm_t784058677 * get__key_2() const { return ____key_2; }
	inline AsymmetricAlgorithm_t784058677 ** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(AsymmetricAlgorithm_t784058677 * value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier(&____key_2, value);
	}

	inline static int32_t get_offset_of__keyValue_3() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____keyValue_3)); }
	inline AsnEncodedData_t463456204 * get__keyValue_3() const { return ____keyValue_3; }
	inline AsnEncodedData_t463456204 ** get_address_of__keyValue_3() { return &____keyValue_3; }
	inline void set__keyValue_3(AsnEncodedData_t463456204 * value)
	{
		____keyValue_3 = value;
		Il2CppCodeGenWriteBarrier(&____keyValue_3, value);
	}

	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____params_4)); }
	inline AsnEncodedData_t463456204 * get__params_4() const { return ____params_4; }
	inline AsnEncodedData_t463456204 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(AsnEncodedData_t463456204 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier(&____params_4, value);
	}

	inline static int32_t get_offset_of__oid_5() { return static_cast<int32_t>(offsetof(PublicKey_t870392, ____oid_5)); }
	inline Oid_t3221867120 * get__oid_5() const { return ____oid_5; }
	inline Oid_t3221867120 ** get_address_of__oid_5() { return &____oid_5; }
	inline void set__oid_5(Oid_t3221867120 * value)
	{
		____oid_5 = value;
		Il2CppCodeGenWriteBarrier(&____oid_5, value);
	}
};

struct PublicKey_t870392_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map16
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map16_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_6() { return static_cast<int32_t>(offsetof(PublicKey_t870392_StaticFields, ___U3CU3Ef__switchU24map16_6)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map16_6() const { return ___U3CU3Ef__switchU24map16_6; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map16_6() { return &___U3CU3Ef__switchU24map16_6; }
	inline void set_U3CU3Ef__switchU24map16_6(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map16_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map16_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
