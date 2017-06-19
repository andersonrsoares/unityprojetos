#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configura210547623.h"
#include "mscorlib_System_TimeSpan3430258949.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanValidator
struct  TimeSpanValidator_t4078846089  : public ConfigurationValidatorBase_t210547623
{
public:
	// System.Boolean System.Configuration.TimeSpanValidator::rangeIsExclusive
	bool ___rangeIsExclusive_0;
	// System.TimeSpan System.Configuration.TimeSpanValidator::minValue
	TimeSpan_t3430258949  ___minValue_1;
	// System.TimeSpan System.Configuration.TimeSpanValidator::maxValue
	TimeSpan_t3430258949  ___maxValue_2;
	// System.Int64 System.Configuration.TimeSpanValidator::resolutionInSeconds
	int64_t ___resolutionInSeconds_3;

public:
	inline static int32_t get_offset_of_rangeIsExclusive_0() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t4078846089, ___rangeIsExclusive_0)); }
	inline bool get_rangeIsExclusive_0() const { return ___rangeIsExclusive_0; }
	inline bool* get_address_of_rangeIsExclusive_0() { return &___rangeIsExclusive_0; }
	inline void set_rangeIsExclusive_0(bool value)
	{
		___rangeIsExclusive_0 = value;
	}

	inline static int32_t get_offset_of_minValue_1() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t4078846089, ___minValue_1)); }
	inline TimeSpan_t3430258949  get_minValue_1() const { return ___minValue_1; }
	inline TimeSpan_t3430258949 * get_address_of_minValue_1() { return &___minValue_1; }
	inline void set_minValue_1(TimeSpan_t3430258949  value)
	{
		___minValue_1 = value;
	}

	inline static int32_t get_offset_of_maxValue_2() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t4078846089, ___maxValue_2)); }
	inline TimeSpan_t3430258949  get_maxValue_2() const { return ___maxValue_2; }
	inline TimeSpan_t3430258949 * get_address_of_maxValue_2() { return &___maxValue_2; }
	inline void set_maxValue_2(TimeSpan_t3430258949  value)
	{
		___maxValue_2 = value;
	}

	inline static int32_t get_offset_of_resolutionInSeconds_3() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t4078846089, ___resolutionInSeconds_3)); }
	inline int64_t get_resolutionInSeconds_3() const { return ___resolutionInSeconds_3; }
	inline int64_t* get_address_of_resolutionInSeconds_3() { return &___resolutionInSeconds_3; }
	inline void set_resolutionInSeconds_3(int64_t value)
	{
		___resolutionInSeconds_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
