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

// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2125486988;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t652733044;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Int32>
struct Dictionary_2_t2513902766;
// Firebase.FirebaseApp/DestroyDelegate
struct DestroyDelegate_t3635929227;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t413676709;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp
struct  FirebaseApp_t210707726  : public Il2CppObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t2419939847  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.EventHandler`1<System.EventArgs> Firebase.FirebaseApp::Disposed
	EventHandler_1_t1880931879 * ___Disposed_8;
	// Firebase.FirebaseApp/DestroyDelegate Firebase.FirebaseApp::destroy
	DestroyDelegate_t3635929227 * ___destroy_12;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___swigCPtr_0)); }
	inline HandleRef_t2419939847  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t2419939847 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t2419939847  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_Disposed_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___Disposed_8)); }
	inline EventHandler_1_t1880931879 * get_Disposed_8() const { return ___Disposed_8; }
	inline EventHandler_1_t1880931879 ** get_address_of_Disposed_8() { return &___Disposed_8; }
	inline void set_Disposed_8(EventHandler_1_t1880931879 * value)
	{
		___Disposed_8 = value;
		Il2CppCodeGenWriteBarrier(&___Disposed_8, value);
	}

	inline static int32_t get_offset_of_destroy_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___destroy_12)); }
	inline DestroyDelegate_t3635929227 * get_destroy_12() const { return ___destroy_12; }
	inline DestroyDelegate_t3635929227 ** get_address_of_destroy_12() { return &___destroy_12; }
	inline void set_destroy_12(DestroyDelegate_t3635929227 * value)
	{
		___destroy_12 = value;
		Il2CppCodeGenWriteBarrier(&___destroy_12, value);
	}
};

struct FirebaseApp_t210707726_StaticFields
{
public:
	// System.String Firebase.FirebaseApp::DEPENDENCY_NOT_FOUND_ERROR_ANDROID
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2;
	// System.String Firebase.FirebaseApp::DEPENDENCY_NOT_FOUND_ERROR_IOS
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_IOS_3;
	// System.String Firebase.FirebaseApp::DEPENDENCY_NOT_FOUND_ERROR_GENERIC
	String_t* ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4;
	// System.String Firebase.FirebaseApp::DLL_NOT_FOUND_ERROR_ANDROID
	String_t* ___DLL_NOT_FOUND_ERROR_ANDROID_5;
	// System.String Firebase.FirebaseApp::DLL_NOT_FOUND_ERROR_IOS
	String_t* ___DLL_NOT_FOUND_ERROR_IOS_6;
	// System.String Firebase.FirebaseApp::DLL_NOT_FOUND_ERROR_GENERIC
	String_t* ___DLL_NOT_FOUND_ERROR_GENERIC_7;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2125486988 * ___nameToProxy_9;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t652733044 * ___cPtrToProxy_10;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Int32> Firebase.FirebaseApp::cPtrRefCount
	Dictionary_2_t2513902766 * ___cPtrRefCount_11;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t413676709 * ___U3CU3Ef__amU24cache0_13;

public:
	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2() const { return ___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2() { return &___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2 = value;
		Il2CppCodeGenWriteBarrier(&___DEPENDENCY_NOT_FOUND_ERROR_ANDROID_2, value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_IOS_3)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_IOS_3() const { return ___DEPENDENCY_NOT_FOUND_ERROR_IOS_3; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_IOS_3() { return &___DEPENDENCY_NOT_FOUND_ERROR_IOS_3; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_IOS_3(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_IOS_3 = value;
		Il2CppCodeGenWriteBarrier(&___DEPENDENCY_NOT_FOUND_ERROR_IOS_3, value);
	}

	inline static int32_t get_offset_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4)); }
	inline String_t* get_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4() const { return ___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4; }
	inline String_t** get_address_of_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4() { return &___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4; }
	inline void set_DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4(String_t* value)
	{
		___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4 = value;
		Il2CppCodeGenWriteBarrier(&___DEPENDENCY_NOT_FOUND_ERROR_GENERIC_4, value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_ANDROID_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___DLL_NOT_FOUND_ERROR_ANDROID_5)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_ANDROID_5() const { return ___DLL_NOT_FOUND_ERROR_ANDROID_5; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_ANDROID_5() { return &___DLL_NOT_FOUND_ERROR_ANDROID_5; }
	inline void set_DLL_NOT_FOUND_ERROR_ANDROID_5(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_ANDROID_5 = value;
		Il2CppCodeGenWriteBarrier(&___DLL_NOT_FOUND_ERROR_ANDROID_5, value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_IOS_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___DLL_NOT_FOUND_ERROR_IOS_6)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_IOS_6() const { return ___DLL_NOT_FOUND_ERROR_IOS_6; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_IOS_6() { return &___DLL_NOT_FOUND_ERROR_IOS_6; }
	inline void set_DLL_NOT_FOUND_ERROR_IOS_6(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_IOS_6 = value;
		Il2CppCodeGenWriteBarrier(&___DLL_NOT_FOUND_ERROR_IOS_6, value);
	}

	inline static int32_t get_offset_of_DLL_NOT_FOUND_ERROR_GENERIC_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___DLL_NOT_FOUND_ERROR_GENERIC_7)); }
	inline String_t* get_DLL_NOT_FOUND_ERROR_GENERIC_7() const { return ___DLL_NOT_FOUND_ERROR_GENERIC_7; }
	inline String_t** get_address_of_DLL_NOT_FOUND_ERROR_GENERIC_7() { return &___DLL_NOT_FOUND_ERROR_GENERIC_7; }
	inline void set_DLL_NOT_FOUND_ERROR_GENERIC_7(String_t* value)
	{
		___DLL_NOT_FOUND_ERROR_GENERIC_7 = value;
		Il2CppCodeGenWriteBarrier(&___DLL_NOT_FOUND_ERROR_GENERIC_7, value);
	}

	inline static int32_t get_offset_of_nameToProxy_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___nameToProxy_9)); }
	inline Dictionary_2_t2125486988 * get_nameToProxy_9() const { return ___nameToProxy_9; }
	inline Dictionary_2_t2125486988 ** get_address_of_nameToProxy_9() { return &___nameToProxy_9; }
	inline void set_nameToProxy_9(Dictionary_2_t2125486988 * value)
	{
		___nameToProxy_9 = value;
		Il2CppCodeGenWriteBarrier(&___nameToProxy_9, value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___cPtrToProxy_10)); }
	inline Dictionary_2_t652733044 * get_cPtrToProxy_10() const { return ___cPtrToProxy_10; }
	inline Dictionary_2_t652733044 ** get_address_of_cPtrToProxy_10() { return &___cPtrToProxy_10; }
	inline void set_cPtrToProxy_10(Dictionary_2_t652733044 * value)
	{
		___cPtrToProxy_10 = value;
		Il2CppCodeGenWriteBarrier(&___cPtrToProxy_10, value);
	}

	inline static int32_t get_offset_of_cPtrRefCount_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___cPtrRefCount_11)); }
	inline Dictionary_2_t2513902766 * get_cPtrRefCount_11() const { return ___cPtrRefCount_11; }
	inline Dictionary_2_t2513902766 ** get_address_of_cPtrRefCount_11() { return &___cPtrRefCount_11; }
	inline void set_cPtrRefCount_11(Dictionary_2_t2513902766 * value)
	{
		___cPtrRefCount_11 = value;
		Il2CppCodeGenWriteBarrier(&___cPtrRefCount_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline CreateDelegate_t413676709 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline CreateDelegate_t413676709 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(CreateDelegate_t413676709 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
