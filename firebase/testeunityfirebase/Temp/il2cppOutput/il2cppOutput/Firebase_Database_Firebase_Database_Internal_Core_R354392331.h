#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.UserWriteRecord
struct UserWriteRecord_t388677579;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/RequestResultCallback168
struct  RequestResultCallback168_t354392331  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/RequestResultCallback168::_enclosing
	Repo_t1244308462 * ____enclosing_0;
	// Firebase.Database.Internal.Core.UserWriteRecord Firebase.Database.Internal.Core.Repo/RequestResultCallback168::_write
	UserWriteRecord_t388677579 * ____write_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(RequestResultCallback168_t354392331, ____enclosing_0)); }
	inline Repo_t1244308462 * get__enclosing_0() const { return ____enclosing_0; }
	inline Repo_t1244308462 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Repo_t1244308462 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__write_1() { return static_cast<int32_t>(offsetof(RequestResultCallback168_t354392331, ____write_1)); }
	inline UserWriteRecord_t388677579 * get__write_1() const { return ____write_1; }
	inline UserWriteRecord_t388677579 ** get_address_of__write_1() { return &____write_1; }
	inline void set__write_1(UserWriteRecord_t388677579 * value)
	{
		____write_1 = value;
		Il2CppCodeGenWriteBarrier(&____write_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
