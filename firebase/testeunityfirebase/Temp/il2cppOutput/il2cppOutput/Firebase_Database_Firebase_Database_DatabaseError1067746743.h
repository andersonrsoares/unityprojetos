#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t3331096585;
// System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>>
struct IDictionary_2_t248806446;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseError
struct  DatabaseError_t1067746743  : public Il2CppObject
{
public:
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_3;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DatabaseError_t1067746743, ___U3CCodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_2() const { return ___U3CCodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_2() { return &___U3CCodeU3Ek__BackingField_2; }
	inline void set_U3CCodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DatabaseError_t1067746743, ___U3CMessageU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_3() const { return ___U3CMessageU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_3() { return &___U3CMessageU3Ek__BackingField_3; }
	inline void set_U3CMessageU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMessageU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CDetailsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DatabaseError_t1067746743, ___U3CDetailsU3Ek__BackingField_4)); }
	inline String_t* get_U3CDetailsU3Ek__BackingField_4() const { return ___U3CDetailsU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CDetailsU3Ek__BackingField_4() { return &___U3CDetailsU3Ek__BackingField_4; }
	inline void set_U3CDetailsU3Ek__BackingField_4(String_t* value)
	{
		___U3CDetailsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDetailsU3Ek__BackingField_4, value);
	}
};

struct DatabaseError_t1067746743_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	Il2CppObject* ___ErrorReasons_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Nullable`1<System.Int32>> Firebase.Database.DatabaseError::ErrorCodes
	Il2CppObject* ___ErrorCodes_1;

public:
	inline static int32_t get_offset_of_ErrorReasons_0() { return static_cast<int32_t>(offsetof(DatabaseError_t1067746743_StaticFields, ___ErrorReasons_0)); }
	inline Il2CppObject* get_ErrorReasons_0() const { return ___ErrorReasons_0; }
	inline Il2CppObject** get_address_of_ErrorReasons_0() { return &___ErrorReasons_0; }
	inline void set_ErrorReasons_0(Il2CppObject* value)
	{
		___ErrorReasons_0 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorReasons_0, value);
	}

	inline static int32_t get_offset_of_ErrorCodes_1() { return static_cast<int32_t>(offsetof(DatabaseError_t1067746743_StaticFields, ___ErrorCodes_1)); }
	inline Il2CppObject* get_ErrorCodes_1() const { return ___ErrorCodes_1; }
	inline Il2CppObject** get_address_of_ErrorCodes_1() { return &___ErrorCodes_1; }
	inline void set_ErrorCodes_1(Il2CppObject* value)
	{
		___ErrorCodes_1 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorCodes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
