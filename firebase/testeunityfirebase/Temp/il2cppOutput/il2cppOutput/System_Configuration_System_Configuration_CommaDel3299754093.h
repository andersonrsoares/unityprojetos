#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Collections_Specialized_StringCollect352985975.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.CommaDelimitedStringCollection
struct  CommaDelimitedStringCollection_t3299754093  : public StringCollection_t352985975
{
public:
	// System.Boolean System.Configuration.CommaDelimitedStringCollection::modified
	bool ___modified_1;
	// System.Boolean System.Configuration.CommaDelimitedStringCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(CommaDelimitedStringCollection_t3299754093, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(CommaDelimitedStringCollection_t3299754093, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
