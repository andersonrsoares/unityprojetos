#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Utili1056641960.h"

// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DotNet.DotNetPlatform/DefaultRunLoop40
struct  DefaultRunLoop40_t4147568072  : public DefaultRunLoop_t1056641960
{
public:
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.DotNet.DotNetPlatform/DefaultRunLoop40::_logger
	LogWrapper_t438307305 * ____logger_1;

public:
	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(DefaultRunLoop40_t4147568072, ____logger_1)); }
	inline LogWrapper_t438307305 * get__logger_1() const { return ____logger_1; }
	inline LogWrapper_t438307305 ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(LogWrapper_t438307305 * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
