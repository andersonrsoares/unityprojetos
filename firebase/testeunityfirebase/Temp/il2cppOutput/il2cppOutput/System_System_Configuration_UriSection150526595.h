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

// System.Configuration.UriSection
struct  UriSection_t150526595  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct UriSection_t150526595_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.UriSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_18;
	// System.Configuration.ConfigurationProperty System.Configuration.UriSection::idn_prop
	ConfigurationProperty_t2048066811 * ___idn_prop_19;
	// System.Configuration.ConfigurationProperty System.Configuration.UriSection::iriParsing_prop
	ConfigurationProperty_t2048066811 * ___iriParsing_prop_20;

public:
	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(UriSection_t150526595_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier(&___properties_18, value);
	}

	inline static int32_t get_offset_of_idn_prop_19() { return static_cast<int32_t>(offsetof(UriSection_t150526595_StaticFields, ___idn_prop_19)); }
	inline ConfigurationProperty_t2048066811 * get_idn_prop_19() const { return ___idn_prop_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_idn_prop_19() { return &___idn_prop_19; }
	inline void set_idn_prop_19(ConfigurationProperty_t2048066811 * value)
	{
		___idn_prop_19 = value;
		Il2CppCodeGenWriteBarrier(&___idn_prop_19, value);
	}

	inline static int32_t get_offset_of_iriParsing_prop_20() { return static_cast<int32_t>(offsetof(UriSection_t150526595_StaticFields, ___iriParsing_prop_20)); }
	inline ConfigurationProperty_t2048066811 * get_iriParsing_prop_20() const { return ___iriParsing_prop_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_iriParsing_prop_20() { return &___iriParsing_prop_20; }
	inline void set_iriParsing_prop_20(ConfigurationProperty_t2048066811 * value)
	{
		___iriParsing_prop_20 = value;
		Il2CppCodeGenWriteBarrier(&___iriParsing_prop_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
