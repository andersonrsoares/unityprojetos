#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigHelper/CollectionWrapper
struct  CollectionWrapper_t1786266317  : public Il2CppObject
{
public:
	// System.Collections.IDictionary System.Configuration.ConfigHelper/CollectionWrapper::dict
	Il2CppObject * ___dict_0;
	// System.Collections.Specialized.NameValueCollection System.Configuration.ConfigHelper/CollectionWrapper::collection
	NameValueCollection_t3047564564 * ___collection_1;
	// System.Boolean System.Configuration.ConfigHelper/CollectionWrapper::isDict
	bool ___isDict_2;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(CollectionWrapper_t1786266317, ___dict_0)); }
	inline Il2CppObject * get_dict_0() const { return ___dict_0; }
	inline Il2CppObject ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(Il2CppObject * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier(&___dict_0, value);
	}

	inline static int32_t get_offset_of_collection_1() { return static_cast<int32_t>(offsetof(CollectionWrapper_t1786266317, ___collection_1)); }
	inline NameValueCollection_t3047564564 * get_collection_1() const { return ___collection_1; }
	inline NameValueCollection_t3047564564 ** get_address_of_collection_1() { return &___collection_1; }
	inline void set_collection_1(NameValueCollection_t3047564564 * value)
	{
		___collection_1 = value;
		Il2CppCodeGenWriteBarrier(&___collection_1, value);
	}

	inline static int32_t get_offset_of_isDict_2() { return static_cast<int32_t>(offsetof(CollectionWrapper_t1786266317, ___isDict_2)); }
	inline bool get_isDict_2() const { return ___isDict_2; }
	inline bool* get_address_of_isDict_2() { return &___isDict_2; }
	inline void set_isDict_2(bool value)
	{
		___isDict_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
