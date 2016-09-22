#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Byn.Net.ConnectionId
struct ConnectionId_t1508190499;
struct ConnectionId_t1508190499_marshaled_pinvoke;
struct ConnectionId_t1508190499_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"
#include "mscorlib_System_Object2689449295.h"

// System.Boolean Byn.Net.ConnectionId::Equals(System.Object)
extern "C"  bool ConnectionId_Equals_m673913069 (ConnectionId_t1508190499 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Byn.Net.ConnectionId::GetHashCode()
extern "C"  int32_t ConnectionId_GetHashCode_m686355971 (ConnectionId_t1508190499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.ConnectionId::op_Equality(Byn.Net.ConnectionId,Byn.Net.ConnectionId)
extern "C"  bool ConnectionId_op_Equality_m4219158328 (Il2CppObject * __this /* static, unused */, ConnectionId_t1508190499  ___i10, ConnectionId_t1508190499  ___i21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Byn.Net.ConnectionId::ToString()
extern "C"  String_t* ConnectionId_ToString_m1049495851 (ConnectionId_t1508190499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.ConnectionId::.cctor()
extern "C"  void ConnectionId__cctor_m2306369971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ConnectionId_t1508190499;
struct ConnectionId_t1508190499_marshaled_pinvoke;

extern "C" void ConnectionId_t1508190499_marshal_pinvoke(const ConnectionId_t1508190499& unmarshaled, ConnectionId_t1508190499_marshaled_pinvoke& marshaled);
extern "C" void ConnectionId_t1508190499_marshal_pinvoke_back(const ConnectionId_t1508190499_marshaled_pinvoke& marshaled, ConnectionId_t1508190499& unmarshaled);
extern "C" void ConnectionId_t1508190499_marshal_pinvoke_cleanup(ConnectionId_t1508190499_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ConnectionId_t1508190499;
struct ConnectionId_t1508190499_marshaled_com;

extern "C" void ConnectionId_t1508190499_marshal_com(const ConnectionId_t1508190499& unmarshaled, ConnectionId_t1508190499_marshaled_com& marshaled);
extern "C" void ConnectionId_t1508190499_marshal_com_back(const ConnectionId_t1508190499_marshaled_com& marshaled, ConnectionId_t1508190499& unmarshaled);
extern "C" void ConnectionId_t1508190499_marshal_com_cleanup(ConnectionId_t1508190499_marshaled_com& marshaled);
