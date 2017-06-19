#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// Mono.Math.BigInteger
struct BigInteger_t925946152;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t108853709;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t3034748747  : public RSA_t3719518354
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_5;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t925946152 * ___d_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t925946152 * ___p_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t925946152 * ___q_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t925946152 * ___dp_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t925946152 * ___dq_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t925946152 * ___qInv_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t925946152 * ___n_13;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t925946152 * ___e_14;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t108853709 * ___KeyGenerated_15;

public:
	inline static int32_t get_offset_of_isCRTpossible_3() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___isCRTpossible_3)); }
	inline bool get_isCRTpossible_3() const { return ___isCRTpossible_3; }
	inline bool* get_address_of_isCRTpossible_3() { return &___isCRTpossible_3; }
	inline void set_isCRTpossible_3(bool value)
	{
		___isCRTpossible_3 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_4() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___keyBlinding_4)); }
	inline bool get_keyBlinding_4() const { return ___keyBlinding_4; }
	inline bool* get_address_of_keyBlinding_4() { return &___keyBlinding_4; }
	inline void set_keyBlinding_4(bool value)
	{
		___keyBlinding_4 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_5() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___keypairGenerated_5)); }
	inline bool get_keypairGenerated_5() const { return ___keypairGenerated_5; }
	inline bool* get_address_of_keypairGenerated_5() { return &___keypairGenerated_5; }
	inline void set_keypairGenerated_5(bool value)
	{
		___keypairGenerated_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___d_7)); }
	inline BigInteger_t925946152 * get_d_7() const { return ___d_7; }
	inline BigInteger_t925946152 ** get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(BigInteger_t925946152 * value)
	{
		___d_7 = value;
		Il2CppCodeGenWriteBarrier(&___d_7, value);
	}

	inline static int32_t get_offset_of_p_8() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___p_8)); }
	inline BigInteger_t925946152 * get_p_8() const { return ___p_8; }
	inline BigInteger_t925946152 ** get_address_of_p_8() { return &___p_8; }
	inline void set_p_8(BigInteger_t925946152 * value)
	{
		___p_8 = value;
		Il2CppCodeGenWriteBarrier(&___p_8, value);
	}

	inline static int32_t get_offset_of_q_9() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___q_9)); }
	inline BigInteger_t925946152 * get_q_9() const { return ___q_9; }
	inline BigInteger_t925946152 ** get_address_of_q_9() { return &___q_9; }
	inline void set_q_9(BigInteger_t925946152 * value)
	{
		___q_9 = value;
		Il2CppCodeGenWriteBarrier(&___q_9, value);
	}

	inline static int32_t get_offset_of_dp_10() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___dp_10)); }
	inline BigInteger_t925946152 * get_dp_10() const { return ___dp_10; }
	inline BigInteger_t925946152 ** get_address_of_dp_10() { return &___dp_10; }
	inline void set_dp_10(BigInteger_t925946152 * value)
	{
		___dp_10 = value;
		Il2CppCodeGenWriteBarrier(&___dp_10, value);
	}

	inline static int32_t get_offset_of_dq_11() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___dq_11)); }
	inline BigInteger_t925946152 * get_dq_11() const { return ___dq_11; }
	inline BigInteger_t925946152 ** get_address_of_dq_11() { return &___dq_11; }
	inline void set_dq_11(BigInteger_t925946152 * value)
	{
		___dq_11 = value;
		Il2CppCodeGenWriteBarrier(&___dq_11, value);
	}

	inline static int32_t get_offset_of_qInv_12() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___qInv_12)); }
	inline BigInteger_t925946152 * get_qInv_12() const { return ___qInv_12; }
	inline BigInteger_t925946152 ** get_address_of_qInv_12() { return &___qInv_12; }
	inline void set_qInv_12(BigInteger_t925946152 * value)
	{
		___qInv_12 = value;
		Il2CppCodeGenWriteBarrier(&___qInv_12, value);
	}

	inline static int32_t get_offset_of_n_13() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___n_13)); }
	inline BigInteger_t925946152 * get_n_13() const { return ___n_13; }
	inline BigInteger_t925946152 ** get_address_of_n_13() { return &___n_13; }
	inline void set_n_13(BigInteger_t925946152 * value)
	{
		___n_13 = value;
		Il2CppCodeGenWriteBarrier(&___n_13, value);
	}

	inline static int32_t get_offset_of_e_14() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___e_14)); }
	inline BigInteger_t925946152 * get_e_14() const { return ___e_14; }
	inline BigInteger_t925946152 ** get_address_of_e_14() { return &___e_14; }
	inline void set_e_14(BigInteger_t925946152 * value)
	{
		___e_14 = value;
		Il2CppCodeGenWriteBarrier(&___e_14, value);
	}

	inline static int32_t get_offset_of_KeyGenerated_15() { return static_cast<int32_t>(offsetof(RSAManaged_t3034748747, ___KeyGenerated_15)); }
	inline KeyGeneratedEventHandler_t108853709 * get_KeyGenerated_15() const { return ___KeyGenerated_15; }
	inline KeyGeneratedEventHandler_t108853709 ** get_address_of_KeyGenerated_15() { return &___KeyGenerated_15; }
	inline void set_KeyGenerated_15(KeyGeneratedEventHandler_t108853709 * value)
	{
		___KeyGenerated_15 = value;
		Il2CppCodeGenWriteBarrier(&___KeyGenerated_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
