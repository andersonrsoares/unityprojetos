#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.Util.StringListReader
struct  StringListReader_t1703758004  : public Il2CppObject
{
public:
	// System.Int32 Firebase.Database.Internal.Connection.Util.StringListReader::_markedCharPos
	int32_t ____markedCharPos_0;
	// System.Int32 Firebase.Database.Internal.Connection.Util.StringListReader::_markedStringListPos
	int32_t ____markedStringListPos_1;
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.Util.StringListReader::_strings
	Il2CppObject* ____strings_2;
	// System.Int32 Firebase.Database.Internal.Connection.Util.StringListReader::_charPos
	int32_t ____charPos_3;
	// System.Boolean Firebase.Database.Internal.Connection.Util.StringListReader::_frozen
	bool ____frozen_4;
	// System.Int32 Firebase.Database.Internal.Connection.Util.StringListReader::_stringListPos
	int32_t ____stringListPos_5;

public:
	inline static int32_t get_offset_of__markedCharPos_0() { return static_cast<int32_t>(offsetof(StringListReader_t1703758004, ____markedCharPos_0)); }
	inline int32_t get__markedCharPos_0() const { return ____markedCharPos_0; }
	inline int32_t* get_address_of__markedCharPos_0() { return &____markedCharPos_0; }
	inline void set__markedCharPos_0(int32_t value)
	{
		____markedCharPos_0 = value;
	}

	inline static int32_t get_offset_of__markedStringListPos_1() { return static_cast<int32_t>(offsetof(StringListReader_t1703758004, ____markedStringListPos_1)); }
	inline int32_t get__markedStringListPos_1() const { return ____markedStringListPos_1; }
	inline int32_t* get_address_of__markedStringListPos_1() { return &____markedStringListPos_1; }
	inline void set__markedStringListPos_1(int32_t value)
	{
		____markedStringListPos_1 = value;
	}

	inline static int32_t get_offset_of__strings_2() { return static_cast<int32_t>(offsetof(StringListReader_t1703758004, ____strings_2)); }
	inline Il2CppObject* get__strings_2() const { return ____strings_2; }
	inline Il2CppObject** get_address_of__strings_2() { return &____strings_2; }
	inline void set__strings_2(Il2CppObject* value)
	{
		____strings_2 = value;
		Il2CppCodeGenWriteBarrier(&____strings_2, value);
	}

	inline static int32_t get_offset_of__charPos_3() { return static_cast<int32_t>(offsetof(StringListReader_t1703758004, ____charPos_3)); }
	inline int32_t get__charPos_3() const { return ____charPos_3; }
	inline int32_t* get_address_of__charPos_3() { return &____charPos_3; }
	inline void set__charPos_3(int32_t value)
	{
		____charPos_3 = value;
	}

	inline static int32_t get_offset_of__frozen_4() { return static_cast<int32_t>(offsetof(StringListReader_t1703758004, ____frozen_4)); }
	inline bool get__frozen_4() const { return ____frozen_4; }
	inline bool* get_address_of__frozen_4() { return &____frozen_4; }
	inline void set__frozen_4(bool value)
	{
		____frozen_4 = value;
	}

	inline static int32_t get_offset_of__stringListPos_5() { return static_cast<int32_t>(offsetof(StringListReader_t1703758004, ____stringListPos_5)); }
	inline int32_t get__stringListPos_5() const { return ____stringListPos_5; }
	inline int32_t* get_address_of__stringListPos_5() { return &____stringListPos_5; }
	inline void set__stringListPos_5(int32_t value)
	{
		____stringListPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
