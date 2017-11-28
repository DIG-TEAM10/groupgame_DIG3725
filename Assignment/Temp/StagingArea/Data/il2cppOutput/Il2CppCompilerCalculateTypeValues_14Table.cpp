#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Text.RegularExpressions.Regex
struct Regex_t3999116425;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1168879718;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t408532453;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t3947659099;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1026658028;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1356857996;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3573401885;
// UnityEngine.Object
struct Object_t2439634446;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3818433020;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t2188712760;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2146345576;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t2963445537;
// System.IntPtr[]
struct IntPtrU5BU5D_t2204829127;
// System.Collections.IDictionary
struct IDictionary_t2522454278;
// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t502127873;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3339666281;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3618165052;
// UnityEngine.Events.UnityAction
struct UnityAction_t3161587896;
// System.Object[]
struct ObjectU5BU5D_t319505838;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t472105914;
// System.Char[]
struct CharU5BU5D_t2546051205;
// System.Void
struct Void_t1144638073;
// UnityEngine.GameObject
struct GameObject_t3038103809;
// UnityEngine.Camera
struct Camera_t2124427284;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1536760636;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t3431270999;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2529886343;
// System.IAsyncResult
struct IAsyncResult_t677056628;
// System.AsyncCallback
struct AsyncCallback_t1837652483;

struct Object_t2439634446_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef WEBREQUESTUTILS_T1863861604_H
#define WEBREQUESTUTILS_T1863861604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t1863861604  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t1863861604_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3999116425 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t1863861604_StaticFields, ___domainRegex_0)); }
	inline Regex_t3999116425 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3999116425 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3999116425 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T1863861604_H
#ifndef CLASSLIBRARYINITIALIZER_T1860004633_H
#define CLASSLIBRARYINITIALIZER_T1860004633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t1860004633  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T1860004633_H
#ifndef UNITYSTRING_T231609107_H
#define UNITYSTRING_T231609107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t231609107  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T231609107_H
#ifndef UNITYEVENTBASE_T2773021654_H
#define UNITYEVENTBASE_T2773021654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2773021654  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1168879718 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t408532453 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2773021654, ___m_Calls_0)); }
	inline InvokableCallList_t1168879718 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1168879718 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1168879718 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2773021654, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t408532453 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t408532453 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t408532453 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2773021654, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2773021654, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T2773021654_H
#ifndef INVOKABLECALLLIST_T1168879718_H
#define INVOKABLECALLLIST_T1168879718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t1168879718  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t3947659099 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t3947659099 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t3947659099 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t1168879718, ___m_PersistentCalls_0)); }
	inline List_1_t3947659099 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t3947659099 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t3947659099 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t1168879718, ___m_RuntimeCalls_1)); }
	inline List_1_t3947659099 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t3947659099 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t3947659099 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t1168879718, ___m_ExecutingCalls_2)); }
	inline List_1_t3947659099 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t3947659099 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t3947659099 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t1168879718, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T1168879718_H
#ifndef PERSISTENTCALLGROUP_T408532453_H
#define PERSISTENTCALLGROUP_T408532453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t408532453  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1026658028 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t408532453, ___m_Calls_0)); }
	inline List_1_t1026658028 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t1026658028 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t1026658028 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T408532453_H
#ifndef SCRIPTINGUTILS_T2303138909_H
#define SCRIPTINGUTILS_T2303138909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t2303138909  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T2303138909_H
#ifndef SENDMOUSEEVENTS_T2698009677_H
#define SENDMOUSEEVENTS_T2698009677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t2698009677  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t2698009677_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1356857996* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1356857996* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1356857996* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t3573401885* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2698009677_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2698009677_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1356857996* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1356857996** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1356857996* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2698009677_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1356857996* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1356857996** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1356857996* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2698009677_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1356857996* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1356857996** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1356857996* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t2698009677_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t3573401885* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t3573401885** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t3573401885* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T2698009677_H
#ifndef BASEINVOKABLECALL_T2103241802_H
#define BASEINVOKABLECALL_T2103241802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2103241802  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2103241802_H
#ifndef STACKTRACEUTILITY_T2133068012_H
#define STACKTRACEUTILITY_T2133068012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t2133068012  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t2133068012_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t2133068012_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T2133068012_H
#ifndef ARGUMENTCACHE_T2529886343_H
#define ARGUMENTCACHE_T2529886343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t2529886343  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t2439634446 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t2529886343, ___m_ObjectArgument_0)); }
	inline Object_t2439634446 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t2439634446 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t2439634446 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t2529886343, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t2529886343, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t2529886343, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t2529886343, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t2529886343, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T2529886343_H
#ifndef VALUETYPE_T2046940977_H
#define VALUETYPE_T2046940977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2046940977  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2046940977_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2046940977_marshaled_com
{
};
#endif // VALUETYPE_T2046940977_H
#ifndef ATTRIBUTEHELPERENGINE_T1535121914_H
#define ATTRIBUTEHELPERENGINE_T1535121914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t1535121914  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t1535121914_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3818433020* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t2188712760* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2146345576* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t1535121914_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3818433020* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3818433020** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3818433020* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t1535121914_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t2188712760* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t2188712760** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t2188712760* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t1535121914_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2146345576* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2146345576** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2146345576* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T1535121914_H
#ifndef REMOTESETTINGS_T2674538683_H
#define REMOTESETTINGS_T2674538683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t2674538683  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t2674538683_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t2963445537 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t2674538683_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t2963445537 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t2963445537 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t2963445537 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T2674538683_H
#ifndef EXCEPTION_T3430593092_H
#define EXCEPTION_T3430593092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3430593092  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2204829127* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3430593092 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2204829127* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2204829127** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2204829127* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___inner_exception_1)); }
	inline Exception_t3430593092 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3430593092 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3430593092 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3430593092, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3430593092_H
#ifndef ANALYTICS_T2210490265_H
#define ANALYTICS_T2210490265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.Analytics
struct  Analytics_t2210490265  : public RuntimeObject
{
public:

public:
};

struct Analytics_t2210490265_StaticFields
{
public:
	// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::s_UnityAnalyticsHandler
	UnityAnalyticsHandler_t502127873 * ___s_UnityAnalyticsHandler_0;

public:
	inline static int32_t get_offset_of_s_UnityAnalyticsHandler_0() { return static_cast<int32_t>(offsetof(Analytics_t2210490265_StaticFields, ___s_UnityAnalyticsHandler_0)); }
	inline UnityAnalyticsHandler_t502127873 * get_s_UnityAnalyticsHandler_0() const { return ___s_UnityAnalyticsHandler_0; }
	inline UnityAnalyticsHandler_t502127873 ** get_address_of_s_UnityAnalyticsHandler_0() { return &___s_UnityAnalyticsHandler_0; }
	inline void set_s_UnityAnalyticsHandler_0(UnityAnalyticsHandler_t502127873 * value)
	{
		___s_UnityAnalyticsHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityAnalyticsHandler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICS_T2210490265_H
#ifndef SYNCHRONIZATIONCONTEXT_T1632115138_H
#define SYNCHRONIZATIONCONTEXT_T1632115138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t1632115138  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t1632115138_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t1632115138 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t1632115138_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t1632115138 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t1632115138 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t1632115138 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T1632115138_H
#ifndef CUSTOMYIELDINSTRUCTION_T3264227747_H
#define CUSTOMYIELDINSTRUCTION_T3264227747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t3264227747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T3264227747_H
#ifndef ATTRIBUTE_T2552865906_H
#define ATTRIBUTE_T2552865906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2552865906  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2552865906_H
#ifndef SETUPCOROUTINE_T2572897859_H
#define SETUPCOROUTINE_T2572897859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t2572897859  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T2572897859_H
#ifndef UNITYEXCEPTION_T912376275_H
#define UNITYEXCEPTION_T912376275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t912376275  : public Exception_t3430593092
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t912376275, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T912376275_H
#ifndef WORKREQUEST_T2410437745_H
#define WORKREQUEST_T2410437745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t2410437745 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3339666281 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t3618165052 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t2410437745, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3339666281 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3339666281 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3339666281 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t2410437745, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t2410437745, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t3618165052 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t3618165052 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t3618165052 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t2410437745_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t3618165052 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t2410437745_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t3618165052 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T2410437745_H
#ifndef PREFERBINARYSERIALIZATION_T1608769580_H
#define PREFERBINARYSERIALIZATION_T1608769580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t1608769580  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T1608769580_H
#ifndef INVOKABLECALL_T2431383336_H
#define INVOKABLECALL_T2431383336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2431383336  : public BaseInvokableCall_t2103241802
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3161587896 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2431383336, ___Delegate_0)); }
	inline UnityAction_t3161587896 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3161587896 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3161587896 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2431383336_H
#ifndef SERIALIZEFIELD_T74155503_H
#define SERIALIZEFIELD_T74155503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t74155503  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T74155503_H
#ifndef UNITYEVENT_T575641044_H
#define UNITYEVENT_T575641044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t575641044  : public UnityEventBase_t2773021654
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t319505838* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t575641044, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t319505838* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t319505838** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t319505838* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T575641044_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T2353652923_H
#define UNITYSYNCHRONIZATIONCONTEXT_T2353652923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t2353652923  : public SynchronizationContext_t1632115138
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t472105914 * ___m_AsyncWorkQueue_1;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_2;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t2353652923, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t472105914 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t472105914 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t472105914 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t2353652923, ___m_MainThreadID_2)); }
	inline int32_t get_m_MainThreadID_2() const { return ___m_MainThreadID_2; }
	inline int32_t* get_address_of_m_MainThreadID_2() { return &___m_MainThreadID_2; }
	inline void set_m_MainThreadID_2(int32_t value)
	{
		___m_MainThreadID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T2353652923_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T2822244414_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T2822244414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t2822244414  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T2822244414_H
#ifndef VECTOR4_T2902692614_H
#define VECTOR4_T2902692614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2902692614 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2902692614, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2902692614, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2902692614, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2902692614, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2902692614_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2902692614  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2902692614  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2902692614  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2902692614  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2902692614_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2902692614  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2902692614 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2902692614  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2902692614_StaticFields, ___oneVector_6)); }
	inline Vector4_t2902692614  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2902692614 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2902692614  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2902692614_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2902692614  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2902692614 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2902692614  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2902692614_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2902692614  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2902692614 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2902692614  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2902692614_H
#ifndef VECTOR3_T545760525_H
#define VECTOR3_T545760525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t545760525 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t545760525, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t545760525, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t545760525, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t545760525_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t545760525  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t545760525  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t545760525  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t545760525  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t545760525  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t545760525  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t545760525  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t545760525  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t545760525  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t545760525  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___zeroVector_4)); }
	inline Vector3_t545760525  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t545760525 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t545760525  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___oneVector_5)); }
	inline Vector3_t545760525  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t545760525 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t545760525  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___upVector_6)); }
	inline Vector3_t545760525  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t545760525 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t545760525  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___downVector_7)); }
	inline Vector3_t545760525  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t545760525 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t545760525  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___leftVector_8)); }
	inline Vector3_t545760525  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t545760525 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t545760525  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___rightVector_9)); }
	inline Vector3_t545760525  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t545760525 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t545760525  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___forwardVector_10)); }
	inline Vector3_t545760525  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t545760525 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t545760525  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___backVector_11)); }
	inline Vector3_t545760525  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t545760525 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t545760525  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t545760525  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t545760525 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t545760525  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t545760525_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t545760525  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t545760525 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t545760525  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T545760525_H
#ifndef SINGLE_T1370515271_H
#define SINGLE_T1370515271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1370515271 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1370515271, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1370515271_H
#ifndef VOID_T1144638073_H
#define VOID_T1144638073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1144638073 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1144638073_H
#ifndef ENUM_T2055779258_H
#define ENUM_T2055779258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2055779258  : public ValueType_t2046940977
{
public:

public:
};

struct Enum_t2055779258_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2546051205* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2055779258_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2546051205* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2546051205** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2546051205* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2055779258_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2055779258_marshaled_com
{
};
#endif // ENUM_T2055779258_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T157339613_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T157339613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t157339613  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T157339613_H
#ifndef VECTOR2_T431593368_H
#define VECTOR2_T431593368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t431593368 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t431593368, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t431593368, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t431593368_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t431593368  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t431593368  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t431593368  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t431593368  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t431593368  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t431593368  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t431593368  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t431593368  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___zeroVector_2)); }
	inline Vector2_t431593368  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t431593368 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t431593368  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___oneVector_3)); }
	inline Vector2_t431593368  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t431593368 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t431593368  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___upVector_4)); }
	inline Vector2_t431593368  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t431593368 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t431593368  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___downVector_5)); }
	inline Vector2_t431593368  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t431593368 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t431593368  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___leftVector_6)); }
	inline Vector2_t431593368  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t431593368 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t431593368  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___rightVector_7)); }
	inline Vector2_t431593368  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t431593368 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t431593368  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t431593368  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t431593368 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t431593368  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t431593368_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t431593368  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t431593368 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t431593368  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T431593368_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2219104783_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2219104783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t2219104783  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2219104783_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3986908153_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3986908153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3986908153  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3986908153_H
#ifndef WRITEONLYATTRIBUTE_T237452486_H
#define WRITEONLYATTRIBUTE_T237452486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t237452486  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T237452486_H
#ifndef READWRITEATTRIBUTE_T1199089691_H
#define READWRITEATTRIBUTE_T1199089691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t1199089691  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T1199089691_H
#ifndef READONLYATTRIBUTE_T3971636174_H
#define READONLYATTRIBUTE_T3971636174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t3971636174  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T3971636174_H
#ifndef SELECTIONBASEATTRIBUTE_T1579397181_H
#define SELECTIONBASEATTRIBUTE_T1579397181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t1579397181  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T1579397181_H
#ifndef WAITFORSECONDSREALTIME_T3934390616_H
#define WAITFORSECONDSREALTIME_T3934390616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t3934390616  : public CustomYieldInstruction_t3264227747
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t3934390616, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T3934390616_H
#ifndef NATIVECONTAINERATTRIBUTE_T3474543521_H
#define NATIVECONTAINERATTRIBUTE_T3474543521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t3474543521  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T3474543521_H
#ifndef RECT_T1693933688_H
#define RECT_T1693933688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t1693933688 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t1693933688, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t1693933688, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t1693933688, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t1693933688, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T1693933688_H
#ifndef SERIALIZEPRIVATEVARIABLES_T617805375_H
#define SERIALIZEPRIVATEVARIABLES_T617805375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t617805375  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T617805375_H
#ifndef RANGEINT_T1245232506_H
#define RANGEINT_T1245232506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t1245232506 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t1245232506, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t1245232506, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T1245232506_H
#ifndef COLOR32_T443980987_H
#define COLOR32_T443980987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t443980987 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t443980987, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t443980987, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t443980987, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t443980987, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T443980987_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T2365474361_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T2365474361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t2365474361  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T2365474361_H
#ifndef WRITABLEATTRIBUTE_T938287690_H
#define WRITABLEATTRIBUTE_T938287690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t938287690  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T938287690_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T2808025846_H
#define ASSEMBLYISEDITORASSEMBLY_T2808025846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t2808025846  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T2808025846_H
#ifndef NATIVECLASSATTRIBUTE_T1961786155_H
#define NATIVECLASSATTRIBUTE_T1961786155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t1961786155  : public Attribute_t2552865906
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t1961786155, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T1961786155_H
#ifndef IL2CPPSTRUCTALIGNMENTATTRIBUTE_T348025509_H
#define IL2CPPSTRUCTALIGNMENTATTRIBUTE_T348025509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IL2CPPStructAlignmentAttribute
struct  IL2CPPStructAlignmentAttribute_t348025509  : public Attribute_t2552865906
{
public:
	// System.Int32 UnityEngine.IL2CPPStructAlignmentAttribute::Align
	int32_t ___Align_0;

public:
	inline static int32_t get_offset_of_Align_0() { return static_cast<int32_t>(offsetof(IL2CPPStructAlignmentAttribute_t348025509, ___Align_0)); }
	inline int32_t get_Align_0() const { return ___Align_0; }
	inline int32_t* get_address_of_Align_0() { return &___Align_0; }
	inline void set_Align_0(int32_t value)
	{
		___Align_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPSTRUCTALIGNMENTATTRIBUTE_T348025509_H
#ifndef COLOR_T1950470962_H
#define COLOR_T1950470962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t1950470962 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t1950470962, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t1950470962, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t1950470962, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t1950470962, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T1950470962_H
#ifndef HITINFO_T3505600017_H
#define HITINFO_T3505600017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3505600017 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3038103809 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t2124427284 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3505600017, ___target_0)); }
	inline GameObject_t3038103809 * get_target_0() const { return ___target_0; }
	inline GameObject_t3038103809 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3038103809 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3505600017, ___camera_1)); }
	inline Camera_t2124427284 * get_camera_1() const { return ___camera_1; }
	inline Camera_t2124427284 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t2124427284 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3505600017_marshaled_pinvoke
{
	GameObject_t3038103809 * ___target_0;
	Camera_t2124427284 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3505600017_marshaled_com
{
	GameObject_t3038103809 * ___target_0;
	Camera_t2124427284 * ___camera_1;
};
#endif // HITINFO_T3505600017_H
#ifndef EXECUTEINEDITMODE_T928399829_H
#define EXECUTEINEDITMODE_T928399829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t928399829  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T928399829_H
#ifndef DEFAULTEXECUTIONORDER_T2030433639_H
#define DEFAULTEXECUTIONORDER_T2030433639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t2030433639  : public Attribute_t2552865906
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t2030433639, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T2030433639_H
#ifndef CONTEXTMENU_T630988256_H
#define CONTEXTMENU_T630988256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t630988256  : public Attribute_t2552865906
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t630988256, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t630988256, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t630988256, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T630988256_H
#ifndef ADDCOMPONENTMENU_T1291730222_H
#define ADDCOMPONENTMENU_T1291730222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t1291730222  : public Attribute_t2552865906
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t1291730222, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t1291730222, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T1291730222_H
#ifndef REQUIRECOMPONENT_T729138789_H
#define REQUIRECOMPONENT_T729138789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t729138789  : public Attribute_t2552865906
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t729138789, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t729138789, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t729138789, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T729138789_H
#ifndef DISALLOWMULTIPLECOMPONENT_T2571923297_H
#define DISALLOWMULTIPLECOMPONENT_T2571923297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t2571923297  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T2571923297_H
#ifndef PROPERTYATTRIBUTE_T2801794808_H
#define PROPERTYATTRIBUTE_T2801794808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t2801794808  : public Attribute_t2552865906
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T2801794808_H
#ifndef FLAGS_T3568345894_H
#define FLAGS_T3568345894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t3568345894 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t3568345894, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T3568345894_H
#ifndef UNITYANALYTICSHANDLER_T502127873_H
#define UNITYANALYTICSHANDLER_T502127873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.UnityAnalyticsHandler
struct  UnityAnalyticsHandler_t502127873  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityAnalyticsHandler_t502127873, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t502127873_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t502127873_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UNITYANALYTICSHANDLER_T502127873_H
#ifndef ANALYTICSRESULT_T1951258415_H
#define ANALYTICSRESULT_T1951258415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsResult
struct  AnalyticsResult_t1951258415 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnalyticsResult_t1951258415, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSRESULT_T1951258415_H
#ifndef CUSTOMEVENTDATA_T1345718448_H
#define CUSTOMEVENTDATA_T1345718448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.CustomEventData
struct  CustomEventData_t1345718448  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.CustomEventData::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CustomEventData_t1345718448, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t1345718448_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t1345718448_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CUSTOMEVENTDATA_T1345718448_H
#ifndef SENDMESSAGEOPTIONS_T2937535544_H
#define SENDMESSAGEOPTIONS_T2937535544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t2937535544 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t2937535544, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T2937535544_H
#ifndef SPACE_T2509004151_H
#define SPACE_T2509004151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t2509004151 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t2509004151, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T2509004151_H
#ifndef RUNTIMEPLATFORM_T924666855_H
#define RUNTIMEPLATFORM_T924666855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t924666855 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t924666855, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T924666855_H
#ifndef DATASTREAMTYPE_T2408183615_H
#define DATASTREAMTYPE_T2408183615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t2408183615 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t2408183615, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T2408183615_H
#ifndef RAY_T4066212976_H
#define RAY_T4066212976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t4066212976 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t545760525  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t545760525  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t4066212976, ___m_Origin_0)); }
	inline Vector3_t545760525  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t545760525 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t545760525  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t4066212976, ___m_Direction_1)); }
	inline Vector3_t545760525  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t545760525 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t545760525  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T4066212976_H
#ifndef OPERATINGSYSTEMFAMILY_T1191267452_H
#define OPERATINGSYSTEMFAMILY_T1191267452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t1191267452 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t1191267452, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEMFAMILY_T1191267452_H
#ifndef CAMERACLEARFLAGS_T1220925508_H
#define CAMERACLEARFLAGS_T1220925508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t1220925508 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t1220925508, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T1220925508_H
#ifndef OBJECT_T2439634446_H
#define OBJECT_T2439634446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2439634446  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2439634446, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2439634446_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2439634446_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2439634446_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2439634446_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2439634446_H
#ifndef TEXTAREAATTRIBUTE_T1141730719_H
#define TEXTAREAATTRIBUTE_T1141730719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t1141730719  : public PropertyAttribute_t2801794808
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t1141730719, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t1141730719, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T1141730719_H
#ifndef RANGEATTRIBUTE_T3594437404_H
#define RANGEATTRIBUTE_T3594437404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t3594437404  : public PropertyAttribute_t2801794808
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t3594437404, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t3594437404, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T3594437404_H
#ifndef SPACEATTRIBUTE_T4200160510_H
#define SPACEATTRIBUTE_T4200160510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t4200160510  : public PropertyAttribute_t2801794808
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t4200160510, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T4200160510_H
#ifndef TOOLTIPATTRIBUTE_T2447281258_H
#define TOOLTIPATTRIBUTE_T2447281258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t2447281258  : public PropertyAttribute_t2801794808
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t2447281258, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T2447281258_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T4117773491_H
#define TOUCHSCREENKEYBOARDTYPE_T4117773491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t4117773491 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t4117773491, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T4117773491_H
#ifndef TRACKEDREFERENCE_T520503344_H
#define TRACKEDREFERENCE_T520503344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t520503344  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t520503344, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t520503344_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t520503344_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T520503344_H
#ifndef PERSISTENTLISTENERMODE_T3892241434_H
#define PERSISTENTLISTENERMODE_T3892241434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t3892241434 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t3892241434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T3892241434_H
#ifndef LOGTYPE_T3799916938_H
#define LOGTYPE_T3799916938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3799916938 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t3799916938, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T3799916938_H
#ifndef UNITYEVENTCALLSTATE_T1036965644_H
#define UNITYEVENTCALLSTATE_T1036965644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t1036965644 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t1036965644, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T1036965644_H
#ifndef PLANE_T3459274180_H
#define PLANE_T3459274180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t3459274180 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t545760525  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t3459274180, ___m_Normal_0)); }
	inline Vector3_t545760525  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t545760525 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t545760525  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t3459274180, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T3459274180_H
#ifndef MATHFINTERNAL_T1905648299_H
#define MATHFINTERNAL_T1905648299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t1905648299 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t1905648299__padding[1];
	};

public:
};

struct MathfInternal_t1905648299_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t1905648299_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t1905648299_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t1905648299_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T1905648299_H
#ifndef KEYCODE_T1747664498_H
#define KEYCODE_T1747664498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t1747664498 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t1747664498, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T1747664498_H
#ifndef STENCILOP_T524876795_H
#define STENCILOP_T524876795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t524876795 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t524876795, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T524876795_H
#ifndef COLORWRITEMASK_T754701945_H
#define COLORWRITEMASK_T754701945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t754701945 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t754701945, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T754701945_H
#ifndef COMPAREFUNCTION_T3620127162_H
#define COMPAREFUNCTION_T3620127162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t3620127162 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t3620127162, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREFUNCTION_T3620127162_H
#ifndef TEXTUREWRAPMODE_T1959762063_H
#define TEXTUREWRAPMODE_T1959762063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t1959762063 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t1959762063, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T1959762063_H
#ifndef DELEGATE_T2334730988_H
#define DELEGATE_T2334730988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2334730988  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1536760636 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2334730988, ___data_8)); }
	inline DelegateData_t1536760636 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1536760636 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1536760636 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2334730988_H
#ifndef PLAYABLEBINDING_T2182504418_H
#define PLAYABLEBINDING_T2182504418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t2182504418 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t2439634446 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2182504418__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t2182504418, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t2182504418, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t2182504418, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t2439634446 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t2439634446 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t2439634446 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t2182504418, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t2182504418_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t3431270999* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t2182504418_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t3431270999* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t3431270999** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t3431270999* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t2182504418_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2182504418_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t2439634446_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2182504418__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2182504418_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t2439634446_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2182504418__padding[1];
	};
};
#endif // PLAYABLEBINDING_T2182504418_H
#ifndef MULTICASTDELEGATE_T787345071_H
#define MULTICASTDELEGATE_T787345071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t787345071  : public Delegate_t2334730988
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t787345071 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t787345071 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t787345071, ___prev_9)); }
	inline MulticastDelegate_t787345071 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t787345071 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t787345071 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t787345071, ___kpm_next_10)); }
	inline MulticastDelegate_t787345071 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t787345071 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t787345071 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T787345071_H
#ifndef FRAMEDATA_T3477830480_H
#define FRAMEDATA_T3477830480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t3477830480 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t3477830480, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t3477830480, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t3477830480, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t3477830480, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t3477830480, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t3477830480, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T3477830480_H
#ifndef PERSISTENTCALL_T3477208027_H
#define PERSISTENTCALL_T3477208027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3477208027  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t2439634446 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t2529886343 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3477208027, ___m_Target_0)); }
	inline Object_t2439634446 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t2439634446 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t2439634446 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3477208027, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3477208027, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3477208027, ___m_Arguments_3)); }
	inline ArgumentCache_t2529886343 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t2529886343 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t2529886343 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3477208027, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3477208027_H
#ifndef UPDATEDEVENTHANDLER_T2963445537_H
#define UPDATEDEVENTHANDLER_T2963445537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t2963445537  : public MulticastDelegate_t787345071
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T2963445537_H
#ifndef UNITYACTION_T3161587896_H
#define UNITYACTION_T3161587896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3161587896  : public MulticastDelegate_t787345071
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3161587896_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (WebRequestUtils_t1863861604), -1, sizeof(WebRequestUtils_t1863861604_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1400[1] = 
{
	WebRequestUtils_t1863861604_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (CustomEventData_t1345718448), sizeof(CustomEventData_t1345718448_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1401[1] = 
{
	CustomEventData_t1345718448::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (AnalyticsResult_t1951258415)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1402[9] = 
{
	AnalyticsResult_t1951258415::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (Analytics_t2210490265), -1, sizeof(Analytics_t2210490265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1403[1] = 
{
	Analytics_t2210490265_StaticFields::get_offset_of_s_UnityAnalyticsHandler_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (UnityAnalyticsHandler_t502127873), sizeof(UnityAnalyticsHandler_t502127873_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1404[1] = 
{
	UnityAnalyticsHandler_t502127873::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (RemoteSettings_t2674538683), -1, sizeof(RemoteSettings_t2674538683_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1405[1] = 
{
	RemoteSettings_t2674538683_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (UpdatedEventHandler_t2963445537), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (AttributeHelperEngine_t1535121914), -1, sizeof(AttributeHelperEngine_t1535121914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1407[3] = 
{
	AttributeHelperEngine_t1535121914_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t1535121914_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t1535121914_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (DisallowMultipleComponent_t2571923297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (RequireComponent_t729138789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1409[3] = 
{
	RequireComponent_t729138789::get_offset_of_m_Type0_0(),
	RequireComponent_t729138789::get_offset_of_m_Type1_1(),
	RequireComponent_t729138789::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (AddComponentMenu_t1291730222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[2] = 
{
	AddComponentMenu_t1291730222::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t1291730222::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (ContextMenu_t630988256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[3] = 
{
	ContextMenu_t630988256::get_offset_of_menuItem_0(),
	ContextMenu_t630988256::get_offset_of_validate_1(),
	ContextMenu_t630988256::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (ExecuteInEditMode_t928399829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (DefaultExecutionOrder_t2030433639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1413[1] = 
{
	DefaultExecutionOrder_t2030433639::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (IL2CPPStructAlignmentAttribute_t348025509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[1] = 
{
	IL2CPPStructAlignmentAttribute_t348025509::get_offset_of_Align_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (NativeClassAttribute_t1961786155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1415[1] = 
{
	NativeClassAttribute_t1961786155::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (AssemblyIsEditorAssembly_t2808025846), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (WritableAttribute_t938287690), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t2365474361), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (SendMessageOptions_t2937535544)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1419[3] = 
{
	SendMessageOptions_t2937535544::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (Space_t2509004151)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1420[3] = 
{
	Space_t2509004151::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (RuntimePlatform_t924666855)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1421[34] = 
{
	RuntimePlatform_t924666855::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (OperatingSystemFamily_t1191267452)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1422[5] = 
{
	OperatingSystemFamily_t1191267452::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (LogType_t3799916938)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1423[6] = 
{
	LogType_t3799916938::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (ClassLibraryInitializer_t1860004633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (Color_t1950470962)+ sizeof (RuntimeObject), sizeof(Color_t1950470962 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1425[4] = 
{
	Color_t1950470962::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t1950470962::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t1950470962::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t1950470962::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (Color32_t443980987)+ sizeof (RuntimeObject), sizeof(Color32_t443980987 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1426[4] = 
{
	Color32_t443980987::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t443980987::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t443980987::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t443980987::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (SetupCoroutine_t2572897859), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (CameraClearFlags_t1220925508)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1428[6] = 
{
	CameraClearFlags_t1220925508::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (TextureWrapMode_t1959762063)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1429[5] = 
{
	TextureWrapMode_t1959762063::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (CompareFunction_t3620127162)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1430[10] = 
{
	CompareFunction_t3620127162::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (ColorWriteMask_t754701945)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1431[6] = 
{
	ColorWriteMask_t754701945::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (StencilOp_t524876795)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1432[9] = 
{
	StencilOp_t524876795::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (KeyCode_t1747664498)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1433[322] = 
{
	KeyCode_t1747664498::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (MathfInternal_t1905648299)+ sizeof (RuntimeObject), sizeof(MathfInternal_t1905648299 ), sizeof(MathfInternal_t1905648299_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1434[3] = 
{
	MathfInternal_t1905648299_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t1905648299_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t1905648299_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (ScriptingUtils_t2303138909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (SendMouseEvents_t2698009677), -1, sizeof(SendMouseEvents_t2698009677_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1436[5] = 
{
	SendMouseEvents_t2698009677_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t2698009677_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t2698009677_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t2698009677_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t2698009677_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (HitInfo_t3505600017)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[2] = 
{
	HitInfo_t3505600017::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t3505600017::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (Plane_t3459274180)+ sizeof (RuntimeObject), sizeof(Plane_t3459274180 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1438[2] = 
{
	Plane_t3459274180::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t3459274180::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (PropertyAttribute_t2801794808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (TooltipAttribute_t2447281258), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1440[1] = 
{
	TooltipAttribute_t2447281258::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (SpaceAttribute_t4200160510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1441[1] = 
{
	SpaceAttribute_t4200160510::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (RangeAttribute_t3594437404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1442[2] = 
{
	RangeAttribute_t3594437404::get_offset_of_min_0(),
	RangeAttribute_t3594437404::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (TextAreaAttribute_t1141730719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1443[2] = 
{
	TextAreaAttribute_t1141730719::get_offset_of_minLines_0(),
	TextAreaAttribute_t1141730719::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (RangeInt_t1245232506)+ sizeof (RuntimeObject), sizeof(RangeInt_t1245232506 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[2] = 
{
	RangeInt_t1245232506::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t1245232506::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (Ray_t4066212976)+ sizeof (RuntimeObject), sizeof(Ray_t4066212976 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1445[2] = 
{
	Ray_t4066212976::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t4066212976::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (Rect_t1693933688)+ sizeof (RuntimeObject), sizeof(Rect_t1693933688 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1446[4] = 
{
	Rect_t1693933688::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1693933688::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1693933688::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t1693933688::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (SelectionBaseAttribute_t1579397181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (SerializePrivateVariables_t617805375), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (SerializeField_t74155503), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (PreferBinarySerialization_t1608769580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (StackTraceUtility_t2133068012), -1, sizeof(StackTraceUtility_t2133068012_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1452[1] = 
{
	StackTraceUtility_t2133068012_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (UnityException_t912376275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[2] = 
{
	0,
	UnityException_t912376275::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (TouchScreenKeyboardType_t4117773491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[12] = 
{
	TouchScreenKeyboardType_t4117773491::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (TrackedReference_t520503344), sizeof(TrackedReference_t520503344_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1455[1] = 
{
	TrackedReference_t520503344::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (PersistentListenerMode_t3892241434)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[8] = 
{
	PersistentListenerMode_t3892241434::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (ArgumentCache_t2529886343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[6] = 
{
	ArgumentCache_t2529886343::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t2529886343::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t2529886343::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t2529886343::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t2529886343::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t2529886343::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (BaseInvokableCall_t2103241802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (InvokableCall_t2431383336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1459[1] = 
{
	InvokableCall_t2431383336::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1460[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1461[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (UnityEventCallState_t1036965644)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1465[4] = 
{
	UnityEventCallState_t1036965644::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (PersistentCall_t3477208027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[5] = 
{
	PersistentCall_t3477208027::get_offset_of_m_Target_0(),
	PersistentCall_t3477208027::get_offset_of_m_MethodName_1(),
	PersistentCall_t3477208027::get_offset_of_m_Mode_2(),
	PersistentCall_t3477208027::get_offset_of_m_Arguments_3(),
	PersistentCall_t3477208027::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (PersistentCallGroup_t408532453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[1] = 
{
	PersistentCallGroup_t408532453::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (InvokableCallList_t1168879718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[4] = 
{
	InvokableCallList_t1168879718::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t1168879718::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t1168879718::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t1168879718::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (UnityEventBase_t2773021654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[4] = 
{
	UnityEventBase_t2773021654::get_offset_of_m_Calls_0(),
	UnityEventBase_t2773021654::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t2773021654::get_offset_of_m_TypeName_2(),
	UnityEventBase_t2773021654::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (UnityAction_t3161587896), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (UnityEvent_t575641044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[1] = 
{
	UnityEvent_t575641044::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1473[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1475[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1477[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1479[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (UnityString_t231609107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (UnitySynchronizationContext_t2353652923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1481[2] = 
{
	UnitySynchronizationContext_t2353652923::get_offset_of_m_AsyncWorkQueue_1(),
	UnitySynchronizationContext_t2353652923::get_offset_of_m_MainThreadID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (WorkRequest_t2410437745)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[3] = 
{
	WorkRequest_t2410437745::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t2410437745::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t2410437745::get_offset_of_m_WaitHandle_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (Vector2_t431593368)+ sizeof (RuntimeObject), sizeof(Vector2_t431593368 ), sizeof(Vector2_t431593368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1483[11] = 
{
	Vector2_t431593368::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t431593368::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t431593368_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t431593368_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t431593368_StaticFields::get_offset_of_upVector_4(),
	Vector2_t431593368_StaticFields::get_offset_of_downVector_5(),
	Vector2_t431593368_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t431593368_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t431593368_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t431593368_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (Vector4_t2902692614)+ sizeof (RuntimeObject), sizeof(Vector4_t2902692614 ), sizeof(Vector4_t2902692614_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1484[9] = 
{
	0,
	Vector4_t2902692614::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t2902692614::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t2902692614::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t2902692614::get_offset_of_w_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t2902692614_StaticFields::get_offset_of_zeroVector_5(),
	Vector4_t2902692614_StaticFields::get_offset_of_oneVector_6(),
	Vector4_t2902692614_StaticFields::get_offset_of_positiveInfinityVector_7(),
	Vector4_t2902692614_StaticFields::get_offset_of_negativeInfinityVector_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (WaitForSecondsRealtime_t3934390616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[1] = 
{
	WaitForSecondsRealtime_t3934390616::get_offset_of_waitTime_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (ThreadAndSerializationSafeAttribute_t2822244414), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (ReadOnlyAttribute_t3971636174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (ReadWriteAttribute_t1199089691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (WriteOnlyAttribute_t237452486), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (DeallocateOnJobCompletionAttribute_t3986908153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (NativeContainerAttribute_t3474543521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t2219104783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t157339613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (FrameData_t3477830480)+ sizeof (RuntimeObject), sizeof(FrameData_t3477830480 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1494[6] = 
{
	FrameData_t3477830480::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3477830480::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3477830480::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3477830480::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3477830480::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3477830480::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (Flags_t3568345894)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1495[5] = 
{
	Flags_t3568345894::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (PlayableBinding_t2182504418)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t2182504418_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1499[6] = 
{
	PlayableBinding_t2182504418_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t2182504418_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t2182504418::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2182504418::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2182504418::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2182504418::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
