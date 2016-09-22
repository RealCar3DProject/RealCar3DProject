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

// System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>
struct Queue_1_t861148891;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<Byn.Net.NetworkEvent>
struct IEnumerator_1_t2811983179;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Byn.Net.NetworkEvent[]
struct NetworkEventU5BU5D_t973042505;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "Byn_Common_Byn_Net_NetworkEvent1041492056.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat1371211971.h"

// System.Void System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::.ctor()
extern "C"  void Queue_1__ctor_m1647997674_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1647997674(__this, method) ((  void (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1__ctor_m1647997674_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m689141879_gshared (Queue_1_t861148891 * __this, Il2CppArray * ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m689141879(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t861148891 *, Il2CppArray *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m689141879_gshared)(__this, ___array0, ___idx1, method)
// System.Boolean System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m2797909023_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m2797909023(__this, method) ((  bool (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m2797909023_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m3581095575_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m3581095575(__this, method) ((  Il2CppObject * (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m3581095575_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m428274563_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m428274563(__this, method) ((  Il2CppObject* (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m428274563_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Queue_1_System_Collections_IEnumerable_GetEnumerator_m1373267866_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m1373267866(__this, method) ((  Il2CppObject * (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m1373267866_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m4262154872_gshared (Queue_1_t861148891 * __this, NetworkEventU5BU5D_t973042505* ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_CopyTo_m4262154872(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t861148891 *, NetworkEventU5BU5D_t973042505*, int32_t, const MethodInfo*))Queue_1_CopyTo_m4262154872_gshared)(__this, ___array0, ___idx1, method)
// T System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::Dequeue()
extern "C"  NetworkEvent_t1041492056  Queue_1_Dequeue_m3060487676_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m3060487676(__this, method) ((  NetworkEvent_t1041492056  (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_Dequeue_m3060487676_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::Peek()
extern "C"  NetworkEvent_t1041492056  Queue_1_Peek_m498194561_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_Peek_m498194561(__this, method) ((  NetworkEvent_t1041492056  (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_Peek_m498194561_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m53335759_gshared (Queue_1_t861148891 * __this, NetworkEvent_t1041492056  ___item0, const MethodInfo* method);
#define Queue_1_Enqueue_m53335759(__this, ___item0, method) ((  void (*) (Queue_1_t861148891 *, NetworkEvent_t1041492056 , const MethodInfo*))Queue_1_Enqueue_m53335759_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m3062357712_gshared (Queue_1_t861148891 * __this, int32_t ___new_size0, const MethodInfo* method);
#define Queue_1_SetCapacity_m3062357712(__this, ___new_size0, method) ((  void (*) (Queue_1_t861148891 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m3062357712_gshared)(__this, ___new_size0, method)
// System.Int32 System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m1751797020_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m1751797020(__this, method) ((  int32_t (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_get_Count_m1751797020_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<Byn.Net.NetworkEvent>::GetEnumerator()
extern "C"  Enumerator_t1371211971  Queue_1_GetEnumerator_m3949496228_gshared (Queue_1_t861148891 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m3949496228(__this, method) ((  Enumerator_t1371211971  (*) (Queue_1_t861148891 *, const MethodInfo*))Queue_1_GetEnumerator_m3949496228_gshared)(__this, method)
