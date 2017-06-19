#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"

// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// Firebase.Database.Core.DatabasePlatform
struct DatabasePlatform_t1459671864;
// Firebase.Database.Core.AuthTokenProvider
struct AuthTokenProvider_t3681374264;
// Firebase.Database.Core.IEventTarget
struct IEventTarget_t170421798;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Logger
struct Logger_t225270238;
// System.String
struct String_t;
// Firebase.Database.Core.IRunLoop
struct IRunLoop_t1947166426;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Context
struct  Context_t3486154757  : public Il2CppObject
{
public:
	// System.Object Firebase.Database.Internal.Core.Context::_sync
	Il2CppObject * ____sync_1;
	// Firebase.Database.Internal.Core.Persistence.IPersistenceManager Firebase.Database.Internal.Core.Context::_forcedPersistenceManager
	Il2CppObject * ____forcedPersistenceManager_2;
	// System.Boolean Firebase.Database.Internal.Core.Context::_frozen
	bool ____frozen_3;
	// Firebase.Database.Core.DatabasePlatform Firebase.Database.Internal.Core.Context::_platform
	DatabasePlatform_t1459671864 * ____platform_4;
	// System.Boolean Firebase.Database.Internal.Core.Context::_stopped
	bool ____stopped_5;
	// Firebase.Database.Core.AuthTokenProvider Firebase.Database.Internal.Core.Context::AuthTokenProvider
	AuthTokenProvider_t3681374264 * ___AuthTokenProvider_6;
	// System.Int64 Firebase.Database.Internal.Core.Context::CacheSize
	int64_t ___CacheSize_7;
	// Firebase.Database.Core.IEventTarget Firebase.Database.Internal.Core.Context::EventTarget
	Il2CppObject * ___EventTarget_8;
	// Firebase.FirebaseApp Firebase.Database.Internal.Core.Context::FirebaseApp
	FirebaseApp_t210707726 * ___FirebaseApp_9;
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Core.Context::LoggedComponents
	Il2CppObject* ___LoggedComponents_10;
	// Firebase.Database.Logger Firebase.Database.Internal.Core.Context::Logger
	Logger_t225270238 * ___Logger_11;
	// Firebase.Database.Logger/Level Firebase.Database.Internal.Core.Context::LogLevel
	int32_t ___LogLevel_12;
	// System.Boolean Firebase.Database.Internal.Core.Context::PersistenceEnabled
	bool ___PersistenceEnabled_13;
	// System.String Firebase.Database.Internal.Core.Context::PersistenceKey
	String_t* ___PersistenceKey_14;
	// Firebase.Database.Core.IRunLoop Firebase.Database.Internal.Core.Context::RunLoop
	Il2CppObject * ___RunLoop_15;
	// System.String Firebase.Database.Internal.Core.Context::UserAgent
	String_t* ___UserAgent_16;

public:
	inline static int32_t get_offset_of__sync_1() { return static_cast<int32_t>(offsetof(Context_t3486154757, ____sync_1)); }
	inline Il2CppObject * get__sync_1() const { return ____sync_1; }
	inline Il2CppObject ** get_address_of__sync_1() { return &____sync_1; }
	inline void set__sync_1(Il2CppObject * value)
	{
		____sync_1 = value;
		Il2CppCodeGenWriteBarrier(&____sync_1, value);
	}

	inline static int32_t get_offset_of__forcedPersistenceManager_2() { return static_cast<int32_t>(offsetof(Context_t3486154757, ____forcedPersistenceManager_2)); }
	inline Il2CppObject * get__forcedPersistenceManager_2() const { return ____forcedPersistenceManager_2; }
	inline Il2CppObject ** get_address_of__forcedPersistenceManager_2() { return &____forcedPersistenceManager_2; }
	inline void set__forcedPersistenceManager_2(Il2CppObject * value)
	{
		____forcedPersistenceManager_2 = value;
		Il2CppCodeGenWriteBarrier(&____forcedPersistenceManager_2, value);
	}

	inline static int32_t get_offset_of__frozen_3() { return static_cast<int32_t>(offsetof(Context_t3486154757, ____frozen_3)); }
	inline bool get__frozen_3() const { return ____frozen_3; }
	inline bool* get_address_of__frozen_3() { return &____frozen_3; }
	inline void set__frozen_3(bool value)
	{
		____frozen_3 = value;
	}

	inline static int32_t get_offset_of__platform_4() { return static_cast<int32_t>(offsetof(Context_t3486154757, ____platform_4)); }
	inline DatabasePlatform_t1459671864 * get__platform_4() const { return ____platform_4; }
	inline DatabasePlatform_t1459671864 ** get_address_of__platform_4() { return &____platform_4; }
	inline void set__platform_4(DatabasePlatform_t1459671864 * value)
	{
		____platform_4 = value;
		Il2CppCodeGenWriteBarrier(&____platform_4, value);
	}

	inline static int32_t get_offset_of__stopped_5() { return static_cast<int32_t>(offsetof(Context_t3486154757, ____stopped_5)); }
	inline bool get__stopped_5() const { return ____stopped_5; }
	inline bool* get_address_of__stopped_5() { return &____stopped_5; }
	inline void set__stopped_5(bool value)
	{
		____stopped_5 = value;
	}

	inline static int32_t get_offset_of_AuthTokenProvider_6() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___AuthTokenProvider_6)); }
	inline AuthTokenProvider_t3681374264 * get_AuthTokenProvider_6() const { return ___AuthTokenProvider_6; }
	inline AuthTokenProvider_t3681374264 ** get_address_of_AuthTokenProvider_6() { return &___AuthTokenProvider_6; }
	inline void set_AuthTokenProvider_6(AuthTokenProvider_t3681374264 * value)
	{
		___AuthTokenProvider_6 = value;
		Il2CppCodeGenWriteBarrier(&___AuthTokenProvider_6, value);
	}

	inline static int32_t get_offset_of_CacheSize_7() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___CacheSize_7)); }
	inline int64_t get_CacheSize_7() const { return ___CacheSize_7; }
	inline int64_t* get_address_of_CacheSize_7() { return &___CacheSize_7; }
	inline void set_CacheSize_7(int64_t value)
	{
		___CacheSize_7 = value;
	}

	inline static int32_t get_offset_of_EventTarget_8() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___EventTarget_8)); }
	inline Il2CppObject * get_EventTarget_8() const { return ___EventTarget_8; }
	inline Il2CppObject ** get_address_of_EventTarget_8() { return &___EventTarget_8; }
	inline void set_EventTarget_8(Il2CppObject * value)
	{
		___EventTarget_8 = value;
		Il2CppCodeGenWriteBarrier(&___EventTarget_8, value);
	}

	inline static int32_t get_offset_of_FirebaseApp_9() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___FirebaseApp_9)); }
	inline FirebaseApp_t210707726 * get_FirebaseApp_9() const { return ___FirebaseApp_9; }
	inline FirebaseApp_t210707726 ** get_address_of_FirebaseApp_9() { return &___FirebaseApp_9; }
	inline void set_FirebaseApp_9(FirebaseApp_t210707726 * value)
	{
		___FirebaseApp_9 = value;
		Il2CppCodeGenWriteBarrier(&___FirebaseApp_9, value);
	}

	inline static int32_t get_offset_of_LoggedComponents_10() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___LoggedComponents_10)); }
	inline Il2CppObject* get_LoggedComponents_10() const { return ___LoggedComponents_10; }
	inline Il2CppObject** get_address_of_LoggedComponents_10() { return &___LoggedComponents_10; }
	inline void set_LoggedComponents_10(Il2CppObject* value)
	{
		___LoggedComponents_10 = value;
		Il2CppCodeGenWriteBarrier(&___LoggedComponents_10, value);
	}

	inline static int32_t get_offset_of_Logger_11() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___Logger_11)); }
	inline Logger_t225270238 * get_Logger_11() const { return ___Logger_11; }
	inline Logger_t225270238 ** get_address_of_Logger_11() { return &___Logger_11; }
	inline void set_Logger_11(Logger_t225270238 * value)
	{
		___Logger_11 = value;
		Il2CppCodeGenWriteBarrier(&___Logger_11, value);
	}

	inline static int32_t get_offset_of_LogLevel_12() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___LogLevel_12)); }
	inline int32_t get_LogLevel_12() const { return ___LogLevel_12; }
	inline int32_t* get_address_of_LogLevel_12() { return &___LogLevel_12; }
	inline void set_LogLevel_12(int32_t value)
	{
		___LogLevel_12 = value;
	}

	inline static int32_t get_offset_of_PersistenceEnabled_13() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___PersistenceEnabled_13)); }
	inline bool get_PersistenceEnabled_13() const { return ___PersistenceEnabled_13; }
	inline bool* get_address_of_PersistenceEnabled_13() { return &___PersistenceEnabled_13; }
	inline void set_PersistenceEnabled_13(bool value)
	{
		___PersistenceEnabled_13 = value;
	}

	inline static int32_t get_offset_of_PersistenceKey_14() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___PersistenceKey_14)); }
	inline String_t* get_PersistenceKey_14() const { return ___PersistenceKey_14; }
	inline String_t** get_address_of_PersistenceKey_14() { return &___PersistenceKey_14; }
	inline void set_PersistenceKey_14(String_t* value)
	{
		___PersistenceKey_14 = value;
		Il2CppCodeGenWriteBarrier(&___PersistenceKey_14, value);
	}

	inline static int32_t get_offset_of_RunLoop_15() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___RunLoop_15)); }
	inline Il2CppObject * get_RunLoop_15() const { return ___RunLoop_15; }
	inline Il2CppObject ** get_address_of_RunLoop_15() { return &___RunLoop_15; }
	inline void set_RunLoop_15(Il2CppObject * value)
	{
		___RunLoop_15 = value;
		Il2CppCodeGenWriteBarrier(&___RunLoop_15, value);
	}

	inline static int32_t get_offset_of_UserAgent_16() { return static_cast<int32_t>(offsetof(Context_t3486154757, ___UserAgent_16)); }
	inline String_t* get_UserAgent_16() const { return ___UserAgent_16; }
	inline String_t** get_address_of_UserAgent_16() { return &___UserAgent_16; }
	inline void set_UserAgent_16(String_t* value)
	{
		___UserAgent_16 = value;
		Il2CppCodeGenWriteBarrier(&___UserAgent_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
