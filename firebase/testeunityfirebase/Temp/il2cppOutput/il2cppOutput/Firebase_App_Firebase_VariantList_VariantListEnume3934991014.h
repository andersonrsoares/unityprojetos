#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.VariantList
struct VariantList_t2408673687;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.VariantList/VariantListEnumerator
struct  VariantListEnumerator_t3934991014  : public Il2CppObject
{
public:
	// Firebase.VariantList Firebase.VariantList/VariantListEnumerator::collectionRef
	VariantList_t2408673687 * ___collectionRef_0;
	// System.Int32 Firebase.VariantList/VariantListEnumerator::currentIndex
	int32_t ___currentIndex_1;
	// System.Object Firebase.VariantList/VariantListEnumerator::currentObject
	Il2CppObject * ___currentObject_2;
	// System.Int32 Firebase.VariantList/VariantListEnumerator::currentSize
	int32_t ___currentSize_3;

public:
	inline static int32_t get_offset_of_collectionRef_0() { return static_cast<int32_t>(offsetof(VariantListEnumerator_t3934991014, ___collectionRef_0)); }
	inline VariantList_t2408673687 * get_collectionRef_0() const { return ___collectionRef_0; }
	inline VariantList_t2408673687 ** get_address_of_collectionRef_0() { return &___collectionRef_0; }
	inline void set_collectionRef_0(VariantList_t2408673687 * value)
	{
		___collectionRef_0 = value;
		Il2CppCodeGenWriteBarrier(&___collectionRef_0, value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(VariantListEnumerator_t3934991014, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}

	inline static int32_t get_offset_of_currentObject_2() { return static_cast<int32_t>(offsetof(VariantListEnumerator_t3934991014, ___currentObject_2)); }
	inline Il2CppObject * get_currentObject_2() const { return ___currentObject_2; }
	inline Il2CppObject ** get_address_of_currentObject_2() { return &___currentObject_2; }
	inline void set_currentObject_2(Il2CppObject * value)
	{
		___currentObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentObject_2, value);
	}

	inline static int32_t get_offset_of_currentSize_3() { return static_cast<int32_t>(offsetof(VariantListEnumerator_t3934991014, ___currentSize_3)); }
	inline int32_t get_currentSize_3() const { return ___currentSize_3; }
	inline int32_t* get_address_of_currentSize_3() { return &___currentSize_3; }
	inline void set_currentSize_3(int32_t value)
	{
		___currentSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
