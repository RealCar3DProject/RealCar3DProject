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

// System.Predicate`1<Byn.Net.ConnectionId>
struct Predicate_1_t4246127910;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Byn_Common_Byn_Net_ConnectionId1508190499.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<Byn.Net.ConnectionId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m4192354074_gshared (Predicate_1_t4246127910 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m4192354074(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t4246127910 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m4192354074_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<Byn.Net.ConnectionId>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3830321586_gshared (Predicate_1_t4246127910 * __this, ConnectionId_t1508190499  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3830321586(__this, ___obj0, method) ((  bool (*) (Predicate_1_t4246127910 *, ConnectionId_t1508190499 , const MethodInfo*))Predicate_1_Invoke_m3830321586_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<Byn.Net.ConnectionId>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m4233908847_gshared (Predicate_1_t4246127910 * __this, ConnectionId_t1508190499  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m4233908847(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t4246127910 *, ConnectionId_t1508190499 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m4233908847_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<Byn.Net.ConnectionId>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m993341684_gshared (Predicate_1_t4246127910 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m993341684(__this, ___result0, method) ((  bool (*) (Predicate_1_t4246127910 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m993341684_gshared)(__this, ___result0, method)
