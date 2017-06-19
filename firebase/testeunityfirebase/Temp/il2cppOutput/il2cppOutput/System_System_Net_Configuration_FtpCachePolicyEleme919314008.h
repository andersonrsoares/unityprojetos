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

// System.Net.Configuration.FtpCachePolicyElement
struct  FtpCachePolicyElement_t919314008  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct FtpCachePolicyElement_t919314008_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.FtpCachePolicyElement::policyLevelProp
	ConfigurationProperty_t2048066811 * ___policyLevelProp_14;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;

public:
	inline static int32_t get_offset_of_policyLevelProp_14() { return static_cast<int32_t>(offsetof(FtpCachePolicyElement_t919314008_StaticFields, ___policyLevelProp_14)); }
	inline ConfigurationProperty_t2048066811 * get_policyLevelProp_14() const { return ___policyLevelProp_14; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_policyLevelProp_14() { return &___policyLevelProp_14; }
	inline void set_policyLevelProp_14(ConfigurationProperty_t2048066811 * value)
	{
		___policyLevelProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___policyLevelProp_14, value);
	}

	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(FtpCachePolicyElement_t919314008_StaticFields, ___properties_15)); }
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
