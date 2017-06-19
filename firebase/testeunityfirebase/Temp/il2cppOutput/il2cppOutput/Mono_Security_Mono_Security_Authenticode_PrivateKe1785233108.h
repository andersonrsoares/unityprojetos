#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Cryptography.RSA
struct RSA_t3719518354;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.PrivateKey
struct  PrivateKey_t1785233108  : public Il2CppObject
{
public:
	// System.Boolean Mono.Security.Authenticode.PrivateKey::encrypted
	bool ___encrypted_0;
	// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::rsa
	RSA_t3719518354 * ___rsa_1;
	// System.Boolean Mono.Security.Authenticode.PrivateKey::weak
	bool ___weak_2;
	// System.Int32 Mono.Security.Authenticode.PrivateKey::keyType
	int32_t ___keyType_3;

public:
	inline static int32_t get_offset_of_encrypted_0() { return static_cast<int32_t>(offsetof(PrivateKey_t1785233108, ___encrypted_0)); }
	inline bool get_encrypted_0() const { return ___encrypted_0; }
	inline bool* get_address_of_encrypted_0() { return &___encrypted_0; }
	inline void set_encrypted_0(bool value)
	{
		___encrypted_0 = value;
	}

	inline static int32_t get_offset_of_rsa_1() { return static_cast<int32_t>(offsetof(PrivateKey_t1785233108, ___rsa_1)); }
	inline RSA_t3719518354 * get_rsa_1() const { return ___rsa_1; }
	inline RSA_t3719518354 ** get_address_of_rsa_1() { return &___rsa_1; }
	inline void set_rsa_1(RSA_t3719518354 * value)
	{
		___rsa_1 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_1, value);
	}

	inline static int32_t get_offset_of_weak_2() { return static_cast<int32_t>(offsetof(PrivateKey_t1785233108, ___weak_2)); }
	inline bool get_weak_2() const { return ___weak_2; }
	inline bool* get_address_of_weak_2() { return &___weak_2; }
	inline void set_weak_2(bool value)
	{
		___weak_2 = value;
	}

	inline static int32_t get_offset_of_keyType_3() { return static_cast<int32_t>(offsetof(PrivateKey_t1785233108, ___keyType_3)); }
	inline int32_t get_keyType_3() const { return ___keyType_3; }
	inline int32_t* get_address_of_keyType_3() { return &___keyType_3; }
	inline void set_keyType_3(int32_t value)
	{
		___keyType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
