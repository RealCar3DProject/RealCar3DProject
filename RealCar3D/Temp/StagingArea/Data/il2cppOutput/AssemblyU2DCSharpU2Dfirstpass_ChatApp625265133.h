#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// Byn.Net.IBasicNetwork
struct IBasicNetwork_t3367305221;
// System.Collections.Generic.List`1<Byn.Net.ConnectionId>
struct List_1_t877311631;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatApp
struct  ChatApp_t625265133  : public MonoBehaviour_t1158329972
{
public:
	// System.String ChatApp::uSignalingUrl
	String_t* ___uSignalingUrl_2;
	// System.String ChatApp::uStunServer
	String_t* ___uStunServer_3;
	// UnityEngine.UI.Text ChatApp::incomText
	Text_t356221433 * ___incomText_4;
	// Byn.Net.IBasicNetwork ChatApp::mNetwork
	Il2CppObject * ___mNetwork_5;
	// System.Boolean ChatApp::mIsServer
	bool ___mIsServer_6;
	// System.Collections.Generic.List`1<Byn.Net.ConnectionId> ChatApp::mConnections
	List_1_t877311631 * ___mConnections_7;

public:
	inline static int32_t get_offset_of_uSignalingUrl_2() { return static_cast<int32_t>(offsetof(ChatApp_t625265133, ___uSignalingUrl_2)); }
	inline String_t* get_uSignalingUrl_2() const { return ___uSignalingUrl_2; }
	inline String_t** get_address_of_uSignalingUrl_2() { return &___uSignalingUrl_2; }
	inline void set_uSignalingUrl_2(String_t* value)
	{
		___uSignalingUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___uSignalingUrl_2, value);
	}

	inline static int32_t get_offset_of_uStunServer_3() { return static_cast<int32_t>(offsetof(ChatApp_t625265133, ___uStunServer_3)); }
	inline String_t* get_uStunServer_3() const { return ___uStunServer_3; }
	inline String_t** get_address_of_uStunServer_3() { return &___uStunServer_3; }
	inline void set_uStunServer_3(String_t* value)
	{
		___uStunServer_3 = value;
		Il2CppCodeGenWriteBarrier(&___uStunServer_3, value);
	}

	inline static int32_t get_offset_of_incomText_4() { return static_cast<int32_t>(offsetof(ChatApp_t625265133, ___incomText_4)); }
	inline Text_t356221433 * get_incomText_4() const { return ___incomText_4; }
	inline Text_t356221433 ** get_address_of_incomText_4() { return &___incomText_4; }
	inline void set_incomText_4(Text_t356221433 * value)
	{
		___incomText_4 = value;
		Il2CppCodeGenWriteBarrier(&___incomText_4, value);
	}

	inline static int32_t get_offset_of_mNetwork_5() { return static_cast<int32_t>(offsetof(ChatApp_t625265133, ___mNetwork_5)); }
	inline Il2CppObject * get_mNetwork_5() const { return ___mNetwork_5; }
	inline Il2CppObject ** get_address_of_mNetwork_5() { return &___mNetwork_5; }
	inline void set_mNetwork_5(Il2CppObject * value)
	{
		___mNetwork_5 = value;
		Il2CppCodeGenWriteBarrier(&___mNetwork_5, value);
	}

	inline static int32_t get_offset_of_mIsServer_6() { return static_cast<int32_t>(offsetof(ChatApp_t625265133, ___mIsServer_6)); }
	inline bool get_mIsServer_6() const { return ___mIsServer_6; }
	inline bool* get_address_of_mIsServer_6() { return &___mIsServer_6; }
	inline void set_mIsServer_6(bool value)
	{
		___mIsServer_6 = value;
	}

	inline static int32_t get_offset_of_mConnections_7() { return static_cast<int32_t>(offsetof(ChatApp_t625265133, ___mConnections_7)); }
	inline List_1_t877311631 * get_mConnections_7() const { return ___mConnections_7; }
	inline List_1_t877311631 ** get_address_of_mConnections_7() { return &___mConnections_7; }
	inline void set_mConnections_7(List_1_t877311631 * value)
	{
		___mConnections_7 = value;
		Il2CppCodeGenWriteBarrier(&___mConnections_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
