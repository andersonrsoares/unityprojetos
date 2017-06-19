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
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t210547623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.CallbackValidatorAttribute
struct  CallbackValidatorAttribute_t975572991  : public ConfigurationValidatorAttribute_t1007519140
{
public:
	// System.String System.Configuration.CallbackValidatorAttribute::callbackMethodName
	String_t* ___callbackMethodName_2;
	// System.Type System.Configuration.CallbackValidatorAttribute::type
	Type_t * ___type_3;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.CallbackValidatorAttribute::instance
	ConfigurationValidatorBase_t210547623 * ___instance_4;

public:
	inline static int32_t get_offset_of_callbackMethodName_2() { return static_cast<int32_t>(offsetof(CallbackValidatorAttribute_t975572991, ___callbackMethodName_2)); }
	inline String_t* get_callbackMethodName_2() const { return ___callbackMethodName_2; }
	inline String_t** get_address_of_callbackMethodName_2() { return &___callbackMethodName_2; }
	inline void set_callbackMethodName_2(String_t* value)
	{
		___callbackMethodName_2 = value;
		Il2CppCodeGenWriteBarrier(&___callbackMethodName_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(CallbackValidatorAttribute_t975572991, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(CallbackValidatorAttribute_t975572991, ___instance_4)); }
	inline ConfigurationValidatorBase_t210547623 * get_instance_4() const { return ___instance_4; }
	inline ConfigurationValidatorBase_t210547623 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ConfigurationValidatorBase_t210547623 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
