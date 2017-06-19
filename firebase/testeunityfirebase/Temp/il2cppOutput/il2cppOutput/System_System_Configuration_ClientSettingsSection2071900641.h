#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur2600766927.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ClientSettingsSection
struct  ClientSettingsSection_t2071900641  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct ClientSettingsSection_t2071900641_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ClientSettingsSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_18;
	// System.Configuration.ConfigurationProperty System.Configuration.ClientSettingsSection::settings_prop
	ConfigurationProperty_t2048066811 * ___settings_prop_19;

public:
	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(ClientSettingsSection_t2071900641_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier(&___properties_18, value);
	}

	inline static int32_t get_offset_of_settings_prop_19() { return static_cast<int32_t>(offsetof(ClientSettingsSection_t2071900641_StaticFields, ___settings_prop_19)); }
	inline ConfigurationProperty_t2048066811 * get_settings_prop_19() const { return ___settings_prop_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_settings_prop_19() { return &___settings_prop_19; }
	inline void set_settings_prop_19(ConfigurationProperty_t2048066811 * value)
	{
		___settings_prop_19 = value;
		Il2CppCodeGenWriteBarrier(&___settings_prop_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
