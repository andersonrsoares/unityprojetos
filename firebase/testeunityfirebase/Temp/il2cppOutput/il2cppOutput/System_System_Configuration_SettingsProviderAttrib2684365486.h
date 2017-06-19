#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsProviderAttribute
struct  SettingsProviderAttribute_t2684365486  : public Attribute_t542643598
{
public:
	// System.String System.Configuration.SettingsProviderAttribute::providerTypeName
	String_t* ___providerTypeName_0;

public:
	inline static int32_t get_offset_of_providerTypeName_0() { return static_cast<int32_t>(offsetof(SettingsProviderAttribute_t2684365486, ___providerTypeName_0)); }
	inline String_t* get_providerTypeName_0() const { return ___providerTypeName_0; }
	inline String_t** get_address_of_providerTypeName_0() { return &___providerTypeName_0; }
	inline void set_providerTypeName_0(String_t* value)
	{
		___providerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___providerTypeName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
