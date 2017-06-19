#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsPropertyCollection
struct  SettingsPropertyCollection_t4104961130  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Configuration.SettingsPropertyCollection::items
	Hashtable_t909839986 * ___items_0;
	// System.Boolean System.Configuration.SettingsPropertyCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(SettingsPropertyCollection_t4104961130, ___items_0)); }
	inline Hashtable_t909839986 * get_items_0() const { return ___items_0; }
	inline Hashtable_t909839986 ** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(Hashtable_t909839986 * value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier(&___items_0, value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(SettingsPropertyCollection_t4104961130, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
