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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Byn.Common.SLog::LW(System.Object,System.String[])
extern "C"  void SLog_LW_m1826957863 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg0, StringU5BU5D_t1642385972* ___tags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Byn.Common.SLog::MergeTags(System.String[],System.String[])
extern "C"  StringU5BU5D_t1642385972* SLog_MergeTags_m1360344408 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___tags0, StringU5BU5D_t1642385972* ___newTags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Common.SLog::LogArray(System.Object,System.String[])
extern "C"  void SLog_LogArray_m378223481 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, StringU5BU5D_t1642385972* ___tags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Common.SLog::.cctor()
extern "C"  void SLog__cctor_m1416630789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
