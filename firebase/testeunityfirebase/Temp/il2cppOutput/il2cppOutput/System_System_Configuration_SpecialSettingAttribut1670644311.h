#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"
#include "System_System_Configuration_SpecialSetting2028097539.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SpecialSettingAttribute
struct  SpecialSettingAttribute_t1670644311  : public Attribute_t542643598
{
public:
	// System.Configuration.SpecialSetting System.Configuration.SpecialSettingAttribute::setting
	int32_t ___setting_0;

public:
	inline static int32_t get_offset_of_setting_0() { return static_cast<int32_t>(offsetof(SpecialSettingAttribute_t1670644311, ___setting_0)); }
	inline int32_t get_setting_0() const { return ___setting_0; }
	inline int32_t* get_address_of_setting_0() { return &___setting_0; }
	inline void set_setting_0(int32_t value)
	{
		___setting_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
