#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_CodeAccessPermission3468021764.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebPermission
struct  WebPermission_t865754791  : public CodeAccessPermission_t3468021764
{
public:
	// System.Collections.ArrayList System.Net.WebPermission::m_acceptList
	ArrayList_t4252133567 * ___m_acceptList_0;
	// System.Collections.ArrayList System.Net.WebPermission::m_connectList
	ArrayList_t4252133567 * ___m_connectList_1;
	// System.Boolean System.Net.WebPermission::m_noRestriction
	bool ___m_noRestriction_2;

public:
	inline static int32_t get_offset_of_m_acceptList_0() { return static_cast<int32_t>(offsetof(WebPermission_t865754791, ___m_acceptList_0)); }
	inline ArrayList_t4252133567 * get_m_acceptList_0() const { return ___m_acceptList_0; }
	inline ArrayList_t4252133567 ** get_address_of_m_acceptList_0() { return &___m_acceptList_0; }
	inline void set_m_acceptList_0(ArrayList_t4252133567 * value)
	{
		___m_acceptList_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_acceptList_0, value);
	}

	inline static int32_t get_offset_of_m_connectList_1() { return static_cast<int32_t>(offsetof(WebPermission_t865754791, ___m_connectList_1)); }
	inline ArrayList_t4252133567 * get_m_connectList_1() const { return ___m_connectList_1; }
	inline ArrayList_t4252133567 ** get_address_of_m_connectList_1() { return &___m_connectList_1; }
	inline void set_m_connectList_1(ArrayList_t4252133567 * value)
	{
		___m_connectList_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectList_1, value);
	}

	inline static int32_t get_offset_of_m_noRestriction_2() { return static_cast<int32_t>(offsetof(WebPermission_t865754791, ___m_noRestriction_2)); }
	inline bool get_m_noRestriction_2() const { return ___m_noRestriction_2; }
	inline bool* get_address_of_m_noRestriction_2() { return &___m_noRestriction_2; }
	inline void set_m_noRestriction_2(bool value)
	{
		___m_noRestriction_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
