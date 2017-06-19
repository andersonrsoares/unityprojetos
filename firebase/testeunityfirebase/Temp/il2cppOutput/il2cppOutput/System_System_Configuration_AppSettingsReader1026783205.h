#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.AppSettingsReader
struct  AppSettingsReader_t1026783205  : public Il2CppObject
{
public:
	// System.Collections.Specialized.NameValueCollection System.Configuration.AppSettingsReader::appSettings
	NameValueCollection_t3047564564 * ___appSettings_0;

public:
	inline static int32_t get_offset_of_appSettings_0() { return static_cast<int32_t>(offsetof(AppSettingsReader_t1026783205, ___appSettings_0)); }
	inline NameValueCollection_t3047564564 * get_appSettings_0() const { return ___appSettings_0; }
	inline NameValueCollection_t3047564564 ** get_address_of_appSettings_0() { return &___appSettings_0; }
	inline void set_appSettings_0(NameValueCollection_t3047564564 * value)
	{
		___appSettings_0 = value;
		Il2CppCodeGenWriteBarrier(&___appSettings_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
