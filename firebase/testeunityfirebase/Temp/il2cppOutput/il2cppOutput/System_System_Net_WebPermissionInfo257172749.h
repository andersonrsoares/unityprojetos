#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_WebPermissionInfoType435897941.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebPermissionInfo
struct  WebPermissionInfo_t257172749  : public Il2CppObject
{
public:
	// System.Net.WebPermissionInfoType System.Net.WebPermissionInfo::_type
	int32_t ____type_0;
	// System.Object System.Net.WebPermissionInfo::_info
	Il2CppObject * ____info_1;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(WebPermissionInfo_t257172749, ____type_0)); }
	inline int32_t get__type_0() const { return ____type_0; }
	inline int32_t* get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(int32_t value)
	{
		____type_0 = value;
	}

	inline static int32_t get_offset_of__info_1() { return static_cast<int32_t>(offsetof(WebPermissionInfo_t257172749, ____info_1)); }
	inline Il2CppObject * get__info_1() const { return ____info_1; }
	inline Il2CppObject ** get_address_of__info_1() { return &____info_1; }
	inline void set__info_1(Il2CppObject * value)
	{
		____info_1 = value;
		Il2CppCodeGenWriteBarrier(&____info_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
