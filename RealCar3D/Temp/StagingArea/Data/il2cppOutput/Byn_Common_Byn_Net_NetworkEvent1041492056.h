#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_ValueType3507792607.h"
#include "Byn_Common_Byn_Net_NetEventType3780191931.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Net.NetworkEvent
struct  NetworkEvent_t1041492056 
{
public:
	// Byn.Net.NetEventType Byn.Net.NetworkEvent::type
	uint8_t ___type_0;
	// Byn.Net.ConnectionId Byn.Net.NetworkEvent::connectionId
	ConnectionId_t1508190499  ___connectionId_1;
	// System.Object Byn.Net.NetworkEvent::data
	Il2CppObject * ___data_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(NetworkEvent_t1041492056, ___type_0)); }
	inline uint8_t get_type_0() const { return ___type_0; }
	inline uint8_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint8_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_connectionId_1() { return static_cast<int32_t>(offsetof(NetworkEvent_t1041492056, ___connectionId_1)); }
	inline ConnectionId_t1508190499  get_connectionId_1() const { return ___connectionId_1; }
	inline ConnectionId_t1508190499 * get_address_of_connectionId_1() { return &___connectionId_1; }
	inline void set_connectionId_1(ConnectionId_t1508190499  value)
	{
		___connectionId_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(NetworkEvent_t1041492056, ___data_2)); }
	inline Il2CppObject * get_data_2() const { return ___data_2; }
	inline Il2CppObject ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(Il2CppObject * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Byn.Net.NetworkEvent
struct NetworkEvent_t1041492056_marshaled_pinvoke
{
	uint8_t ___type_0;
	ConnectionId_t1508190499_marshaled_pinvoke ___connectionId_1;
	Il2CppIUnknown* ___data_2;
};
// Native definition for marshalling of: Byn.Net.NetworkEvent
struct NetworkEvent_t1041492056_marshaled_com
{
	uint8_t ___type_0;
	ConnectionId_t1508190499_marshaled_com ___connectionId_1;
	Il2CppIUnknown* ___data_2;
};
