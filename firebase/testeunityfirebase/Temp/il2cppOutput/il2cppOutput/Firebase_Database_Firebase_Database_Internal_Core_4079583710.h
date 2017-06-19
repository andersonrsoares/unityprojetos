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
	String_t* ___Host_0;
	// System.String Firebase.Database.Internal.Core.RepoInfo::InternalHost
	String_t* ___InternalHost_1;
	// System.String Firebase.Database.Internal.Core.RepoInfo::Namespace
	String_t* ___Namespace_2;
	// System.Boolean Firebase.Database.Internal.Core.RepoInfo::Secure
	bool ___Secure_3;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier(&___Host_0, value);
	}

	inline static int32_t get_offset_of_InternalHost_1() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___InternalHost_1)); }
	inline String_t* get_InternalHost_1() const { return ___InternalHost_1; }
	inline String_t** get_address_of_InternalHost_1() { return &___InternalHost_1; }
	inline void set_InternalHost_1(String_t* value)
	{
		___InternalHost_1 = value;
		Il2CppCodeGenWriteBarrier(&___InternalHost_1, value);
	}

	inline static int32_t get_offset_of_Namespace_2() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___Namespace_2)); }
	inline String_t* get_Namespace_2() const { return ___Namespace_2; }
	inline String_t** get_address_of_Namespace_2() { return &___Namespace_2; }
	inline void set_Namespace_2(String_t* value)
	{
		___Namespace_2 = value;
		Il2CppCodeGenWriteBarrier(&___Namespace_2, value);
	}

	inline static int32_t get_offset_of_Secure_3() { return static_cast<int32_t>(offsetof(RepoInfo_t4079583710, ___Secure_3)); }
	inline bool get_Secure_3() const { return ___Secure_3; }
	inline bool* get_address_of_Secure_3() { return &___Secure_3; }
	inline void set_Secure_3(bool value)
	{
		___Secure_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
