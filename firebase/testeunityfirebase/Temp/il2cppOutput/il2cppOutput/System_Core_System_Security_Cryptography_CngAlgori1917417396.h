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
// System.Security.Cryptography.CngAlgorithmGroup
struct CngAlgorithmGroup_t1917417396;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CngAlgorithmGroup
struct  CngAlgorithmGroup_t1917417396  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.CngAlgorithmGroup::group
	String_t* ___group_0;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t1917417396, ___group_0)); }
	inline String_t* get_group_0() const { return ___group_0; }
	inline String_t** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(String_t* value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier(&___group_0, value);
	}
};

struct CngAlgorithmGroup_t1917417396_StaticFields
{
public:
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::dh
	CngAlgorithmGroup_t1917417396 * ___dh_1;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::dsa
	CngAlgorithmGroup_t1917417396 * ___dsa_2;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::ecdh
	CngAlgorithmGroup_t1917417396 * ___ecdh_3;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::ecdsa
	CngAlgorithmGroup_t1917417396 * ___ecdsa_4;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::rsa
	CngAlgorithmGroup_t1917417396 * ___rsa_5;

public:
	inline static int32_t get_offset_of_dh_1() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t1917417396_StaticFields, ___dh_1)); }
	inline CngAlgorithmGroup_t1917417396 * get_dh_1() const { return ___dh_1; }
	inline CngAlgorithmGroup_t1917417396 ** get_address_of_dh_1() { return &___dh_1; }
	inline void set_dh_1(CngAlgorithmGroup_t1917417396 * value)
	{
		___dh_1 = value;
		Il2CppCodeGenWriteBarrier(&___dh_1, value);
	}

	inline static int32_t get_offset_of_dsa_2() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t1917417396_StaticFields, ___dsa_2)); }
	inline CngAlgorithmGroup_t1917417396 * get_dsa_2() const { return ___dsa_2; }
	inline CngAlgorithmGroup_t1917417396 ** get_address_of_dsa_2() { return &___dsa_2; }
	inline void set_dsa_2(CngAlgorithmGroup_t1917417396 * value)
	{
		___dsa_2 = value;
		Il2CppCodeGenWriteBarrier(&___dsa_2, value);
	}

	inline static int32_t get_offset_of_ecdh_3() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t1917417396_StaticFields, ___ecdh_3)); }
	inline CngAlgorithmGroup_t1917417396 * get_ecdh_3() const { return ___ecdh_3; }
	inline CngAlgorithmGroup_t1917417396 ** get_address_of_ecdh_3() { return &___ecdh_3; }
	inline void set_ecdh_3(CngAlgorithmGroup_t1917417396 * value)
	{
		___ecdh_3 = value;
		Il2CppCodeGenWriteBarrier(&___ecdh_3, value);
	}

	inline static int32_t get_offset_of_ecdsa_4() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t1917417396_StaticFields, ___ecdsa_4)); }
	inline CngAlgorithmGroup_t1917417396 * get_ecdsa_4() const { return ___ecdsa_4; }
	inline CngAlgorithmGroup_t1917417396 ** get_address_of_ecdsa_4() { return &___ecdsa_4; }
	inline void set_ecdsa_4(CngAlgorithmGroup_t1917417396 * value)
	{
		___ecdsa_4 = value;
		Il2CppCodeGenWriteBarrier(&___ecdsa_4, value);
	}

	inline static int32_t get_offset_of_rsa_5() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t1917417396_StaticFields, ___rsa_5)); }
	inline CngAlgorithmGroup_t1917417396 * get_rsa_5() const { return ___rsa_5; }
	inline CngAlgorithmGroup_t1917417396 ** get_address_of_rsa_5() { return &___rsa_5; }
	inline void set_rsa_5(CngAlgorithmGroup_t1917417396 * value)
	{
		___rsa_5 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
