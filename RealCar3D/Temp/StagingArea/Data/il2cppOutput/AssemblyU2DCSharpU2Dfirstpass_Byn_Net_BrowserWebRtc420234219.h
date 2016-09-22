#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Byn.Net.ConnectionId>
struct List_1_t877311631;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>
struct Queue_1_t861148891;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Net.BrowserWebRtcNetwork
struct  BrowserWebRtcNetwork_t420234219  : public Il2CppObject
{
public:
	// System.Int32 Byn.Net.BrowserWebRtcNetwork::mReference
	int32_t ___mReference_1;
	// System.Boolean Byn.Net.BrowserWebRtcNetwork::mIsServer
	bool ___mIsServer_2;
	// System.Collections.Generic.List`1<Byn.Net.ConnectionId> Byn.Net.BrowserWebRtcNetwork::mConnections
	List_1_t877311631 * ___mConnections_3;
	// System.Int32[] Byn.Net.BrowserWebRtcNetwork::mTypeidBuffer
	Int32U5BU5D_t3030399641* ___mTypeidBuffer_4;
	// System.Int32[] Byn.Net.BrowserWebRtcNetwork::mConidBuffer
	Int32U5BU5D_t3030399641* ___mConidBuffer_5;
	// System.Int32[] Byn.Net.BrowserWebRtcNetwork::mDataWrittenLenBuffer
	Int32U5BU5D_t3030399641* ___mDataWrittenLenBuffer_6;
	// System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent> Byn.Net.BrowserWebRtcNetwork::mEvents
	Queue_1_t861148891 * ___mEvents_7;

public:
	inline static int32_t get_offset_of_mReference_1() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mReference_1)); }
	inline int32_t get_mReference_1() const { return ___mReference_1; }
	inline int32_t* get_address_of_mReference_1() { return &___mReference_1; }
	inline void set_mReference_1(int32_t value)
	{
		___mReference_1 = value;
	}

	inline static int32_t get_offset_of_mIsServer_2() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mIsServer_2)); }
	inline bool get_mIsServer_2() const { return ___mIsServer_2; }
	inline bool* get_address_of_mIsServer_2() { return &___mIsServer_2; }
	inline void set_mIsServer_2(bool value)
	{
		___mIsServer_2 = value;
	}

	inline static int32_t get_offset_of_mConnections_3() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mConnections_3)); }
	inline List_1_t877311631 * get_mConnections_3() const { return ___mConnections_3; }
	inline List_1_t877311631 ** get_address_of_mConnections_3() { return &___mConnections_3; }
	inline void set_mConnections_3(List_1_t877311631 * value)
	{
		___mConnections_3 = value;
		Il2CppCodeGenWriteBarrier(&___mConnections_3, value);
	}

	inline static int32_t get_offset_of_mTypeidBuffer_4() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mTypeidBuffer_4)); }
	inline Int32U5BU5D_t3030399641* get_mTypeidBuffer_4() const { return ___mTypeidBuffer_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_mTypeidBuffer_4() { return &___mTypeidBuffer_4; }
	inline void set_mTypeidBuffer_4(Int32U5BU5D_t3030399641* value)
	{
		___mTypeidBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTypeidBuffer_4, value);
	}

	inline static int32_t get_offset_of_mConidBuffer_5() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mConidBuffer_5)); }
	inline Int32U5BU5D_t3030399641* get_mConidBuffer_5() const { return ___mConidBuffer_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_mConidBuffer_5() { return &___mConidBuffer_5; }
	inline void set_mConidBuffer_5(Int32U5BU5D_t3030399641* value)
	{
		___mConidBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___mConidBuffer_5, value);
	}

	inline static int32_t get_offset_of_mDataWrittenLenBuffer_6() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mDataWrittenLenBuffer_6)); }
	inline Int32U5BU5D_t3030399641* get_mDataWrittenLenBuffer_6() const { return ___mDataWrittenLenBuffer_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_mDataWrittenLenBuffer_6() { return &___mDataWrittenLenBuffer_6; }
	inline void set_mDataWrittenLenBuffer_6(Int32U5BU5D_t3030399641* value)
	{
		___mDataWrittenLenBuffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___mDataWrittenLenBuffer_6, value);
	}

	inline static int32_t get_offset_of_mEvents_7() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219, ___mEvents_7)); }
	inline Queue_1_t861148891 * get_mEvents_7() const { return ___mEvents_7; }
	inline Queue_1_t861148891 ** get_address_of_mEvents_7() { return &___mEvents_7; }
	inline void set_mEvents_7(Queue_1_t861148891 * value)
	{
		___mEvents_7 = value;
		Il2CppCodeGenWriteBarrier(&___mEvents_7, value);
	}
};

struct BrowserWebRtcNetwork_t420234219_StaticFields
{
public:
	// System.Boolean Byn.Net.BrowserWebRtcNetwork::sInjectionTried
	bool ___sInjectionTried_0;

public:
	inline static int32_t get_offset_of_sInjectionTried_0() { return static_cast<int32_t>(offsetof(BrowserWebRtcNetwork_t420234219_StaticFields, ___sInjectionTried_0)); }
	inline bool get_sInjectionTried_0() const { return ___sInjectionTried_0; }
	inline bool* get_address_of_sInjectionTried_0() { return &___sInjectionTried_0; }
	inline void set_sInjectionTried_0(bool value)
	{
		___sInjectionTried_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
