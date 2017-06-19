#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur2756676125.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.GenericEnumConverter
struct  GenericEnumConverter_t1696720900  : public ConfigurationConverterBase_t2756676125
{
public:
	// System.Type System.Configuration.GenericEnumConverter::typeEnum
	Type_t * ___typeEnum_0;

public:
	inline static int32_t get_offset_of_typeEnum_0() { return static_cast<int32_t>(offsetof(GenericEnumConverter_t1696720900, ___typeEnum_0)); }
	inline Type_t * get_typeEnum_0() const { return ___typeEnum_0; }
	inline Type_t ** get_address_of_typeEnum_0() { return &___typeEnum_0; }
	inline void set_typeEnum_0(Type_t * value)
	{
		___typeEnum_0 = value;
		Il2CppCodeGenWriteBarrier(&___typeEnum_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
