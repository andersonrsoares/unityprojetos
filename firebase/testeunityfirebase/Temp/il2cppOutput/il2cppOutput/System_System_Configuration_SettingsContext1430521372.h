#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_Hashtable909839986.h"

// System.Configuration.ApplicationSettingsBase
struct ApplicationSettingsBase_t3971053280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsContext
struct  SettingsContext_t1430521372  : public Hashtable_t909839986
{
public:
	// System.Configuration.ApplicationSettingsBase System.Configuration.SettingsContext::current
	ApplicationSettingsBase_t3971053280 * ___current_14;

public:
	inline static int32_t get_offset_of_current_14() { return static_cast<int32_t>(offsetof(SettingsContext_t1430521372, ___current_14)); }
	inline ApplicationSettingsBase_t3971053280 * get_current_14() const { return ___current_14; }
	inline ApplicationSettingsBase_t3971053280 ** get_address_of_current_14() { return &___current_14; }
	inline void set_current_14(ApplicationSettingsBase_t3971053280 * value)
	{
		___current_14 = value;
		Il2CppCodeGenWriteBarrier(&___current_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
