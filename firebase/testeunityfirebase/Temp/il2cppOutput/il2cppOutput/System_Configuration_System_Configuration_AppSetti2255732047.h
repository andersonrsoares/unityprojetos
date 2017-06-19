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

// System.Configuration.AppSettingsSection
struct  AppSettingsSection_t2255732047  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct AppSettingsSection_t2255732047_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.AppSettingsSection::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_18;
	// System.Configuration.ConfigurationProperty System.Configuration.AppSettingsSection::_propFile
	ConfigurationProperty_t2048066811 * ____propFile_19;
	// System.Configuration.ConfigurationProperty System.Configuration.AppSettingsSection::_propSettings
	ConfigurationProperty_t2048066811 * ____propSettings_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(AppSettingsSection_t2255732047_StaticFields, ____properties_18)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_18() const { return ____properties_18; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier(&____properties_18, value);
	}

	inline static int32_t get_offset_of__propFile_19() { return static_cast<int32_t>(offsetof(AppSettingsSection_t2255732047_StaticFields, ____propFile_19)); }
	inline ConfigurationProperty_t2048066811 * get__propFile_19() const { return ____propFile_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propFile_19() { return &____propFile_19; }
	inline void set__propFile_19(ConfigurationProperty_t2048066811 * value)
	{
		____propFile_19 = value;
		Il2CppCodeGenWriteBarrier(&____propFile_19, value);
	}

	inline static int32_t get_offset_of__propSettings_20() { return static_cast<int32_t>(offsetof(AppSettingsSection_t2255732047_StaticFields, ____propSettings_20)); }
	inline ConfigurationProperty_t2048066811 * get__propSettings_20() const { return ____propSettings_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSettings_20() { return &____propSettings_20; }
	inline void set__propSettings_20(ConfigurationProperty_t2048066811 * value)
	{
		____propSettings_20 = value;
		Il2CppCodeGenWriteBarrier(&____propSettings_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
