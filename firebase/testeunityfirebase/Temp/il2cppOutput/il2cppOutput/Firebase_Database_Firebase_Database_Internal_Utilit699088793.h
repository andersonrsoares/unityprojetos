#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Google_Sharpen_Google_Sharpen_ThreadFactory1392637388.h"

// Firebase.Database.Internal.Utilities.DefaultRunLoop
struct DefaultRunLoop_t1056641960;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory
struct  FirebaseThreadFactory_t699088793  : public ThreadFactory_t1392637388
{
public:
	// Firebase.Database.Internal.Utilities.DefaultRunLoop Firebase.Database.Internal.Utilities.DefaultRunLoop/FirebaseThreadFactory::_enclosing
	DefaultRunLoop_t1056641960 * ____enclosing_0;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(FirebaseThreadFactory_t699088793, ____enclosing_0)); }
	inline DefaultRunLoop_t1056641960 * get__enclosing_0() const { return ____enclosing_0; }
	inline DefaultRunLoop_t1056641960 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(DefaultRunLoop_t1056641960 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
