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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1533889992  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct ConnectionManagementSection_t1533889992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t2048066811 * ___connectionManagementProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_19;

public:
	inline static int32_t get_offset_of_connectionManagementProp_18() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1533889992_StaticFields, ___connectionManagementProp_18)); }
	inline ConfigurationProperty_t2048066811 * get_connectionManagementProp_18() const { return ___connectionManagementProp_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_connectionManagementProp_18() { return &___connectionManagementProp_18; }
	inline void set_connectionManagementProp_18(ConfigurationProperty_t2048066811 * value)
	{
		___connectionManagementProp_18 = value;
		Il2CppCodeGenWriteBarrier(&___connectionManagementProp_18, value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1533889992_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier(&___properties_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
