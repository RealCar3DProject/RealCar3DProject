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

// System.Comparison`1<Byn.Net.ConnectionId>
struct Comparison_1_t2769929350;
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

// System.Void System.Comparison`1<Byn.Net.ConnectionId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3998034774_gshared (Comparison_1_t2769929350 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m3998034774(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t2769929350 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3998034774_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<Byn.Net.ConnectionId>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1448959726_gshared (Comparison_1_t2769929350 * __this, ConnectionId_t1508190499  ___x0, ConnectionId_t1508190499  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m1448959726(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t2769929350 *, ConnectionId_t1508190499 , ConnectionId_t1508190499 , const MethodInfo*))Comparison_1_Invoke_m1448959726_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<Byn.Net.ConnectionId>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2459080419_gshared (Comparison_1_t2769929350 * __this, ConnectionId_t1508190499  ___x0, ConnectionId_t1508190499  ___y1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2459080419(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t2769929350 *, ConnectionId_t1508190499 , ConnectionId_t1508190499 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2459080419_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<Byn.Net.ConnectionId>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2295406452_gshared (Comparison_1_t2769929350 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2295406452(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t2769929350 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2295406452_gshared)(__this, ___result0, method)
