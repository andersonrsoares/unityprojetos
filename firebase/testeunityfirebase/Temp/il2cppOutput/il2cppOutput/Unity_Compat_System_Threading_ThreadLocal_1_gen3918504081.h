#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t1060479271;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t1618346168;
// System.Func`1<System.Int32>
struct Func_1_t4026270130;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadLocal`1<System.Int32>
struct  ThreadLocal_1_t3918504081  : public Il2CppObject
{
public:
	// System.Boolean System.Threading.ThreadLocal`1::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1::valueFactory
	Func_1_t4026270130 * ___valueFactory_5;

public:
	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t3918504081, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t3918504081, ___id_4)); }
	inline int64_t get_id_4() const { return ___id_4; }
	inline int64_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int64_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_valueFactory_5() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t3918504081, ___valueFactory_5)); }
	inline Func_1_t4026270130 * get_valueFactory_5() const { return ___valueFactory_5; }
	inline Func_1_t4026270130 ** get_address_of_valueFactory_5() { return &___valueFactory_5; }
	inline void set_valueFactory_5(Func_1_t4026270130 * value)
	{
		___valueFactory_5 = value;
		Il2CppCodeGenWriteBarrier(&___valueFactory_5, value);
	}
};

struct ThreadLocal_1_t3918504081_StaticFields
{
public:
	// System.Int64 System.Threading.ThreadLocal`1::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1::allDataDictionaries
	Il2CppObject* ___allDataDictionaries_2;

public:
	inline static int32_t get_offset_of_lastId_0() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t3918504081_StaticFields, ___lastId_0)); }
	inline int64_t get_lastId_0() const { return ___lastId_0; }
	inline int64_t* get_address_of_lastId_0() { return &___lastId_0; }
	inline void set_lastId_0(int64_t value)
	{
		___lastId_0 = value;
	}

	inline static int32_t get_offset_of_allDataDictionaries_2() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t3918504081_StaticFields, ___allDataDictionaries_2)); }
	inline Il2CppObject* get_allDataDictionaries_2() const { return ___allDataDictionaries_2; }
	inline Il2CppObject** get_address_of_allDataDictionaries_2() { return &___allDataDictionaries_2; }
	inline void set_allDataDictionaries_2(Il2CppObject* value)
	{
		___allDataDictionaries_2 = value;
		Il2CppCodeGenWriteBarrier(&___allDataDictionaries_2, value);
	}
};

struct ThreadLocal_1_t3918504081_ThreadStaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1::threadLocalData
	Il2CppObject* ___threadLocalData_1;

public:
	inline static int32_t get_offset_of_threadLocalData_1() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t3918504081_ThreadStaticFields, ___threadLocalData_1)); }
	inline Il2CppObject* get_threadLocalData_1() const { return ___threadLocalData_1; }
	inline Il2CppObject** get_address_of_threadLocalData_1() { return &___threadLocalData_1; }
	inline void set_threadLocalData_1(Il2CppObject* value)
	{
		___threadLocalData_1 = value;
		Il2CppCodeGenWriteBarrier(&___threadLocalData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
