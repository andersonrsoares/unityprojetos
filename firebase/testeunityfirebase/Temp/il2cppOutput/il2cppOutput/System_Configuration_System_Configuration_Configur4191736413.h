#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t210547623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementProperty
struct  ConfigurationElementProperty_t4191736413  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationElementProperty::validator
	ConfigurationValidatorBase_t210547623 * ___validator_0;

public:
	inline static int32_t get_offset_of_validator_0() { return static_cast<int32_t>(offsetof(ConfigurationElementProperty_t4191736413, ___validator_0)); }
	inline ConfigurationValidatorBase_t210547623 * get_validator_0() const { return ___validator_0; }
	inline ConfigurationValidatorBase_t210547623 ** get_address_of_validator_0() { return &___validator_0; }
	inline void set_validator_0(ConfigurationValidatorBase_t210547623 * value)
	{
		___validator_0 = value;
		Il2CppCodeGenWriteBarrier(&___validator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
