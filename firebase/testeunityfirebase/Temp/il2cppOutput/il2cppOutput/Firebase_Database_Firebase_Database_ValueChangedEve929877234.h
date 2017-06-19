#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.ValueChangedEventArgs
struct  ValueChangedEventArgs_t929877234  : public EventArgs_t3289624707
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t1287895350 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t1067746743 * ___U3CDatabaseErrorU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_t929877234, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t1287895350 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t1287895350 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t1287895350 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSnapshotU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_t929877234, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t1067746743 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t1067746743 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t1067746743 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDatabaseErrorU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
