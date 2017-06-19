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

// System.Configuration.StringValidatorAttribute
struct  StringValidatorAttribute_t2274367953  : public ConfigurationValidatorAttribute_t1007519140
{
public:
	// System.String System.Configuration.StringValidatorAttribute::invalidCharacters
	String_t* ___invalidCharacters_2;
	// System.Int32 System.Configuration.StringValidatorAttribute::maxLength
	int32_t ___maxLength_3;
	// System.Int32 System.Configuration.StringValidatorAttribute::minLength
	int32_t ___minLength_4;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.StringValidatorAttribute::instance
	ConfigurationValidatorBase_t210547623 * ___instance_5;

public:
	inline static int32_t get_offset_of_invalidCharacters_2() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t2274367953, ___invalidCharacters_2)); }
	inline String_t* get_invalidCharacters_2() const { return ___invalidCharacters_2; }
	inline String_t** get_address_of_invalidCharacters_2() { return &___invalidCharacters_2; }
	inline void set_invalidCharacters_2(String_t* value)
	{
		___invalidCharacters_2 = value;
		Il2CppCodeGenWriteBarrier(&___invalidCharacters_2, value);
	}

	inline static int32_t get_offset_of_maxLength_3() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t2274367953, ___maxLength_3)); }
	inline int32_t get_maxLength_3() const { return ___maxLength_3; }
	inline int32_t* get_address_of_maxLength_3() { return &___maxLength_3; }
	inline void set_maxLength_3(int32_t value)
	{
		___maxLength_3 = value;
	}

	inline static int32_t get_offset_of_minLength_4() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t2274367953, ___minLength_4)); }
	inline int32_t get_minLength_4() const { return ___minLength_4; }
	inline int32_t* get_address_of_minLength_4() { return &___minLength_4; }
	inline void set_minLength_4(int32_t value)
	{
		___minLength_4 = value;
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t2274367953, ___instance_5)); }
	inline ConfigurationValidatorBase_t210547623 * get_instance_5() const { return ___instance_5; }
	inline ConfigurationValidatorBase_t210547623 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(ConfigurationValidatorBase_t210547623 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
