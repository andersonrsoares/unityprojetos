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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptionMethod
struct  EncryptionMethod_t718466202  : public Il2CppObject
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptionMethod::algorithm
	String_t* ___algorithm_0;
	// System.Int32 System.Security.Cryptography.Xml.EncryptionMethod::keySize
	int32_t ___keySize_1;

public:
	inline static int32_t get_offset_of_algorithm_0() { return static_cast<int32_t>(offsetof(EncryptionMethod_t718466202, ___algorithm_0)); }
	inline String_t* get_algorithm_0() const { return ___algorithm_0; }
	inline String_t** get_address_of_algorithm_0() { return &___algorithm_0; }
	inline void set_algorithm_0(String_t* value)
	{
		___algorithm_0 = value;
		Il2CppCodeGenWriteBarrier(&___algorithm_0, value);
	}

	inline static int32_t get_offset_of_keySize_1() { return static_cast<int32_t>(offsetof(EncryptionMethod_t718466202, ___keySize_1)); }
	inline int32_t get_keySize_1() const { return ___keySize_1; }
	inline int32_t* get_address_of_keySize_1() { return &___keySize_1; }
	inline void set_keySize_1(int32_t value)
	{
		___keySize_1 = value;
	}
};

struct EncryptionMethod_t718466202_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptionMethod::<>f__switch$mapA
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(EncryptionMethod_t718466202_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
