#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.CookieCollection
struct CookieCollection_t521422364;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CookieContainer
struct  CookieContainer_t2808809223  : public Il2CppObject
{
public:
	// System.Int32 System.Net.CookieContainer::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Net.CookieContainer::perDomainCapacity
	int32_t ___perDomainCapacity_4;
	// System.Int32 System.Net.CookieContainer::maxCookieSize
	int32_t ___maxCookieSize_5;
	// System.Net.CookieCollection System.Net.CookieContainer::cookies
	CookieCollection_t521422364 * ___cookies_6;

public:
	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(CookieContainer_t2808809223, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_perDomainCapacity_4() { return static_cast<int32_t>(offsetof(CookieContainer_t2808809223, ___perDomainCapacity_4)); }
	inline int32_t get_perDomainCapacity_4() const { return ___perDomainCapacity_4; }
	inline int32_t* get_address_of_perDomainCapacity_4() { return &___perDomainCapacity_4; }
	inline void set_perDomainCapacity_4(int32_t value)
	{
		___perDomainCapacity_4 = value;
	}

	inline static int32_t get_offset_of_maxCookieSize_5() { return static_cast<int32_t>(offsetof(CookieContainer_t2808809223, ___maxCookieSize_5)); }
	inline int32_t get_maxCookieSize_5() const { return ___maxCookieSize_5; }
	inline int32_t* get_address_of_maxCookieSize_5() { return &___maxCookieSize_5; }
	inline void set_maxCookieSize_5(int32_t value)
	{
		___maxCookieSize_5 = value;
	}

	inline static int32_t get_offset_of_cookies_6() { return static_cast<int32_t>(offsetof(CookieContainer_t2808809223, ___cookies_6)); }
	inline CookieCollection_t521422364 * get_cookies_6() const { return ___cookies_6; }
	inline CookieCollection_t521422364 ** get_address_of_cookies_6() { return &___cookies_6; }
	inline void set_cookies_6(CookieCollection_t521422364 * value)
	{
		___cookies_6 = value;
		Il2CppCodeGenWriteBarrier(&___cookies_6, value);
	}
};

struct CookieContainer_t2808809223_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.CookieContainer::<>f__switch$map9
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map9_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_7() { return static_cast<int32_t>(offsetof(CookieContainer_t2808809223_StaticFields, ___U3CU3Ef__switchU24map9_7)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map9_7() const { return ___U3CU3Ef__switchU24map9_7; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map9_7() { return &___U3CU3Ef__switchU24map9_7; }
	inline void set_U3CU3Ef__switchU24map9_7(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map9_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map9_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
