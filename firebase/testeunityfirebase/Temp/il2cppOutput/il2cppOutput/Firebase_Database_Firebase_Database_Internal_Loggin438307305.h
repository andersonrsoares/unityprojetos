#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Firebase.Database.Logger
struct Logger_t225270238;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Logging.LogWrapper
struct  LogWrapper_t438307305  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Logging.LogWrapper::_component
	String_t* ____component_0;
	// Firebase.Database.Logger Firebase.Database.Internal.Logging.LogWrapper::_logger
	Logger_t225270238 * ____logger_1;
	// System.String Firebase.Database.Internal.Logging.LogWrapper::_prefix
	String_t* ____prefix_2;

public:
	inline static int32_t get_offset_of__component_0() { return static_cast<int32_t>(offsetof(LogWrapper_t438307305, ____component_0)); }
	inline String_t* get__component_0() const { return ____component_0; }
	inline String_t** get_address_of__component_0() { return &____component_0; }
	inline void set__component_0(String_t* value)
	{
		____component_0 = value;
		Il2CppCodeGenWriteBarrier(&____component_0, value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(LogWrapper_t438307305, ____logger_1)); }
	inline Logger_t225270238 * get__logger_1() const { return ____logger_1; }
	inline Logger_t225270238 ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(Logger_t225270238 * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}

	inline static int32_t get_offset_of__prefix_2() { return static_cast<int32_t>(offsetof(LogWrapper_t438307305, ____prefix_2)); }
	inline String_t* get__prefix_2() const { return ____prefix_2; }
	inline String_t** get_address_of__prefix_2() { return &____prefix_2; }
	inline void set__prefix_2(String_t* value)
	{
		____prefix_2 = value;
		Il2CppCodeGenWriteBarrier(&____prefix_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
