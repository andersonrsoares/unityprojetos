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

// System.Configuration.ConnectionStringsSection
struct  ConnectionStringsSection_t306961967  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct ConnectionStringsSection_t306961967_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ConnectionStringsSection::_propConnectionStrings
	ConfigurationProperty_t2048066811 * ____propConnectionStrings_18;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConnectionStringsSection::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_19;

public:
	inline static int32_t get_offset_of__propConnectionStrings_18() { return static_cast<int32_t>(offsetof(ConnectionStringsSection_t306961967_StaticFields, ____propConnectionStrings_18)); }
	inline ConfigurationProperty_t2048066811 * get__propConnectionStrings_18() const { return ____propConnectionStrings_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propConnectionStrings_18() { return &____propConnectionStrings_18; }
	inline void set__propConnectionStrings_18(ConfigurationProperty_t2048066811 * value)
	{
		____propConnectionStrings_18 = value;
		Il2CppCodeGenWriteBarrier(&____propConnectionStrings_18, value);
	}

	inline static int32_t get_offset_of__properties_19() { return static_cast<int32_t>(offsetof(ConnectionStringsSection_t306961967_StaticFields, ____properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_19() const { return ____properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_19() { return &____properties_19; }
	inline void set__properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_19 = value;
		Il2CppCodeGenWriteBarrier(&____properties_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
