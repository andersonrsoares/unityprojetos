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
// System.Configuration.ValidatorCallback
struct ValidatorCallback_t3403041761;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.CallbackValidator
struct  CallbackValidator_t1171317643  : public ConfigurationValidatorBase_t210547623
{
public:
	// System.Type System.Configuration.CallbackValidator::type
	Type_t * ___type_0;
	// System.Configuration.ValidatorCallback System.Configuration.CallbackValidator::callback
	ValidatorCallback_t3403041761 * ___callback_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(CallbackValidator_t1171317643, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(CallbackValidator_t1171317643, ___callback_1)); }
	inline ValidatorCallback_t3403041761 * get_callback_1() const { return ___callback_1; }
	inline ValidatorCallback_t3403041761 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(ValidatorCallback_t3403041761 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
