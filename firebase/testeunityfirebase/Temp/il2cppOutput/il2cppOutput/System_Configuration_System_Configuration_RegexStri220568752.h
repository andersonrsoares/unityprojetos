#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configura210547623.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.RegexStringValidator
struct  RegexStringValidator_t220568752  : public ConfigurationValidatorBase_t210547623
{
public:
	// System.String System.Configuration.RegexStringValidator::regex
	String_t* ___regex_0;

public:
	inline static int32_t get_offset_of_regex_0() { return static_cast<int32_t>(offsetof(RegexStringValidator_t220568752, ___regex_0)); }
	inline String_t* get_regex_0() const { return ___regex_0; }
	inline String_t** get_address_of_regex_0() { return &___regex_0; }
	inline void set_regex_0(String_t* value)
	{
		___regex_0 = value;
		Il2CppCodeGenWriteBarrier(&___regex_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
