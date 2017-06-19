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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.RepoInfo
struct  RepoInfo_t4079583710  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Core.RepoInfo::Host
	String_t* ___Host_2;
	// System.String Firebase.Database.Internal.Core.RepoInfo::InternalHost
	String_t* ___InternalHost_3;
	// System.String Firebase.Database.Internal.Core.RepoInfo::Namespace
	String_t* ___Namespace_4;
	// System.Boolean Firebase.Database.Internal.Core.RepoInfo::Secure
	bool ___Secure_5;

public:
	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___Host_2)); }
	inline String_t* get_Host_2() const { return ___Host_2; }
	inline String_t** get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(String_t* value)
	{
		___Host_2 = value;
		Il2CppCodeGenWriteBarrier(&___Host_2, value);
	}

	inline static int32_t get_offset_of_InternalHost_3() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___InternalHost_3)); }
	inline String_t* get_InternalHost_3() const { return ___InternalHost_3; }
	inline String_t** get_address_of_InternalHost_3() { return &___InternalHost_3; }
	inline void set_InternalHost_3(String_t* value)
	{
		___InternalHost_3 = value;
		Il2CppCodeGenWriteBarrier(&___InternalHost_3, value);
	}

	inline static int32_t get_offset_of_Namespace_4() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___Namespace_4)); }
	inline String_t* get_Namespace_4() const { return ___Namespace_4; }
	inline String_t** get_address_of_Namespace_4() { return &___Namespace_4; }
	inline void set_Namespace_4(String_t* value)
	{
		___Namespace_4 = value;
		Il2CppCodeGenWriteBarrier(&___Namespace_4, value);
	}

	inline static int32_t get_offset_of_Secure_5() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___Secure_5)); }
	inline bool get_Secure_5() const { return ___Secure_5; }
	inline bool* get_address_of_Secure_5() { return &___Secure_5; }
	inline void set_Secure_5(bool value)
	{
		___Secure_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
