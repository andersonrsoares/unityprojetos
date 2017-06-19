#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Configuration.SettingsContext
struct SettingsContext_t1430521372;
// System.Configuration.SettingsPropertyCollection
struct SettingsPropertyCollection_t4104961130;
// System.Configuration.SettingsProviderCollection
struct SettingsProviderCollection_t2575276236;
// System.Configuration.SettingsPropertyValueCollection
struct SettingsPropertyValueCollection_t2006501273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsBase
struct  SettingsBase_t2710989042  : public Il2CppObject
{
public:
	// System.Boolean System.Configuration.SettingsBase::sync
	bool ___sync_0;
	// System.Configuration.SettingsContext System.Configuration.SettingsBase::context
	SettingsContext_t1430521372 * ___context_1;
	// System.Configuration.SettingsPropertyCollection System.Configuration.SettingsBase::properties
	SettingsPropertyCollection_t4104961130 * ___properties_2;
	// System.Configuration.SettingsProviderCollection System.Configuration.SettingsBase::providers
	SettingsProviderCollection_t2575276236 * ___providers_3;
	// System.Configuration.SettingsPropertyValueCollection System.Configuration.SettingsBase::values
	SettingsPropertyValueCollection_t2006501273 * ___values_4;

public:
	inline static int32_t get_offset_of_sync_0() { return static_cast<int32_t>(offsetof(SettingsBase_t2710989042, ___sync_0)); }
	inline bool get_sync_0() const { return ___sync_0; }
	inline bool* get_address_of_sync_0() { return &___sync_0; }
	inline void set_sync_0(bool value)
	{
		___sync_0 = value;
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(SettingsBase_t2710989042, ___context_1)); }
	inline SettingsContext_t1430521372 * get_context_1() const { return ___context_1; }
	inline SettingsContext_t1430521372 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(SettingsContext_t1430521372 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SettingsBase_t2710989042, ___properties_2)); }
	inline SettingsPropertyCollection_t4104961130 * get_properties_2() const { return ___properties_2; }
	inline SettingsPropertyCollection_t4104961130 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(SettingsPropertyCollection_t4104961130 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___properties_2, value);
	}

	inline static int32_t get_offset_of_providers_3() { return static_cast<int32_t>(offsetof(SettingsBase_t2710989042, ___providers_3)); }
	inline SettingsProviderCollection_t2575276236 * get_providers_3() const { return ___providers_3; }
	inline SettingsProviderCollection_t2575276236 ** get_address_of_providers_3() { return &___providers_3; }
	inline void set_providers_3(SettingsProviderCollection_t2575276236 * value)
	{
		___providers_3 = value;
		Il2CppCodeGenWriteBarrier(&___providers_3, value);
	}

	inline static int32_t get_offset_of_values_4() { return static_cast<int32_t>(offsetof(SettingsBase_t2710989042, ___values_4)); }
	inline SettingsPropertyValueCollection_t2006501273 * get_values_4() const { return ___values_4; }
	inline SettingsPropertyValueCollection_t2006501273 ** get_address_of_values_4() { return &___values_4; }
	inline void set_values_4(SettingsPropertyValueCollection_t2006501273 * value)
	{
		___values_4 = value;
		Il2CppCodeGenWriteBarrier(&___values_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
