#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.BlockingCollection`1<Google.Sharpen.Runnable>
struct BlockingCollection_1_t1818823346;
// System.Collections.Generic.List`1<Google.Sharpen.Thread>
struct List_1_t691498718;
// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.ThreadPoolExecutor
struct  ThreadPoolExecutor_t376308723  : public Il2CppObject
{
public:
	// System.Int32 Google.Sharpen.ThreadPoolExecutor::_corePoolSize
	int32_t ____corePoolSize_0;
	// Google.Sharpen.BlockingCollection`1<Google.Sharpen.Runnable> Google.Sharpen.ThreadPoolExecutor::_pendingTasks
	BlockingCollection_1_t1818823346 * ____pendingTasks_1;
	// System.Collections.Generic.List`1<Google.Sharpen.Thread> Google.Sharpen.ThreadPoolExecutor::_pool
	List_1_t691498718 * ____pool_2;
	// Google.Sharpen.ThreadFactory Google.Sharpen.ThreadPoolExecutor::_factory
	ThreadFactory_t1392637388 * ____factory_3;
	// System.Int32 Google.Sharpen.ThreadPoolExecutor::_freeThreads
	int32_t ____freeThreads_4;
	// System.Int32 Google.Sharpen.ThreadPoolExecutor::_maxPoolSize
	int32_t ____maxPoolSize_5;
	// System.Int32 Google.Sharpen.ThreadPoolExecutor::_runningThreads
	int32_t ____runningThreads_6;
	// System.Boolean Google.Sharpen.ThreadPoolExecutor::_shutdown
	bool ____shutdown_7;

public:
	inline static int32_t get_offset_of__corePoolSize_0() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____corePoolSize_0)); }
	inline int32_t get__corePoolSize_0() const { return ____corePoolSize_0; }
	inline int32_t* get_address_of__corePoolSize_0() { return &____corePoolSize_0; }
	inline void set__corePoolSize_0(int32_t value)
	{
		____corePoolSize_0 = value;
	}

	inline static int32_t get_offset_of__pendingTasks_1() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____pendingTasks_1)); }
	inline BlockingCollection_1_t1818823346 * get__pendingTasks_1() const { return ____pendingTasks_1; }
	inline BlockingCollection_1_t1818823346 ** get_address_of__pendingTasks_1() { return &____pendingTasks_1; }
	inline void set__pendingTasks_1(BlockingCollection_1_t1818823346 * value)
	{
		____pendingTasks_1 = value;
		Il2CppCodeGenWriteBarrier(&____pendingTasks_1, value);
	}

	inline static int32_t get_offset_of__pool_2() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____pool_2)); }
	inline List_1_t691498718 * get__pool_2() const { return ____pool_2; }
	inline List_1_t691498718 ** get_address_of__pool_2() { return &____pool_2; }
	inline void set__pool_2(List_1_t691498718 * value)
	{
		____pool_2 = value;
		Il2CppCodeGenWriteBarrier(&____pool_2, value);
	}

	inline static int32_t get_offset_of__factory_3() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____factory_3)); }
	inline ThreadFactory_t1392637388 * get__factory_3() const { return ____factory_3; }
	inline ThreadFactory_t1392637388 ** get_address_of__factory_3() { return &____factory_3; }
	inline void set__factory_3(ThreadFactory_t1392637388 * value)
	{
		____factory_3 = value;
		Il2CppCodeGenWriteBarrier(&____factory_3, value);
	}

	inline static int32_t get_offset_of__freeThreads_4() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____freeThreads_4)); }
	inline int32_t get__freeThreads_4() const { return ____freeThreads_4; }
	inline int32_t* get_address_of__freeThreads_4() { return &____freeThreads_4; }
	inline void set__freeThreads_4(int32_t value)
	{
		____freeThreads_4 = value;
	}

	inline static int32_t get_offset_of__maxPoolSize_5() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____maxPoolSize_5)); }
	inline int32_t get__maxPoolSize_5() const { return ____maxPoolSize_5; }
	inline int32_t* get_address_of__maxPoolSize_5() { return &____maxPoolSize_5; }
	inline void set__maxPoolSize_5(int32_t value)
	{
		____maxPoolSize_5 = value;
	}

	inline static int32_t get_offset_of__runningThreads_6() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____runningThreads_6)); }
	inline int32_t get__runningThreads_6() const { return ____runningThreads_6; }
	inline int32_t* get_address_of__runningThreads_6() { return &____runningThreads_6; }
	inline void set__runningThreads_6(int32_t value)
	{
		____runningThreads_6 = value;
	}

	inline static int32_t get_offset_of__shutdown_7() { return static_cast<int32_t>(offsetof(ThreadPoolExecutor_t376308723, ____shutdown_7)); }
	inline bool get__shutdown_7() const { return ____shutdown_7; }
	inline bool* get_address_of__shutdown_7() { return &____shutdown_7; }
	inline void set__shutdown_7(bool value)
	{
		____shutdown_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
