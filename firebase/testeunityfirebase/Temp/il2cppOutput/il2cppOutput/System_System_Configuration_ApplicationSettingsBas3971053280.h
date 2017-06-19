#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Configuration_SettingsBase2710989042.h"

// System.String
struct String_t;
// System.Configuration.SettingsContext
struct SettingsContext_t1430521372;
// System.Configuration.SettingsPropertyCollection
struct SettingsPropertyCollection_t4104961130;
// System.Configuration.ISettingsProviderService
struct ISettingsProviderService_t3382915562;
// System.Configuration.SettingsPropertyValueCollection
struct SettingsPropertyValueCollection_t2006501273;
// System.Configuration.SettingsProviderCollection
struct SettingsProviderCollection_t2575276236;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;
// System.Configuration.SettingChangingEventHandler
struct SettingChangingEventHandler_t96853431;
// System.Configuration.SettingsLoadedEventHandler
struct SettingsLoadedEventHandler_t3839571224;
// System.Configuration.SettingsSavingEventHandler
struct SettingsSavingEventHandler_t2579928681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ApplicationSettingsBase
struct  ApplicationSettingsBase_t3971053280  : public SettingsBase_t2710989042
{
public:
	// System.String System.Configuration.ApplicationSettingsBase::settingsKey
	String_t* ___settingsKey_5;
	// System.Configuration.SettingsContext System.Configuration.ApplicationSettingsBase::context
	SettingsContext_t1430521372 * ___context_6;
	// System.Configuration.SettingsPropertyCollection System.Configuration.ApplicationSettingsBase::properties
	SettingsPropertyCollection_t4104961130 * ___properties_7;
	// System.Configuration.ISettingsProviderService System.Configuration.ApplicationSettingsBase::providerService
	Il2CppObject * ___providerService_8;
	// System.Configuration.SettingsPropertyValueCollection System.Configuration.ApplicationSettingsBase::propertyValues
	SettingsPropertyValueCollection_t2006501273 * ___propertyValues_9;
	// System.Configuration.SettingsProviderCollection System.Configuration.ApplicationSettingsBase::providers
	SettingsProviderCollection_t2575276236 * ___providers_10;
	// System.ComponentModel.PropertyChangedEventHandler System.Configuration.ApplicationSettingsBase::PropertyChanged
	PropertyChangedEventHandler_t3042952059 * ___PropertyChanged_11;
	// System.Configuration.SettingChangingEventHandler System.Configuration.ApplicationSettingsBase::SettingChanging
	SettingChangingEventHandler_t96853431 * ___SettingChanging_12;
	// System.Configuration.SettingsLoadedEventHandler System.Configuration.ApplicationSettingsBase::SettingsLoaded
	SettingsLoadedEventHandler_t3839571224 * ___SettingsLoaded_13;
	// System.Configuration.SettingsSavingEventHandler System.Configuration.ApplicationSettingsBase::SettingsSaving
	SettingsSavingEventHandler_t2579928681 * ___SettingsSaving_14;

public:
	inline static int32_t get_offset_of_settingsKey_5() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___settingsKey_5)); }
	inline String_t* get_settingsKey_5() const { return ___settingsKey_5; }
	inline String_t** get_address_of_settingsKey_5() { return &___settingsKey_5; }
	inline void set_settingsKey_5(String_t* value)
	{
		___settingsKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___settingsKey_5, value);
	}

	inline static int32_t get_offset_of_context_6() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___context_6)); }
	inline SettingsContext_t1430521372 * get_context_6() const { return ___context_6; }
	inline SettingsContext_t1430521372 ** get_address_of_context_6() { return &___context_6; }
	inline void set_context_6(SettingsContext_t1430521372 * value)
	{
		___context_6 = value;
		Il2CppCodeGenWriteBarrier(&___context_6, value);
	}

	inline static int32_t get_offset_of_properties_7() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___properties_7)); }
	inline SettingsPropertyCollection_t4104961130 * get_properties_7() const { return ___properties_7; }
	inline SettingsPropertyCollection_t4104961130 ** get_address_of_properties_7() { return &___properties_7; }
	inline void set_properties_7(SettingsPropertyCollection_t4104961130 * value)
	{
		___properties_7 = value;
		Il2CppCodeGenWriteBarrier(&___properties_7, value);
	}

	inline static int32_t get_offset_of_providerService_8() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___providerService_8)); }
	inline Il2CppObject * get_providerService_8() const { return ___providerService_8; }
	inline Il2CppObject ** get_address_of_providerService_8() { return &___providerService_8; }
	inline void set_providerService_8(Il2CppObject * value)
	{
		___providerService_8 = value;
		Il2CppCodeGenWriteBarrier(&___providerService_8, value);
	}

	inline static int32_t get_offset_of_propertyValues_9() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___propertyValues_9)); }
	inline SettingsPropertyValueCollection_t2006501273 * get_propertyValues_9() const { return ___propertyValues_9; }
	inline SettingsPropertyValueCollection_t2006501273 ** get_address_of_propertyValues_9() { return &___propertyValues_9; }
	inline void set_propertyValues_9(SettingsPropertyValueCollection_t2006501273 * value)
	{
		___propertyValues_9 = value;
		Il2CppCodeGenWriteBarrier(&___propertyValues_9, value);
	}

	inline static int32_t get_offset_of_providers_10() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___providers_10)); }
	inline SettingsProviderCollection_t2575276236 * get_providers_10() const { return ___providers_10; }
	inline SettingsProviderCollection_t2575276236 ** get_address_of_providers_10() { return &___providers_10; }
	inline void set_providers_10(SettingsProviderCollection_t2575276236 * value)
	{
		___providers_10 = value;
		Il2CppCodeGenWriteBarrier(&___providers_10, value);
	}

	inline static int32_t get_offset_of_PropertyChanged_11() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___PropertyChanged_11)); }
	inline PropertyChangedEventHandler_t3042952059 * get_PropertyChanged_11() const { return ___PropertyChanged_11; }
	inline PropertyChangedEventHandler_t3042952059 ** get_address_of_PropertyChanged_11() { return &___PropertyChanged_11; }
	inline void set_PropertyChanged_11(PropertyChangedEventHandler_t3042952059 * value)
	{
		___PropertyChanged_11 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyChanged_11, value);
	}

	inline static int32_t get_offset_of_SettingChanging_12() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___SettingChanging_12)); }
	inline SettingChangingEventHandler_t96853431 * get_SettingChanging_12() const { return ___SettingChanging_12; }
	inline SettingChangingEventHandler_t96853431 ** get_address_of_SettingChanging_12() { return &___SettingChanging_12; }
	inline void set_SettingChanging_12(SettingChangingEventHandler_t96853431 * value)
	{
		___SettingChanging_12 = value;
		Il2CppCodeGenWriteBarrier(&___SettingChanging_12, value);
	}

	inline static int32_t get_offset_of_SettingsLoaded_13() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___SettingsLoaded_13)); }
	inline SettingsLoadedEventHandler_t3839571224 * get_SettingsLoaded_13() const { return ___SettingsLoaded_13; }
	inline SettingsLoadedEventHandler_t3839571224 ** get_address_of_SettingsLoaded_13() { return &___SettingsLoaded_13; }
	inline void set_SettingsLoaded_13(SettingsLoadedEventHandler_t3839571224 * value)
	{
		___SettingsLoaded_13 = value;
		Il2CppCodeGenWriteBarrier(&___SettingsLoaded_13, value);
	}

	inline static int32_t get_offset_of_SettingsSaving_14() { return static_cast<int32_t>(offsetof(ApplicationSettingsBase_t3971053280, ___SettingsSaving_14)); }
	inline SettingsSavingEventHandler_t2579928681 * get_SettingsSaving_14() const { return ___SettingsSaving_14; }
	inline SettingsSavingEventHandler_t2579928681 ** get_address_of_SettingsSaving_14() { return &___SettingsSaving_14; }
	inline void set_SettingsSaving_14(SettingsSavingEventHandler_t2579928681 * value)
	{
		___SettingsSaving_14 = value;
		Il2CppCodeGenWriteBarrier(&___SettingsSaving_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
