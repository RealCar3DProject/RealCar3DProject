#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Net.ConnectionId
struct  ConnectionId_t1508190499 
{
public:
	// System.Int16 Byn.Net.ConnectionId::id
	int16_t ___id_1;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ConnectionId_t1508190499, ___id_1)); }
	inline int16_t get_id_1() const { return ___id_1; }
	inline int16_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int16_t value)
	{
		___id_1 = value;
	}
};

struct ConnectionId_t1508190499_StaticFields
{
public:
	// Byn.Net.ConnectionId Byn.Net.ConnectionId::INVALID
	ConnectionId_t1508190499  ___INVALID_0;

public:
	inline static int32_t get_offset_of_INVALID_0() { return static_cast<int32_t>(offsetof(ConnectionId_t1508190499_StaticFields, ___INVALID_0)); }
	inline ConnectionId_t1508190499  get_INVALID_0() const { return ___INVALID_0; }
	inline ConnectionId_t1508190499 * get_address_of_INVALID_0() { return &___INVALID_0; }
	inline void set_INVALID_0(ConnectionId_t1508190499  value)
	{
		___INVALID_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Byn.Net.ConnectionId
struct ConnectionId_t1508190499_marshaled_pinvoke
{
	int16_t ___id_1;
};
// Native definition for marshalling of: Byn.Net.ConnectionId
struct ConnectionId_t1508190499_marshaled_com
{
	int16_t ___id_1;
};
