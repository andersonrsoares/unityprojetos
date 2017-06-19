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
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path>
struct IList_1_t3109413764;
// Firebase.Database.Internal.Snapshot.CompoundHash/ISplitStrategy
struct ISplitStrategy_t3197954337;
// System.Collections.Generic.List`1<Firebase.Database.Internal.Snapshot.ChildKey>
struct List_1_t566923515;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder
struct  CompoundHashBuilder_t1995558443  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentHashes
	Il2CppObject* ___CurrentHashes_0;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path> Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentPaths
	Il2CppObject* ___CurrentPaths_1;
	// Firebase.Database.Internal.Snapshot.CompoundHash/ISplitStrategy Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::SplitStrategy
	Il2CppObject * ___SplitStrategy_2;
	// System.Collections.Generic.List`1<Firebase.Database.Internal.Snapshot.ChildKey> Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentPathValue
	List_1_t566923515 * ___CurrentPathValue_3;
	// System.Int32 Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::CurrentPathDepth
	int32_t ___CurrentPathDepth_4;
	// System.Int32 Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::LastLeafDepth
	int32_t ___LastLeafDepth_5;
	// System.Boolean Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::NeedsComma
	bool ___NeedsComma_6;
	// System.Text.StringBuilder Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder::OptHashValueBuilder
	StringBuilder_t1221177846 * ___OptHashValueBuilder_7;

public:
	inline static int32_t get_offset_of_CurrentHashes_0() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___CurrentHashes_0)); }
	inline Il2CppObject* get_CurrentHashes_0() const { return ___CurrentHashes_0; }
	inline Il2CppObject** get_address_of_CurrentHashes_0() { return &___CurrentHashes_0; }
	inline void set_CurrentHashes_0(Il2CppObject* value)
	{
		___CurrentHashes_0 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentHashes_0, value);
	}

	inline static int32_t get_offset_of_CurrentPaths_1() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___CurrentPaths_1)); }
	inline Il2CppObject* get_CurrentPaths_1() const { return ___CurrentPaths_1; }
	inline Il2CppObject** get_address_of_CurrentPaths_1() { return &___CurrentPaths_1; }
	inline void set_CurrentPaths_1(Il2CppObject* value)
	{
		___CurrentPaths_1 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentPaths_1, value);
	}

	inline static int32_t get_offset_of_SplitStrategy_2() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___SplitStrategy_2)); }
	inline Il2CppObject * get_SplitStrategy_2() const { return ___SplitStrategy_2; }
	inline Il2CppObject ** get_address_of_SplitStrategy_2() { return &___SplitStrategy_2; }
	inline void set_SplitStrategy_2(Il2CppObject * value)
	{
		___SplitStrategy_2 = value;
		Il2CppCodeGenWriteBarrier(&___SplitStrategy_2, value);
	}

	inline static int32_t get_offset_of_CurrentPathValue_3() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___CurrentPathValue_3)); }
	inline List_1_t566923515 * get_CurrentPathValue_3() const { return ___CurrentPathValue_3; }
	inline List_1_t566923515 ** get_address_of_CurrentPathValue_3() { return &___CurrentPathValue_3; }
	inline void set_CurrentPathValue_3(List_1_t566923515 * value)
	{
		___CurrentPathValue_3 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentPathValue_3, value);
	}

	inline static int32_t get_offset_of_CurrentPathDepth_4() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___CurrentPathDepth_4)); }
	inline int32_t get_CurrentPathDepth_4() const { return ___CurrentPathDepth_4; }
	inline int32_t* get_address_of_CurrentPathDepth_4() { return &___CurrentPathDepth_4; }
	inline void set_CurrentPathDepth_4(int32_t value)
	{
		___CurrentPathDepth_4 = value;
	}

	inline static int32_t get_offset_of_LastLeafDepth_5() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___LastLeafDepth_5)); }
	inline int32_t get_LastLeafDepth_5() const { return ___LastLeafDepth_5; }
	inline int32_t* get_address_of_LastLeafDepth_5() { return &___LastLeafDepth_5; }
	inline void set_LastLeafDepth_5(int32_t value)
	{
		___LastLeafDepth_5 = value;
	}

	inline static int32_t get_offset_of_NeedsComma_6() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___NeedsComma_6)); }
	inline bool get_NeedsComma_6() const { return ___NeedsComma_6; }
	inline bool* get_address_of_NeedsComma_6() { return &___NeedsComma_6; }
	inline void set_NeedsComma_6(bool value)
	{
		___NeedsComma_6 = value;
	}

	inline static int32_t get_offset_of_OptHashValueBuilder_7() { return static_cast<int32_t>(offsetof(CompoundHashBuilder_t1995558443, ___OptHashValueBuilder_7)); }
	inline StringBuilder_t1221177846 * get_OptHashValueBuilder_7() const { return ___OptHashValueBuilder_7; }
	inline StringBuilder_t1221177846 ** get_address_of_OptHashValueBuilder_7() { return &___OptHashValueBuilder_7; }
	inline void set_OptHashValueBuilder_7(StringBuilder_t1221177846 * value)
	{
		___OptHashValueBuilder_7 = value;
		Il2CppCodeGenWriteBarrier(&___OptHashValueBuilder_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
