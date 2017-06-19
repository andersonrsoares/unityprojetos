#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Exception
struct Exception_t1927440687;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.AppUtilPINVOKE/SWIGPendingException
struct  SWIGPendingException_t4193433529  : public Il2CppObject
{
public:

public:
};

struct SWIGPendingException_t4193433529_StaticFields
{
public:
	// System.Int32 Firebase.AppUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t4193433529_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t4193433529_ThreadStaticFields
{
public:
	// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t1927440687 * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t4193433529_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t1927440687 * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t1927440687 ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t1927440687 * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier(&___pendingException_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
