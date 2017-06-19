#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProtectedProviderSettings
struct  ProtectedProviderSettings_t1912132332  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct ProtectedProviderSettings_t1912132332_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedProviderSettings::providersProp
	ConfigurationProperty_t2048066811 * ___providersProp_14;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedProviderSettings::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;

public:
	inline static int32_t get_offset_of_providersProp_14() { return static_cast<int32_t>(offsetof(ProtectedProviderSettings_t1912132332_StaticFields, ___providersProp_14)); }
	inline ConfigurationProperty_t2048066811 * get_providersProp_14() const { return ___providersProp_14; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_providersProp_14() { return &___providersProp_14; }
	inline void set_providersProp_14(ConfigurationProperty_t2048066811 * value)
	{
		___providersProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___providersProp_14, value);
	}

	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ProtectedProviderSettings_t1912132332_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier(&___properties_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
