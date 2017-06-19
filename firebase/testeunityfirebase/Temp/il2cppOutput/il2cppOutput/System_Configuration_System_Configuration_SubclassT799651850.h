#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configura210547623.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SubclassTypeValidator
struct  SubclassTypeValidator_t799651850  : public ConfigurationValidatorBase_t210547623
{
public:
	// System.Type System.Configuration.SubclassTypeValidator::baseClass
	Type_t * ___baseClass_0;

public:
	inline static int32_t get_offset_of_baseClass_0() { return static_cast<int32_t>(offsetof(SubclassTypeValidator_t799651850, ___baseClass_0)); }
	inline Type_t * get_baseClass_0() const { return ___baseClass_0; }
	inline Type_t ** get_address_of_baseClass_0() { return &___baseClass_0; }
	inline void set_baseClass_0(Type_t * value)
	{
		___baseClass_0 = value;
		Il2CppCodeGenWriteBarrier(&___baseClass_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
