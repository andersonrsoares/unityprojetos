﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_App_Firebase_FutureBase2698306134.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t1855054212;
// System.Object
struct Il2CppObject;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t2903358321;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureVoid
struct  FutureVoid_t3180437  : public FutureBase_t2698306134
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t2419939847  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	IntPtr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t2903358321 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureVoid_t3180437, ___swigCPtr_2)); }
	inline HandleRef_t2419939847  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t2419939847 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t2419939847  value)
	{
		___swigCPtr_2 = value;
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureVoid_t3180437, ___callbackData_6)); }
	inline IntPtr_t get_callbackData_6() const { return ___callbackData_6; }
	inline IntPtr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(IntPtr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureVoid_t3180437, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t2903358321 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t2903358321 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t2903358321 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier(&___SWIG_CompletionCB_7, value);
	}
};

struct FutureVoid_t3180437_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_t1855054212 * ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	Il2CppObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureVoid_t3180437_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t1855054212 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t1855054212 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t1855054212 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier(&___Callbacks_3, value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureVoid_t3180437_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureVoid_t3180437_StaticFields, ___CallbackLock_5)); }
	inline Il2CppObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline Il2CppObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(Il2CppObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier(&___CallbackLock_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
