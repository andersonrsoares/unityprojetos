#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur2600766927.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t388338823;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProtectedConfigurationSection
struct  ProtectedConfigurationSection_t3541826375  : public ConfigurationSection_t2600766927
{
public:
	// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::providers
	ProtectedConfigurationProviderCollection_t388338823 * ___providers_21;

public:
	inline static int32_t get_offset_of_providers_21() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t3541826375, ___providers_21)); }
	inline ProtectedConfigurationProviderCollection_t388338823 * get_providers_21() const { return ___providers_21; }
	inline ProtectedConfigurationProviderCollection_t388338823 ** get_address_of_providers_21() { return &___providers_21; }
	inline void set_providers_21(ProtectedConfigurationProviderCollection_t388338823 * value)
	{
		___providers_21 = value;
		Il2CppCodeGenWriteBarrier(&___providers_21, value);
	}
};

struct ProtectedConfigurationSection_t3541826375_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::defaultProviderProp
	ConfigurationProperty_t2048066811 * ___defaultProviderProp_18;
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::providersProp
	ConfigurationProperty_t2048066811 * ___providersProp_19;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_20;

public:
	inline static int32_t get_offset_of_defaultProviderProp_18() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t3541826375_StaticFields, ___defaultProviderProp_18)); }
	inline ConfigurationProperty_t2048066811 * get_defaultProviderProp_18() const { return ___defaultProviderProp_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_defaultProviderProp_18() { return &___defaultProviderProp_18; }
	inline void set_defaultProviderProp_18(ConfigurationProperty_t2048066811 * value)
	{
		___defaultProviderProp_18 = value;
		Il2CppCodeGenWriteBarrier(&___defaultProviderProp_18, value);
	}

	inline static int32_t get_offset_of_providersProp_19() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t3541826375_StaticFields, ___providersProp_19)); }
	inline ConfigurationProperty_t2048066811 * get_providersProp_19() const { return ___providersProp_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_providersProp_19() { return &___providersProp_19; }
	inline void set_providersProp_19(ConfigurationProperty_t2048066811 * value)
	{
		___providersProp_19 = value;
		Il2CppCodeGenWriteBarrier(&___providersProp_19, value);
	}

	inline static int32_t get_offset_of_properties_20() { return static_cast<int32_t>(offsetof(ProtectedConfigurationSection_t3541826375_StaticFields, ___properties_20)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_20() const { return ___properties_20; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_20() { return &___properties_20; }
	inline void set_properties_20(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_20 = value;
		Il2CppCodeGenWriteBarrier(&___properties_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
