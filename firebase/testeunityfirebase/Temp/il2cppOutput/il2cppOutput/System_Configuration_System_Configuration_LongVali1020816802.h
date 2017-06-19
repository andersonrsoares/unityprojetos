#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configura210547623.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.LongValidator
struct  LongValidator_t1020816802  : public ConfigurationValidatorBase_t210547623
{
public:
	// System.Boolean System.Configuration.LongValidator::rangeIsExclusive
	bool ___rangeIsExclusive_0;
	// System.Int64 System.Configuration.LongValidator::minValue
	int64_t ___minValue_1;
	// System.Int64 System.Configuration.LongValidator::maxValue
	int64_t ___maxValue_2;
	// System.Int64 System.Configuration.LongValidator::resolution
	int64_t ___resolution_3;

public:
	inline static int32_t get_offset_of_rangeIsExclusive_0() { return static_cast<int32_t>(offsetof(LongValidator_t1020816802, ___rangeIsExclusive_0)); }
	inline bool get_rangeIsExclusive_0() const { return ___rangeIsExclusive_0; }
	inline bool* get_address_of_rangeIsExclusive_0() { return &___rangeIsExclusive_0; }
	inline void set_rangeIsExclusive_0(bool value)
	{
		___rangeIsExclusive_0 = value;
	}

	inline static int32_t get_offset_of_minValue_1() { return static_cast<int32_t>(offsetof(LongValidator_t1020816802, ___minValue_1)); }
	inline int64_t get_minValue_1() const { return ___minValue_1; }
	inline int64_t* get_address_of_minValue_1() { return &___minValue_1; }
	inline void set_minValue_1(int64_t value)
	{
		___minValue_1 = value;
	}

	inline static int32_t get_offset_of_maxValue_2() { return static_cast<int32_t>(offsetof(LongValidator_t1020816802, ___maxValue_2)); }
	inline int64_t get_maxValue_2() const { return ___maxValue_2; }
	inline int64_t* get_address_of_maxValue_2() { return &___maxValue_2; }
	inline void set_maxValue_2(int64_t value)
	{
		___maxValue_2 = value;
	}

	inline static int32_t get_offset_of_resolution_3() { return static_cast<int32_t>(offsetof(LongValidator_t1020816802, ___resolution_3)); }
	inline int64_t get_resolution_3() const { return ___resolution_3; }
	inline int64_t* get_address_of_resolution_3() { return &___resolution_3; }
	inline void set_resolution_3(int64_t value)
	{
		___resolution_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
