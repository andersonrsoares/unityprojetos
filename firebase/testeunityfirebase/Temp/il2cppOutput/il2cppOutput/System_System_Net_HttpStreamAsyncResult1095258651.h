#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Exception
struct Exception_t1927440687;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpStreamAsyncResult
struct  HttpStreamAsyncResult_t1095258651  : public Il2CppObject
{
public:
	// System.Object System.Net.HttpStreamAsyncResult::locker
	Il2CppObject * ___locker_0;
	// System.Threading.ManualResetEvent System.Net.HttpStreamAsyncResult::handle
	ManualResetEvent_t926074657 * ___handle_1;
	// System.Boolean System.Net.HttpStreamAsyncResult::completed
	bool ___completed_2;
	// System.Byte[] System.Net.HttpStreamAsyncResult::Buffer
	ByteU5BU5D_t3397334013* ___Buffer_3;
	// System.Int32 System.Net.HttpStreamAsyncResult::Offset
	int32_t ___Offset_4;
	// System.Int32 System.Net.HttpStreamAsyncResult::Count
	int32_t ___Count_5;
	// System.AsyncCallback System.Net.HttpStreamAsyncResult::Callback
	AsyncCallback_t163412349 * ___Callback_6;
	// System.Object System.Net.HttpStreamAsyncResult::State
	Il2CppObject * ___State_7;
	// System.Int32 System.Net.HttpStreamAsyncResult::SynchRead
	int32_t ___SynchRead_8;
	// System.Exception System.Net.HttpStreamAsyncResult::Error
	Exception_t1927440687 * ___Error_9;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___locker_0)); }
	inline Il2CppObject * get_locker_0() const { return ___locker_0; }
	inline Il2CppObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(Il2CppObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier(&___locker_0, value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___handle_1)); }
	inline ManualResetEvent_t926074657 * get_handle_1() const { return ___handle_1; }
	inline ManualResetEvent_t926074657 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(ManualResetEvent_t926074657 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier(&___handle_1, value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___completed_2)); }
	inline bool get_completed_2() const { return ___completed_2; }
	inline bool* get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(bool value)
	{
		___completed_2 = value;
	}

	inline static int32_t get_offset_of_Buffer_3() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___Buffer_3)); }
	inline ByteU5BU5D_t3397334013* get_Buffer_3() const { return ___Buffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_Buffer_3() { return &___Buffer_3; }
	inline void set_Buffer_3(ByteU5BU5D_t3397334013* value)
	{
		___Buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___Buffer_3, value);
	}

	inline static int32_t get_offset_of_Offset_4() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___Offset_4)); }
	inline int32_t get_Offset_4() const { return ___Offset_4; }
	inline int32_t* get_address_of_Offset_4() { return &___Offset_4; }
	inline void set_Offset_4(int32_t value)
	{
		___Offset_4 = value;
	}

	inline static int32_t get_offset_of_Count_5() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___Count_5)); }
	inline int32_t get_Count_5() const { return ___Count_5; }
	inline int32_t* get_address_of_Count_5() { return &___Count_5; }
	inline void set_Count_5(int32_t value)
	{
		___Count_5 = value;
	}

	inline static int32_t get_offset_of_Callback_6() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___Callback_6)); }
	inline AsyncCallback_t163412349 * get_Callback_6() const { return ___Callback_6; }
	inline AsyncCallback_t163412349 ** get_address_of_Callback_6() { return &___Callback_6; }
	inline void set_Callback_6(AsyncCallback_t163412349 * value)
	{
		___Callback_6 = value;
		Il2CppCodeGenWriteBarrier(&___Callback_6, value);
	}

	inline static int32_t get_offset_of_State_7() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___State_7)); }
	inline Il2CppObject * get_State_7() const { return ___State_7; }
	inline Il2CppObject ** get_address_of_State_7() { return &___State_7; }
	inline void set_State_7(Il2CppObject * value)
	{
		___State_7 = value;
		Il2CppCodeGenWriteBarrier(&___State_7, value);
	}

	inline static int32_t get_offset_of_SynchRead_8() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___SynchRead_8)); }
	inline int32_t get_SynchRead_8() const { return ___SynchRead_8; }
	inline int32_t* get_address_of_SynchRead_8() { return &___SynchRead_8; }
	inline void set_SynchRead_8(int32_t value)
	{
		___SynchRead_8 = value;
	}

	inline static int32_t get_offset_of_Error_9() { return static_cast<int32_t>(offsetof(HttpStreamAsyncResult_t1095258651, ___Error_9)); }
	inline Exception_t1927440687 * get_Error_9() const { return ___Error_9; }
	inline Exception_t1927440687 ** get_address_of_Error_9() { return &___Error_9; }
	inline void set_Error_9(Exception_t1927440687 * value)
	{
		___Error_9 = value;
		Il2CppCodeGenWriteBarrier(&___Error_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
