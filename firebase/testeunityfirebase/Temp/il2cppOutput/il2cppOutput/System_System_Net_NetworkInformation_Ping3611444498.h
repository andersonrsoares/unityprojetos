#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_Component2826673791.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t4230068110;
// System.Object
struct Il2CppObject;
// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t1044526567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping
struct  Ping_t3611444498  : public Component_t2826673791
{
public:
	// System.ComponentModel.BackgroundWorker System.Net.NetworkInformation.Ping::worker
	BackgroundWorker_t4230068110 * ___worker_12;
	// System.Object System.Net.NetworkInformation.Ping::user_async_state
	Il2CppObject * ___user_async_state_13;
	// System.Net.NetworkInformation.PingCompletedEventHandler System.Net.NetworkInformation.Ping::PingCompleted
	PingCompletedEventHandler_t1044526567 * ___PingCompleted_14;

public:
	inline static int32_t get_offset_of_worker_12() { return static_cast<int32_t>(offsetof(Ping_t3611444498, ___worker_12)); }
	inline BackgroundWorker_t4230068110 * get_worker_12() const { return ___worker_12; }
	inline BackgroundWorker_t4230068110 ** get_address_of_worker_12() { return &___worker_12; }
	inline void set_worker_12(BackgroundWorker_t4230068110 * value)
	{
		___worker_12 = value;
		Il2CppCodeGenWriteBarrier(&___worker_12, value);
	}

	inline static int32_t get_offset_of_user_async_state_13() { return static_cast<int32_t>(offsetof(Ping_t3611444498, ___user_async_state_13)); }
	inline Il2CppObject * get_user_async_state_13() const { return ___user_async_state_13; }
	inline Il2CppObject ** get_address_of_user_async_state_13() { return &___user_async_state_13; }
	inline void set_user_async_state_13(Il2CppObject * value)
	{
		___user_async_state_13 = value;
		Il2CppCodeGenWriteBarrier(&___user_async_state_13, value);
	}

	inline static int32_t get_offset_of_PingCompleted_14() { return static_cast<int32_t>(offsetof(Ping_t3611444498, ___PingCompleted_14)); }
	inline PingCompletedEventHandler_t1044526567 * get_PingCompleted_14() const { return ___PingCompleted_14; }
	inline PingCompletedEventHandler_t1044526567 ** get_address_of_PingCompleted_14() { return &___PingCompleted_14; }
	inline void set_PingCompleted_14(PingCompletedEventHandler_t1044526567 * value)
	{
		___PingCompleted_14 = value;
		Il2CppCodeGenWriteBarrier(&___PingCompleted_14, value);
	}
};

struct Ping_t3611444498_StaticFields
{
public:
	// System.String[] System.Net.NetworkInformation.Ping::PingBinPaths
	StringU5BU5D_t1642385972* ___PingBinPaths_8;
	// System.String System.Net.NetworkInformation.Ping::PingBinPath
	String_t* ___PingBinPath_9;
	// System.Byte[] System.Net.NetworkInformation.Ping::default_buffer
	ByteU5BU5D_t3397334013* ___default_buffer_10;
	// System.Boolean System.Net.NetworkInformation.Ping::canSendPrivileged
	bool ___canSendPrivileged_11;

public:
	inline static int32_t get_offset_of_PingBinPaths_8() { return static_cast<int32_t>(offsetof(Ping_t3611444498_StaticFields, ___PingBinPaths_8)); }
	inline StringU5BU5D_t1642385972* get_PingBinPaths_8() const { return ___PingBinPaths_8; }
	inline StringU5BU5D_t1642385972** get_address_of_PingBinPaths_8() { return &___PingBinPaths_8; }
	inline void set_PingBinPaths_8(StringU5BU5D_t1642385972* value)
	{
		___PingBinPaths_8 = value;
		Il2CppCodeGenWriteBarrier(&___PingBinPaths_8, value);
	}

	inline static int32_t get_offset_of_PingBinPath_9() { return static_cast<int32_t>(offsetof(Ping_t3611444498_StaticFields, ___PingBinPath_9)); }
	inline String_t* get_PingBinPath_9() const { return ___PingBinPath_9; }
	inline String_t** get_address_of_PingBinPath_9() { return &___PingBinPath_9; }
	inline void set_PingBinPath_9(String_t* value)
	{
		___PingBinPath_9 = value;
		Il2CppCodeGenWriteBarrier(&___PingBinPath_9, value);
	}

	inline static int32_t get_offset_of_default_buffer_10() { return static_cast<int32_t>(offsetof(Ping_t3611444498_StaticFields, ___default_buffer_10)); }
	inline ByteU5BU5D_t3397334013* get_default_buffer_10() const { return ___default_buffer_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_default_buffer_10() { return &___default_buffer_10; }
	inline void set_default_buffer_10(ByteU5BU5D_t3397334013* value)
	{
		___default_buffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___default_buffer_10, value);
	}

	inline static int32_t get_offset_of_canSendPrivileged_11() { return static_cast<int32_t>(offsetof(Ping_t3611444498_StaticFields, ___canSendPrivileged_11)); }
	inline bool get_canSendPrivileged_11() const { return ___canSendPrivileged_11; }
	inline bool* get_address_of_canSendPrivileged_11() { return &___canSendPrivileged_11; }
	inline void set_canSendPrivileged_11(bool value)
	{
		___canSendPrivileged_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
