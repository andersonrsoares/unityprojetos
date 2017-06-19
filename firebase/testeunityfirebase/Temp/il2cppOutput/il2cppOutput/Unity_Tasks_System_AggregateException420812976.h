#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2113226379;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AggregateException
struct  AggregateException_t420812976  : public Exception_t1927440687
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::<InnerExceptions>k__BackingField
	ReadOnlyCollection_1_t2113226379 * ___U3CInnerExceptionsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CInnerExceptionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AggregateException_t420812976, ___U3CInnerExceptionsU3Ek__BackingField_11)); }
	inline ReadOnlyCollection_1_t2113226379 * get_U3CInnerExceptionsU3Ek__BackingField_11() const { return ___U3CInnerExceptionsU3Ek__BackingField_11; }
	inline ReadOnlyCollection_1_t2113226379 ** get_address_of_U3CInnerExceptionsU3Ek__BackingField_11() { return &___U3CInnerExceptionsU3Ek__BackingField_11; }
	inline void set_U3CInnerExceptionsU3Ek__BackingField_11(ReadOnlyCollection_1_t2113226379 * value)
	{
		___U3CInnerExceptionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInnerExceptionsU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
