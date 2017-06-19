#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.Configuration.SettingsProvider
struct SettingsProvider_t2646068210;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsLoadedEventArgs
struct  SettingsLoadedEventArgs_t55697513  : public EventArgs_t3289624707
{
public:
	// System.Configuration.SettingsProvider System.Configuration.SettingsLoadedEventArgs::provider
	SettingsProvider_t2646068210 * ___provider_1;

public:
	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(SettingsLoadedEventArgs_t55697513, ___provider_1)); }
	inline SettingsProvider_t2646068210 * get_provider_1() const { return ___provider_1; }
	inline SettingsProvider_t2646068210 ** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(SettingsProvider_t2646068210 * value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier(&___provider_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
