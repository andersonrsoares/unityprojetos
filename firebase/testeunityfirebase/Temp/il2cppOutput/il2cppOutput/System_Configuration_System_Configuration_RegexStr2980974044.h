#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1007519140.h"

// System.String
struct String_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t210547623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.RegexStringValidatorAttribute
struct  RegexStringValidatorAttribute_t2980974044  : public ConfigurationValidatorAttribute_t1007519140
{
public:
	// System.String System.Configuration.RegexStringValidatorAttribute::regex
	String_t* ___regex_2;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.RegexStringValidatorAttribute::instance
	ConfigurationValidatorBase_t210547623 * ___instance_3;

public:
	inline static int32_t get_offset_of_regex_2() { return static_cast<int32_t>(offsetof(RegexStringValidatorAttribute_t2980974044, ___regex_2)); }
	inline String_t* get_regex_2() const { return ___regex_2; }
	inline String_t** get_address_of_regex_2() { return &___regex_2; }
	inline void set_regex_2(String_t* value)
	{
		___regex_2 = value;
		Il2CppCodeGenWriteBarrier(&___regex_2, value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(RegexStringValidatorAttribute_t2980974044, ___instance_3)); }
	inline ConfigurationValidatorBase_t210547623 * get_instance_3() const { return ___instance_3; }
	inline ConfigurationValidatorBase_t210547623 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(ConfigurationValidatorBase_t210547623 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
