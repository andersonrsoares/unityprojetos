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

// System.Net.SocketPermission
struct  SocketPermission_t3996943900  : public CodeAccessPermission_t3468021764
{
public:
	// System.Collections.ArrayList System.Net.SocketPermission::m_acceptList
	ArrayList_t4252133567 * ___m_acceptList_1;
	// System.Collections.ArrayList System.Net.SocketPermission::m_connectList
	ArrayList_t4252133567 * ___m_connectList_2;
	// System.Boolean System.Net.SocketPermission::m_noRestriction
	bool ___m_noRestriction_3;

public:
	inline static int32_t get_offset_of_m_acceptList_1() { return static_cast<int32_t>(offsetof(SocketPermission_t3996943900, ___m_acceptList_1)); }
	inline ArrayList_t4252133567 * get_m_acceptList_1() const { return ___m_acceptList_1; }
	inline ArrayList_t4252133567 ** get_address_of_m_acceptList_1() { return &___m_acceptList_1; }
	inline void set_m_acceptList_1(ArrayList_t4252133567 * value)
	{
		___m_acceptList_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_acceptList_1, value);
	}

	inline static int32_t get_offset_of_m_connectList_2() { return static_cast<int32_t>(offsetof(SocketPermission_t3996943900, ___m_connectList_2)); }
	inline ArrayList_t4252133567 * get_m_connectList_2() const { return ___m_connectList_2; }
	inline ArrayList_t4252133567 ** get_address_of_m_connectList_2() { return &___m_connectList_2; }
	inline void set_m_connectList_2(ArrayList_t4252133567 * value)
	{
		___m_connectList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectList_2, value);
	}

	inline static int32_t get_offset_of_m_noRestriction_3() { return static_cast<int32_t>(offsetof(SocketPermission_t3996943900, ___m_noRestriction_3)); }
	inline bool get_m_noRestriction_3() const { return ___m_noRestriction_3; }
	inline bool* get_address_of_m_noRestriction_3() { return &___m_noRestriction_3; }
	inline void set_m_noRestriction_3(bool value)
	{
		___m_noRestriction_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
