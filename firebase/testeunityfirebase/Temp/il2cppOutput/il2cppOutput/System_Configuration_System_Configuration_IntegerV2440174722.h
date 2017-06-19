#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1007519140.h"

// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t210547623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.IntegerValidatorAttribute
struct  IntegerValidatorAttribute_t2440174722  : public ConfigurationValidatorAttribute_t1007519140
{
public:
	// System.Boolean System.Configuration.IntegerValidatorAttribute::excludeRange
	bool ___excludeRange_2;
	// System.Int32 System.Configuration.IntegerValidatorAttribute::maxValue
	int32_t ___maxValue_3;
	// System.Int32 System.Configuration.IntegerValidatorAttribute::minValue
	int32_t ___minValue_4;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.IntegerValidatorAttribute::instance
	ConfigurationValidatorBase_t210547623 * ___instance_5;

public:
	inline static int32_t get_offset_of_excludeRange_2() { return static_cast<int32_t>(offsetof(IntegerValidatorAttribute_t2440174722, ___excludeRange_2)); }
	inline bool get_excludeRange_2() const { return ___excludeRange_2; }
	inline bool* get_address_of_excludeRange_2() { return &___excludeRange_2; }
	inline void set_excludeRange_2(bool value)
	{
		___excludeRange_2 = value;
	}

	inline static int32_t get_offset_of_maxValue_3() { return static_cast<int32_t>(offsetof(IntegerValidatorAttribute_t2440174722, ___maxValue_3)); }
	inline int32_t get_maxValue_3() const { return ___maxValue_3; }
	inline int32_t* get_address_of_maxValue_3() { return &___maxValue_3; }
	inline void set_maxValue_3(int32_t value)
	{
		___maxValue_3 = value;
	}

	inline static int32_t get_offset_of_minValue_4() { return static_cast<int32_t>(offsetof(IntegerValidatorAttribute_t2440174722, ___minValue_4)); }
	inline int32_t get_minValue_4() const { return ___minValue_4; }
	inline int32_t* get_address_of_minValue_4() { return &___minValue_4; }
	inline void set_minValue_4(int32_t value)
	{
		___minValue_4 = value;
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(IntegerValidatorAttribute_t2440174722, ___instance_5)); }
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
