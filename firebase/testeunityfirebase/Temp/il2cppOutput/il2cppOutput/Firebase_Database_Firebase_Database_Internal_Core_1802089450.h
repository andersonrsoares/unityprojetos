#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_3200809552.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1450018638;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.WriteTree/Predicate203
struct  Predicate203_t1802089450  : public Predicate_1_t3200809552
{
public:
	// System.Boolean Firebase.Database.Internal.Core.WriteTree/Predicate203::_includeHiddenWrites
	bool ____includeHiddenWrites_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.WriteTree/Predicate203::_treePath
	Path_t2568473163 * ____treePath_2;
	// System.Collections.Generic.IList`1<System.Int64> Firebase.Database.Internal.Core.WriteTree/Predicate203::_writeIdsToExclude
	Il2CppObject* ____writeIdsToExclude_3;

public:
	inline static int32_t get_offset_of__includeHiddenWrites_1() { return static_cast<int32_t>(offsetof(Predicate203_t1802089450, ____includeHiddenWrites_1)); }
	inline bool get__includeHiddenWrites_1() const { return ____includeHiddenWrites_1; }
	inline bool* get_address_of__includeHiddenWrites_1() { return &____includeHiddenWrites_1; }
	inline void set__includeHiddenWrites_1(bool value)
	{
		____includeHiddenWrites_1 = value;
	}

	inline static int32_t get_offset_of__treePath_2() { return static_cast<int32_t>(offsetof(Predicate203_t1802089450, ____treePath_2)); }
	inline Path_t2568473163 * get__treePath_2() const { return ____treePath_2; }
	inline Path_t2568473163 ** get_address_of__treePath_2() { return &____treePath_2; }
	inline void set__treePath_2(Path_t2568473163 * value)
	{
		____treePath_2 = value;
		Il2CppCodeGenWriteBarrier(&____treePath_2, value);
	}

	inline static int32_t get_offset_of__writeIdsToExclude_3() { return static_cast<int32_t>(offsetof(Predicate203_t1802089450, ____writeIdsToExclude_3)); }
	inline Il2CppObject* get__writeIdsToExclude_3() const { return ____writeIdsToExclude_3; }
	inline Il2CppObject** get_address_of__writeIdsToExclude_3() { return &____writeIdsToExclude_3; }
	inline void set__writeIdsToExclude_3(Il2CppObject* value)
	{
		____writeIdsToExclude_3 = value;
		Il2CppCodeGenWriteBarrier(&____writeIdsToExclude_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
