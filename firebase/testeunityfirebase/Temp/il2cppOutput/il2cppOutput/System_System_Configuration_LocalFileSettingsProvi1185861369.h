#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Configuration_SettingsProvider2646068210.h"

// System.Configuration.CustomizableFileSettingsProvider
struct CustomizableFileSettingsProvider_t13032082;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.LocalFileSettingsProvider
struct  LocalFileSettingsProvider_t1185861369  : public SettingsProvider_t2646068210
{
public:
	// System.Configuration.CustomizableFileSettingsProvider System.Configuration.LocalFileSettingsProvider::impl
	CustomizableFileSettingsProvider_t13032082 * ___impl_3;

public:
	inline static int32_t get_offset_of_impl_3() { return static_cast<int32_t>(offsetof(LocalFileSettingsProvider_t1185861369, ___impl_3)); }
	inline CustomizableFileSettingsProvider_t13032082 * get_impl_3() const { return ___impl_3; }
	inline CustomizableFileSettingsProvider_t13032082 ** get_address_of_impl_3() { return &___impl_3; }
	inline void set_impl_3(CustomizableFileSettingsProvider_t13032082 * value)
	{
		___impl_3 = value;
		Il2CppCodeGenWriteBarrier(&___impl_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
