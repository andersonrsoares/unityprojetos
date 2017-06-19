#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Principal_GenericIdentity607870731.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerBasicIdentity
struct  HttpListenerBasicIdentity_t2619879658  : public GenericIdentity_t607870731
{
public:
	// System.String System.Net.HttpListenerBasicIdentity::password
	String_t* ___password_2;

public:
	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(HttpListenerBasicIdentity_t2619879658, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier(&___password_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
