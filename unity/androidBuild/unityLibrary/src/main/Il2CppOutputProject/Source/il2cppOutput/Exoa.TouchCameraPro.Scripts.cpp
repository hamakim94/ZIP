#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>>
struct Action_1_tFBB6A5F3047BBDC10892F8A76DA0278E5C757F3B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Exoa.Touch.TouchFinger>
struct Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451;
// System.Action`1<Exoa.Common.TouchSelectable>
struct Action_1_t5707B4C42B9ECDF531FD923D30CFC3BECF7DC657;
// System.Action`2<Exoa.Common.TouchSelect,Exoa.Common.TouchSelectable>
struct Action_2_tC0DB9EE30EB253A31F6930D67F44D9951CD50B5E;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.HashSet`1<Exoa.Touch.TouchFinger>
struct HashSet_1_t914AC507BF31A93BB101DCB4B68F328BB748A018;
// System.Collections.Generic.LinkedListNode`1<Exoa.Common.TouchSelectable>
struct LinkedListNode_1_tC744AAB096FAA661A440667EE04458AB4AC1D94C;
// System.Collections.Generic.LinkedList`1<Exoa.Common.TouchSelectable>
struct LinkedList_1_tFC6B3D337ABAB792D64E3235F07F050C0E9BBF9E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Exoa.Touch.InputTouch>
struct List_1_t68E73CC7E253385EB0718FEA9379587C96F16888;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>
struct List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E;
// System.Collections.Generic.List`1<Exoa.Common.TouchSelectable>
struct List_1_t829CF1EA4B5A052C398E8718E000F70C27348433;
// System.Collections.Generic.List`1<Exoa.Touch.TouchSnapshot>
struct List_1_t16BADE307AC355B9C9BAC0044BFD5D30AB0C2207;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Exoa.Touch.TouchFinger[]
struct TouchFingerU5BU5D_t2B88EB6F776F3500D528A67697FADFFCCEEFF4C5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Exoa.Cameras.CameraBase
struct CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B;
// Exoa.Cameras.CameraBoundaries
struct CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0;
// Exoa.Events.CameraEvents
struct CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B;
// Exoa.Cameras.CameraInputs
struct CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9;
// Exoa.Cameras.CameraModeSwitcher
struct CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC;
// Exoa.Cameras.CameraOrthoBase
struct CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1;
// Exoa.Cameras.CameraPerspBase
struct CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470;
// Exoa.Cameras.CameraPerspective
struct CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A;
// Exoa.Cameras.CameraTopDownOrtho
struct CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// Exoa.Touch.FingerFilter
struct FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Exoa.Cameras.ITouchCamera
struct ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3;
// Exoa.Touch.InputTouch
struct InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Exoa.Maths.Springs
struct Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D;
// System.String
struct String_t;
// Exoa.Touch.TouchFinger
struct TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD;
// Exoa.Common.TouchSelectable
struct TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Exoa.Events.CameraEvents/OnCameraBoolEvent
struct OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12;
// Exoa.Events.CameraEvents/OnCameraEventHandler
struct OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597;
// Exoa.Events.CameraEvents/OnCameraGameObjectEvent
struct OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1;
// Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler
struct OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B;
// Exoa.Events.CameraEvents/OnRequestObjectFocusHandler
struct OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6;
// Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler
struct OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD;
// Exoa.Common.TouchSelectable/LeanSelectEvent
struct LeanSelectEvent_t4B8F91DBC947E4F4676645A4E4792A44BEFB3EFB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral251A33F7BAB93B40FB03CD75542109636073F109;
IL2CPP_EXTERN_C String_t* _stringLiteral28CCDC03816ECD282BA67E48C9F41A7BF632A756;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA5DCC322D2959462ED137CC52CE609242F2813;
IL2CPP_EXTERN_C String_t* _stringLiteral45E854805B28525568F72F2C07FB1019EC3EA6A4;
IL2CPP_EXTERN_C String_t* _stringLiteral46924EB00FB8602D2670F2ADAC2C6152B1BE4D00;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAEBAB947C52132042D9176D52D7B788A38728F;
IL2CPP_EXTERN_C String_t* _stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E;
IL2CPP_EXTERN_C String_t* _stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510;
IL2CPP_EXTERN_C String_t* _stringLiteral69BFC3090694E99CFB0F566221D27FE9E9AD7305;
IL2CPP_EXTERN_C String_t* _stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6;
IL2CPP_EXTERN_C String_t* _stringLiteral735AFBAF2F2CF6F78B6FB5AEA6E6B07ED6FC8ECA;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB57F5A43E7D08798C2223D9133DB980878BDCA;
IL2CPP_EXTERN_C String_t* _stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F;
IL2CPP_EXTERN_C String_t* _stringLiteral8D51B11A9E2DD5B7E774B2F0A51E07FCD5E29074;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9E85C6520DF26B0342FE1C8F2F729883F829BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98;
IL2CPP_EXTERN_C String_t* _stringLiteralA264BCE5E0D58B907C3573864B54DB106805D73D;
IL2CPP_EXTERN_C String_t* _stringLiteralBA24F9298CC81F567FB608451C49D2C72830F052;
IL2CPP_EXTERN_C String_t* _stringLiteralBABC994BC38117BAF48D4B32D062E27706A948BB;
IL2CPP_EXTERN_C String_t* _stringLiteralBE61DE2ACB4633F8C4FF9D273BFC11CCE5E142AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E92E1BA9EE725809C513C0DA39C19421BD34ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC50251608039D412EBFE94501CB8A328ACE982F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC7590EEDC8C724060AFB521AAF067F263A3A8383;
IL2CPP_EXTERN_C String_t* _stringLiteralCF63C4C37D0451CFA4D55A009F53652D5669D045;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraBase_ResetCamera_mFAE2BBF5E0B1CB07C9AFC494F65A72F8843C92A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraBase_SetResetValues_m55AC07FAB2B93D36E1CFD641633BF981293CCA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraOrthoBase_OnFocusCompleted_m7790B5F41649864F15FDF43E06DE64216739D211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraPerspBase_OnFocusCompleted_mAEF874D836F854BB0CB5008C3AD160323EC67CCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9ED03B94ADDA83CE3A7CC058C46E66D5A54D2109 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>
struct List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TouchFingerU5BU5D_t2B88EB6F776F3500D528A67697FADFFCCEEFF4C5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TouchFingerU5BU5D_t2B88EB6F776F3500D528A67697FADFFCCEEFF4C5* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Exoa.Events.CameraEvents
struct CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B  : public RuntimeObject
{
};

struct CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields
{
	// Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler Exoa.Events.CameraEvents::OnBeforeSwitchPerspective
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* ___OnBeforeSwitchPerspective_0;
	// Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler Exoa.Events.CameraEvents::OnAfterSwitchPerspective
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* ___OnAfterSwitchPerspective_1;
	// Exoa.Events.CameraEvents/OnCameraBoolEvent Exoa.Events.CameraEvents::OnRequestButtonAction
	OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* ___OnRequestButtonAction_2;
	// Exoa.Events.CameraEvents/OnRequestObjectFocusHandler Exoa.Events.CameraEvents::OnRequestObjectFocus
	OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* ___OnRequestObjectFocus_3;
	// Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler Exoa.Events.CameraEvents::OnRequestGroundHeightChange
	OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* ___OnRequestGroundHeightChange_4;
	// Exoa.Events.CameraEvents/OnCameraEventHandler Exoa.Events.CameraEvents::OnFocusStart
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* ___OnFocusStart_5;
	// Exoa.Events.CameraEvents/OnCameraEventHandler Exoa.Events.CameraEvents::OnFocusComplete
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* ___OnFocusComplete_6;
	// Exoa.Events.CameraEvents/OnCameraEventHandler Exoa.Events.CameraEvents::OnRequestStopFocus
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* ___OnRequestStopFocus_7;
};

// Exoa.Touch.FingerFilter
struct FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16  : public RuntimeObject
{
	// Exoa.Touch.FingerFilter/FilterType Exoa.Touch.FingerFilter::Filter
	int32_t ___Filter_0;
	// System.Boolean Exoa.Touch.FingerFilter::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_1;
	// System.Int32 Exoa.Touch.FingerFilter::RequiredFingerCount
	int32_t ___RequiredFingerCount_2;
	// System.Int32 Exoa.Touch.FingerFilter::RequiredMouseButtons
	int32_t ___RequiredMouseButtons_3;
	// Exoa.Common.TouchSelectable Exoa.Touch.FingerFilter::RequiredSelectable
	TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41* ___RequiredSelectable_4;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.FingerFilter::fingers
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers_5;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.FingerFilter::filteredFingers
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___filteredFingers_6;
};

// Exoa.Maths.Springs
struct Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D  : public RuntimeObject
{
	// System.Single Exoa.Maths.Springs::halfLife
	float ___halfLife_0;
	// System.Single Exoa.Maths.Springs::distanceFromTargetToComplete
	float ___distanceFromTargetToComplete_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Exoa.Maths.FloatSpring
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 
{
	// System.Single Exoa.Maths.FloatSpring::Value
	float ___Value_1;
	// System.Single Exoa.Maths.FloatSpring::Velocity
	float ___Velocity_2;
	// System.Boolean Exoa.Maths.FloatSpring::completed
	bool ___completed_3;
};

struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_StaticFields
{
	// System.Int32 Exoa.Maths.FloatSpring::Stride
	int32_t ___Stride_0;
};
// Native definition for P/Invoke marshalling of Exoa.Maths.FloatSpring
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_marshaled_pinvoke
{
	float ___Value_1;
	float ___Velocity_2;
	int32_t ___completed_3;
};
// Native definition for COM marshalling of Exoa.Maths.FloatSpring
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_marshaled_com
{
	float ___Value_1;
	float ___Velocity_2;
	int32_t ___completed_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};

struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Exoa.Maths.QuaternionSpring
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B 
{
	// UnityEngine.Vector4 Exoa.Maths.QuaternionSpring::ValueVec
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ValueVec_1;
	// UnityEngine.Vector4 Exoa.Maths.QuaternionSpring::VelocityVec
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VelocityVec_2;
	// System.Boolean Exoa.Maths.QuaternionSpring::completed
	bool ___completed_3;
};

struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_StaticFields
{
	// System.Int32 Exoa.Maths.QuaternionSpring::Stride
	int32_t ___Stride_0;
};
// Native definition for P/Invoke marshalling of Exoa.Maths.QuaternionSpring
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_marshaled_pinvoke
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ValueVec_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VelocityVec_2;
	int32_t ___completed_3;
};
// Native definition for COM marshalling of Exoa.Maths.QuaternionSpring
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_marshaled_com
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ValueVec_1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VelocityVec_2;
	int32_t ___completed_3;
};

// Exoa.Touch.TouchFinger
struct TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD  : public RuntimeObject
{
	// System.Int32 Exoa.Touch.TouchFinger::Index
	int32_t ___Index_0;
	// System.Single Exoa.Touch.TouchFinger::Age
	float ___Age_1;
	// System.Boolean Exoa.Touch.TouchFinger::Set
	bool ___Set_2;
	// System.Boolean Exoa.Touch.TouchFinger::LastSet
	bool ___LastSet_3;
	// System.Boolean Exoa.Touch.TouchFinger::Tap
	bool ___Tap_4;
	// System.Int32 Exoa.Touch.TouchFinger::TapCount
	int32_t ___TapCount_5;
	// System.Boolean Exoa.Touch.TouchFinger::Swipe
	bool ___Swipe_6;
	// System.Boolean Exoa.Touch.TouchFinger::Old
	bool ___Old_7;
	// System.Boolean Exoa.Touch.TouchFinger::Expired
	bool ___Expired_8;
	// System.Single Exoa.Touch.TouchFinger::LastPressure
	float ___LastPressure_9;
	// System.Single Exoa.Touch.TouchFinger::Pressure
	float ___Pressure_10;
	// UnityEngine.Vector2 Exoa.Touch.TouchFinger::StartScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___StartScreenPosition_11;
	// UnityEngine.Vector2 Exoa.Touch.TouchFinger::LastScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LastScreenPosition_12;
	// UnityEngine.Vector2 Exoa.Touch.TouchFinger::ScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPosition_13;
	// System.Boolean Exoa.Touch.TouchFinger::StartedOverGui
	bool ___StartedOverGui_14;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchSnapshot> Exoa.Touch.TouchFinger::Snapshots
	List_1_t16BADE307AC355B9C9BAC0044BFD5D30AB0C2207* ___Snapshots_15;
};

// Exoa.Maths.Vector3Spring
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767 
{
	// UnityEngine.Vector3 Exoa.Maths.Vector3Spring::Value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value_1;
	// System.Single Exoa.Maths.Vector3Spring::m_padding0
	float ___m_padding0_2;
	// UnityEngine.Vector3 Exoa.Maths.Vector3Spring::Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity_3;
	// System.Single Exoa.Maths.Vector3Spring::m_padding1
	float ___m_padding1_4;
	// System.Boolean Exoa.Maths.Vector3Spring::completed
	bool ___completed_5;
};

struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_StaticFields
{
	// System.Int32 Exoa.Maths.Vector3Spring::Stride
	int32_t ___Stride_0;
};
// Native definition for P/Invoke marshalling of Exoa.Maths.Vector3Spring
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value_1;
	float ___m_padding0_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity_3;
	float ___m_padding1_4;
	int32_t ___completed_5;
};
// Native definition for COM marshalling of Exoa.Maths.Vector3Spring
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value_1;
	float ___m_padding0_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity_3;
	float ___m_padding1_4;
	int32_t ___completed_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Exoa.Touch.ScreenDepth
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 
{
	// Exoa.Touch.ScreenDepth/ConversionType Exoa.Touch.ScreenDepth::Conversion
	int32_t ___Conversion_0;
	// UnityEngine.Camera Exoa.Touch.ScreenDepth::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_1;
	// UnityEngine.Object Exoa.Touch.ScreenDepth::Object
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Object_2;
	// UnityEngine.LayerMask Exoa.Touch.ScreenDepth::Layers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___Layers_3;
	// System.Single Exoa.Touch.ScreenDepth::Distance
	float ___Distance_4;
};

struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_StaticFields
{
	// UnityEngine.Vector3 Exoa.Touch.ScreenDepth::LastWorldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LastWorldNormal_5;
	// UnityEngine.RaycastHit[] Exoa.Touch.ScreenDepth::hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___hits_6;
};
// Native definition for P/Invoke marshalling of Exoa.Touch.ScreenDepth
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_marshaled_pinvoke
{
	int32_t ___Conversion_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_1;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Object_2;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___Layers_3;
	float ___Distance_4;
};
// Native definition for COM marshalling of Exoa.Touch.ScreenDepth
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_marshaled_com
{
	int32_t ___Conversion_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_1;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Object_2;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___Layers_3;
	float ___Distance_4;
};

// System.Action`1<Exoa.Touch.TouchFinger>
struct Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Exoa.Events.CameraEvents/OnCameraBoolEvent
struct OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12  : public MulticastDelegate_t
{
};

// Exoa.Events.CameraEvents/OnCameraEventHandler
struct OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597  : public MulticastDelegate_t
{
};

// Exoa.Events.CameraEvents/OnCameraGameObjectEvent
struct OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1  : public MulticastDelegate_t
{
};

// Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler
struct OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B  : public MulticastDelegate_t
{
};

// Exoa.Events.CameraEvents/OnRequestObjectFocusHandler
struct OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6  : public MulticastDelegate_t
{
};

// Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler
struct OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD  : public MulticastDelegate_t
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Exoa.Cameras.CameraBase
struct CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Exoa.Cameras.CameraBase::defaultMode
	bool ___defaultMode_4;
	// System.Boolean Exoa.Cameras.CameraBase::standalone
	bool ___standalone_5;
	// Exoa.Touch.ScreenDepth Exoa.Cameras.CameraBase::HeightScreenDepth
	ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 ___HeightScreenDepth_6;
	// UnityEngine.Camera Exoa.Cameras.CameraBase::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_7;
	// Exoa.Cameras.CameraBoundaries Exoa.Cameras.CameraBase::camBounds
	CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* ___camBounds_8;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::initOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initOffset_9;
	// UnityEngine.Quaternion Exoa.Cameras.CameraBase::initRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initRotation_10;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::finalOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalOffset_11;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::finalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalPosition_12;
	// UnityEngine.Quaternion Exoa.Cameras.CameraBase::finalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___finalRotation_13;
	// System.Single Exoa.Cameras.CameraBase::finalDistance
	float ___finalDistance_14;
	// System.Boolean Exoa.Cameras.CameraBase::disableMoves
	bool ___disableMoves_15;
	// System.Single Exoa.Cameras.CameraBase::currentPitch
	float ___currentPitch_16;
	// System.Single Exoa.Cameras.CameraBase::currentYaw
	float ___currentYaw_17;
	// System.Single Exoa.Cameras.CameraBase::deltaYaw
	float ___deltaYaw_18;
	// System.Single Exoa.Cameras.CameraBase::deltaPitch
	float ___deltaPitch_19;
	// UnityEngine.Quaternion Exoa.Cameras.CameraBase::twistRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___twistRot_20;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::worldPointCameraCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPointCameraCenter_21;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::worldPointFingersCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPointFingersCenter_22;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::worldPointFingersDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPointFingersDelta_23;
	// Exoa.Cameras.CameraBase/InputMapFingerDrag Exoa.Cameras.CameraBase::rightClickDrag
	int32_t ___rightClickDrag_24;
	// Exoa.Cameras.CameraBase/InputMapFingerDrag Exoa.Cameras.CameraBase::middleClickDrag
	int32_t ___middleClickDrag_25;
	// Exoa.Cameras.CameraBase/InputMapFingerDrag Exoa.Cameras.CameraBase::oneFingerDrag
	int32_t ___oneFingerDrag_26;
	// Exoa.Cameras.CameraBase/InputMapFingerDrag Exoa.Cameras.CameraBase::twoFingerDrag
	int32_t ___twoFingerDrag_27;
	// Exoa.Cameras.CameraBase/InputMapFingerPinch Exoa.Cameras.CameraBase::twoFingerPinch
	int32_t ___twoFingerPinch_28;
	// Exoa.Cameras.CameraBase/InputMapScrollWheel Exoa.Cameras.CameraBase::scrollWheel
	int32_t ___scrollWheel_29;
	// System.Single Exoa.Cameras.CameraBase::groundHeight
	float ___groundHeight_30;
	// Exoa.Maths.Springs Exoa.Cameras.CameraBase::groundHeightAnim
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* ___groundHeightAnim_31;
	// Exoa.Maths.FloatSpring Exoa.Cameras.CameraBase::groundHeightValue
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 ___groundHeightValue_32;
	// System.Boolean Exoa.Cameras.CameraBase::allowPitchRotation
	bool ___allowPitchRotation_33;
	// System.Single Exoa.Cameras.CameraBase::PitchSensitivity
	float ___PitchSensitivity_34;
	// System.Boolean Exoa.Cameras.CameraBase::PitchClamp
	bool ___PitchClamp_35;
	// UnityEngine.Vector2 Exoa.Cameras.CameraBase::PitchMinMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___PitchMinMax_36;
	// UnityEngine.Vector2 Exoa.Cameras.CameraBase::initialRotation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialRotation_37;
	// System.Boolean Exoa.Cameras.CameraBase::allowYawRotation
	bool ___allowYawRotation_38;
	// System.Single Exoa.Cameras.CameraBase::YawSensitivity
	float ___YawSensitivity_39;
	// System.Boolean Exoa.Cameras.CameraBase::YawClamp
	bool ___YawClamp_40;
	// UnityEngine.Vector2 Exoa.Cameras.CameraBase::YawMinMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___YawMinMax_41;
	// System.Single Exoa.Cameras.CameraBase::maxTranslationSpeed
	float ___maxTranslationSpeed_42;
	// System.Boolean Exoa.Cameras.CameraBase::firstUpdateDone
	bool ___firstUpdateDone_43;
	// System.Single Exoa.Cameras.CameraBase::focusRadiusMultiplier
	float ___focusRadiusMultiplier_44;
	// Exoa.Maths.Springs Exoa.Cameras.CameraBase::focusMove
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* ___focusMove_45;
	// Exoa.Maths.FloatSpring Exoa.Cameras.CameraBase::focusMoveDistanceOrSize
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 ___focusMoveDistanceOrSize_46;
	// Exoa.Maths.Vector3Spring Exoa.Cameras.CameraBase::focuswMoveOffset
	Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767 ___focuswMoveOffset_47;
	// Exoa.Maths.QuaternionSpring Exoa.Cameras.CameraBase::focusMoveRotation
	QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B ___focusMoveRotation_48;
	// UnityEngine.Bounds Exoa.Cameras.CameraBase::focusTargetBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___focusTargetBounds_49;
	// UnityEngine.Vector3 Exoa.Cameras.CameraBase::focusTargetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___focusTargetPosition_50;
	// System.Single Exoa.Cameras.CameraBase::focusTargetDistanceOrSize
	float ___focusTargetDistanceOrSize_51;
	// UnityEngine.Quaternion Exoa.Cameras.CameraBase::focusTargetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___focusTargetRotation_52;
	// System.Boolean Exoa.Cameras.CameraBase::enableFocusing
	bool ___enableFocusing_53;
	// System.Boolean Exoa.Cameras.CameraBase::enableRotationChange
	bool ___enableRotationChange_54;
	// System.Boolean Exoa.Cameras.CameraBase::isFocusing
	bool ___isFocusing_55;
	// System.Boolean Exoa.Cameras.CameraBase::allowYOffsetFromGround
	bool ___allowYOffsetFromGround_56;
	// System.Single Exoa.Cameras.CameraBase::lastPrint
	float ___lastPrint_57;
};

// Exoa.Cameras.CameraBoundaries
struct CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Exoa.Cameras.CameraBoundaries/Type Exoa.Cameras.CameraBoundaries::type
	int32_t ___type_4;
	// UnityEngine.Collider Exoa.Cameras.CameraBoundaries::bounderiesCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___bounderiesCollider_5;
	// UnityEngine.BoxCollider Exoa.Cameras.CameraBoundaries::boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider_6;
	// System.Boolean Exoa.Cameras.CameraBoundaries::drawGizmos
	bool ___drawGizmos_7;
	// UnityEngine.Bounds Exoa.Cameras.CameraBoundaries::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_8;
	// Exoa.Cameras.CameraBoundaries/Mode Exoa.Cameras.CameraBoundaries::mode
	int32_t ___mode_9;
};

// Exoa.Cameras.CameraInputs
struct CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields
{
	// System.Boolean Exoa.Cameras.CameraInputs::isFingerTap
	bool ___isFingerTap_4;
	// System.Boolean Exoa.Cameras.CameraInputs::isFingerUp
	bool ___isFingerUp_5;
	// Exoa.Touch.FingerFilter Exoa.Cameras.CameraInputs::OneFingerFilter
	FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* ___OneFingerFilter_6;
	// Exoa.Touch.FingerFilter Exoa.Cameras.CameraInputs::TwoFingerFilter
	FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* ___TwoFingerFilter_7;
	// Exoa.Touch.ScreenDepth Exoa.Cameras.CameraInputs::ScreenDepth
	ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 ___ScreenDepth_8;
	// System.Single Exoa.Cameras.CameraInputs::pinchScale
	float ___pinchScale_9;
	// System.Single Exoa.Cameras.CameraInputs::pinchRatio
	float ___pinchRatio_10;
	// System.Single Exoa.Cameras.CameraInputs::twistDegrees
	float ___twistDegrees_11;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::oneFingerScaledPixelDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneFingerScaledPixelDelta_12;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::twoFingersScaledPixelDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___twoFingersScaledPixelDelta_13;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::lastScreenPointTwoFingersCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPointTwoFingersCenter_14;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::lastScreenPointOneFingerCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPointOneFingerCenter_15;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::lastScreenPointAnyFingerCountCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPointAnyFingerCountCenter_16;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::screenPointTwoFingersCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPointTwoFingersCenter_17;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::screenPointOneFingerCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPointOneFingerCenter_18;
	// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::screenPointAnyFingerCountCenter
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPointAnyFingerCountCenter_19;
	// UnityEngine.KeyCode Exoa.Cameras.CameraInputs::resetCamera
	int32_t ___resetCamera_20;
	// UnityEngine.KeyCode Exoa.Cameras.CameraInputs::switchPerspective
	int32_t ___switchPerspective_21;
};

// Exoa.Cameras.CameraModeSwitcher
struct CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Exoa.Cameras.CameraOrthoBase Exoa.Cameras.CameraModeSwitcher::camOrtho
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* ___camOrtho_5;
	// Exoa.Cameras.CameraPerspBase Exoa.Cameras.CameraModeSwitcher::camPersp
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* ___camPersp_6;
	// UnityEngine.Camera Exoa.Cameras.CameraModeSwitcher::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_7;
	// System.Single Exoa.Cameras.CameraModeSwitcher::matrixLerp
	float ___matrixLerp_8;
	// System.Boolean Exoa.Cameras.CameraModeSwitcher::orthoMode
	bool ___orthoMode_9;
	// UnityEngine.Matrix4x4 Exoa.Cameras.CameraModeSwitcher::orthoMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___orthoMatrix_10;
	// UnityEngine.Matrix4x4 Exoa.Cameras.CameraModeSwitcher::perspectiveMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___perspectiveMatrix_11;
	// Exoa.Maths.Springs Exoa.Cameras.CameraModeSwitcher::switchMove
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* ___switchMove_12;
	// Exoa.Maths.FloatSpring Exoa.Cameras.CameraModeSwitcher::switchMoveLerp
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 ___switchMoveLerp_13;
};

struct CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_StaticFields
{
	// Exoa.Cameras.CameraModeSwitcher Exoa.Cameras.CameraModeSwitcher::Instance
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* ___Instance_4;
};

// Exoa.Touch.InputTouch
struct InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action Exoa.Touch.InputTouch::OnSimulateFingers
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSimulateFingers_23;
	// System.Single Exoa.Touch.InputTouch::tapThreshold
	float ___tapThreshold_24;
	// System.Single Exoa.Touch.InputTouch::swipeThreshold
	float ___swipeThreshold_25;
	// System.Int32 Exoa.Touch.InputTouch::referenceDpi
	int32_t ___referenceDpi_26;
	// UnityEngine.LayerMask Exoa.Touch.InputTouch::guiLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___guiLayers_27;
	// System.Boolean Exoa.Touch.InputTouch::useTouch
	bool ___useTouch_28;
	// System.Boolean Exoa.Touch.InputTouch::useHover
	bool ___useHover_29;
	// System.Boolean Exoa.Touch.InputTouch::useMouse
	bool ___useMouse_30;
	// System.Boolean Exoa.Touch.InputTouch::useSimulator
	bool ___useSimulator_31;
	// System.Boolean Exoa.Touch.InputTouch::disableMouseEmulation
	bool ___disableMouseEmulation_32;
	// System.Boolean Exoa.Touch.InputTouch::recordFingers
	bool ___recordFingers_33;
	// System.Single Exoa.Touch.InputTouch::recordThreshold
	float ___recordThreshold_34;
	// System.Single Exoa.Touch.InputTouch::recordLimit
	float ___recordLimit_35;
};

struct InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_StaticFields
{
	// System.Collections.Generic.List`1<Exoa.Touch.InputTouch> Exoa.Touch.InputTouch::Instances
	List_1_t68E73CC7E253385EB0718FEA9379587C96F16888* ___Instances_11;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::Fingers
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___Fingers_12;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::InactiveFingers
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___InactiveFingers_13;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerDown
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerDown_14;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerUpdate
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerUpdate_15;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerUp
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerUp_16;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerOld
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerOld_17;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerTap
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerTap_18;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerSwipe
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerSwipe_19;
	// System.Action`1<System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>> Exoa.Touch.InputTouch::OnGesture
	Action_1_tFBB6A5F3047BBDC10892F8A76DA0278E5C757F3B* ___OnGesture_20;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerExpired
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerExpired_21;
	// System.Action`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::OnFingerInactive
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerInactive_22;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Exoa.Touch.InputTouch::tempRaycastResults
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___tempRaycastResults_36;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::filteredFingers
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___filteredFingers_37;
	// UnityEngine.EventSystems.PointerEventData Exoa.Touch.InputTouch::tempPointerEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___tempPointerEventData_38;
	// UnityEngine.EventSystems.EventSystem Exoa.Touch.InputTouch::tempEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___tempEventSystem_39;
	// Exoa.Touch.TouchFinger Exoa.Touch.InputTouch::simulatedTapFinger
	TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD* ___simulatedTapFinger_40;
	// System.Collections.Generic.HashSet`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::missingFingers
	HashSet_1_t914AC507BF31A93BB101DCB4B68F328BB748A018* ___missingFingers_41;
	// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::tempFingers
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___tempFingers_42;
};

// Exoa.Common.TouchSelectable
struct TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.LinkedListNode`1<Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::instancesNode
	LinkedListNode_1_tC744AAB096FAA661A440667EE04458AB4AC1D94C* ___instancesNode_5;
	// System.Boolean Exoa.Common.TouchSelectable::selfSelected
	bool ___selfSelected_6;
	// Exoa.Common.TouchSelectable/LeanSelectEvent Exoa.Common.TouchSelectable::onSelected
	LeanSelectEvent_t4B8F91DBC947E4F4676645A4E4792A44BEFB3EFB* ___onSelected_7;
	// Exoa.Common.TouchSelectable/LeanSelectEvent Exoa.Common.TouchSelectable::onDeselected
	LeanSelectEvent_t4B8F91DBC947E4F4676645A4E4792A44BEFB3EFB* ___onDeselected_8;
};

struct TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41_StaticFields
{
	// System.Collections.Generic.LinkedList`1<Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::Instances
	LinkedList_1_tFC6B3D337ABAB792D64E3235F07F050C0E9BBF9E* ___Instances_4;
	// System.Action`1<Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::OnAnyEnabled
	Action_1_t5707B4C42B9ECDF531FD923D30CFC3BECF7DC657* ___OnAnyEnabled_9;
	// System.Action`1<Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::OnAnyDisabled
	Action_1_t5707B4C42B9ECDF531FD923D30CFC3BECF7DC657* ___OnAnyDisabled_10;
	// System.Action`2<Exoa.Common.TouchSelect,Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::OnAnySelected
	Action_2_tC0DB9EE30EB253A31F6930D67F44D9951CD50B5E* ___OnAnySelected_11;
	// System.Action`2<Exoa.Common.TouchSelect,Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::OnAnyDeselected
	Action_2_tC0DB9EE30EB253A31F6930D67F44D9951CD50B5E* ___OnAnyDeselected_12;
	// System.Collections.Generic.List`1<Exoa.Common.TouchSelectable> Exoa.Common.TouchSelectable::tempSelectables
	List_1_t829CF1EA4B5A052C398E8718E000F70C27348433* ___tempSelectables_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Exoa.Cameras.CameraOrthoBase
struct CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1  : public CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B
{
	// UnityEngine.Vector2 Exoa.Cameras.CameraOrthoBase::sizeMinMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizeMinMax_58;
	// System.Single Exoa.Cameras.CameraOrthoBase::finalSize
	float ___finalSize_59;
	// System.Single Exoa.Cameras.CameraOrthoBase::initSize
	float ___initSize_61;
	// System.Single Exoa.Cameras.CameraOrthoBase::initDistance
	float ___initDistance_62;
	// System.Single Exoa.Cameras.CameraOrthoBase::fixedDistance
	float ___fixedDistance_63;
};

// Exoa.Cameras.CameraPerspBase
struct CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470  : public CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B
{
	// UnityEngine.Vector2 Exoa.Cameras.CameraPerspBase::minMaxDistance
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxDistance_58;
	// System.Single Exoa.Cameras.CameraPerspBase::initDistance
	float ___initDistance_59;
	// System.Single Exoa.Cameras.CameraPerspBase::zoomSmoothness
	float ___zoomSmoothness_60;
	// System.Boolean Exoa.Cameras.CameraPerspBase::anyInteraction
	bool ___anyInteraction_61;
	// System.Single Exoa.Cameras.CameraPerspBase::fov
	float ___fov_62;
	// System.Single Exoa.Cameras.CameraPerspBase::focusDistanceMultiplier
	float ___focusDistanceMultiplier_63;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// Exoa.Cameras.CameraPerspective
struct CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A  : public CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470
{
};

// Exoa.Cameras.CameraTopDownOrtho
struct CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842  : public CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean Exoa.Cameras.CameraBase::IsInputMatching(Exoa.Cameras.CameraBase/InputMapFingerDrag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, const RuntimeMethod* method) ;
// System.Boolean Exoa.Cameras.CameraBase::IsInputMatching(Exoa.Cameras.CameraBase/InputMapFingerPinch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnCameraBoolEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnRequestObjectFocusHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnCameraEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Exoa.Cameras.CameraBoundaries>()
inline CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Exoa.Cameras.CameraModeSwitcher>()
inline CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void Exoa.Touch.ScreenDepth::.ctor(Exoa.Touch.ScreenDepth/ConversionType,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenDepth__ctor_m36E55629497D13AAB09A2D588A68079327CD4C88 (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* __this, int32_t ___newConversion0, int32_t ___newLayers1, float ___newDistance2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::get_FinalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Exoa.Cameras.CameraBase::get_FinalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Exoa.Maths.FloatSpring::Reset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885 (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* __this, float ___initValue0, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::SetGroundHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___y0, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraInputs::GetScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7 (const RuntimeMethod* method) ;
// System.Int32 Exoa.Cameras.CameraInputs::GetFingerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB (int32_t ___max0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Exoa.Cameras.CameraBoundaries::ClampInBoundsXZ(UnityEngine.Vector3,System.Boolean&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBoundaries_ClampInBoundsXZ_m25A55A0F005F2B3A327CB7241EAF57E6CC66F462 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, bool* ___isInBoundaries1, float ___groundHeight2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::set_DisableMoves(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VectorExtensions::SetY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraBase::NormalizeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___a0, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraBase::GetRotationSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_GetRotationSensitivity_mD660472B1E1B4E4C2BB2F80A7545D148F1B48B12 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___instant1, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, bool ___instant2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, bool ___instant2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, bool ___instant2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, bool ___instant3, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, bool ___instant3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnCameraEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds Exoa.Designer.GameObjectExtensions::GetBoundsRecursive(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GameObjectExtensions_GetBoundsRecursive_m62484EC8E2A65A17A20BEDE0EEF7EDD9D38D0377 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VectorExtensions::SetZ(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VectorExtensions_SetZ_m6ECD69157D41DF316BAA328B6F8B9DB9BBC161D2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, float ___z1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// Exoa.Cameras.ITouchCamera Exoa.Cameras.CameraModeSwitcher::get_CurrentCameraMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Exoa.Cameras.CameraOrthoBase>()
inline CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Exoa.Cameras.CameraPerspBase>()
inline CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method) ;
// System.Boolean Exoa.Cameras.CameraInputs::ChangePerspective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ChangePerspective_m8E088A51F122522CC9E3A29E929F4E942240AD88 (const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraModeSwitcher::TogglePerspective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Single Exoa.Maths.Springs::Update(Exoa.Maths.FloatSpring&,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Springs_Update_mF8FA5925C2A18CE8CB097AA2975A88CE54BC24FA (Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* __this, FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* ___spring0, float ___target1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 Exoa.Cameras.CameraModeSwitcher::MatrixLerp(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraModeSwitcher_MatrixLerp_mA8D5EF3229D5E82DFB61AC806DF33493707A0FBB (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___from0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___to1, float ___time2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraModeSwitcher::StopFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::get_FinalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::set_FinalOffset(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraBase::get_FinalDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraOrthoBase::SetSizeByDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetSizeByDistance_mBC7DE819F563B85E9F6790A86409CE45DF307CF7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, float ___d0, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraOrthoBase::GetDistanceFromSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_GetDistanceFromSize_mC2202567822B0357A00FAFAE7C7B3BC6A4C1DEC7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraPerspBase::SetPositionByDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_SetPositionByDistance_mF190D5F7B993844B1B8448587D28F4F3893E25A4 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, float ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraModeSwitcher::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_ResetCamera_m842DFB2047E6891B3E5C06D3D589D05FDA12DB96 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraModeSwitcher::DisableCameraMoves(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_DisableCameraMoves_m8C7F68356FDCCFB93FD4DDD52076C904DFC92C21 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraModeSwitcher::OnBeforeSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnBeforeSwitch_mD0A1AFC870CEC662E5F1E01CBF2238F259FBEAA9 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___orthoOn0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::StopFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::SetGroundHeightAnimated(System.Single,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeightAnimated_m59681B8244476ACF2A87C9537FE703CF05FD6F71 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraModeSwitcher::OnAfterSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnAfterSwitch_mEB52881E43B9C9C91A86EC3BCA4F3812736B437C (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___orthoOn0, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.FingerFilter::UpdateAndGetFingers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50 (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* __this, bool ___ignoreUpFingers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Exoa.Touch.ScreenDepth::Convert(UnityEngine.Vector2,UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073 (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ignore2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::GetAnyPixelScaledDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9 (const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::RotateFromVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) ;
// System.Boolean Exoa.Cameras.CameraBase::IsInputMatching(Exoa.Cameras.CameraBase/InputMapScrollWheel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Exoa.Touch.ScreenDepth::ConvertDelta(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.GameObject,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ScreenDepth_ConvertDelta_m2557381CA96262140FFA39D459AEAD108C2B1A7A (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPoint0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ignore3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::ApplyToCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ApplyToCamera_m7AC906E16988891AD1480ED4BE0F41E7D4E88D53 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Ortho_mB42622C6600D70BF8208B879E48BCB03844EEFCF (float ___left0, float ___right1, float ___bottom2, float ___top3, float ___zNear4, float ___zFar5, const RuntimeMethod* method) ;
// System.Void Exoa.Maths.Vector3Spring::Reset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110 (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initValue0, const RuntimeMethod* method) ;
// System.Void Exoa.Maths.QuaternionSpring::Reset(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initValue0, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m2795C9D5FD5CBBE59B7D78BCE9B07BDCB3BFBAA2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___changeDistance1, float ___targetDistanceOrSize2, bool ___changeRotation3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation4, bool ___allowYOffsetFromGround5, bool ___instant6, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_op_Inequality_mBE4883EFEDADB40B7243DC1F19BD01B5908CD2E0 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___lhs0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Exoa.Maths.Springs::Update(Exoa.Maths.QuaternionSpring&,UnityEngine.Quaternion,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Springs_Update_m0C198605FBA3554DF4A8F61DA41B8DCF5F4AEC3B (Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* __this, QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* ___spring0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___target1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Exoa.Maths.Springs::Update(Exoa.Maths.Vector3Spring&,UnityEngine.Vector3,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Springs_Update_m62C6A03A523E38106038A9F5F18E7DE186B86E80 (Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* __this, Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* ___spring0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete2, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraBase::CalculateClampedDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxDistance2, float ___multiplier3, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraPerspBase::HandleFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_HandleFocus_m8CDD1B5FD048A2097E9150D650B677E552FC8FD9 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraBase::CalculateDistance(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Perspective_m08BFCC6D4F8C7D51CEFBB8F3425954125BF9A743 (float ___fov0, float ___aspect1, float ___zNear2, float ___zFar3, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraPerspBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_Init_mA6013685173136DDA8C4AD24CC3DA0450ED1C0BC (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single Exoa.Cameras.CameraBase::CalculateClampedDistance(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_mF3B8F73A1F51A167E0FD7FF18870A6C249930B09 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___distance0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxDistance1, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraPerspBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase__ctor_m62881D30A4D8F9F541C4036592B2AEAC0CA12EC6 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraOrthoBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_Init_mC35BF62EA51F7D23B9710BA605117A720A32C2C9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Cameras.CameraOrthoBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase__ctor_mEE179738DF12DE8BCF73EC11F20F0A06897E35E9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Event::get_control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean Exoa.Cameras.CameraInputs::get_IsOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Exoa.Touch.TouchFinger>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8 (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Exoa.Touch.InputTouch::remove_OnFingerTap(System.Action`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_remove_OnFingerTap_m4A0A034A45AF5EE14EB056688A45799CC8132FFC (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___value0, const RuntimeMethod* method) ;
// System.Void Exoa.Touch.InputTouch::remove_OnFingerUp(System.Action`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_remove_OnFingerUp_m9267B7070BDDAF36B31BC9B439A53A19A515C8CE (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___value0, const RuntimeMethod* method) ;
// Exoa.Touch.InputTouch Exoa.Touch.InputTouch::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* InputTouch_get_Instance_mF98A72985ED5C3B0D69164EDF150B1B16E4ACBFE (const RuntimeMethod* method) ;
// System.Void Exoa.Touch.InputTouch::set_UseMouse(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputTouch_set_UseMouse_m181F6A79E52F1A5AFD0A6768EB29A30A92D40C30_inline (InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Exoa.Touch.InputTouch::add_OnFingerTap(System.Action`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_add_OnFingerTap_mE28ED09017617792EA25D4C96C8FBAF62EB134D4 (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___value0, const RuntimeMethod* method) ;
// System.Void Exoa.Touch.InputTouch::add_OnFingerUp(System.Action`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_add_OnFingerUp_m38024B5A702D266C57BDF2E5FD48F18A28957938 (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___value0, const RuntimeMethod* method) ;
// System.Single Exoa.Touch.InputGesture::GetPinchScale(System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputGesture_GetPinchScale_m3B5C9CDB58128EDFC3B4793C913209878CD14D27 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers0, float ___wheelSensitivity1, const RuntimeMethod* method) ;
// System.Single Exoa.Touch.InputGesture::GetPinchRatio(System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputGesture_GetPinchRatio_mA711A31C55785168B582BB76B6AA1E6018673530 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers0, float ___wheelSensitivity1, const RuntimeMethod* method) ;
// System.Single Exoa.Touch.InputGesture::GetTwistDegrees(System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputGesture_GetTwistDegrees_m3F813BD422EA2C954D5B935212A6D9B876DEF8E2 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Exoa.Touch.InputGesture::GetLastScreenCenter(System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputGesture_GetLastScreenCenter_m7E5FBA384403965EB6A6B4A2AF9D061061392017 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Exoa.Touch.InputGesture::GetScreenCenter(System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputGesture_GetScreenCenter_mAD60BD11D7236D0C0D74A5E4E3F9824772CB9D35 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single Exoa.Touch.InputTouch::get_ScalingFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputTouch_get_ScalingFactor_m3200F11A91C954EA2839EA6F622FC4A3D628E403 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Exoa.Touch.TouchFinger> Exoa.Touch.InputTouch::GetFingers(System.Boolean,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* InputTouch_GetFingers_mC6BCBC45460BF8CCC3C786E2091EE08C934EAA0D (bool ___ignoreIfStartedOverGui0, bool ___ignoreIfOverGui1, int32_t ___requiredFingerCount2, bool ___ignoreHoverFinger3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Exoa.Touch.TouchFinger>::get_Count()
inline int32_t List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_inline (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void Exoa.Touch.FingerFilter::.ctor(Exoa.Touch.FingerFilter/FilterType,System.Boolean,System.Int32,System.Int32,Exoa.Common.TouchSelectable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFilter__ctor_mE561A6F645A166DA1555B5C44F29CCADD362A771 (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* __this, int32_t ___newFilter0, bool ___newIgnoreStartedOverGui1, int32_t ___newRequiredFingerCount2, int32_t ___newRequiredMouseButtons3, TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41* ___newRequiredSelectable4, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Exoa.Events.CameraEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraEvents__ctor_m2AD99E3BAA45D77A6D76A279C1FC4FDFF4292C35 (CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_Multicast(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* currentDelegate = reinterpret_cast<OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, bool, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___newHeight0, ___animate1, ___duration2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenInst(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, bool, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___newHeight0, ___animate1, ___duration2, method);
}
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenStatic(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, bool, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___newHeight0, ___animate1, ___duration2, method);
}
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenStaticInvoker(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< float, bool, float >::Invoke(__this->___method_ptr_0, method, NULL, ___newHeight0, ___animate1, ___duration2);
}
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_ClosedStaticInvoker(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, float, bool, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___newHeight0, ___animate1, ___duration2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___newHeight0, static_cast<int32_t>(___animate1), ___duration2);

}
// System.Void Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_Multicast;
}
// System.Void Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler::Invoke(System.Single,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, bool, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___newHeight0, ___animate1, ___duration2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler::BeginInvoke(System.Single,System.Boolean,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRequestGroundHeightChangeHandler_BeginInvoke_mF10A3686A5B580A918ACEA9B815EBB872C6B0A59 (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___newHeight0, bool ___animate1, float ___duration2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___newHeight0);
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___animate1);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___duration2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Exoa.Events.CameraEvents/OnRequestGroundHeightChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler_EndInvoke_mBBC660CF9B0106592B3C7068D4BDD51564A7FC48 (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_Multicast(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* currentDelegate = reinterpret_cast<OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___action0, ___active1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenInst(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, ___active1, method);
}
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenStatic(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, ___active1, method);
}
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenStaticInvoker(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___action0, ___active1);
}
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_ClosedStaticInvoker(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___action0, ___active1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___action0, static_cast<int32_t>(___active1));

}
// System.Void Exoa.Events.CameraEvents/OnCameraBoolEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_Multicast;
}
// System.Void Exoa.Events.CameraEvents/OnCameraBoolEvent::Invoke(Exoa.Events.CameraEvents/Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, ___active1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Exoa.Events.CameraEvents/OnCameraBoolEvent::BeginInvoke(Exoa.Events.CameraEvents/Action,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraBoolEvent_BeginInvoke_m99A0D36854F3870CCC663F5DA6D8017F14AB687F (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___action0, bool ___active1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894_il2cpp_TypeInfo_var, &___action0);
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___active1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Exoa.Events.CameraEvents/OnCameraBoolEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent_EndInvoke_m8D448591713978AD0165B5B40B8E82C9909945D6 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_Multicast(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* currentDelegate = reinterpret_cast<OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenInst(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, method);
}
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenStatic(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, method);
}
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenStaticInvoker(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0);
}
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_ClosedStaticInvoker(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0);
}
// System.Void Exoa.Events.CameraEvents/OnCameraGameObjectEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent__ctor_m435C879225615EA0430A4558B382B8DA10F032D5 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_Multicast;
}
// System.Void Exoa.Events.CameraEvents/OnCameraGameObjectEvent::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Exoa.Events.CameraEvents/OnCameraGameObjectEvent::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraGameObjectEvent_BeginInvoke_m5E7E183A572076320E175703F36D4C54E9CC4F21 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Exoa.Events.CameraEvents/OnCameraGameObjectEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent_EndInvoke_mDFE1D60184014935A7B117827DEE23108528F7C1 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_Multicast(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* currentDelegate = reinterpret_cast<OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, ___allowYOffsetFromGround1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenInst(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method)
{
	NullCheck(___obj0);
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___allowYOffsetFromGround1, method);
}
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenStatic(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, ___allowYOffsetFromGround1, method);
}
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenStaticInvoker(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0, ___allowYOffsetFromGround1);
}
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_ClosedStaticInvoker(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0, ___allowYOffsetFromGround1);
}
// System.Void Exoa.Events.CameraEvents/OnRequestObjectFocusHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_Multicast;
}
// System.Void Exoa.Events.CameraEvents/OnRequestObjectFocusHandler::Invoke(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52 (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, ___allowYOffsetFromGround1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Exoa.Events.CameraEvents/OnRequestObjectFocusHandler::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRequestObjectFocusHandler_BeginInvoke_m3F181395570AD20EB3C00DB59A74602F8779A60E (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, bool ___allowYOffsetFromGround1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___allowYOffsetFromGround1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Exoa.Events.CameraEvents/OnRequestObjectFocusHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler_EndInvoke_m84DFB5AC9AA7F418EF167388A31F5648F8E2424E (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_Multicast(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* currentDelegate = reinterpret_cast<OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___orthoMode0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenInst(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___orthoMode0, method);
}
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenStatic(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___orthoMode0, method);
}
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenStaticInvoker(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___orthoMode0);
}
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_ClosedStaticInvoker(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___orthoMode0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___orthoMode0));

}
// System.Void Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_Multicast;
}
// System.Void Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5 (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___orthoMode0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSwitchPerspectiveHandler_BeginInvoke_mA31E7942E9F6DEB9E5035C2F0882AD054EDE8804 (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___orthoMode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Exoa.Events.CameraEvents/OnSwitchPerspectiveHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_EndInvoke_m655FD7CEC36D5AE30F0C9739D07625B4594E57C6 (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_Multicast(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* currentDelegate = reinterpret_cast<OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenInst(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenStatic(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenStaticInvoker(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_ClosedStaticInvoker(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Exoa.Events.CameraEvents/OnCameraEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_Multicast;
}
// System.Void Exoa.Events.CameraEvents/OnCameraEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Exoa.Events.CameraEvents/OnCameraEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraEventHandler_BeginInvoke_m329F999C735365769ECAB20C43FDD4B4795D836E (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Exoa.Events.CameraEvents/OnCameraEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler_EndInvoke_m4D44662952BCBDEADB73C7E1F9D442D06AC45E0E (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion Exoa.Cameras.CameraBase::get_FinalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___finalRotation_13;
		return L_0;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::get_FinalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalPosition_12;
		return L_0;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::get_FinalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalOffset_11;
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraBase::set_FinalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => finalOffset = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___finalOffset_11 = L_0;
		return;
	}
}
// System.Single Exoa.Cameras.CameraBase::get_FinalDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalDistance;
		float L_0 = __this->___finalDistance_14;
		return L_0;
	}
}
// System.Boolean Exoa.Cameras.CameraBase::get_DisableMoves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_get_DisableMoves_mBC7AEF1898ECF895C025910AE92D60676C35F5E8 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => disableMoves;
		bool L_0 = __this->___disableMoves_15;
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraBase::set_DisableMoves(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => disableMoves = value;
		bool L_0 = ___value0;
		__this->___disableMoves_15 = L_0;
		return;
	}
}
// UnityEngine.Vector2 Exoa.Cameras.CameraBase::get_PitchAndYaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_get_PitchAndYaw_mABB8069B41C7ABFECF9222A5FDD934A20AA6928C (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => new Vector2(currentPitch, currentYaw);
		float L_0 = __this->___currentPitch_16;
		float L_1 = __this->___currentYaw_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Exoa.Cameras.CameraBase::IsRotating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsRotating_m4E938FCBF6063BB34FBED052B7387DD61FF1BCF4 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// return !disableMoves && (IsInputMatching(InputMapFingerDrag.RotateAround) ||
		//     IsInputMatching(InputMapFingerDrag.RotateHead) ||
		//     IsInputMatching(InputMapFingerPinch.RotateOnly));
		bool L_0 = __this->___disableMoves_15;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 1, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2;
		L_2 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 2, NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3;
		L_3 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 1, NULL);
		return L_3;
	}

IL_0022:
	{
		return (bool)1;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Void Exoa.Cameras.CameraBase::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnDestroy_mFF695E25D80F6C94F4C6B847E413B257B1B78E6B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraEvents.OnBeforeSwitchPerspective -= OnBeforeSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_0 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_1 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 46)), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0 = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_2, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_2, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		// CameraEvents.OnAfterSwitchPerspective -= OnAfterSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_3 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_4 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 47)), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1 = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_5, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_5, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestButtonAction -= OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_6 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_7 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_7, __this, (intptr_t)((void*)CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2 = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_8, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_8, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestObjectFocus -= FocusCameraOnGameObject;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_9 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_10 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 63)), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3 = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_11, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_11, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestGroundHeightChange -= SetGroundHeightAnimated;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_12 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_13 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4 = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_14, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_14, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestStopFocus -= StopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_15 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_16 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_16, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 37)), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_15, L_16, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7 = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_17, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_17, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Start_m279BB2F1A49ADE4A914894A55A8EE2DB5809293A (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_7), (void*)L_0);
		// cam.nearClipPlane = 1f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_7;
		NullCheck(L_1);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_1, (1.0f), NULL);
		// camBounds = GetComponent<CameraBoundaries>();
		CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* L_2;
		L_2 = Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A(__this, Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A_RuntimeMethod_var);
		__this->___camBounds_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camBounds_8), (void*)L_2);
		// standalone = GetComponent<CameraModeSwitcher>() == null;
		CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* L_3;
		L_3 = Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA(__this, Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___standalone_5 = L_4;
		// Init();
		VirtualActionInvoker0::Invoke(40 /* System.Void Exoa.Cameras.CameraBase::Init() */, __this);
		// CameraEvents.OnBeforeSwitchPerspective += OnBeforeSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_5 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_6 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 46)), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0 = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_7, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_7, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		// CameraEvents.OnAfterSwitchPerspective += OnAfterSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_8 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_9 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 47)), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1 = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_10, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_10, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		// if (standalone)
		bool L_11 = __this->___standalone_5;
		if (!L_11)
		{
			goto IL_0110;
		}
	}
	{
		// CameraEvents.OnRequestButtonAction += OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_12 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_13 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_13, __this, (intptr_t)((void*)CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2 = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_14, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_14, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestObjectFocus += FocusCameraOnGameObject;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_15 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_16 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_16, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 63)), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_15, L_16, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3 = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_17, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_17, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestGroundHeightChange += SetGroundHeightAnimated;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_18 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_19 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_19, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_18, L_19, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4 = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_20, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_20, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestStopFocus += StopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_21 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_22 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_22, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 37)), NULL);
		Delegate_t* L_23;
		L_23 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_21, L_22, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7 = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_23, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_23, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// CreateConverter();
		VirtualActionInvoker0::Invoke(41 /* System.Void Exoa.Cameras.CameraBase::CreateConverter() */, __this);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::CreateConverter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_CreateConverter_mD5AF7998BA287E7911A7F1C0C4CE042DD7267D7D (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// HeightScreenDepth = new ScreenDepth(ScreenDepth.ConversionType.HeightIntercept, -5, groundHeight);
		float L_0 = __this->___groundHeight_30;
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScreenDepth__ctor_m36E55629497D13AAB09A2D588A68079327CD4C88((&L_1), 5, ((int32_t)-5), L_0, /*hidden argument*/NULL);
		__this->___HeightScreenDepth_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___HeightScreenDepth_6))->___Camera_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___HeightScreenDepth_6))->___Object_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_LateUpdate_m24DD821651D0F258189C34AF7A7700FA69594922 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B3_0 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B4_1 = NULL;
	{
		// if (!firstUpdateDone)
		bool L_0 = __this->___firstUpdateDone_43;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// enabled = defaultMode || standalone;
		bool L_1 = __this->___defaultMode_4;
		G_B2_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->___standalone_5;
		G_B4_0 = ((int32_t)(L_2));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		NullCheck(G_B4_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(G_B4_1, (bool)G_B4_0, NULL);
		// firstUpdateDone = true;
		__this->___firstUpdateDone_43 = (bool)1;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::ApplyToCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ApplyToCamera_m7AC906E16988891AD1480ED4BE0F41E7D4E88D53 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (standalone)
		bool L_0 = __this->___standalone_5;
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	try
	{// begin try (depth: 1)
		// transform.position = FinalPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline(__this, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// }
		goto IL_001e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (System.Exception) { };
		// catch (System.Exception) { };
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001e;
	}// end catch (depth: 1)

IL_001e:
	{
		// if (!float.IsNaN(FinalRotation.x) && !float.IsNaN(FinalRotation.y) && !float.IsNaN(FinalRotation.z))
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		float L_4 = L_3.___x_0;
		bool L_5;
		L_5 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0065;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		float L_7 = L_6.___y_1;
		bool L_8;
		L_8 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_0065;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		float L_10 = L_9.___z_2;
		bool L_11;
		L_11 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_10, NULL);
		if (L_11)
		{
			goto IL_0065;
		}
	}
	{
		// transform.rotation = FinalRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_13, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Exoa.Cameras.CameraBase::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraBase_GetMatrix_m4F42B232460DE6972AA2E38EACBADA7C5E8B2701 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraBase::SetGroundHeightAnimated(System.Single,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeightAnimated_m59681B8244476ACF2A87C9537FE703CF05FD6F71 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method) 
{
	{
		// if (animate)
		bool L_0 = ___animate1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// groundHeightValue.Reset(groundHeight);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_1 = (&__this->___groundHeightValue_32);
		float L_2 = __this->___groundHeight_30;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_1, L_2, NULL);
		return;
	}

IL_0015:
	{
		// SetGroundHeight(newHeight);
		float L_3 = ___newHeight0;
		CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::SetGroundHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___y0, const RuntimeMethod* method) 
{
	{
		// groundHeight = y;
		float L_0 = ___y0;
		__this->___groundHeight_30 = L_0;
		// HeightScreenDepth.Distance = groundHeight;
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_1 = (&__this->___HeightScreenDepth_6);
		float L_2 = __this->___groundHeight_30;
		L_1->___Distance_4 = L_2;
		// finalOffset.y = groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___finalOffset_11);
		float L_4 = __this->___groundHeight_30;
		L_3->___y_3 = L_4;
		// }
		return;
	}
}
// System.Boolean Exoa.Cameras.CameraBase::IsInputMatching(Exoa.Cameras.CameraBase/InputMapScrollWheel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scrollWheel == action && CameraInputs.GetScroll() != 1)
		int32_t L_0 = __this->___scrollWheel_29;
		int32_t L_1 = ___action0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		if ((((float)L_2) == ((float)(1.0f))))
		{
			goto IL_0017;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0017:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraBase::IsInputMatching(Exoa.Cameras.CameraBase/InputMapFingerPinch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (twoFingerPinch == action && CameraInputs.GetFingerCount() == 2)
		int32_t L_0 = __this->___twoFingerPinch_28;
		int32_t L_1 = ___action0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB(2, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraBase::IsInputMatching(Exoa.Cameras.CameraBase/InputMapFingerDrag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (middleClickDrag == action && Input.GetMouseButton(2) && !Application.isMobilePlatform)
		int32_t L_0 = __this->___middleClickDrag_25;
		int32_t L_1 = ___action0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		bool L_3;
		L_3 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// if (rightClickDrag == action && Input.GetMouseButton(1) && !Application.isMobilePlatform)
		int32_t L_4 = __this->___rightClickDrag_24;
		int32_t L_5 = ___action0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		bool L_7;
		L_7 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0034:
	{
		// if (twoFingerDrag == action && CameraInputs.GetFingerCount() == 2)
		int32_t L_8 = __this->___twoFingerDrag_27;
		int32_t L_9 = ___action0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB(2, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// if (oneFingerDrag == action && CameraInputs.GetFingerCount() == 1 && !Input.GetMouseButton(1) && !Input.GetMouseButton(2))
		int32_t L_11 = __this->___oneFingerDrag_26;
		int32_t L_12 = ___action0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB(2, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_006c;
		}
	}
	{
		bool L_14;
		L_14 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		bool L_15;
		L_15 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (L_15)
		{
			goto IL_006c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_006c:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_ClampInCameraBoundaries_m28B2ED0307B4E4E533FEEED2162FE1E6F3A427AC (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (camBounds != null)
		CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* L_0 = __this->___camBounds_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// return camBounds.ClampInBoundsXZ(targetPosition, out bool isInBoundaries, groundHeight);
		CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* L_2 = __this->___camBounds_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPosition0;
		float L_4 = __this->___groundHeight_30;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CameraBoundaries_ClampInBoundsXZ_m25A55A0F005F2B3A327CB7241EAF57E6CC66F462(L_2, L_3, (&V_0), L_4, NULL);
		return L_5;
	}

IL_0023:
	{
		// return targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___targetPosition0;
		return L_6;
	}
}
// System.Void Exoa.Cameras.CameraBase::OnBeforeSwitchPerspective(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnBeforeSwitchPerspective_m3CCA98A4DF2A8F6C30A9379132BF71D3BAD53203 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___orthoMode0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::OnAfterSwitchPerspective(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnAfterSwitchPerspective_m4CC987BF847382DA9C68406B6259E2BE448CF494 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___orthoMode0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::OnRequestButtonAction(Exoa.Events.CameraEvents/Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method) 
{
	{
		// if (action == CameraEvents.Action.ResetCameraPositionRotation)
		int32_t L_0 = ___action0;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000b;
		}
	}
	{
		// ResetCamera();
		VirtualActionInvoker0::Invoke(59 /* System.Void Exoa.Cameras.CameraBase::ResetCamera() */, __this);
		return;
	}

IL_000b:
	{
		// else if (action == CameraEvents.Action.DisableCameraMoves)
		int32_t L_1 = ___action0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		// DisableMoves = (active);
		bool L_2 = ___active1;
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(__this, L_2, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculateOffset(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_CalculateOffset_mA1EC74775942CF10E689E748952DB766E79DB7DE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float adj = (pos.y - groundHeight) / Mathf.Tan(Mathf.Deg2Rad * rot.eulerAngles.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___y_3;
		float L_2 = __this->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rot1), NULL);
		float L_4 = L_3.___x_2;
		float L_5;
		L_5 = tanf(((float)il2cpp_codegen_multiply((0.0174532924f), L_4)));
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_5));
		// Vector3 camForward = Quaternion.Euler(0, rot.eulerAngles.y, 0) * Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rot1), NULL);
		float L_7 = L_6.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_7, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_8, L_9, NULL);
		V_1 = L_10;
		// Vector3 camOffset = pos.SetY(groundHeight) + camForward.normalized * adj;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___pos0;
		float L_12 = __this->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_16, NULL);
		// return camOffset;
		return L_17;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculateOffset(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_CalculateOffset_mBC613BAD4423B01E2126A4DA747D4DC6F3087BCB (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, float ___distance2, float ___groundHeight3, const RuntimeMethod* method) 
{
	{
		// Vector3 offset = pos - rot * (Vector3.back * distance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_3 = ___distance2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_5, NULL);
		// return offset.SetY(groundHeight);
		float L_7 = ___groundHeight3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_CalculatePosition_m31E4CAADB043BEEAFABD61422920CAD81B969AAF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, float ___distance2, const RuntimeMethod* method) 
{
	{
		// return rot * (Vector3.back * distance) + center;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___rot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_2 = ___distance2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___center0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Single Exoa.Cameras.CameraBase::CalculateDistance(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, const RuntimeMethod* method) 
{
	{
		// float distance = Mathf.Abs((pos.y - groundHeight) / Mathf.Cos(Mathf.Deg2Rad * (90 - rot.eulerAngles.x)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___y_3;
		float L_2 = __this->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rot1), NULL);
		float L_4 = L_3.___x_2;
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), ((float)il2cpp_codegen_subtract((90.0f), L_4)))));
		float L_6;
		L_6 = fabsf(((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_5)));
		// return distance;
		return L_6;
	}
}
// System.Single Exoa.Cameras.CameraBase::CalculateClampedDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxDistance2, float ___multiplier3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 distance = (camPos - worldPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___camPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___worldPoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return Mathf.Clamp(distance.magnitude * multiplier, minMaxDistance.x, minMaxDistance.y);
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_4 = ___multiplier3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___minMaxDistance2;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___minMaxDistance2;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_6, L_8, NULL);
		return L_9;
	}
}
// System.Single Exoa.Cameras.CameraBase::CalculateClampedDistance(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m9945BBC225BBD2A60FAC7946AAC525DC275FE8DE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, float ___minMaxDistance2, float ___multiplier3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 distance = (camPos - worldPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___camPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___worldPoint1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return Mathf.Clamp(distance.magnitude * multiplier, minMaxDistance, minMaxDistance);
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_4 = ___multiplier3;
		float L_5 = ___minMaxDistance2;
		float L_6 = ___minMaxDistance2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, L_6, NULL);
		return L_7;
	}
}
// System.Single Exoa.Cameras.CameraBase::CalculateClampedDistance(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_mF3B8F73A1F51A167E0FD7FF18870A6C249930B09 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___distance0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxDistance1, const RuntimeMethod* method) 
{
	{
		// return Mathf.Clamp(distance, minMaxDistance.x, minMaxDistance.y);
		float L_0 = ___distance0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___minMaxDistance1;
		float L_2 = L_1.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___minMaxDistance1;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		return L_5;
	}
}
// System.Single Exoa.Cameras.CameraBase::CalculateClampedDistance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m823A47AEDCE2CBDC5DA760E5B347888EF81F0EE4 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___distance0, float ___minMaxDistance1, const RuntimeMethod* method) 
{
	{
		// return Mathf.Clamp(distance, minMaxDistance, minMaxDistance);
		float L_0 = ___distance0;
		float L_1 = ___minMaxDistance1;
		float L_2 = ___minMaxDistance1;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetInitialRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetInitialRotation_m8C60D3F4EFACC86D2AADEE93F92F04E2F6A0303E (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// return initRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___initRotation_10;
		return L_0;
	}
}
// UnityEngine.Vector2 Exoa.Cameras.CameraBase::GetInitialRotationVec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_GetInitialRotationVec_m3BF9AC10B57558B732971DE1486D88A6618CD409 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// return initRotation.eulerAngles;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = (&__this->___initRotation_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		return L_2;
	}
}
// System.Single Exoa.Cameras.CameraBase::GetRotationSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_GetRotationSensitivity_mD660472B1E1B4E4C2BB2F80A7545D148F1B48B12 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// if (cam.orthographic == false)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return cam.fieldOfView / 90.0f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cam_7;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_2, NULL);
		return ((float)(L_3/(90.0f)));
	}

IL_001f:
	{
		// return 1.0f;
		return (1.0f);
	}
}
// System.Void Exoa.Cameras.CameraBase::ClampRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ClampRotation_m87775ACAD1731C27F9BA248AD8A3D47A5F259E69 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// if (PitchClamp)
		bool L_0 = __this->___PitchClamp_35;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// currentPitch = Mathf.Clamp(NormalizeAngle(currentPitch), PitchMinMax.x, PitchMinMax.y);
		float L_1 = __this->___currentPitch_16;
		float L_2;
		L_2 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___PitchMinMax_36);
		float L_4 = L_3->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___PitchMinMax_36);
		float L_6 = L_5->___y_1;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, L_4, L_6, NULL);
		__this->___currentPitch_16 = L_7;
	}

IL_0035:
	{
		// if (YawClamp)
		bool L_8 = __this->___YawClamp_40;
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// currentYaw = Mathf.Clamp(NormalizeAngle(currentYaw), YawMinMax.x, YawMinMax.y);
		float L_9 = __this->___currentYaw_17;
		float L_10;
		L_10 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___YawMinMax_41);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___YawMinMax_41);
		float L_14 = L_13->___y_1;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, L_12, L_14, NULL);
		__this->___currentYaw_17 = L_15;
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::RotateFromVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var sensitivity = GetRotationSensitivity();
		float L_0;
		L_0 = CameraBase_GetRotationSensitivity_mD660472B1E1B4E4C2BB2F80A7545D148F1B48B12(__this, NULL);
		V_0 = L_0;
		// if (allowYawRotation)
		bool L_1 = __this->___allowYawRotation_38;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// deltaYaw = delta.x * YawSensitivity * sensitivity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___delta0;
		float L_3 = L_2.___x_0;
		float L_4 = __this->___YawSensitivity_39;
		float L_5 = V_0;
		__this->___deltaYaw_18 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// currentYaw += deltaYaw;
		float L_6 = __this->___currentYaw_17;
		float L_7 = __this->___deltaYaw_18;
		__this->___currentYaw_17 = ((float)il2cpp_codegen_add(L_6, L_7));
	}

IL_0037:
	{
		// if (allowPitchRotation)
		bool L_8 = __this->___allowPitchRotation_33;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// deltaPitch = -delta.y * PitchSensitivity * sensitivity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___delta0;
		float L_10 = L_9.___y_1;
		float L_11 = __this->___PitchSensitivity_34;
		float L_12 = V_0;
		__this->___deltaPitch_19 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_10)), L_11)), L_12));
		// currentPitch += deltaPitch;
		float L_13 = __this->___currentPitch_16;
		float L_14 = __this->___deltaPitch_19;
		__this->___currentPitch_16 = ((float)il2cpp_codegen_add(L_13, L_14));
	}

IL_0068:
	{
		// ClampRotation();
		VirtualActionInvoker0::Invoke(53 /* System.Void Exoa.Cameras.CameraBase::ClampRotation() */, __this);
		// }
		return;
	}
}
// System.Single Exoa.Cameras.CameraBase::ModularClamp(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_ModularClamp_mC4CFDD2D0DB04DF328EC7C105C91EBEA39278007 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___val0, float ___min1, float ___max2, float ___rangemin3, float ___rangemax4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var modulus = Mathf.Abs(rangemax - rangemin);
		float L_0 = ___rangemax4;
		float L_1 = ___rangemin3;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		V_0 = L_2;
		// if ((val %= modulus) < 0f) val += modulus;
		float L_3 = ___val0;
		float L_4 = V_0;
		float L_5 = (fmodf(L_3, L_4));
		___val0 = L_5;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		// if ((val %= modulus) < 0f) val += modulus;
		float L_6 = ___val0;
		float L_7 = V_0;
		___val0 = ((float)il2cpp_codegen_add(L_6, L_7));
	}

IL_001d:
	{
		// return Mathf.Clamp(val + Mathf.Min(rangemin, rangemax), min, max);
		float L_8 = ___val0;
		float L_9 = ___rangemin3;
		float L_10 = ___rangemax4;
		float L_11;
		L_11 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_9, L_10, NULL);
		float L_12 = ___min1;
		float L_13 = ___max2;
		float L_14;
		L_14 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_8, L_11)), L_12, L_13, NULL);
		return L_14;
	}
}
// System.Single Exoa.Cameras.CameraBase::NormalizeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___a0, const RuntimeMethod* method) 
{
	{
		// if (a > 180) a -= 360;
		float L_0 = ___a0;
		if ((!(((float)L_0) > ((float)(180.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (a > 180) a -= 360;
		float L_1 = ___a0;
		___a0 = ((float)il2cpp_codegen_subtract(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (a < -180) a += 360;
		float L_2 = ___a0;
		if ((!(((float)L_2) < ((float)(-180.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (a < -180) a += 360;
		float L_3 = ___a0;
		___a0 = ((float)il2cpp_codegen_add(L_3, (360.0f)));
	}

IL_0022:
	{
		// return a;
		float L_4 = ___a0;
		return L_4;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetRotationFromPitchYaw_mDB8641926F8B0CDBB6DA2616630EAE73160D5FAE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(currentPitch, currentYaw, 0);
		float L_0 = __this->___currentPitch_16;
		float L_1 = __this->___currentYaw_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_0, L_1, (0.0f), NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetRotationFromPitchYaw_mEF2C5D1D779AF58154AF94DFFE39071DA94AB442 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___pitch0, float ___yaw1, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(pitch, yaw, 0);
		float L_0 = ___pitch0;
		float L_1 = ___yaw1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_0, L_1, (0.0f), NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetRotationFromPitchYaw_m1FBB12AE4D23A0A7EEFFA3873CDE5619F44B9F8B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pitchYawVec0, const RuntimeMethod* method) 
{
	{
		// return Quaternion.Euler(pitchYawVec.x, pitchYawVec.y, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pitchYawVec0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___pitchYawVec0;
		float L_3 = L_2.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_1, L_3, (0.0f), NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 Exoa.Cameras.CameraBase::GetRotationToPitchYaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_GetRotationToPitchYaw_m9544A2FA915BAA0B7589C2CFAB5825CC305AC38A (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(finalRotation.eulerAngles.x, finalRotation.eulerAngles.y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = (&__this->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_0, NULL);
		float L_2 = L_1.___x_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = (&__this->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_3, NULL);
		float L_5 = L_4.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Exoa.Cameras.CameraBase::GetRotationToPitchYaw(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_GetRotationToPitchYaw_mC72E9A3D9A82F510D5C011A356B25DC9018804FB (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(NormalizeAngle(rot.eulerAngles.x), rot.eulerAngles.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rot0), NULL);
		float L_1 = L_0.___x_2;
		float L_2;
		L_2 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rot0), NULL);
		float L_4 = L_3.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Exoa.Cameras.CameraBase::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ResetCamera_mFAE2BBF5E0B1CB07C9AFC494F65A72F8843C92A7 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// throw new Exception("ResetCamera needs to be overridden!");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EA5DCC322D2959462ED137CC52CE609242F2813)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CameraBase_ResetCamera_mFAE2BBF5E0B1CB07C9AFC494F65A72F8843C92A7_RuntimeMethod_var)));
	}
}
// System.Void Exoa.Cameras.CameraBase::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetResetValues_m55AC07FAB2B93D36E1CFD641633BF981293CCA21 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___distanceOrSize2, const RuntimeMethod* method) 
{
	{
		// throw new Exception("SetResetValues needs to be overridden!");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF63C4C37D0451CFA4D55A009F53652D5669D045)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CameraBase_SetResetValues_m55AC07FAB2B93D36E1CFD641633BF981293CCA21_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBase::GetRotateAroundVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_GetRotateAroundVector_m8864F6597A825A2674319837D870C592AB5A71E9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// return Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraToInstant(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m5DB65DFB848F581FCB787C27B7E6FB53E1582F95 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraToInstant(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m4ACE2A2743FAD56DCA40E2EB8FCEFF6B83732B56 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetDistanceOrSize, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81(__this, L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraToInstant(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m93DA767EBB0A2BB7CD0B1E863DFCCB7D4EFEC8B2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetRotation, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___targetRotation1;
		CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492(__this, L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraToInstant(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m0F904C4315895AA343490327ED9F00CA1D3F2B07 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetRotation, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___targetRotation1;
		CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9(__this, L_0, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraToInstant(UnityEngine.Vector3,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_mCD021DE0D76C35FA8DFCAD6E88E67A941B3F0CBE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetDistanceOrSize, targetRotation, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___targetRotation2;
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraToInstant(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_mD3A24CE2345D8E6AA759BE83902572DE3E3CCEC3 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetDistanceOrSize, targetRotation, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___targetRotation2;
		CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5(__this, L_0, L_1, L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraTo(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mC14FE119D2D881853C45455884BB8EF8E9622FEA (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraTo(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mE64272740842026C76E42BEE2EBB172EE29A17F2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetDistanceOrSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81(__this, L_0, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraTo(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_m6E2505294D831FB2187BF5B667A3053FFA0AB74D (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___targetRotation1;
		CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492(__this, L_0, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_m76B48A798D0A0E1CC684F84F5CE0CF0F97008638 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___targetRotation1;
		CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9(__this, L_0, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraTo(UnityEngine.Vector3,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mB83FC57A3431D8FC85CE70FC106EA5C13C1930E0 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetDistanceOrSize, targetRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___targetRotation2;
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::MoveCameraTo(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_m479E0E3D204F7119BF3E2AB85451AE121E7120E4 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, targetDistanceOrSize, targetRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___targetRotation2;
		CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5(__this, L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___instant1, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, false, -1, false, Quaternion.identity, true, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_2 = ___instant1;
		VirtualActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(62 /* System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean) */, __this, L_0, (bool)0, (-1.0f), (bool)0, L_1, (bool)1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, bool ___instant2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, true, targetDistanceOrSize, false, Quaternion.identity, true, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_3 = ___instant2;
		VirtualActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(62 /* System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean) */, __this, L_0, (bool)1, L_1, (bool)0, L_2, (bool)1, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, bool ___instant2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, false, -1, true, GetRotationFromPitchYaw(targetRotation), true, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___targetRotation1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(56 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw(UnityEngine.Vector2) */, __this, L_1);
		bool L_3 = ___instant2;
		VirtualActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(62 /* System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean) */, __this, L_0, (bool)0, (-1.0f), (bool)1, L_2, (bool)1, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, bool ___instant2, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, false, -1, true, targetRotation, true, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___targetRotation1;
		bool L_2 = ___instant2;
		VirtualActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(62 /* System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean) */, __this, L_0, (bool)0, (-1.0f), (bool)1, L_1, (bool)1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, bool ___instant3, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, true, targetDistanceOrSize, true, GetRotationFromPitchYaw(targetRotation), true, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___targetRotation2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(56 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw(UnityEngine.Vector2) */, __this, L_2);
		bool L_4 = ___instant3;
		VirtualActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(62 /* System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean) */, __this, L_0, (bool)1, L_1, (bool)1, L_3, (bool)1, L_4);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistanceOrSize1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, bool ___instant3, const RuntimeMethod* method) 
{
	{
		// FocusCamera(targetPosition, true, targetDistanceOrSize, true, targetRotation, true, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetPosition0;
		float L_1 = ___targetDistanceOrSize1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___targetRotation2;
		bool L_3 = ___instant3;
		VirtualActionInvoker7< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(62 /* System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean) */, __this, L_0, (bool)1, L_1, (bool)1, L_2, (bool)1, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m2795C9D5FD5CBBE59B7D78BCE9B07BDCB3BFBAA2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___changeDistance1, float ___targetDistanceOrSize2, bool ___changeRotation3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation4, bool ___allowYOffsetFromGround5, bool ___instant6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral251A33F7BAB93B40FB03CD75542109636073F109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBABC994BC38117BAF48D4B32D062E27706A948BB);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B2_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B1_0 = NULL;
	{
		//  Log("FocusCamera(pos:" + targetPosition +
		//      " changeDistance:" + changeDistance + " dist:" + targetDistanceOrSize +
		//      " changeRotation:" + changeRotation + " rot:" + targetRotation +
		// " allowYOffset:" + allowYOffsetFromGround +
		// " instant:" + instant);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralBABC994BC38117BAF48D4B32D062E27706A948BB);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBABC994BC38117BAF48D4B32D062E27706A948BB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPosition0;
		V_0 = L_3;
		String_t* L_4;
		L_4 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___changeDistance1), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___targetDistanceOrSize2), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13;
		L_13 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___changeRotation3), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___targetRotation4;
		V_1 = L_16;
		String_t* L_17;
		L_17 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_1), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral251A33F7BAB93B40FB03CD75542109636073F109);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral251A33F7BAB93B40FB03CD75542109636073F109);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		String_t* L_20;
		L_20 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___allowYOffsetFromGround5), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		String_t* L_23;
		L_23 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___instant6), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_23);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_22, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_24, NULL);
		// this.focusTargetPosition = targetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___targetPosition0;
		__this->___focusTargetPosition_50 = L_25;
		// this.focusTargetDistanceOrSize = targetDistanceOrSize;
		float L_26 = ___targetDistanceOrSize2;
		__this->___focusTargetDistanceOrSize_51 = L_26;
		// this.focusTargetRotation = targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = ___targetRotation4;
		__this->___focusTargetRotation_52 = L_27;
		// this.isFocusing = true;
		__this->___isFocusing_55 = (bool)1;
		// this.enableFocusing = changeDistance;
		bool L_28 = ___changeDistance1;
		__this->___enableFocusing_53 = L_28;
		// this.enableRotationChange = changeRotation;
		bool L_29 = ___changeRotation3;
		__this->___enableRotationChange_54 = L_29;
		// this.allowYOffsetFromGround = allowYOffsetFromGround;
		bool L_30 = ___allowYOffsetFromGround5;
		__this->___allowYOffsetFromGround_56 = L_30;
		// CameraEvents.OnFocusStart?.Invoke();
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_31 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusStart_5;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_32 = L_31;
		G_B1_0 = L_32;
		if (L_32)
		{
			G_B2_0 = L_32;
			goto IL_00e4;
		}
	}
	{
		return;
	}

IL_00e4:
	{
		NullCheck(G_B2_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B5_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B4_0 = NULL;
	{
		// if (go != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// this.focusTargetBounds = go.GetBoundsRecursive();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___go0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = GameObjectExtensions_GetBoundsRecursive_m62484EC8E2A65A17A20BEDE0EEF7EDD9D38D0377(L_2, NULL);
		__this->___focusTargetBounds_49 = L_3;
		goto IL_0023;
	}

IL_0017:
	{
		// else this.focusTargetBounds = default(Bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4 = (&__this->___focusTargetBounds_49);
		il2cpp_codegen_initobj(L_4, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
	}

IL_0023:
	{
		// this.isFocusing = focusTargetBounds.size != Vector3.zero;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5 = (&__this->___focusTargetBounds_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_8;
		L_8 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_6, L_7, NULL);
		__this->___isFocusing_55 = L_8;
		// this.enableFocusing = true;
		__this->___enableFocusing_53 = (bool)1;
		// this.enableRotationChange = false;
		__this->___enableRotationChange_54 = (bool)0;
		// this.allowYOffsetFromGround = allowYOffsetFromGround;
		bool L_9 = ___allowYOffsetFromGround1;
		__this->___allowYOffsetFromGround_56 = L_9;
		// CameraEvents.OnFocusStart?.Invoke();
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_10 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusStart_5;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_005d;
		}
	}
	{
		return;
	}

IL_005d:
	{
		NullCheck(G_B5_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::StopFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// FocusCameraOnGameObject(null, false);
		VirtualActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool >::Invoke(63 /* System.Void Exoa.Cameras.CameraBase::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean) */, __this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (bool)0);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::DebugInputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_DebugInputs_m445B6E804DE1E81D82F1096B61A2E8B44336E19F (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// public InputMapFingerDrag oneFingerDrag = InputMapFingerDrag.RotateAround;
		__this->___oneFingerDrag_26 = 1;
		// public bool allowPitchRotation = true;
		__this->___allowPitchRotation_33 = (bool)1;
		// public float PitchSensitivity = 0.25f;
		__this->___PitchSensitivity_34 = (0.25f);
		// public bool PitchClamp = true;
		__this->___PitchClamp_35 = (bool)1;
		// public Vector2 PitchMinMax = new Vector2(5.0f, 90.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (5.0f), (90.0f), /*hidden argument*/NULL);
		__this->___PitchMinMax_36 = L_0;
		// protected Vector2 initialRotation = new Vector2(35, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (35.0f), (0.0f), /*hidden argument*/NULL);
		__this->___initialRotation_37 = L_1;
		// public bool allowYawRotation = true;
		__this->___allowYawRotation_38 = (bool)1;
		// public float YawSensitivity = 0.25f;
		__this->___YawSensitivity_39 = (0.25f);
		// public Vector2 YawMinMax = new Vector2(5.0f, 90.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (5.0f), (90.0f), /*hidden argument*/NULL);
		__this->___YawMinMax_41 = L_2;
		// public float maxTranslationSpeed = 3f;
		__this->___maxTranslationSpeed_42 = (3.0f);
		// public float focusRadiusMultiplier = 1f;
		__this->___focusRadiusMultiplier_44 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Exoa.Cameras.CameraBoundaries::ClampInBoundsXZ(UnityEngine.Vector3,System.Boolean&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBoundaries_ClampInBoundsXZ_m25A55A0F005F2B3A327CB7241EAF57E6CC66F462 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, bool* ___isInBoundaries1, float ___groundHeight2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isInBoundaries = true;
		bool* L_0 = ___isInBoundaries1;
		*((int8_t*)L_0) = (int8_t)1;
		// if (type == Type.Rectangle && boxCollider == null)
		int32_t L_1 = __this->___type_4;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___boxCollider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p0;
		return L_4;
	}

IL_001b:
	{
		// if (type == Type.Rectangle)
		int32_t L_5 = __this->___type_4;
		if (L_5)
		{
			goto IL_00bd;
		}
	}
	{
		// if (boxCollider.enabled)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->___boxCollider_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// bounds = boxCollider.bounds;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___boxCollider_6;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		__this->___bounds_8 = L_9;
		// boxCollider.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = __this->___boxCollider_6;
		NullCheck(L_10);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_10, (bool)0, NULL);
	}

IL_0050:
	{
		// bounds.center = bounds.center.SetY(groundHeight);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = (&__this->___bounds_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_12, NULL);
		float L_14 = ___groundHeight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_13, L_14, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B(L_11, L_15, NULL);
		// bounds.size = bounds.size.SetY(0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = (&__this->___bounds_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_17 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_18, (0.0f), NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128(L_16, L_19, NULL);
		// if (bounds.Contains(p.SetY(groundHeight)))
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___p0;
		float L_22 = ___groundHeight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_21, L_22, NULL);
		bool L_24;
		L_24 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555(L_20, L_23, NULL);
		if (!L_24)
		{
			goto IL_00a2;
		}
	}
	{
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___p0;
		return L_25;
	}

IL_00a2:
	{
		// isInBoundaries = false;
		bool* L_26 = ___isInBoundaries1;
		*((int8_t*)L_26) = (int8_t)0;
		// return bounds.ClosestPoint(p).SetY(p.y);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_27 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___p0;
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_29, L_31, NULL);
		return L_32;
	}

IL_00bd:
	{
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___p0;
		return L_33;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraBoundaries::ClampInBoundsXY(UnityEngine.Vector3,System.Boolean&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBoundaries_ClampInBoundsXY_m2646BC5DC70AFA2A1A06F8C37361F5E200259368 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, bool* ___isInBoundaries1, float ___groundHeight2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isInBoundaries = true;
		bool* L_0 = ___isInBoundaries1;
		*((int8_t*)L_0) = (int8_t)1;
		// if (type == Type.Rectangle && boxCollider == null)
		int32_t L_1 = __this->___type_4;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___boxCollider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p0;
		return L_4;
	}

IL_001b:
	{
		// if (type == Type.Rectangle)
		int32_t L_5 = __this->___type_4;
		if (L_5)
		{
			goto IL_00bd;
		}
	}
	{
		// if (boxCollider.enabled)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->___boxCollider_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// bounds = boxCollider.bounds;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___boxCollider_6;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		__this->___bounds_8 = L_9;
		// boxCollider.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = __this->___boxCollider_6;
		NullCheck(L_10);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_10, (bool)0, NULL);
	}

IL_0050:
	{
		// bounds.center = bounds.center.SetZ(groundHeight);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = (&__this->___bounds_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_12, NULL);
		float L_14 = ___groundHeight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = VectorExtensions_SetZ_m6ECD69157D41DF316BAA328B6F8B9DB9BBC161D2(L_13, L_14, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B(L_11, L_15, NULL);
		// bounds.size = bounds.size.SetZ(0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = (&__this->___bounds_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_17 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = VectorExtensions_SetZ_m6ECD69157D41DF316BAA328B6F8B9DB9BBC161D2(L_18, (0.0f), NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128(L_16, L_19, NULL);
		// if (bounds.Contains(p.SetZ(groundHeight)))
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___p0;
		float L_22 = ___groundHeight2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = VectorExtensions_SetZ_m6ECD69157D41DF316BAA328B6F8B9DB9BBC161D2(L_21, L_22, NULL);
		bool L_24;
		L_24 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555(L_20, L_23, NULL);
		if (!L_24)
		{
			goto IL_00a2;
		}
	}
	{
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___p0;
		return L_25;
	}

IL_00a2:
	{
		// isInBoundaries = false;
		bool* L_26 = ___isInBoundaries1;
		*((int8_t*)L_26) = (int8_t)0;
		// return bounds.ClosestPoint(p).SetZ(p.z);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_27 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___p0;
		float L_31 = L_30.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = VectorExtensions_SetZ_m6ECD69157D41DF316BAA328B6F8B9DB9BBC161D2(L_29, L_31, NULL);
		return L_32;
	}

IL_00bd:
	{
		// return p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___p0;
		return L_33;
	}
}
// System.Void Exoa.Cameras.CameraBoundaries::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBoundaries_OnDrawGizmos_m1513F415C90BC7F5775AB778BEBCD2C52FDA8C54 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!drawGizmos)
		bool L_0 = __this->___drawGizmos_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (type == Type.Rectangle && boxCollider == null)
		int32_t L_1 = __this->___type_4;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___boxCollider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		return;
	}

IL_0020:
	{
		// Color c = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_0 = L_4;
		// c.a = .5f;
		(&V_0)->___a_3 = (0.5f);
		// Gizmos.color = c;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_5, NULL);
		// if (type == Type.Rectangle && bounderiesCollider is BoxCollider)
		int32_t L_6 = __this->___type_4;
		if (L_6)
		{
			goto IL_00b9;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->___bounderiesCollider_5;
		if (!((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_7, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var)))
		{
			goto IL_00b9;
		}
	}
	{
		// Bounds b = boxCollider.bounds;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___boxCollider_6;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		V_1 = L_9;
		// b.center = bounds.center.SetY(0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_10 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_11, (0.0f), NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_1), L_12, NULL);
		// b.size = bounds.size.SetY(0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_13 = (&__this->___bounds_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_14, (0.0f), NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128((&V_1), L_15, NULL);
		// Gizmos.matrix = boxCollider.transform.localToWorldMatrix;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16 = __this->___boxCollider_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_17, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_18, NULL);
		// Gizmos.DrawCube(b.center, b.size);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F(L_19, L_20, NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraBoundaries::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBoundaries__ctor_mF74842B250A8981EBF5E78D4B91AB78859FA0EC0 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Exoa.Cameras.ITouchCamera Exoa.Cameras.CameraModeSwitcher::get_CurrentCameraMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		// if (orthoMode)
		bool L_0 = __this->___orthoMode_9;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return camOrtho;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_1 = __this->___camOrtho_5;
		return L_1;
	}

IL_000f:
	{
		// return camPersp;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp_6;
		return L_2;
	}
}
// System.Boolean Exoa.Cameras.CameraModeSwitcher::get_DisableMoves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraModeSwitcher_get_DisableMoves_mB9C0C394F973E4D94AFFB5F7ACD0A5ACD37A3475 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CurrentCameraMode.DisableMoves;
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Exoa.Cameras.ITouchCamera::get_DisableMoves() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::set_DisableMoves(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_set_DisableMoves_m9E74E9A00F1548FB7E24669EADC7749B0B6501BD (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// camOrtho.DisableMoves = value;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho_5;
		bool L_1 = ___value0;
		NullCheck(L_0);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_0, L_1, NULL);
		// camPersp.DisableMoves = value;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp_6;
		bool L_3 = ___value0;
		NullCheck(L_2);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraModeSwitcher::get_FinalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraModeSwitcher_get_FinalRotation_m71A34CEE940A5D25291AAC2B98E15F799DF6B9CB (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Quaternion FinalRotation => CurrentCameraMode.FinalRotation;
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = InterfaceFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(2 /* UnityEngine.Quaternion Exoa.Cameras.ITouchCamera::get_FinalRotation() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraModeSwitcher::get_FinalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraModeSwitcher_get_FinalPosition_mBD300EDDD2D393D60DA2CE63F4BFD71634725799 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 FinalPosition => CurrentCameraMode.FinalPosition;
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(3 /* UnityEngine.Vector3 Exoa.Cameras.ITouchCamera::get_FinalPosition() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.Vector3 Exoa.Cameras.CameraModeSwitcher::get_FinalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraModeSwitcher_get_FinalOffset_mCD0069147E582D743B94B5DA08898551236783BA (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 FinalOffset => CurrentCameraMode.FinalOffset;
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4 /* UnityEngine.Vector3 Exoa.Cameras.ITouchCamera::get_FinalOffset() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Exoa.Cameras.CameraModeSwitcher::get_FinalDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraModeSwitcher_get_FinalDistance_m1559CB41B99702E0A75D78C321C295A40DA17B55 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float FinalDistance => CurrentCameraMode.FinalDistance;
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(6 /* System.Single Exoa.Cameras.ITouchCamera::get_FinalDistance() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.Vector2 Exoa.Cameras.CameraModeSwitcher::get_PitchAndYaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraModeSwitcher_get_PitchAndYaw_mC203BD93C5DE6DE6495980095C4D0C32366E0075 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2 PitchAndYaw => CurrentCameraMode.PitchAndYaw;
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(7 /* UnityEngine.Vector2 Exoa.Cameras.ITouchCamera::get_PitchAndYaw() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Exoa.Cameras.CameraModeSwitcher::IsRotating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraModeSwitcher_IsRotating_m48A14D19602A7349A3D43D5BFED8926E96F1A3AF (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRotating() => CurrentCameraMode.IsRotating();
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Exoa.Cameras.ITouchCamera::IsRotating() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnDestroy_mA419579758396C52056D2367E98D228DB56716BA (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraEvents.OnRequestButtonAction -= OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_0 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_1 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_1, __this, (intptr_t)((void*)CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2 = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_2, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_2, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestObjectFocus -= FocusCameraOnGameObject;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_3 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_4 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 36)), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3 = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_5, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_5, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestGroundHeightChange -= SetGroundHeightAnimated;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_6 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_7 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_7, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4 = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_8, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_8, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestStopFocus -= StopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_9 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_10 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 37)), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7 = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_11, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_11, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_Awake_m9AEA32108DA198B88F2BCA9985752B094FE22656 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69BFC3090694E99CFB0F566221D27FE9E9AD7305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE61DE2ACB4633F8C4FF9D273BFC11CCE5E142AB);
		s_Il2CppMethodInitialized = true;
	}
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B8_0 = NULL;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B9_1 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B11_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B10_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B14_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B13_0 = NULL;
	{
		// Instance = this;
		((CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_StaticFields*)il2cpp_codegen_static_fields_for(CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_StaticFields*)il2cpp_codegen_static_fields_for(CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// camOrtho = GetComponent<CameraOrthoBase>();
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0;
		L_0 = Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA(__this, Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA_RuntimeMethod_var);
		__this->___camOrtho_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camOrtho_5), (void*)L_0);
		// camPersp = GetComponent<CameraPerspBase>();
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_1;
		L_1 = Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79(__this, Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79_RuntimeMethod_var);
		__this->___camPersp_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camPersp_6), (void*)L_1);
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_7), (void*)L_2);
		// if (camOrtho.defaultMode && camPersp.defaultMode)
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_3 = __this->___camOrtho_5;
		NullCheck(L_3);
		bool L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_3)->___defaultMode_4;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_5 = __this->___camPersp_6;
		NullCheck(L_5);
		bool L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_5)->___defaultMode_4;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("Error: only one camera mode can be marked as defaultMode!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral69BFC3090694E99CFB0F566221D27FE9E9AD7305, NULL);
	}

IL_004e:
	{
		// if (!camOrtho.defaultMode && !camPersp.defaultMode)
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_7 = __this->___camOrtho_5;
		NullCheck(L_7);
		bool L_8 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_7)->___defaultMode_4;
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_9 = __this->___camPersp_6;
		NullCheck(L_9);
		bool L_10 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_9)->___defaultMode_4;
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogError("Error: no camera mode is marked as defaultMode!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBE61DE2ACB4633F8C4FF9D273BFC11CCE5E142AB, NULL);
		// camOrtho.defaultMode = true;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_11 = __this->___camOrtho_5;
		NullCheck(L_11);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_11)->___defaultMode_4 = (bool)1;
	}

IL_007e:
	{
		// orthoMode = camOrtho.defaultMode;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_12 = __this->___camOrtho_5;
		NullCheck(L_12);
		bool L_13 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_12)->___defaultMode_4;
		__this->___orthoMode_9 = L_13;
		// matrixLerp = orthoMode ? 0 : 1;
		bool L_14 = __this->___orthoMode_9;
		G_B7_0 = __this;
		if (L_14)
		{
			G_B8_0 = __this;
			goto IL_009b;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_009c;
	}

IL_009b:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_009c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___matrixLerp_8 = ((float)G_B9_0);
		// switchMoveLerp.Reset(matrixLerp);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_15 = (&__this->___switchMoveLerp_13);
		float L_16 = __this->___matrixLerp_8;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_15, L_16, NULL);
		// CameraEvents.OnBeforeSwitchPerspective?.Invoke(orthoMode);
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_17 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_18 = L_17;
		G_B10_0 = L_18;
		if (L_18)
		{
			G_B11_0 = L_18;
			goto IL_00be;
		}
	}
	{
		goto IL_00c9;
	}

IL_00be:
	{
		bool L_19 = __this->___orthoMode_9;
		NullCheck(G_B11_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B11_0, L_19, NULL);
	}

IL_00c9:
	{
		// CameraEvents.OnAfterSwitchPerspective?.Invoke(orthoMode);
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_20 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_21 = L_20;
		G_B13_0 = L_21;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00d4;
		}
	}
	{
		goto IL_00df;
	}

IL_00d4:
	{
		bool L_22 = __this->___orthoMode_9;
		NullCheck(G_B14_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B14_0, L_22, NULL);
	}

IL_00df:
	{
		// CameraEvents.OnRequestButtonAction += OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_23 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_24 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_24, __this, (intptr_t)((void*)CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var), NULL);
		Delegate_t* L_25;
		L_25 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_23, L_24, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2 = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_25, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction_2), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_25, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestObjectFocus += FocusCameraOnGameObject;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_26 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_27 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_27, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 36)), NULL);
		Delegate_t* L_28;
		L_28 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_26, L_27, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3 = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_28, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus_3), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_28, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestGroundHeightChange += SetGroundHeightAnimated;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_29 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_30 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_30, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_31;
		L_31 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_29, L_30, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4 = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_31, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange_4), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_31, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		// CameraEvents.OnRequestStopFocus += StopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_32 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_33 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_33, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 37)), NULL);
		Delegate_t* L_34;
		L_34 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_32, L_33, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7 = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_34, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus_7), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_34, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_LateUpdate_m775450AC165AFCCD738052CB33F4CB914DF63F72 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* G_B4_0 = NULL;
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* G_B4_1 = NULL;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B4_2 = NULL;
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* G_B3_0 = NULL;
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* G_B3_1 = NULL;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* G_B5_1 = NULL;
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* G_B5_2 = NULL;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B5_3 = NULL;
	{
		// orthoMatrix = camOrtho.GetMatrix();
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho_5;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(44 /* UnityEngine.Matrix4x4 Exoa.Cameras.CameraBase::GetMatrix() */, L_0);
		__this->___orthoMatrix_10 = L_1;
		// perspectiveMatrix = camPersp.GetMatrix();
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp_6;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(44 /* UnityEngine.Matrix4x4 Exoa.Cameras.CameraBase::GetMatrix() */, L_2);
		__this->___perspectiveMatrix_11 = L_3;
		// if (CameraInputs.ChangePerspective())
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CameraInputs_ChangePerspective_m8E088A51F122522CC9E3A29E929F4E942240AD88(NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// TogglePerspective();
		CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103(__this, NULL);
	}

IL_002f:
	{
		// matrixLerp = switchMove.Update(ref switchMoveLerp, (orthoMode ? 0 : 1), () => OnAfterSwitch(orthoMode));
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_5 = __this->___switchMove_12;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_6 = (&__this->___switchMoveLerp_13);
		bool L_7 = __this->___orthoMode_9;
		G_B3_0 = L_6;
		G_B3_1 = L_5;
		G_B3_2 = __this;
		if (L_7)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_5;
			G_B4_2 = __this;
			goto IL_0047;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0048:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7_RuntimeMethod_var), NULL);
		NullCheck(G_B5_2);
		float L_9;
		L_9 = Springs_Update_mF8FA5925C2A18CE8CB097AA2975A88CE54BC24FA(G_B5_2, G_B5_1, ((float)G_B5_0), L_8, NULL);
		NullCheck(G_B5_3);
		G_B5_3->___matrixLerp_8 = L_9;
		// Matrix4x4 mergedMatrix = MatrixLerp(orthoMatrix, perspectiveMatrix, matrixLerp);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = __this->___orthoMatrix_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11 = __this->___perspectiveMatrix_11;
		float L_12 = __this->___matrixLerp_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = CameraModeSwitcher_MatrixLerp_mA8D5EF3229D5E82DFB61AC806DF33493707A0FBB(__this, L_10, L_11, L_12, NULL);
		V_0 = L_13;
		// cam.projectionMatrix = mergedMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___cam_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15 = V_0;
		NullCheck(L_14);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_14, L_15, NULL);
	}
	try
	{// begin try (depth: 1)
		// Quaternion rotation = Quaternion.Lerp(camOrtho.FinalRotation, camPersp.FinalRotation, matrixLerp);
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_16 = __this->___camOrtho_5;
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(L_16, NULL);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_18 = __this->___camPersp_6;
		NullCheck(L_18);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(L_18, NULL);
		float L_20 = __this->___matrixLerp_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_17, L_19, L_20, NULL);
		V_2 = L_21;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_2;
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_23, NULL);
		// }
		goto IL_00b7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b4;
		}
		throw e;
	}

CATCH_00b4:
	{// begin catch(System.Exception)
		// catch (System.Exception) { };
		// catch (System.Exception) { };
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	}// end catch (depth: 1)

IL_00b7:
	{
		// Vector3 position = Vector3.Lerp(camOrtho.FinalPosition, camPersp.FinalPosition, matrixLerp);
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_24 = __this->___camOrtho_5;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline(L_24, NULL);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_26 = __this->___camPersp_6;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline(L_26, NULL);
		float L_28 = __this->___matrixLerp_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_25, L_27, L_28, NULL);
		V_1 = L_29;
		// if (!float.IsNaN(position.x) && !float.IsNaN(position.y) && !float.IsNaN(position.z))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
		float L_31 = L_30.___x_2;
		bool L_32;
		L_32 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_31, NULL);
		if (L_32)
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_1;
		float L_34 = L_33.___y_3;
		bool L_35;
		L_35 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_34, NULL);
		if (L_35)
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		float L_37 = L_36.___z_4;
		bool L_38;
		L_38 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_37, NULL);
		if (L_38)
		{
			goto IL_010c;
		}
	}
	{
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_1;
		NullCheck(L_39);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_39, L_40, NULL);
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::DisableCameraMoves(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_DisableCameraMoves_m8C7F68356FDCCFB93FD4DDD52076C904DFC92C21 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		// camOrtho.DisableMoves = active;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho_5;
		bool L_1 = ___active0;
		NullCheck(L_0);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_0, L_1, NULL);
		// camPersp.DisableMoves = active;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp_6;
		bool L_3 = ___active0;
		NullCheck(L_2);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_ResetCamera_m842DFB2047E6891B3E5C06D3D589D05FDA12DB96 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopFocus();
		CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE(__this, NULL);
		// CurrentCameraMode.ResetCamera();
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Exoa.Cameras.ITouchCamera::ResetCamera() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetResetValues_m1E26F125355EA24253FE302125EAE362E4EA49B4 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___distance2, float ___size3, const RuntimeMethod* method) 
{
	{
		// camOrtho.SetResetValues(offset, rotation, size);
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___offset0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation1;
		float L_3 = ___size3;
		NullCheck(L_0);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(60 /* System.Void Exoa.Cameras.CameraBase::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, L_0, L_1, L_2, L_3);
		// camPersp.SetResetValues(offset, rotation, distance);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_4 = __this->___camPersp_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___offset0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rotation1;
		float L_7 = ___distance2;
		NullCheck(L_4);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(60 /* System.Void Exoa.Cameras.CameraBase::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::OnBeforeSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnBeforeSwitch_mD0A1AFC870CEC662E5F1E01CBF2238F259FBEAA9 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___orthoOn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B5_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B4_0 = NULL;
	{
		// if (orthoOn)
		bool L_0 = ___orthoOn0;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// camOrtho.FinalOffset = camPersp.FinalOffset;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_1 = __this->___camOrtho_5;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline(L_2, NULL);
		NullCheck(L_1);
		CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline(L_1, L_3, NULL);
		// camOrtho.SetSizeByDistance(camPersp.FinalDistance);
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_4 = __this->___camOrtho_5;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_5 = __this->___camPersp_6;
		NullCheck(L_5);
		float L_6;
		L_6 = CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline(L_5, NULL);
		NullCheck(L_4);
		CameraOrthoBase_SetSizeByDistance_mBC7DE819F563B85E9F6790A86409CE45DF307CF7(L_4, L_6, NULL);
		// camOrtho.SetPositionByOffset();
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_7 = __this->___camOrtho_5;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(68 /* System.Void Exoa.Cameras.CameraOrthoBase::SetPositionByOffset() */, L_7);
		// camPersp.enabled = false;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_8 = __this->___camPersp_6;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		goto IL_0080;
	}

IL_0048:
	{
		// camPersp.FinalOffset = camOrtho.FinalOffset;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_9 = __this->___camPersp_6;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_10 = __this->___camOrtho_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline(L_10, NULL);
		NullCheck(L_9);
		CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline(L_9, L_11, NULL);
		// camPersp.SetPositionByDistance(camOrtho.GetDistanceFromSize());
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_12 = __this->___camPersp_6;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_13 = __this->___camOrtho_5;
		NullCheck(L_13);
		float L_14;
		L_14 = CameraOrthoBase_GetDistanceFromSize_mC2202567822B0357A00FAFAE7C7B3BC6A4C1DEC7(L_13, NULL);
		NullCheck(L_12);
		CameraPerspBase_SetPositionByDistance_mF190D5F7B993844B1B8448587D28F4F3893E25A4(L_12, L_14, NULL);
		// camOrtho.enabled = false;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_15 = __this->___camOrtho_5;
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)0, NULL);
	}

IL_0080:
	{
		// CameraEvents.OnBeforeSwitchPerspective?.Invoke(orthoMode);
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_16 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective_0;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_17 = L_16;
		G_B4_0 = L_17;
		if (L_17)
		{
			G_B5_0 = L_17;
			goto IL_008a;
		}
	}
	{
		return;
	}

IL_008a:
	{
		bool L_18 = __this->___orthoMode_9;
		NullCheck(G_B5_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B5_0, L_18, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::OnAfterSwitch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnAfterSwitch_mEB52881E43B9C9C91A86EC3BCA4F3812736B437C (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___orthoOn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B5_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B4_0 = NULL;
	{
		// if (!orthoOn)
		bool L_0 = ___orthoOn0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// camPersp.enabled = true;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_1 = __this->___camPersp_6;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// cam.orthographic = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cam_7;
		NullCheck(L_2);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_2, (bool)0, NULL);
		goto IL_0035;
	}

IL_001d:
	{
		// camOrtho.enabled = true;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_3 = __this->___camOrtho_5;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		// cam.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_7;
		NullCheck(L_4);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_4, (bool)1, NULL);
	}

IL_0035:
	{
		// CameraEvents.OnAfterSwitchPerspective?.Invoke(orthoMode);
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_5 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective_1;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		bool L_7 = __this->___orthoMode_9;
		NullCheck(G_B5_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B5_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::OnRequestButtonAction(Exoa.Events.CameraEvents/Action,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, int32_t ___action0, bool ___active1, const RuntimeMethod* method) 
{
	{
		// if (action == CameraEvents.Action.ForcePerspectiveMode && orthoMode)
		int32_t L_0 = ___action0;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->___orthoMode_9;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// TogglePerspective();
		CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103(__this, NULL);
		return;
	}

IL_0013:
	{
		// else if (action == CameraEvents.Action.SwitchPerspective)
		int32_t L_2 = ___action0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// TogglePerspective();
		CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103(__this, NULL);
		return;
	}

IL_001d:
	{
		// else if (action == CameraEvents.Action.ResetCameraPositionRotation)
		int32_t L_3 = ___action0;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0028;
		}
	}
	{
		// ResetCamera();
		CameraModeSwitcher_ResetCamera_m842DFB2047E6891B3E5C06D3D589D05FDA12DB96(__this, NULL);
		return;
	}

IL_0028:
	{
		// else if (action == CameraEvents.Action.DisableCameraMoves)
		int32_t L_4 = ___action0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		// DisableCameraMoves(active);
		bool L_5 = ___active1;
		CameraModeSwitcher_DisableCameraMoves_m8C7F68356FDCCFB93FD4DDD52076C904DFC92C21(__this, L_5, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::TogglePerspective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		// orthoMode = !orthoMode;
		bool L_0 = __this->___orthoMode_9;
		__this->___orthoMode_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// OnBeforeSwitch(orthoMode);
		bool L_1 = __this->___orthoMode_9;
		CameraModeSwitcher_OnBeforeSwitch_mD0A1AFC870CEC662E5F1E01CBF2238F259FBEAA9(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Exoa.Cameras.CameraModeSwitcher::MatrixLerp(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraModeSwitcher_MatrixLerp_mA8D5EF3229D5E82DFB61AC806DF33493707A0FBB (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___from0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___to1, float ___time2, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Matrix4x4 ret = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// for (int i = 0; i < 16; i++)
		V_1 = 0;
		goto IL_002e;
	}

IL_000c:
	{
		// ret[i] = Mathf.Lerp(from[i], to[i], time);
		int32_t L_0 = V_1;
		int32_t L_1 = V_1;
		float L_2;
		L_2 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&___from0), L_1, NULL);
		int32_t L_3 = V_1;
		float L_4;
		L_4 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&___to1), L_3, NULL);
		float L_5 = ___time2;
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_2, L_4, L_5, NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0((&V_0), L_0, L_6, NULL);
		// for (int i = 0; i < 16; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_000c;
		}
	}
	{
		// return ret;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = V_0;
		return L_9;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::StopFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		// camOrtho.StopFocus();
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho_5;
		NullCheck(L_0);
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(L_0, NULL);
		// camPersp.StopFocus();
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_1 = __this->___camPersp_6;
		NullCheck(L_1);
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(L_1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCameraOnGameObject_mE66C9E3904CF438FB2640705D1E0AEF030B0984B (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopFocus();
		CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE(__this, NULL);
		// CurrentCameraMode.FocusCameraOnGameObject(go, allowYOffsetFromGround);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___go0;
		bool L_2 = ___allowYOffsetFromGround1;
		NullCheck(L_0);
		InterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool >::Invoke(32 /* System.Void Exoa.Cameras.ITouchCamera::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::SetGroundHeightAnimated(System.Single,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetGroundHeightAnimated_mCADFB05B1121BE080E9620C494631465BBDEA72A (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, float ___newHeight0, bool ___animate1, float ___duration2, const RuntimeMethod* method) 
{
	{
		// camPersp.SetGroundHeightAnimated(newHeight, animate, duration);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_0 = __this->___camPersp_6;
		float L_1 = ___newHeight0;
		bool L_2 = ___animate1;
		float L_3 = ___duration2;
		NullCheck(L_0);
		CameraBase_SetGroundHeightAnimated_m59681B8244476ACF2A87C9537FE703CF05FD6F71(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Exoa.Cameras.CameraModeSwitcher::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraModeSwitcher_GetMatrix_mE15F398D5D5416650D022010F072247FD196AFDE (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CurrentCameraMode.GetMatrix();
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8 /* UnityEngine.Matrix4x4 Exoa.Cameras.ITouchCamera::GetMatrix() */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::SetGroundHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetGroundHeight_m4002DDC0E994C2215419CF8212D23F214DEE833E (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, float ___y0, const RuntimeMethod* method) 
{
	{
		// camPersp.SetGroundHeight(y);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_0 = __this->___camPersp_6;
		float L_1 = ___y0;
		NullCheck(L_0);
		CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::RotateFromVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_RotateFromVector_m66108A28C8D8B0A9F5708BF80FD9F70A52E5EBA6 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.RotateFromVector(delta);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___delta0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(11 /* System.Void Exoa.Cameras.ITouchCamera::RotateFromVector(UnityEngine.Vector2) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetResetValues_mF94F9950FAB31B34C1DC6097AFC605A309A52E45 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___distanceOrSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.SetResetValues(offset, rotation, distanceOrSize);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___offset0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation1;
		float L_3 = ___distanceOrSize2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(13 /* System.Void Exoa.Cameras.ITouchCamera::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraToInstant(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_m1793D75C5A55BCAC3259F42972ED0A7B283C5D10 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraToInstant(targetPosition);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraToInstant(UnityEngine.Vector3) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraToInstant(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mCB28C038AD559F5DDF351DA8E4C6ADCBA429E082 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraToInstant(targetPosition, targetDistance);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(15 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraToInstant(UnityEngine.Vector3,System.Single) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraToInstant(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mF7CBB48E20281195FE339A4DCA8326C0AA09CD36 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraToInstant(targetPosition, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___targetRotation1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(16 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraToInstant(UnityEngine.Vector3,UnityEngine.Quaternion) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraToInstant(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mE0A17245149C8B158C5515C25B44858B226AE793 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraToInstant(targetPosition, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___targetRotation1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(17 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraToInstant(UnityEngine.Vector3,UnityEngine.Vector2) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraToInstant(UnityEngine.Vector3,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_m40F439D547F8D437067793D645A6FA541AFA5959 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraToInstant(targetPosition, targetDistance, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___targetRotation2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(18 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraToInstant(UnityEngine.Vector3,System.Single,UnityEngine.Vector2) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraToInstant(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mE2047024A7D61FC5E96DF175456C6CCF274399E2 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraToInstant(targetPosition, targetDistance, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___targetRotation2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(19 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraToInstant(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraTo(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_mBFD57CF910CCD64C8DB500AA3FF6B437795EE713 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraTo(targetPosition);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(20 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraTo(UnityEngine.Vector3) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraTo(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m201D0DE90CFB53ADC8F1A4836D85C0B3EF0A8A79 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraTo(targetPosition, targetDistance);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(21 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraTo(UnityEngine.Vector3,System.Single) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_mF95D4F128129DC93CCB305BD11ECBEE158F7A0A4 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraTo(targetPosition, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___targetRotation1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(22 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraTo(UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m4B1AA61F314CAA001F4616C30216E7527062B4F0 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraTo(targetPosition, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___targetRotation1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(23 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraTo(UnityEngine.Vector3,UnityEngine.Vector2) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraTo(UnityEngine.Vector3,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m4690019115D552CD4DAD517E795118CBB3AD2E6D (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraTo(targetPosition, targetDistance, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___targetRotation2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(24 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraTo(UnityEngine.Vector3,System.Single,UnityEngine.Vector2) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::MoveCameraTo(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m617EA4F397D92E7FD6137DF5151A44D1C76FCD92 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.MoveCameraTo(targetPosition, targetDistance, targetRotation);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___targetRotation2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(25 /* System.Void Exoa.Cameras.ITouchCamera::MoveCameraTo(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCamera(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m3268FAEF5B952769C4241832F377547CF3597B31 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___instant1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.FocusCamera(targetPosition, instant);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		bool L_2 = ___instant1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool >::Invoke(26 /* System.Void Exoa.Cameras.ITouchCamera::FocusCamera(UnityEngine.Vector3,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCamera(UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m07E5F36E14BFF50BB00E8C13A87DB3BA208875AD (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, bool ___instant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.FocusCamera(targetPosition, targetDistance, instant);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		bool L_3 = ___instant2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, bool >::Invoke(27 /* System.Void Exoa.Cameras.ITouchCamera::FocusCamera(UnityEngine.Vector3,System.Single,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCamera(UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m01655E1E905A5A58CAC1E656B10B95FF9C85518F (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation1, bool ___instant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.FocusCamera(targetPosition, targetRotation, instant);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___targetRotation1;
		bool L_3 = ___instant2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool >::Invoke(28 /* System.Void Exoa.Cameras.ITouchCamera::FocusCamera(UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCamera(UnityEngine.Vector3,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m58FC09715A0E53CD394C4076A3B4D0CD7E015B97 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation1, bool ___instant2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.FocusCamera(targetPosition, targetRotation, instant);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___targetRotation1;
		bool L_3 = ___instant2;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(29 /* System.Void Exoa.Cameras.ITouchCamera::FocusCamera(UnityEngine.Vector3,UnityEngine.Vector2,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m1E1F09EB6B829BD2AEECA31D47D8D938C6A6833D (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetRotation2, bool ___instant3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.FocusCamera(targetPosition, targetDistance, targetRotation, instant);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___targetRotation2;
		bool L_4 = ___instant3;
		NullCheck(L_0);
		InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(30 /* System.Void Exoa.Cameras.ITouchCamera::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Vector2,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m5915C7FBADBFA21144A0F79DA096877060875121 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, float ___targetDistance1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation2, bool ___instant3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentCameraMode.FocusCamera(targetPosition, targetDistance, targetRotation, instant);
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___targetPosition0;
		float L_2 = ___targetDistance1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___targetRotation2;
		bool L_4 = ___instant3;
		NullCheck(L_0);
		InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool >::Invoke(31 /* System.Void Exoa.Cameras.ITouchCamera::FocusCamera(UnityEngine.Vector3,System.Single,UnityEngine.Quaternion,System.Boolean) */, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher__ctor_m111E3F686BD8745B7252D7B01A832C4CA9D7384B (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		// private bool orthoMode = true;
		__this->___orthoMode_9 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Exoa.Cameras.CameraModeSwitcher::<LateUpdate>b__28_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		// matrixLerp = switchMove.Update(ref switchMoveLerp, (orthoMode ? 0 : 1), () => OnAfterSwitch(orthoMode));
		bool L_0 = __this->___orthoMode_9;
		CameraModeSwitcher_OnAfterSwitch_mEB52881E43B9C9C91A86EC3BCA4F3812736B437C(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Exoa.Cameras.CameraOrthoBase::get_FinalSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_get_FinalSize_m7D2170AE05173E8729F880DC3AE150015B02BC22 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		// return finalSize;
		float L_0 = __this->___finalSize_59;
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_Init_mC35BF62EA51F7D23B9710BA605117A720A32C2C9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		// base.Init();
		CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932(__this, NULL);
		// finalSize = initSize;
		float L_0 = __this->___initSize_61;
		__this->___finalSize_59 = L_0;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_Update_m0BAC7B37BCE712F1FCF1FDAF82C2FC9655830C3F (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28CCDC03816ECD282BA67E48C9F41A7BF632A756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E854805B28525568F72F2C07FB1019EC3EA6A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAEBAB947C52132042D9176D52D7B788A38728F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral735AFBAF2F2CF6F78B6FB5AEA6E6B07ED6FC8ECA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB57F5A43E7D08798C2223D9133DB980878BDCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D51B11A9E2DD5B7E774B2F0A51E07FCD5E29074);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9E85C6520DF26B0342FE1C8F2F729883F829BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA264BCE5E0D58B907C3573864B54DB106805D73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA24F9298CC81F567FB608451C49D2C72830F052);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E92E1BA9EE725809C513C0DA39C19421BD34ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC50251608039D412EBFE94501CB8A328ACE982F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7590EEDC8C724060AFB521AAF067F263A3A8383);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* G_B22_0 = NULL;
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* G_B23_1 = NULL;
	{
		// if (disableMoves)
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___disableMoves_15;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// List<TouchFinger> twoFingers = CameraInputs.TwoFingerFilter.UpdateAndGetFingers();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_1 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter_7;
		NullCheck(L_1);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_2;
		L_2 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_1, (bool)0, NULL);
		// List<TouchFinger> oneFinger = CameraInputs.OneFingerFilter.UpdateAndGetFingers();
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_3 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter_6;
		NullCheck(L_3);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_4;
		L_4 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_3, (bool)0, NULL);
		// float zoomRatio = 1;
		V_0 = (1.0f);
		// Vector2 screenCenter = cam.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_5, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		V_1 = L_8;
		// worldPointCameraCenter = (HeightScreenDepth.Convert(screenCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_9 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_9, L_10, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter_21 = L_11;
		// worldPointFingersDelta = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23 = L_12;
		// worldPointFingersCenter = (HeightScreenDepth.Convert(CameraInputs.screenPointAnyFingerCountCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_13 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_13, L_14, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_15;
		// twistRot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot_20 = L_16;
		// Log("finalOffset:" + finalOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		V_9 = L_17;
		String_t* L_18;
		L_18 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC0E92E1BA9EE725809C513C0DA39C19421BD34ED, L_18, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_19, NULL);
		// Log("FinalPosition:" + finalPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		V_9 = L_20;
		String_t* L_21;
		L_21 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EAEBAB947C52132042D9176D52D7B788A38728F, L_21, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_22, NULL);
		// Log("FinalRotation:" + FinalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		V_10 = L_23;
		String_t* L_24;
		L_24 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_10), NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral45E854805B28525568F72F2C07FB1019EC3EA6A4, L_24, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_25, NULL);
		// Log("FinalDistance:" + FinalDistance);
		float L_26;
		L_26 = CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline(__this, NULL);
		V_11 = L_26;
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_11), NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBA24F9298CC81F567FB608451C49D2C72830F052, L_27, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_28, NULL);
		// if (IsInputMatching(InputMapFingerDrag.RotateAround))
		bool L_29;
		L_29 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 1, NULL);
		if (!L_29)
		{
			goto IL_015a;
		}
	}
	{
		// RotateFromVector(CameraInputs.GetAnyPixelScaledDelta());
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_30, NULL);
		// finalRotation = GetRotationFromPitchYaw();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_31;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_34 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_32, L_33, L_34);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_35;
	}

IL_015a:
	{
		// if (IsInputMatching(InputMapFingerDrag.RotateHead))
		bool L_36;
		L_36 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 2, NULL);
		if (!L_36)
		{
			goto IL_017a;
		}
	}
	{
		// RotateFromVector(CameraInputs.GetAnyPixelScaledDelta());
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_37, NULL);
		// finalRotation = GetRotationFromPitchYaw();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_38;
	}

IL_017a:
	{
		// if (IsInputMatching(InputMapFingerPinch.ZoomAndRotate) || IsInputMatching(InputMapFingerPinch.ZoomOnly))
		bool L_39;
		L_39 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_39)
		{
			goto IL_018c;
		}
	}
	{
		bool L_40;
		L_40 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 2, NULL);
		if (!L_40)
		{
			goto IL_0192;
		}
	}

IL_018c:
	{
		// zoomRatio = CameraInputs.pinchRatio;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_41 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio_10;
		V_0 = L_41;
	}

IL_0192:
	{
		// if (IsInputMatching(InputMapScrollWheel.ZoomInCenter))
		bool L_42;
		L_42 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 1, NULL);
		if (!L_42)
		{
			goto IL_01bb;
		}
	}
	{
		// zoomRatio = CameraInputs.GetScroll();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_43;
		L_43 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_0 = L_43;
		// worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_44 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_44, L_45, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_46);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_47;
	}

IL_01bb:
	{
		// if (IsInputMatching(InputMapScrollWheel.ZoomUnderMouse))
		bool L_48;
		L_48 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 0, NULL);
		if (!L_48)
		{
			goto IL_01ed;
		}
	}
	{
		// zoomRatio = CameraInputs.GetScroll();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_49;
		L_49 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_0 = L_49;
		// worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(Input.mousePosition));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_50 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_50, L_52, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_53);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_54;
	}

IL_01ed:
	{
		// finalSize = Mathf.Clamp(finalSize * zoomRatio, sizeMinMax.x, sizeMinMax.y);
		float L_55 = __this->___finalSize_59;
		float L_56 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___sizeMinMax_58);
		float L_58 = L_57->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&__this->___sizeMinMax_58);
		float L_60 = L_59->___y_1;
		float L_61;
		L_61 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_55, L_56)), L_58, L_60, NULL);
		__this->___finalSize_59 = L_61;
		// if (sizeMinMax.y == finalSize && zoomRatio > 1 || sizeMinMax.x == finalSize && zoomRatio < 1)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_62 = (&__this->___sizeMinMax_58);
		float L_63 = L_62->___y_1;
		float L_64 = __this->___finalSize_59;
		if ((!(((float)L_63) == ((float)L_64))))
		{
			goto IL_0231;
		}
	}
	{
		float L_65 = V_0;
		if ((((float)L_65) > ((float)(1.0f))))
		{
			goto IL_024c;
		}
	}

IL_0231:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_66 = (&__this->___sizeMinMax_58);
		float L_67 = L_66->___x_0;
		float L_68 = __this->___finalSize_59;
		if ((!(((float)L_67) == ((float)L_68))))
		{
			goto IL_0252;
		}
	}
	{
		float L_69 = V_0;
		if ((!(((float)L_69) < ((float)(1.0f)))))
		{
			goto IL_0252;
		}
	}

IL_024c:
	{
		// zoomRatio = 1;
		V_0 = (1.0f);
	}

IL_0252:
	{
		// if (IsInputMatching(InputMapFingerPinch.ZoomAndRotate) || IsInputMatching(InputMapFingerPinch.RotateOnly))
		bool L_70;
		L_70 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_70)
		{
			goto IL_0264;
		}
	}
	{
		bool L_71;
		L_71 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 1, NULL);
		if (!L_71)
		{
			goto IL_0289;
		}
	}

IL_0264:
	{
		// twistRot = Quaternion.AngleAxis(allowYawRotation ? CameraInputs.twistDegrees : 0, GetRotateAroundVector());
		bool L_72 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYawRotation_38;
		G_B21_0 = __this;
		if (L_72)
		{
			G_B22_0 = __this;
			goto IL_0274;
		}
	}
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B21_0;
		goto IL_0279;
	}

IL_0274:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_73 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twistDegrees_11;
		G_B23_0 = L_73;
		G_B23_1 = G_B22_0;
	}

IL_0279:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(61 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::GetRotateAroundVector() */, __this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(G_B23_0, L_74, NULL);
		NullCheck(G_B23_1);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)G_B23_1)->___twistRot_20 = L_75;
	}

IL_0289:
	{
		// if (!isFocusing && IsInputMatching(InputMapFingerDrag.Translate))
		bool L_76 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing_55;
		if (L_76)
		{
			goto IL_02c7;
		}
	}
	{
		bool L_77;
		L_77 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 0, NULL);
		if (!L_77)
		{
			goto IL_02c7;
		}
	}
	{
		// worldPointFingersDelta = Vector3.ClampMagnitude(HeightScreenDepth.ConvertDelta(CameraInputs.lastScreenPointAnyFingerCountCenter,
		// CameraInputs.screenPointAnyFingerCountCenter, gameObject), maxTranslationSpeed);
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_78 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointAnyFingerCountCenter_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81;
		L_81 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = ScreenDepth_ConvertDelta_m2557381CA96262140FFA39D459AEAD108C2B1A7A(L_78, L_79, L_80, L_81, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		float L_83 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___maxTranslationSpeed_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_82, L_83, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23 = L_84;
	}

IL_02c7:
	{
		// Log("worldPointFingersCenter:" + worldPointFingersCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		V_9 = L_85;
		String_t* L_86;
		L_86 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_87;
		L_87 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA264BCE5E0D58B907C3573864B54DB106805D73D, L_86, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_87, NULL);
		// Log("worldPointFingersDelta:" + worldPointFingersDelta);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23;
		V_9 = L_88;
		String_t* L_89;
		L_89 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_90;
		L_90 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC7590EEDC8C724060AFB521AAF067F263A3A8383, L_89, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_90, NULL);
		// Vector3 vecFingersCenterToCamera = (finalPosition - worldPointFingersCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_91, L_92, NULL);
		V_2 = L_93;
		// float vecFingersCenterToCameraDistance = vecFingersCenterToCamera.magnitude * zoomRatio;
		float L_94;
		L_94 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_95 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_94, L_95));
		// vecFingersCenterToCamera = vecFingersCenterToCamera.normalized * vecFingersCenterToCameraDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		float L_97 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_96, L_97, NULL);
		V_2 = L_98;
		// Vector3 targetPosition = worldPointFingersCenter + vecFingersCenterToCamera;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_99, L_100, NULL);
		V_4 = L_101;
		// Log("vecFingersCenterToCamera:" + vecFingersCenterToCamera);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_2;
		V_9 = L_102;
		String_t* L_103;
		L_103 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_104;
		L_104 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral28CCDC03816ECD282BA67E48C9F41A7BF632A756, L_103, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_104, NULL);
		// Log("targetPosition:" + targetPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = V_4;
		V_9 = L_105;
		String_t* L_106;
		L_106 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_107;
		L_107 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8D51B11A9E2DD5B7E774B2F0A51E07FCD5E29074, L_106, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_107, NULL);
		// Vector3 offsetFromFingerCenter = worldPointFingersCenter - worldPointFingersDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_108, L_109, NULL);
		V_5 = L_110;
		// finalPosition = twistRot * (targetPosition - worldPointFingersCenter) + offsetFromFingerCenter;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_111 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_112, L_113, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_111, L_114, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_115, L_116, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_117;
		// finalRotation = twistRot * finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot_20;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_119 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_120;
		L_120 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_118, L_119, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_120;
		// Vector2 pitchYaw = GetRotationToPitchYaw(finalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_121 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_122;
		L_122 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(58 /* UnityEngine.Vector2 Exoa.Cameras.CameraBase::GetRotationToPitchYaw(UnityEngine.Quaternion) */, __this, L_121);
		V_6 = L_122;
		// currentPitch = pitchYaw.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123 = V_6;
		float L_124 = L_123.___x_0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_124;
		// currentYaw = pitchYaw.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = V_6;
		float L_126 = L_125.___y_1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_126;
		// Vector3 newWorldPointCameraCenter = CalculateOffset(finalPosition, finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_128 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(48 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculateOffset(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_127, L_128);
		V_7 = L_129;
		// Vector3 newWorldPointCameraCenterClamped = ClampInCameraBoundaries(newWorldPointCameraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_130);
		V_8 = L_131;
		// Log("finalPosition:" + finalPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		V_9 = L_132;
		String_t* L_133;
		L_133 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_134;
		L_134 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral735AFBAF2F2CF6F78B6FB5AEA6E6B07ED6FC8ECA, L_133, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_134, NULL);
		// Log("finalRotation:" + finalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_135 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		V_10 = L_135;
		String_t* L_136;
		L_136 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_10), NULL);
		String_t* L_137;
		L_137 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8F9E85C6520DF26B0342FE1C8F2F729883F829BC, L_136, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_137, NULL);
		// Log("newWorldPointCameraCenter:" + newWorldPointCameraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_7;
		V_9 = L_138;
		String_t* L_139;
		L_139 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_140;
		L_140 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7BB57F5A43E7D08798C2223D9133DB980878BDCA, L_139, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_140, NULL);
		// Log("newWorldPointCameraCenterClamped:" + newWorldPointCameraCenterClamped);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = V_8;
		V_9 = L_141;
		String_t* L_142;
		L_142 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_143;
		L_143 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC50251608039D412EBFE94501CB8A328ACE982F8, L_142, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_143, NULL);
		// finalOffset = newWorldPointCameraCenterClamped;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_8;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_144;
		// Log("finalOffset:" + finalOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		V_9 = L_145;
		String_t* L_146;
		L_146 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_147;
		L_147 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC0E92E1BA9EE725809C513C0DA39C19421BD34ED, L_146, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_147, NULL);
		// Log("FinalPosition:" + finalPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		V_9 = L_148;
		String_t* L_149;
		L_149 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_150;
		L_150 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EAEBAB947C52132042D9176D52D7B788A38728F, L_149, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_150, NULL);
		// Log("FinalRotation:" + FinalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_151;
		L_151 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		V_10 = L_151;
		String_t* L_152;
		L_152 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_10), NULL);
		String_t* L_153;
		L_153 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral45E854805B28525568F72F2C07FB1019EC3EA6A4, L_152, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_153, NULL);
		// Log("FinalDistance:" + FinalDistance);
		float L_154;
		L_154 = CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline(__this, NULL);
		V_11 = L_154;
		String_t* L_155;
		L_155 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_11), NULL);
		String_t* L_156;
		L_156 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBA24F9298CC81F567FB608451C49D2C72830F052, L_155, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_156, NULL);
		// if (isFocusing)
		bool L_157 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing_55;
		if (!L_157)
		{
			goto IL_054f;
		}
	}
	{
		// HandleFocus();
		VirtualActionInvoker0::Invoke(69 /* System.Void Exoa.Cameras.CameraOrthoBase::HandleFocus() */, __this);
	}

IL_054f:
	{
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_159 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_160 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_161;
		L_161 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_158, L_159, L_160);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_161;
		// Log("finalOffset:" + finalOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		V_9 = L_162;
		String_t* L_163;
		L_163 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_164;
		L_164 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC0E92E1BA9EE725809C513C0DA39C19421BD34ED, L_163, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_164, NULL);
		// Log("FinalPosition:" + finalPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		V_9 = L_165;
		String_t* L_166;
		L_166 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_9), NULL);
		String_t* L_167;
		L_167 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EAEBAB947C52132042D9176D52D7B788A38728F, L_166, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_167, NULL);
		// Log("FinalRotation:" + FinalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_168;
		L_168 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		V_10 = L_168;
		String_t* L_169;
		L_169 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_10), NULL);
		String_t* L_170;
		L_170 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral45E854805B28525568F72F2C07FB1019EC3EA6A4, L_169, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_170, NULL);
		// Log("FinalDistance:" + FinalDistance);
		float L_171;
		L_171 = CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline(__this, NULL);
		V_11 = L_171;
		String_t* L_172;
		L_172 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_11), NULL);
		String_t* L_173;
		L_173 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBA24F9298CC81F567FB608451C49D2C72830F052, L_172, NULL);
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, L_173, NULL);
		// ApplyToCamera();
		VirtualActionInvoker0::Invoke(43 /* System.Void Exoa.Cameras.CameraBase::ApplyToCamera() */, __this);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::SetSizeByDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetSizeByDistance_mBC7DE819F563B85E9F6790A86409CE45DF307CF7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, float ___d0, const RuntimeMethod* method) 
{
	{
		// finalSize = Mathf.Clamp(d * distanceToSize, sizeMinMax.x, sizeMinMax.y);
		float L_0 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___sizeMinMax_58);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___sizeMinMax_58);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_0, (0.400000006f))), L_2, L_4, NULL);
		__this->___finalSize_59 = L_5;
		// }
		return;
	}
}
// System.Single Exoa.Cameras.CameraOrthoBase::GetDistanceFromSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_GetDistanceFromSize_mC2202567822B0357A00FAFAE7C7B3BC6A4C1DEC7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		// return finalSize / distanceToSize;
		float L_0 = __this->___finalSize_59;
		return ((float)(L_0/(0.400000006f)));
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::ApplyToCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_ApplyToCamera_m0C8F7B479E4F1118DD5A64E92DC7982FB72156E5 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		// if (!standalone)
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___standalone_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// base.ApplyToCamera();
		CameraBase_ApplyToCamera_m7AC906E16988891AD1480ED4BE0F41E7D4E88D53(__this, NULL);
		// cam.orthographicSize = finalSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		float L_2 = __this->___finalSize_59;
		NullCheck(L_1);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Exoa.Cameras.CameraOrthoBase::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraOrthoBase_GetMatrix_m45C6299B724F13EE810B791173C45DAA249A856D (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float aspect = cam.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_0, NULL);
		V_0 = L_1;
		// float near = cam.nearClipPlane, far = cam.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		V_1 = L_3;
		// float near = cam.nearClipPlane, far = cam.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_4, NULL);
		V_2 = L_5;
		// finalSize = Mathf.Clamp(finalSize, sizeMinMax.x, sizeMinMax.y);
		float L_6 = __this->___finalSize_59;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___sizeMinMax_58);
		float L_8 = L_7->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___sizeMinMax_58);
		float L_10 = L_9->___y_1;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_8, L_10, NULL);
		__this->___finalSize_59 = L_11;
		// return Matrix4x4.Ortho(-finalSize * aspect, finalSize * aspect, -finalSize, finalSize, near, far);
		float L_12 = __this->___finalSize_59;
		float L_13 = V_0;
		float L_14 = __this->___finalSize_59;
		float L_15 = V_0;
		float L_16 = __this->___finalSize_59;
		float L_17 = __this->___finalSize_59;
		float L_18 = V_1;
		float L_19 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_Ortho_mB42622C6600D70BF8208B879E48BCB03844EEFCF(((float)il2cpp_codegen_multiply(((-L_12)), L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)), ((-L_16)), L_17, L_18, L_19, NULL);
		return L_20;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::SetPositionByOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetPositionByOffset_mB74F13F4D9C99A1B0E64EEAA43E951475C9B18D5 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_0, L_1, L_2);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_3;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetResetValues_m196307F53D16B4B43CCA1DC0029B44ED7E4F2167 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___size2, const RuntimeMethod* method) 
{
	{
		// initOffset = offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___offset0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9 = L_0;
		// initRotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10 = L_1;
		// initSize = size;
		float L_2 = ___size2;
		__this->___initSize_61 = L_2;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_FocusCamera_m4B68E431966F81A02A726EAE5B2C3DCC1ECBFA1A (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___changeDistance1, float ___targetDistanceOrSize2, bool ___changeRotation3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation4, bool ___allowYOffsetFromGround5, bool ___instant6, const RuntimeMethod* method) 
{
	{
		// if (!instant)
		bool L_0 = ___instant6;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// focuswMoveOffset.Reset(finalOffset);
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_1 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_1, L_2, NULL);
		// focusMoveDistanceOrSize.Reset(finalSize);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_3 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_4 = __this->___finalSize_59;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_3, L_4, NULL);
		// focusMoveRotation.Reset(finalRotation);
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_5 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_5, L_6, NULL);
		goto IL_005e;
	}

IL_0039:
	{
		// focuswMoveOffset.Reset(targetPosition);
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_7 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___targetPosition0;
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_7, L_8, NULL);
		// focusMoveDistanceOrSize.Reset(targetDistanceOrSize);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_9 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_10 = ___targetDistanceOrSize2;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_9, L_10, NULL);
		// focusMoveRotation.Reset(targetRotation);
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_11 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___targetRotation4;
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_11, L_12, NULL);
	}

IL_005e:
	{
		// base.FocusCamera(targetPosition, changeDistance, targetDistanceOrSize,
		//     changeRotation, targetRotation, allowYOffsetFromGround, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___targetPosition0;
		bool L_14 = ___changeDistance1;
		float L_15 = ___targetDistanceOrSize2;
		bool L_16 = ___changeRotation3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___targetRotation4;
		bool L_18 = ___allowYOffsetFromGround5;
		bool L_19 = ___instant6;
		CameraBase_FocusCamera_m2795C9D5FD5CBBE59B7D78BCE9B07BDCB3BFBAA2(__this, L_13, L_14, L_15, L_16, L_17, L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_FocusCameraOnGameObject_m77D39F3C7F3174683ED20EDB86E9A528BAF1773B (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method) 
{
	{
		// focuswMoveOffset.Reset(finalOffset);
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_0 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_0, L_1, NULL);
		// focusMoveDistanceOrSize.Reset(finalSize);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_2 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_3 = __this->___finalSize_59;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_2, L_3, NULL);
		// base.FocusCameraOnGameObject(go, allowYOffsetFromGround);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		bool L_5 = ___allowYOffsetFromGround1;
		CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::HandleFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_HandleFocus_mFDE0AC343B0ABF4F2E174A8B22F98348F85194EA (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraOrthoBase_OnFocusCompleted_m7790B5F41649864F15FDF43E06DE64216739D211_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (!isFocusing)
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing_55;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (focusTargetBounds != null && focusTargetBounds != default(Bounds))
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetBounds_49;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetBounds_49;
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = V_0;
		bool L_4;
		L_4 = Bounds_op_Inequality_mBE4883EFEDADB40B7243DC1F19BD01B5908CD2E0(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_00ee;
		}
	}
	{
		// Bounds b = focusTargetBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetBounds_49;
		V_1 = L_5;
		// if (b.size == Vector3.zero && b.center == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_8;
		L_8 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_11;
		L_11 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// return;
		return;
	}

IL_0057:
	{
		// if (allowYOffsetFromGround)
		bool L_12 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYOffsetFromGround_56;
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		// float yOffset = b.center.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_14 = L_13.___y_3;
		V_4 = L_14;
		// b.extents = b.extents.SetY(b.extents.y + yOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		float L_17 = L_16.___y_3;
		float L_18 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_15, ((float)il2cpp_codegen_add(L_17, L_18)), NULL);
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F((&V_1), L_19, NULL);
		// b.center = b.center.SetY(groundHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_21 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_20, L_21, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_1), L_22, NULL);
	}

IL_00a8:
	{
		// Vector3 max = b.size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		V_2 = L_23;
		// float radius = max.magnitude * focusRadiusMultiplier;
		float L_24;
		L_24 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_25 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusRadiusMultiplier_44;
		V_3 = ((float)il2cpp_codegen_multiply(L_24, L_25));
		// focusTargetPosition = b.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition_50 = L_26;
		// focusTargetDistanceOrSize = Mathf.Clamp(radius, sizeMinMax.x, sizeMinMax.y);
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___sizeMinMax_58);
		float L_29 = L_28->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___sizeMinMax_58);
		float L_31 = L_30->___y_1;
		float L_32;
		L_32 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_27, L_29, L_31, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize_51 = L_32;
	}

IL_00ee:
	{
		// if (enableFocusing)
		bool L_33 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableFocusing_53;
		if (!L_33)
		{
			goto IL_0114;
		}
	}
	{
		// finalSize = focusMove.Update(ref focusMoveDistanceOrSize, focusTargetDistanceOrSize);
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_34 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove_45;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_35 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_36 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize_51;
		NullCheck(L_34);
		float L_37;
		L_37 = Springs_Update_mF8FA5925C2A18CE8CB097AA2975A88CE54BC24FA(L_34, L_35, L_36, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		__this->___finalSize_59 = L_37;
	}

IL_0114:
	{
		// if (enableRotationChange)
		bool L_38 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableRotationChange_54;
		if (!L_38)
		{
			goto IL_0166;
		}
	}
	{
		// finalRotation = focusMove.Update(ref focusMoveRotation, focusTargetRotation);
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_39 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove_45;
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_40 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetRotation_52;
		NullCheck(L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Springs_Update_m0C198605FBA3554DF4A8F61DA41B8DCF5F4AEC3B(L_39, L_40, L_41, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_42;
		// currentPitch = finalRotation.eulerAngles.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_43 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_43, NULL);
		float L_45 = L_44.___x_2;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_45;
		// currentYaw = finalRotation.eulerAngles.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_46 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_46, NULL);
		float L_48 = L_47.___y_3;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_48;
	}

IL_0166:
	{
		// finalOffset = worldPointCameraCenter = focusMove.Update(ref focuswMoveOffset, focusTargetPosition, OnFocusCompleted);
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_49 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove_45;
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_50 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition_50;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_52 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_52, __this, (intptr_t)((void*)CameraOrthoBase_OnFocusCompleted_m7790B5F41649864F15FDF43E06DE64216739D211_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Springs_Update_m62C6A03A523E38106038A9F5F18E7DE186B86E80(L_49, L_50, L_51, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53;
		V_5 = L_54;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter_21 = L_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_5;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_55;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_58 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_56, L_57, L_58);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_59;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::OnFocusCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_OnFocusCompleted_m7790B5F41649864F15FDF43E06DE64216739D211 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46924EB00FB8602D2670F2ADAC2C6152B1BE4D00);
		s_Il2CppMethodInitialized = true;
	}
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B2_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B1_0 = NULL;
	{
		// StopFocus();
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		// Log("OnFocusCompleted");
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, _stringLiteral46924EB00FB8602D2670F2ADAC2C6152B1BE4D00, NULL);
		// CameraEvents.OnFocusComplete?.Invoke();
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_0 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusComplete_6;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraOrthoBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase__ctor_mEE179738DF12DE8BCF73EC11F20F0A06897E35E9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 sizeMinMax = new Vector2(1, 12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1.0f), (12.0f), /*hidden argument*/NULL);
		__this->___sizeMinMax_58 = L_0;
		// protected float finalSize = 5.0f;
		__this->___finalSize_59 = (5.0f);
		// protected float initSize = 6f;
		__this->___initSize_61 = (6.0f);
		// protected float initDistance = 10f;
		__this->___initDistance_62 = (10.0f);
		// public float fixedDistance = 30f;
		__this->___fixedDistance_63 = (30.0f);
		CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Exoa.Cameras.CameraPerspBase::get_Fov()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraPerspBase_get_Fov_m162CA7472DF481E20D45907D660F96F598470141 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	{
		// return fov;
		float L_0 = __this->___fov_62;
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_Init_mA6013685173136DDA8C4AD24CC3DA0450ED1C0BC (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	{
		// fov = cam.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		__this->___fov_62 = L_1;
		// finalDistance = initDistance;
		float L_2 = __this->___initDistance_59;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_2;
		// finalOffset = transform.position.SetY(groundHeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_4, L_5, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_6;
		// base.Init();
		CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932(__this, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_Update_mBF1C1416F3265464690CAF3F4F3EFAA99AA5B7C6 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* G_B22_0 = NULL;
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* G_B23_1 = NULL;
	{
		// if (disableMoves)
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___disableMoves_15;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// List<TouchFinger> twoFingers = CameraInputs.TwoFingerFilter.UpdateAndGetFingers();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_1 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter_7;
		NullCheck(L_1);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_2;
		L_2 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_1, (bool)0, NULL);
		// List<TouchFinger> oneFinger = CameraInputs.OneFingerFilter.UpdateAndGetFingers();
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_3 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter_6;
		NullCheck(L_3);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_4;
		L_4 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_3, (bool)0, NULL);
		// Vector2 screenCenter = cam.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_5, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		V_0 = L_8;
		// worldPointCameraCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_9 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_9, L_10, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_11);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter_21 = L_12;
		// float zoomRatio = 1;
		V_1 = (1.0f);
		// anyInteraction = false;
		__this->___anyInteraction_61 = (bool)0;
		// worldPointFingersDelta = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23 = L_13;
		// worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(CameraInputs.screenPointAnyFingerCountCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_14 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_14, L_15, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_16);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_17;
		// twistRot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot_20 = L_18;
		// if (IsInputMatching(InputMapFingerDrag.RotateAround))
		bool L_19;
		L_19 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 1, NULL);
		if (!L_19)
		{
			goto IL_00e6;
		}
	}
	{
		// RotateFromVector(CameraInputs.GetAnyPixelScaledDelta());
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_20, NULL);
		// finalRotation = GetRotationFromPitchYaw();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_21;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_24 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_22, L_23, L_24);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_25;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_00e6:
	{
		// if (IsInputMatching(InputMapFingerDrag.RotateHead))
		bool L_26;
		L_26 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 2, NULL);
		if (!L_26)
		{
			goto IL_010d;
		}
	}
	{
		// RotateFromVector(CameraInputs.GetAnyPixelScaledDelta());
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_27, NULL);
		// finalRotation = GetRotationFromPitchYaw();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_28;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_010d:
	{
		// if (IsInputMatching(InputMapFingerPinch.ZoomAndRotate) || IsInputMatching(InputMapFingerPinch.ZoomOnly))
		bool L_29;
		L_29 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_29)
		{
			goto IL_011f;
		}
	}
	{
		bool L_30;
		L_30 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 2, NULL);
		if (!L_30)
		{
			goto IL_012c;
		}
	}

IL_011f:
	{
		// zoomRatio = CameraInputs.pinchRatio;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_31 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio_10;
		V_1 = L_31;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_012c:
	{
		// if (IsInputMatching(InputMapScrollWheel.ZoomInCenter))
		bool L_32;
		L_32 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 1, NULL);
		if (!L_32)
		{
			goto IL_015c;
		}
	}
	{
		// zoomRatio = CameraInputs.GetScroll();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_33;
		L_33 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_1 = L_33;
		// worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_34 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_34, L_35, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_36);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_37;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_015c:
	{
		// if (IsInputMatching(InputMapScrollWheel.ZoomUnderMouse))
		bool L_38;
		L_38 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 0, NULL);
		if (!L_38)
		{
			goto IL_0195;
		}
	}
	{
		// zoomRatio = CameraInputs.GetScroll();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_39;
		L_39 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_1 = L_39;
		// worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(Input.mousePosition));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_40 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_40, L_42, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_43);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_44;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_0195:
	{
		// if (minMaxDistance.y == finalDistance && zoomRatio > 1 || minMaxDistance.x == finalDistance && zoomRatio < 1)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___minMaxDistance_58);
		float L_46 = L_45->___y_1;
		float L_47 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_01b0;
		}
	}
	{
		float L_48 = V_1;
		if ((((float)L_48) > ((float)(1.0f))))
		{
			goto IL_01cb;
		}
	}

IL_01b0:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&__this->___minMaxDistance_58);
		float L_50 = L_49->___x_0;
		float L_51 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_01eb;
		}
	}
	{
		float L_52 = V_1;
		if ((!(((float)L_52) < ((float)(1.0f)))))
		{
			goto IL_01eb;
		}
	}

IL_01cb:
	{
		// zoomRatio = 1;
		V_1 = (1.0f);
		// worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_53 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_53, L_54, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_55);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22 = L_56;
	}

IL_01eb:
	{
		// finalDistance = CalculateClampedDistance(finalPosition, worldPointCameraCenter, minMaxDistance, zoomRatio);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = __this->___minMaxDistance_58;
		float L_60 = V_1;
		float L_61;
		L_61 = CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894(__this, L_57, L_58, L_59, L_60, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_61;
		// if (IsInputMatching(InputMapFingerPinch.ZoomAndRotate) || IsInputMatching(InputMapFingerPinch.RotateOnly))
		bool L_62;
		L_62 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_62)
		{
			goto IL_021c;
		}
	}
	{
		bool L_63;
		L_63 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 1, NULL);
		if (!L_63)
		{
			goto IL_0248;
		}
	}

IL_021c:
	{
		// twistRot = Quaternion.AngleAxis(allowYawRotation ? CameraInputs.twistDegrees : 0, GetRotateAroundVector());
		bool L_64 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYawRotation_38;
		G_B21_0 = __this;
		if (L_64)
		{
			G_B22_0 = __this;
			goto IL_022c;
		}
	}
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B21_0;
		goto IL_0231;
	}

IL_022c:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_65 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twistDegrees_11;
		G_B23_0 = L_65;
		G_B23_1 = G_B22_0;
	}

IL_0231:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(61 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::GetRotateAroundVector() */, __this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_67;
		L_67 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(G_B23_0, L_66, NULL);
		NullCheck(G_B23_1);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)G_B23_1)->___twistRot_20 = L_67;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_0248:
	{
		// if (!isFocusing && IsInputMatching(InputMapFingerDrag.Translate))
		bool L_68 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing_55;
		if (L_68)
		{
			goto IL_028d;
		}
	}
	{
		bool L_69;
		L_69 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 0, NULL);
		if (!L_69)
		{
			goto IL_028d;
		}
	}
	{
		// worldPointFingersDelta = Vector3.ClampMagnitude(HeightScreenDepth.ConvertDelta(CameraInputs.lastScreenPointAnyFingerCountCenter, CameraInputs.screenPointAnyFingerCountCenter, gameObject), maxTranslationSpeed);
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_70 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth_6);
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointAnyFingerCountCenter_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73;
		L_73 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = ScreenDepth_ConvertDelta_m2557381CA96262140FFA39D459AEAD108C2B1A7A(L_70, L_71, L_72, L_73, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		float L_75 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___maxTranslationSpeed_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_74, L_75, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23 = L_76;
		// anyInteraction = true;
		__this->___anyInteraction_61 = (bool)1;
	}

IL_028d:
	{
		// Vector3 vecFingersCenterToCamera = (finalPosition - worldPointFingersCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_77, L_78, NULL);
		V_2 = L_79;
		// float vecFingersCenterToCameraDistance = vecFingersCenterToCamera.magnitude * zoomRatio;
		float L_80;
		L_80 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_81 = V_1;
		V_3 = ((float)il2cpp_codegen_multiply(L_80, L_81));
		// vecFingersCenterToCamera = vecFingersCenterToCamera.normalized * vecFingersCenterToCameraDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		float L_83 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_82, L_83, NULL);
		V_2 = L_84;
		// Vector3 targetPosition = worldPointFingersCenter + vecFingersCenterToCamera;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_86, NULL);
		V_4 = L_87;
		// Vector3 offsetFromFingerCenter = worldPointFingersCenter - worldPointFingersDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_88, L_89, NULL);
		V_5 = L_90;
		// finalPosition = twistRot * (targetPosition - worldPointFingersCenter) + offsetFromFingerCenter;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_92, L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_91, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_95, L_96, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_97;
		// finalRotation = twistRot * finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot_20;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
		L_100 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_98, L_99, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_100;
		// currentPitch = NormalizeAngle(finalRotation.eulerAngles.x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_101 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_101, NULL);
		float L_103 = L_102.___x_2;
		float L_104;
		L_104 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_103, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_104;
		// currentYaw = (finalRotation.eulerAngles.y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_105 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_105, NULL);
		float L_107 = L_106.___y_3;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_107;
		// Vector3 newWorldPointCameraCenter = CalculateOffset(finalPosition, finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_109 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(48 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculateOffset(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_108, L_109);
		V_6 = L_110;
		// Vector3 newWorldPointCameraCenterClamped = ClampInCameraBoundaries(newWorldPointCameraCenter);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(45 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::ClampInCameraBoundaries(UnityEngine.Vector3) */, __this, L_111);
		V_7 = L_112;
		// finalOffset = newWorldPointCameraCenterClamped;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_7;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_113;
		// finalDistance = CalculateClampedDistance(finalPosition, newWorldPointCameraCenter, minMaxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = __this->___minMaxDistance_58;
		float L_117;
		L_117 = CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894(__this, L_114, L_115, L_116, (1.0f), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_117;
		// if (isFocusing)
		bool L_118 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing_55;
		if (!L_118)
		{
			goto IL_0399;
		}
	}
	{
		// HandleFocus();
		CameraPerspBase_HandleFocus_m8CDD1B5FD048A2097E9150D650B677E552FC8FD9(__this, NULL);
	}

IL_0399:
	{
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_120 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_121 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_119, L_120, L_121);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_122;
		// ApplyToCamera();
		VirtualActionInvoker0::Invoke(43 /* System.Void Exoa.Cameras.CameraBase::ApplyToCamera() */, __this);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::ApplyPositionRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_ApplyPositionRotation_m7A5C8534224816F861C8726C29EA0AFD9D488D0B (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___r1, const RuntimeMethod* method) 
{
	{
		// finalOffset = CalculateOffset(p, r);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___p0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___r1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(48 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculateOffset(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_2;
		// finalDistance = CalculateDistance(p, r);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___p0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___r1;
		float L_5;
		L_5 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_3, L_4, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_5;
		// finalRotation = r;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___r1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_6;
		// finalPosition = p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___p0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_7;
		// ApplyToCamera();
		VirtualActionInvoker0::Invoke(43 /* System.Void Exoa.Cameras.CameraBase::ApplyToCamera() */, __this);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Exoa.Cameras.CameraPerspBase::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraPerspBase_GetMatrix_m36F91A727025674955AC9F85E0DF7B0B6013052C (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float aspect = cam.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_0, NULL);
		V_0 = L_1;
		// float near = cam.nearClipPlane, far = cam.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		V_1 = L_3;
		// float near = cam.nearClipPlane, far = cam.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_4, NULL);
		V_2 = L_5;
		// return Matrix4x4.Perspective(fov, aspect, near, far);
		float L_6 = __this->___fov_62;
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_Perspective_m08BFCC6D4F8C7D51CEFBB8F3425954125BF9A743(L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::SetPositionByDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_SetPositionByDistance_mF190D5F7B993844B1B8448587D28F4F3893E25A4 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, float ___v0, const RuntimeMethod* method) 
{
	{
		// finalDistance = Mathf.Clamp(v, minMaxDistance.x, minMaxDistance.y);
		float L_0 = ___v0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___minMaxDistance_58);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___minMaxDistance_58);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_5;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_8 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_6, L_7, L_8);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_9;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_SetResetValues_m76C63038D5793D8AE2D71770192D58FA622E6AFF (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___distanceOrSize2, const RuntimeMethod* method) 
{
	{
		// initOffset = offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___offset0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9 = L_0;
		// initDistance = distanceOrSize;
		float L_1 = ___distanceOrSize2;
		__this->___initDistance_59 = L_1;
		// initRotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10 = L_2;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::FocusCamera(UnityEngine.Vector3,System.Boolean,System.Single,System.Boolean,UnityEngine.Quaternion,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_FocusCamera_mF6333B1A2168D7367FB6144F061EAB5C2FFA4D94 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition0, bool ___changeDistance1, float ___targetDistanceOrSize2, bool ___changeRotation3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation4, bool ___allowYOffsetFromGround5, bool ___instant6, const RuntimeMethod* method) 
{
	{
		// if (!instant)
		bool L_0 = ___instant6;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// focuswMoveOffset.Reset(finalOffset);
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_1 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_1, L_2, NULL);
		// focusMoveDistanceOrSize.Reset(finalDistance);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_3 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_3, L_4, NULL);
		// focusMoveRotation.Reset(finalRotation);
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_5 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_5, L_6, NULL);
		goto IL_005e;
	}

IL_0039:
	{
		// focuswMoveOffset.Reset(targetPosition);
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_7 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___targetPosition0;
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_7, L_8, NULL);
		// focusMoveDistanceOrSize.Reset(targetDistanceOrSize);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_9 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_10 = ___targetDistanceOrSize2;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_9, L_10, NULL);
		// focusMoveRotation.Reset(targetRotation);
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_11 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___targetRotation4;
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_11, L_12, NULL);
	}

IL_005e:
	{
		// base.FocusCamera(targetPosition, changeDistance, targetDistanceOrSize,
		//     changeRotation, targetRotation, allowYOffsetFromGround, instant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___targetPosition0;
		bool L_14 = ___changeDistance1;
		float L_15 = ___targetDistanceOrSize2;
		bool L_16 = ___changeRotation3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___targetRotation4;
		bool L_18 = ___allowYOffsetFromGround5;
		bool L_19 = ___instant6;
		CameraBase_FocusCamera_m2795C9D5FD5CBBE59B7D78BCE9B07BDCB3BFBAA2(__this, L_13, L_14, L_15, L_16, L_17, L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::FocusCameraOnGameObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_FocusCameraOnGameObject_mDB882AB8B21D86923FD156A22DD1A64BAE7FE95C (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___allowYOffsetFromGround1, const RuntimeMethod* method) 
{
	{
		// focuswMoveOffset.Reset(finalOffset);
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_0 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_0, L_1, NULL);
		// focusMoveDistanceOrSize.Reset(finalDistance);
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_2 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_3 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_2, L_3, NULL);
		// base.FocusCameraOnGameObject(go, allowYOffsetFromGround);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		bool L_5 = ___allowYOffsetFromGround1;
		CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::HandleFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_HandleFocus_m8CDD1B5FD048A2097E9150D650B677E552FC8FD9 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraPerspBase_OnFocusCompleted_mAEF874D836F854BB0CB5008C3AD160323EC67CCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (!isFocusing)
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing_55;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (focusTargetBounds != null && focusTargetBounds != default(Bounds))
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetBounds_49;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetBounds_49;
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = V_0;
		bool L_4;
		L_4 = Bounds_op_Inequality_mBE4883EFEDADB40B7243DC1F19BD01B5908CD2E0(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0152;
		}
	}
	{
		// Bounds b = focusTargetBounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetBounds_49;
		V_1 = L_5;
		// if (b.size == Vector3.zero && b.center == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_8;
		L_8 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_11;
		L_11 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// return;
		return;
	}

IL_0057:
	{
		// if (allowYOffsetFromGround)
		bool L_12 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYOffsetFromGround_56;
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		// float yOffset = b.center.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_14 = L_13.___y_3;
		V_7 = L_14;
		// b.extents = b.extents.SetY(b.extents.y + yOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		float L_17 = L_16.___y_3;
		float L_18 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_15, ((float)il2cpp_codegen_add(L_17, L_18)), NULL);
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F((&V_1), L_19, NULL);
		// b.center = b.center.SetY(groundHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		float L_21 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_20, L_21, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_1), L_22, NULL);
	}

IL_00a8:
	{
		// Vector3 max = b.size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		V_2 = L_23;
		// float radius = max.magnitude * focusRadiusMultiplier;
		float L_24;
		L_24 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_25 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusRadiusMultiplier_44;
		// float aspect = cam.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_26);
		float L_27;
		L_27 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_26, NULL);
		V_3 = L_27;
		// float horizontalFOV = 2f * Mathf.Atan(Mathf.Tan(fov * Mathf.Deg2Rad / 2f) * aspect) * Mathf.Rad2Deg;
		float L_28 = __this->___fov_62;
		float L_29;
		L_29 = tanf(((float)(((float)il2cpp_codegen_multiply(L_28, (0.0174532924f)))/(2.0f))));
		float L_30 = V_3;
		float L_31;
		L_31 = atanf(((float)il2cpp_codegen_multiply(L_29, L_30)));
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_31)), (57.2957802f)));
		// float fovMin = Mathf.Min(fov, horizontalFOV);
		float L_32 = __this->___fov_62;
		float L_33 = V_4;
		float L_34;
		L_34 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_32, L_33, NULL);
		V_5 = L_34;
		// float dist = radius / (Mathf.Sin(fovMin * Mathf.Deg2Rad / 2f));
		float L_35 = V_5;
		float L_36;
		L_36 = sinf(((float)(((float)il2cpp_codegen_multiply(L_35, (0.0174532924f)))/(2.0f))));
		V_6 = ((float)(((float)il2cpp_codegen_multiply(L_24, L_25))/L_36));
		// focusTargetPosition = b.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_1), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition_50 = L_37;
		// focusTargetDistanceOrSize = Mathf.Clamp((dist * focusDistanceMultiplier), minMaxDistance.x, minMaxDistance.y);
		float L_38 = V_6;
		float L_39 = __this->___focusDistanceMultiplier_63;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___minMaxDistance_58);
		float L_41 = L_40->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___minMaxDistance_58);
		float L_43 = L_42->___y_1;
		float L_44;
		L_44 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_38, L_39)), L_41, L_43, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize_51 = L_44;
	}

IL_0152:
	{
		// if (enableFocusing)
		bool L_45 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableFocusing_53;
		if (!L_45)
		{
			goto IL_0178;
		}
	}
	{
		// finalDistance = focusMove.Update(ref focusMoveDistanceOrSize, focusTargetDistanceOrSize);
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_46 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove_45;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_47 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize_46);
		float L_48 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize_51;
		NullCheck(L_46);
		float L_49;
		L_49 = Springs_Update_mF8FA5925C2A18CE8CB097AA2975A88CE54BC24FA(L_46, L_47, L_48, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_49;
	}

IL_0178:
	{
		// if (enableRotationChange)
		bool L_50 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableRotationChange_54;
		if (!L_50)
		{
			goto IL_01ca;
		}
	}
	{
		// finalRotation = focusMove.Update(ref focusMoveRotation, focusTargetRotation);
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_51 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove_45;
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_52 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetRotation_52;
		NullCheck(L_51);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Springs_Update_m0C198605FBA3554DF4A8F61DA41B8DCF5F4AEC3B(L_51, L_52, L_53, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_54;
		// currentPitch = finalRotation.eulerAngles.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_55 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_55, NULL);
		float L_57 = L_56.___x_2;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_57;
		// currentYaw = finalRotation.eulerAngles.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_58 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_58, NULL);
		float L_60 = L_59.___y_3;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_60;
	}

IL_01ca:
	{
		// finalOffset = worldPointCameraCenter = focusMove.Update(ref focuswMoveOffset, focusTargetPosition, OnFocusCompleted);
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_61 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove_45;
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_62 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focuswMoveOffset_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition_50;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_64 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_64, __this, (intptr_t)((void*)CameraPerspBase_OnFocusCompleted_mAEF874D836F854BB0CB5008C3AD160323EC67CCB_RuntimeMethod_var), NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Springs_Update_m62C6A03A523E38106038A9F5F18E7DE186B86E80(L_61, L_62, L_63, L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65;
		V_8 = L_66;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter_21 = L_66;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_8;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_67;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_70 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_68, L_69, L_70);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_71;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::OnFocusCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_OnFocusCompleted_mAEF874D836F854BB0CB5008C3AD160323EC67CCB (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46924EB00FB8602D2670F2ADAC2C6152B1BE4D00);
		s_Il2CppMethodInitialized = true;
	}
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B2_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B1_0 = NULL;
	{
		// Log("OnFocusCompleted");
		CameraBase_Log_m0D8A47C27EA8DDB8EB7FA58CCDAE0768150F04C9(__this, _stringLiteral46924EB00FB8602D2670F2ADAC2C6152B1BE4D00, NULL);
		// StopFocus();
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		// CameraEvents.OnFocusComplete?.Invoke();
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_0 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusComplete_6;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase__ctor_m62881D30A4D8F9F541C4036592B2AEAC0CA12EC6 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 minMaxDistance = new Vector2(3, 30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (3.0f), (30.0f), /*hidden argument*/NULL);
		__this->___minMaxDistance_58 = L_0;
		// public float initDistance = 10f;
		__this->___initDistance_59 = (10.0f);
		// public float fov = 55.0f;
		__this->___fov_62 = (55.0f);
		// public float focusDistanceMultiplier = 1f;
		__this->___focusDistanceMultiplier_63 = (1.0f);
		CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Exoa.Cameras.CameraPerspective::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_Init_m5C8CF0F65BD0D7CF736EF9169829B18F98EAB7D3 (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.Init();
		CameraPerspBase_Init_mA6013685173136DDA8C4AD24CC3DA0450ED1C0BC(__this, NULL);
		// initialRotation = transform.rotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37 = L_3;
		// GetInitialRotation();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(51 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetInitialRotation() */, __this);
		// initDistance = CalculateDistance(transform.position, transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		float L_9;
		L_9 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_6, L_8, NULL);
		((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance_59 = L_9;
		// initOffset = CalculateOffset(transform.position, transform.rotation, initDistance, groundHeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		float L_14 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance_59;
		float L_15 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = VirtualFuncInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float, float >::Invoke(49 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculateOffset(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Single) */, __this, L_11, L_13, L_14, L_15);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9 = L_16;
		// currentPitch = initialRotation.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_18 = L_17->___x_0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_18;
		// currentYaw = initialRotation.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_20 = L_19->___y_1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_20;
		// finalOffset = initOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_21;
		// finalDistance = CalculateClampedDistance(initDistance, minMaxDistance);
		float L_22 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance_59;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___minMaxDistance_58;
		float L_24;
		L_24 = CameraBase_CalculateClampedDistance_mF3B8F73A1F51A167E0FD7FF18870A6C249930B09(__this, L_22, L_23, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_24;
		// finalRotation = GetRotationFromPitchYaw();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_25;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_28 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_26, L_27, L_28);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_29;
		// }
		return;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraPerspective::GetInitialRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraPerspective_GetInitialRotation_m5EC870A12B1E6E8460F75D634ECF5701F08DDE9F (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	{
		// initRotation = Quaternion.Euler(initialRotation.x, initialRotation.y, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_3 = L_2->___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_1, L_3, (0.0f), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10 = L_4;
		// return initRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10;
		return L_5;
	}
}
// System.Void Exoa.Cameras.CameraPerspective::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_SetResetValues_m06CEF371DB68E86DF49B7E5B484DE3E3DCA8A87A (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___distance2, const RuntimeMethod* method) 
{
	{
		// initOffset = offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___offset0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9 = L_0;
		// initDistance = distance;
		float L_1 = ___distance2;
		((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance_59 = L_1;
		// initialRotation = rotation.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rotation1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37 = L_3;
		// GetInitialRotation();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(51 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetInitialRotation() */, __this);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspective::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_ResetCamera_mC1D88C662A3D08CB17504656E7EFD8F19C99BFFF (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	{
		// StopFocus();
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		// FocusCamera(initOffset, initDistance, initRotation.eulerAngles);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9;
		float L_1 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance_59;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspective::OnBeforeSwitchPerspective(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_OnBeforeSwitchPerspective_m32AFB89EE21F0C108156D72582B02F9C29DC39F7 (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, bool ___orthoMode0, const RuntimeMethod* method) 
{
	{
		// if (!orthoMode)
		bool L_0 = ___orthoMode0;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// currentPitch = initialRotation.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_2 = L_1->___x_0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_2;
		// currentYaw = initialRotation.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_4 = L_3->___y_1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_4;
		// finalRotation = GetRotationFromPitchYaw();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetRotationFromPitchYaw() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_5;
		// finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13;
		float L_8 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(50 /* UnityEngine.Vector3 Exoa.Cameras.CameraBase::CalculatePosition(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single) */, __this, L_6, L_7, L_8);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_9;
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraPerspective::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective__ctor_m0D7A2DB6B98731933D17A744EE2759FEA7580359 (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	{
		CameraPerspBase__ctor_m62881D30A4D8F9F541C4036592B2AEAC0CA12EC6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Exoa.Cameras.CameraTopDownOrtho::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_Init_mC1B473F96DE9863106614689E008EF6C44FB5A34 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// base.Init();
		CameraOrthoBase_Init_mC35BF62EA51F7D23B9710BA605117A720A32C2C9(__this, NULL);
		// initSize = finalSize = cam.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam_7;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		float L_2 = L_1;
		V_0 = L_2;
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___finalSize_59 = L_2;
		float L_3 = V_0;
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initSize_61 = L_3;
		// initialRotation.y = transform.rotation.eulerAngles.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_8 = L_7.___y_3;
		L_4->___y_1 = L_8;
		// initOffset = transform.position.SetY(groundHeight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_10, L_11, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9 = L_12;
		// initDistance = CalculateDistance(transform.position, transform.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		float L_17;
		L_17 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_14, L_16, NULL);
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initDistance_62 = L_17;
		// finalOffset = initOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11 = L_18;
		// finalPosition = transform.position.SetY(fixedDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___fixedDistance_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_20, L_21, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_22;
		// finalRotation = GetInitialRotation();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(51 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetInitialRotation() */, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation_13 = L_23;
		// finalDistance = initDistance;
		float L_24 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initDistance_62;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance_14 = L_24;
		// currentPitch = initialRotation.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_26 = L_25->___x_0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_26;
		// currentYaw = initialRotation.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_28 = L_27->___y_1;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_28;
		// allowPitchRotation = false;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowPitchRotation_33 = (bool)0;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraTopDownOrtho::SetResetValues(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_SetResetValues_m7ED168578A159A08DB60C77778EB38628503110F (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, float ___size2, const RuntimeMethod* method) 
{
	{
		// initOffset = offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___offset0;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9 = L_0;
		// currentPitch = rotation.eulerAngles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rotation1), NULL);
		float L_2 = L_1.___x_2;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch_16 = L_2;
		// currentYaw = rotation.eulerAngles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rotation1), NULL);
		float L_4 = L_3.___y_3;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw_17 = L_4;
		// GetInitialRotation();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(51 /* UnityEngine.Quaternion Exoa.Cameras.CameraBase::GetInitialRotation() */, __this);
		// initSize = size;
		float L_6 = ___size2;
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initSize_61 = L_6;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraTopDownOrtho::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_ResetCamera_mC47C90CD22D91E1D589474408BC624A666870F38 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		// StopFocus();
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		// FocusCamera(initOffset, initSize, initRotation.eulerAngles);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset_9;
		float L_1 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initSize_61;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_4, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Exoa.Cameras.CameraTopDownOrtho::GetInitialRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraTopDownOrtho_GetInitialRotation_mD2D04782C0346C21658909A02AA0DF82CB5BBADC (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		// initRotation = Quaternion.Euler(90, initialRotation.y, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation_37);
		float L_1 = L_0->___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), L_1, (0.0f), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10 = L_2;
		// return initRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation_10;
		return L_3;
	}
}
// System.Void Exoa.Cameras.CameraTopDownOrtho::SetPositionByOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_SetPositionByOffset_mC1254947AB560F7CBD3C947ED507B41BA972B9E7 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		// finalPosition = finalOffset.SetY(fixedDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset_11;
		float L_1 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___fixedDistance_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VectorExtensions_SetY_mCFB9D10DAC8B6D7D61CBBB31FF270961DD1FA947(L_0, L_1, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition_12 = L_2;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraTopDownOrtho::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho__ctor_m48EFE176F904A84E3E6FB6E5C3A9CB1E966911A8 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		CameraOrthoBase__ctor_mEE179738DF12DE8BCF73EC11F20F0A06897E35E9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Exoa.Cameras.CameraInputs::get_ControlKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_get_ControlKey_m4D5859694F4EE06CF29E2F543AE86B376094B7FB (const RuntimeMethod* method) 
{
	{
		// public static bool ControlKey => (Event.current != null && Event.current.control && Event.current.type == EventType.KeyDown);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3;
		L_3 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)4))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::get_IsOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsOverUI => EventSystem.current != null && EventSystem.current.IsPointerOverGameObject();
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_2, NULL);
		return L_3;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::ResetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ResetCamera_m885B453B0A1F99BA7A2CF92DBC60B7EBB1E9A7A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Input.GetKeyDown(resetCamera) && !IsOverUI;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___resetCamera_20;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C(NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::IsTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_IsTap_m2537EC776A5CBBC6A2D59AE3CC1772BE6DC9DCAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return isFingerTap && !Input.GetMouseButton(1) && !Input.GetMouseButtonUp(1)
		//  && !Input.GetMouseButton(2) && !Input.GetMouseButtonUp(2);
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerTap_4;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(2, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::IsUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_IsUp_m2A0696F06D2500E9AB2CFFBBFF5B4029C718EABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return isFingerUp && !Input.GetMouseButton(1) && !Input.GetMouseButtonUp(1)
		//  && !Input.GetMouseButton(2) && !Input.GetMouseButtonUp(2);
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerUp_5;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(2, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Single Exoa.Cameras.CameraInputs::GetScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsOverUI) return 1;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (IsOverUI) return 1;
		return (1.0f);
	}

IL_000d:
	{
		// return 1 - Input.GetAxis("Mouse ScrollWheel");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::ChangePerspective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ChangePerspective_m8E088A51F122522CC9E3A29E929F4E942240AD88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Input.GetKeyDown(switchPerspective) && !IsOverUI;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___switchPerspective_21;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C(NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::ReleaseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ReleaseDrag_mC0FC90CD647676CE171C0D113518EC8E1B4B04FF (const RuntimeMethod* method) 
{
	{
		// return Input.GetMouseButtonUp(0);
		bool L_0;
		L_0 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		return L_0;
	}
}
// System.Boolean Exoa.Cameras.CameraInputs::OptionPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_OptionPress_mD23DE6CF8BB9650C5B5E879CFCA7B0E81610B47B (const RuntimeMethod* method) 
{
	{
		// return Input.GetMouseButtonDown(1);
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		return L_0;
	}
}
// System.Void Exoa.Cameras.CameraInputs::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnDestroy_mAC535A3508F5910F826AAA4E4A5FDAC8AD69D134 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputTouch.OnFingerTap -= OnFingerTap;
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_0 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_0, __this, (intptr_t)((void*)CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_remove_OnFingerTap_m4A0A034A45AF5EE14EB056688A45799CC8132FFC(L_0, NULL);
		// InputTouch.OnFingerUp -= OnFingerUp;
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_1 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_1, __this, (intptr_t)((void*)CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var), NULL);
		InputTouch_remove_OnFingerUp_m9267B7070BDDAF36B31BC9B439A53A19A515C8CE(L_1, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraInputs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_Start_mF903E2A735BEF5137AD375F319521338F3DC6F62 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (InputTouch.Instance != null)
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* L_0;
		L_0 = InputTouch_get_Instance_mF98A72985ED5C3B0D69164EDF150B1B16E4ACBFE(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// InputTouch.Instance.UseMouse = !Application.isMobilePlatform;
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* L_2;
		L_2 = InputTouch_get_Instance_mF98A72985ED5C3B0D69164EDF150B1B16E4ACBFE(NULL);
		bool L_3;
		L_3 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		NullCheck(L_2);
		InputTouch_set_UseMouse_m181F6A79E52F1A5AFD0A6768EB29A30A92D40C30_inline(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_001f:
	{
		// InputTouch.OnFingerTap += OnFingerTap;
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_4 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_4, __this, (intptr_t)((void*)CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_add_OnFingerTap_mE28ED09017617792EA25D4C96C8FBAF62EB134D4(L_4, NULL);
		// InputTouch.OnFingerUp += OnFingerUp;
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_5 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_5, __this, (intptr_t)((void*)CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var), NULL);
		InputTouch_add_OnFingerUp_m38024B5A702D266C57BDF2E5FD48F18A28957938(L_5, NULL);
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraInputs::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_Update_m7C902B1DD4F885A462CBEC35099FA9BDB0723140 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// List<TouchFinger> twoFingers = TwoFingerFilter.UpdateAndGetFingers();
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter_7;
		NullCheck(L_0);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_1;
		L_1 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_0, (bool)0, NULL);
		// List<TouchFinger> oneFinger = OneFingerFilter.UpdateAndGetFingers();
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_2 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter_6;
		NullCheck(L_2);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_3;
		L_3 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_2, (bool)0, NULL);
		V_0 = L_3;
		// pinchScale = InputGesture.GetPinchScale(twoFingers);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_4 = L_1;
		float L_5;
		L_5 = InputGesture_GetPinchScale_m3B5C9CDB58128EDFC3B4793C913209878CD14D27(L_4, (0.0f), NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchScale_9 = L_5;
		// pinchRatio = InputGesture.GetPinchRatio(twoFingers);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_6 = L_4;
		float L_7;
		L_7 = InputGesture_GetPinchRatio_mA711A31C55785168B582BB76B6AA1E6018673530(L_6, (0.0f), NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio_10 = L_7;
		// twistDegrees = InputGesture.GetTwistDegrees(twoFingers);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_8 = L_6;
		float L_9;
		L_9 = InputGesture_GetTwistDegrees_m3F813BD422EA2C954D5B935212A6D9B876DEF8E2(L_8, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twistDegrees_11 = L_9;
		// lastScreenPointTwoFingersCenter = InputGesture.GetLastScreenCenter(twoFingers);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_10 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InputGesture_GetLastScreenCenter_m7E5FBA384403965EB6A6B4A2AF9D061061392017(L_10, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter_14 = L_11;
		// screenPointTwoFingersCenter = InputGesture.GetScreenCenter(twoFingers);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = InputGesture_GetScreenCenter_mAD60BD11D7236D0C0D74A5E4E3F9824772CB9D35(L_10, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter_17 = L_12;
		// twoFingersScaledPixelDelta = screenPointTwoFingersCenter - lastScreenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta_13 = L_15;
		// twoFingersScaledPixelDelta *= InputTouch.ScalingFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta_13;
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = InputTouch_get_ScalingFactor_m3200F11A91C954EA2839EA6F622FC4A3D628E403(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_16, L_17, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta_13 = L_18;
		// lastScreenPointOneFingerCenter = InputGesture.GetLastScreenCenter(oneFinger);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = InputGesture_GetLastScreenCenter_m7E5FBA384403965EB6A6B4A2AF9D061061392017(L_19, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointOneFingerCenter_15 = L_20;
		// screenPointOneFingerCenter = InputGesture.GetScreenCenter(oneFinger);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = InputGesture_GetScreenCenter_mAD60BD11D7236D0C0D74A5E4E3F9824772CB9D35(L_21, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointOneFingerCenter_18 = L_22;
		// oneFingerScaledPixelDelta = screenPointOneFingerCenter - lastScreenPointOneFingerCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointOneFingerCenter_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointOneFingerCenter_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_23, L_24, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta_12 = L_25;
		// oneFingerScaledPixelDelta *= InputTouch.ScalingFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta_12;
		float L_27;
		L_27 = InputTouch_get_ScalingFactor_m3200F11A91C954EA2839EA6F622FC4A3D628E403(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_26, L_27, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta_12 = L_28;
		// screenPointAnyFingerCountCenter = screenPointTwoFingersCenter == Vector2.zero ? screenPointOneFingerCenter : screenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_31;
		L_31 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00d5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter_17;
		G_B3_0 = L_32;
		goto IL_00da;
	}

IL_00d5:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointOneFingerCenter_18;
		G_B3_0 = L_33;
	}

IL_00da:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter_19 = G_B3_0;
		// lastScreenPointAnyFingerCountCenter = lastScreenPointTwoFingersCenter == Vector2.zero ? lastScreenPointOneFingerCenter : lastScreenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_36;
		L_36 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_34, L_35, NULL);
		if (L_36)
		{
			goto IL_00f7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter_14;
		G_B6_0 = L_37;
		goto IL_00fc;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointOneFingerCenter_15;
		G_B6_0 = L_38;
	}

IL_00fc:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointAnyFingerCountCenter_16 = G_B6_0;
		// }
		return;
	}
}
// System.Int32 Exoa.Cameras.CameraInputs::GetFingerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB (int32_t ___max0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* V_0 = NULL;
	{
		// List<TouchFinger> list = InputTouch.GetFingers(false, true);
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_0;
		L_0 = InputTouch_GetFingers_mC6BCBC45460BF8CCC3C786E2091EE08C934EAA0D((bool)0, (bool)1, 0, (bool)1, NULL);
		V_0 = L_0;
		// return list != null ? Mathf.Min(max, list.Count) : 0;
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_2 = ___max0;
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_inline(L_3, List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_2, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Exoa.Cameras.CameraInputs::GetAnyPixelScaledDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (oneFingerScaledPixelDelta.magnitude > 0)
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta_12), NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		// return oneFingerScaledPixelDelta;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta_12;
		return L_1;
	}

IL_0017:
	{
		// return twoFingersScaledPixelDelta;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta_13;
		return L_2;
	}
}
// System.Void Exoa.Cameras.CameraInputs::OnFingerUp(Exoa.Touch.TouchFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFingerUp = true;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerUp_5 = (bool)1;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraInputs::OnFingerTap(Exoa.Touch.TouchFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFingerTap = true;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerTap_4 = (bool)1;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraInputs::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_LateUpdate_mD425A5EA47B685E9DEA0E1E1A3357DFAF7C7A9D4 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isFingerTap = false;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerTap_4 = (bool)0;
		// isFingerUp = false;
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerUp_5 = (bool)0;
		// }
		return;
	}
}
// System.Void Exoa.Cameras.CameraInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs__ctor_m95260E6A10D27BA58D23C939382AF2E2D3DDB8B2 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Exoa.Cameras.CameraInputs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs__cctor_mA6370B602F2C609ED9D576E6817998E988A5B75B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FingerFilter OneFingerFilter = new FingerFilter(FingerFilter.FilterType.AllFingers, true, 1, 0, null);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_0 = (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16*)il2cpp_codegen_object_new(FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FingerFilter__ctor_mE561A6F645A166DA1555B5C44F29CCADD362A771(L_0, 0, (bool)1, 1, 0, (TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41*)NULL, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter_6), (void*)L_0);
		// public static FingerFilter TwoFingerFilter = new FingerFilter(FingerFilter.FilterType.AllFingers, true, 2, 0, null);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_1 = (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16*)il2cpp_codegen_object_new(FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FingerFilter__ctor_mE561A6F645A166DA1555B5C44F29CCADD362A771(L_1, 0, (bool)1, 2, 0, (TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41*)NULL, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter_7), (void*)L_1);
		// public static ScreenDepth ScreenDepth = new ScreenDepth(ScreenDepth.ConversionType.HeightIntercept);
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ScreenDepth__ctor_m36E55629497D13AAB09A2D588A68079327CD4C88((&L_2), 5, ((int32_t)-5), (0.0f), /*hidden argument*/NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___ScreenDepth_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___ScreenDepth_8))->___Camera_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___ScreenDepth_8))->___Object_2), (void*)NULL);
		#endif
		// public static float pinchRatio = 1;
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio_10 = (1.0f);
		// public static KeyCode resetCamera = KeyCode.F;
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___resetCamera_20 = ((int32_t)102);
		// public static KeyCode switchPerspective = KeyCode.Space;
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___switchPerspective_21 = ((int32_t)32);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalPosition_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___finalRotation_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => disableMoves = value;
		bool L_0 = ___value0;
		__this->___disableMoves_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___orthoMode0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___orthoMode0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalOffset_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => finalOffset = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___finalOffset_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		// get => finalDistance;
		float L_0 = __this->___finalDistance_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___vector0;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputTouch_set_UseMouse_m181F6A79E52F1A5AFD0A6768EB29A30A92D40C30_inline (InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UseMouse { set { useMouse = value; } get { return useMouse; } }
		bool L_0 = ___value0;
		__this->___useMouse_30 = L_0;
		// public bool UseMouse { set { useMouse = value; } get { return useMouse; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
