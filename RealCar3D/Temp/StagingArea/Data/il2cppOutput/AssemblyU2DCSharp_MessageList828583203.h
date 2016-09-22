#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessageList
struct  MessageList_t828583203  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MessageList::uEntryPrefab
	GameObject_t1756533147 * ___uEntryPrefab_2;
	// UnityEngine.RectTransform MessageList::mOwnTransform
	RectTransform_t3349966182 * ___mOwnTransform_3;
	// System.Int32 MessageList::mMaxMessages
	int32_t ___mMaxMessages_4;
	// System.Int32 MessageList::mCounter
	int32_t ___mCounter_5;

public:
	inline static int32_t get_offset_of_uEntryPrefab_2() { return static_cast<int32_t>(offsetof(MessageList_t828583203, ___uEntryPrefab_2)); }
	inline GameObject_t1756533147 * get_uEntryPrefab_2() const { return ___uEntryPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_uEntryPrefab_2() { return &___uEntryPrefab_2; }
	inline void set_uEntryPrefab_2(GameObject_t1756533147 * value)
	{
		___uEntryPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___uEntryPrefab_2, value);
	}

	inline static int32_t get_offset_of_mOwnTransform_3() { return static_cast<int32_t>(offsetof(MessageList_t828583203, ___mOwnTransform_3)); }
	inline RectTransform_t3349966182 * get_mOwnTransform_3() const { return ___mOwnTransform_3; }
	inline RectTransform_t3349966182 ** get_address_of_mOwnTransform_3() { return &___mOwnTransform_3; }
	inline void set_mOwnTransform_3(RectTransform_t3349966182 * value)
	{
		___mOwnTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___mOwnTransform_3, value);
	}

	inline static int32_t get_offset_of_mMaxMessages_4() { return static_cast<int32_t>(offsetof(MessageList_t828583203, ___mMaxMessages_4)); }
	inline int32_t get_mMaxMessages_4() const { return ___mMaxMessages_4; }
	inline int32_t* get_address_of_mMaxMessages_4() { return &___mMaxMessages_4; }
	inline void set_mMaxMessages_4(int32_t value)
	{
		___mMaxMessages_4 = value;
	}

	inline static int32_t get_offset_of_mCounter_5() { return static_cast<int32_t>(offsetof(MessageList_t828583203, ___mCounter_5)); }
	inline int32_t get_mCounter_5() const { return ___mCounter_5; }
	inline int32_t* get_address_of_mCounter_5() { return &___mCounter_5; }
	inline void set_mCounter_5(int32_t value)
	{
		___mCounter_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
