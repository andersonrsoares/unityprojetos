#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"
#include "mscorlib_System_IntPtr2504060609.h"

// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.EventHandler
struct EventHandler_t277755526;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t3547909217;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t3080659151;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t2907683281;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth
struct  FirebaseAuth_t3105883899  : public Il2CppObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t2419939847  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t210707726 * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	IntPtr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	IntPtr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	IntPtr_t ___idTokenListener_5;
	// System.EventHandler Firebase.Auth.FirebaseAuth::StateChanged
	EventHandler_t277755526 * ___StateChanged_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::IdTokenChanged
	EventHandler_t277755526 * ___IdTokenChanged_7;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___swigCPtr_0)); }
	inline HandleRef_t2419939847  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t2419939847 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t2419939847  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___appProxy_2)); }
	inline FirebaseApp_t210707726 * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t210707726 ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t210707726 * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier(&___appProxy_2, value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___appCPtr_3)); }
	inline IntPtr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline IntPtr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(IntPtr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_authStateListener_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___authStateListener_4)); }
	inline IntPtr_t get_authStateListener_4() const { return ___authStateListener_4; }
	inline IntPtr_t* get_address_of_authStateListener_4() { return &___authStateListener_4; }
	inline void set_authStateListener_4(IntPtr_t value)
	{
		___authStateListener_4 = value;
	}

	inline static int32_t get_offset_of_idTokenListener_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___idTokenListener_5)); }
	inline IntPtr_t get_idTokenListener_5() const { return ___idTokenListener_5; }
	inline IntPtr_t* get_address_of_idTokenListener_5() { return &___idTokenListener_5; }
	inline void set_idTokenListener_5(IntPtr_t value)
	{
		___idTokenListener_5 = value;
	}

	inline static int32_t get_offset_of_StateChanged_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___StateChanged_6)); }
	inline EventHandler_t277755526 * get_StateChanged_6() const { return ___StateChanged_6; }
	inline EventHandler_t277755526 ** get_address_of_StateChanged_6() { return &___StateChanged_6; }
	inline void set_StateChanged_6(EventHandler_t277755526 * value)
	{
		___StateChanged_6 = value;
		Il2CppCodeGenWriteBarrier(&___StateChanged_6, value);
	}

	inline static int32_t get_offset_of_IdTokenChanged_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___IdTokenChanged_7)); }
	inline EventHandler_t277755526 * get_IdTokenChanged_7() const { return ___IdTokenChanged_7; }
	inline EventHandler_t277755526 ** get_address_of_IdTokenChanged_7() { return &___IdTokenChanged_7; }
	inline void set_IdTokenChanged_7(EventHandler_t277755526 * value)
	{
		___IdTokenChanged_7 = value;
		Il2CppCodeGenWriteBarrier(&___IdTokenChanged_7, value);
	}
};

struct FirebaseAuth_t3105883899_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_t3547909217 * ___appCPtrToAuth_8;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache0
	StateChangedDelegate_t3080659151 * ___U3CU3Ef__mgU24cache0_9;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache1
	StateChangedDelegate_t3080659151 * ___U3CU3Ef__mgU24cache1_10;
	// System.EventHandler`1<System.EventArgs> Firebase.Auth.FirebaseAuth::<>f__mg$cache2
	EventHandler_1_t1880931879 * ___U3CU3Ef__mgU24cache2_11;
	// System.EventHandler`1<System.EventArgs> Firebase.Auth.FirebaseAuth::<>f__mg$cache3
	EventHandler_1_t1880931879 * ___U3CU3Ef__mgU24cache3_12;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache0
	Action_1_t2907683281 * ___U3CU3Ef__amU24cache0_13;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache1
	Action_1_t2907683281 * ___U3CU3Ef__amU24cache1_14;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_8() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___appCPtrToAuth_8)); }
	inline Dictionary_2_t3547909217 * get_appCPtrToAuth_8() const { return ___appCPtrToAuth_8; }
	inline Dictionary_2_t3547909217 ** get_address_of_appCPtrToAuth_8() { return &___appCPtrToAuth_8; }
	inline void set_appCPtrToAuth_8(Dictionary_2_t3547909217 * value)
	{
		___appCPtrToAuth_8 = value;
		Il2CppCodeGenWriteBarrier(&___appCPtrToAuth_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline StateChangedDelegate_t3080659151 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline StateChangedDelegate_t3080659151 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(StateChangedDelegate_t3080659151 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_10() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__mgU24cache1_10)); }
	inline StateChangedDelegate_t3080659151 * get_U3CU3Ef__mgU24cache1_10() const { return ___U3CU3Ef__mgU24cache1_10; }
	inline StateChangedDelegate_t3080659151 ** get_address_of_U3CU3Ef__mgU24cache1_10() { return &___U3CU3Ef__mgU24cache1_10; }
	inline void set_U3CU3Ef__mgU24cache1_10(StateChangedDelegate_t3080659151 * value)
	{
		___U3CU3Ef__mgU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_11() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__mgU24cache2_11)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__mgU24cache2_11() const { return ___U3CU3Ef__mgU24cache2_11; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__mgU24cache2_11() { return &___U3CU3Ef__mgU24cache2_11; }
	inline void set_U3CU3Ef__mgU24cache2_11(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__mgU24cache2_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_12() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__mgU24cache3_12)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__mgU24cache3_12() const { return ___U3CU3Ef__mgU24cache3_12; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__mgU24cache3_12() { return &___U3CU3Ef__mgU24cache3_12; }
	inline void set_U3CU3Ef__mgU24cache3_12(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__mgU24cache3_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_1_t2907683281 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_1_t2907683281 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_1_t2907683281 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Action_1_t2907683281 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Action_1_t2907683281 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Action_1_t2907683281 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
