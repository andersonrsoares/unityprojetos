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
// Mono.Security.X509.X509Store
struct X509Store_t4028973564;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t3001420399  : public Il2CppObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_t4028973564 * ____personal_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_t4028973564 * ____other_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_t4028973564 * ____intermediate_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t4028973564 * ____trusted_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_t4028973564 * ____untrusted_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t3001420399, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier(&____storePath_0, value);
	}

	inline static int32_t get_offset_of__personal_1() { return static_cast<int32_t>(offsetof(X509Stores_t3001420399, ____personal_1)); }
	inline X509Store_t4028973564 * get__personal_1() const { return ____personal_1; }
	inline X509Store_t4028973564 ** get_address_of__personal_1() { return &____personal_1; }
	inline void set__personal_1(X509Store_t4028973564 * value)
	{
		____personal_1 = value;
		Il2CppCodeGenWriteBarrier(&____personal_1, value);
	}

	inline static int32_t get_offset_of__other_2() { return static_cast<int32_t>(offsetof(X509Stores_t3001420399, ____other_2)); }
	inline X509Store_t4028973564 * get__other_2() const { return ____other_2; }
	inline X509Store_t4028973564 ** get_address_of__other_2() { return &____other_2; }
	inline void set__other_2(X509Store_t4028973564 * value)
	{
		____other_2 = value;
		Il2CppCodeGenWriteBarrier(&____other_2, value);
	}

	inline static int32_t get_offset_of__intermediate_3() { return static_cast<int32_t>(offsetof(X509Stores_t3001420399, ____intermediate_3)); }
	inline X509Store_t4028973564 * get__intermediate_3() const { return ____intermediate_3; }
	inline X509Store_t4028973564 ** get_address_of__intermediate_3() { return &____intermediate_3; }
	inline void set__intermediate_3(X509Store_t4028973564 * value)
	{
		____intermediate_3 = value;
		Il2CppCodeGenWriteBarrier(&____intermediate_3, value);
	}

	inline static int32_t get_offset_of__trusted_4() { return static_cast<int32_t>(offsetof(X509Stores_t3001420399, ____trusted_4)); }
	inline X509Store_t4028973564 * get__trusted_4() const { return ____trusted_4; }
	inline X509Store_t4028973564 ** get_address_of__trusted_4() { return &____trusted_4; }
	inline void set__trusted_4(X509Store_t4028973564 * value)
	{
		____trusted_4 = value;
		Il2CppCodeGenWriteBarrier(&____trusted_4, value);
	}

	inline static int32_t get_offset_of__untrusted_5() { return static_cast<int32_t>(offsetof(X509Stores_t3001420399, ____untrusted_5)); }
	inline X509Store_t4028973564 * get__untrusted_5() const { return ____untrusted_5; }
	inline X509Store_t4028973564 ** get_address_of__untrusted_5() { return &____untrusted_5; }
	inline void set__untrusted_5(X509Store_t4028973564 * value)
	{
		____untrusted_5 = value;
		Il2CppCodeGenWriteBarrier(&____untrusted_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
