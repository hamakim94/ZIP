#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<System.Object>
struct DefaultTypePool_1_tF8EBCF95A3939B0FCE9443A92BB84DD32E1F2427;
// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C;
// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259;
// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50;
// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8;
// ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>
struct Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748;
// ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531;
// System.Collections.Generic.IDictionary`2<System.Type,ProceduralToolkit.LibTessDotNet.ITypePool>
struct IDictionary_2_t05C8F7344C70F09B4EFE1C7256EAC02C3C6F33C1;
// System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>
struct IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70;
// ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<System.Object>
struct LessOrEqual_t3A046E9D03F584A315E6C379447C15C2C6070FDC;
// ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>
struct LessOrEqual_t5AC957501A13742C8127C186ED6D3E25C4511E21;
// ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58;
// ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<System.Object>
struct Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D;
// ProceduralToolkit.LibTessDotNet.PriorityHeap`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct PriorityHeap_1_t48EE98C403DC2D565A4B87F712D45DE002291378;
// ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>
struct PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B;
// ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927;
// System.Collections.Generic.Queue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Edge>
struct Queue_1_tF247858B74B2C07FEC512445DD013EF835B22544;
// System.Collections.Generic.Queue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Face>
struct Queue_1_t0FE1500268B7A68B45F4E57E129828946D2E2D3F;
// System.Collections.Generic.Queue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct Queue_1_t46E028264B756CDDF2EEB436E57928C23828A57B;
// System.Collections.Generic.Queue`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct Queue_1_t6792D20CC531CD0320B063361E572307E6D8FD20;
// ProceduralToolkit.LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ProceduralToolkit.LibTessDotNet.CombineCallback
struct CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9;
// ProceduralToolkit.LibTessDotNet.DefaultPool
struct DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ProceduralToolkit.LibTessDotNet.IPool
struct IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// ProceduralToolkit.LibTessDotNet.Mesh
struct Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProceduralToolkit.LibTessDotNet.NullPool
struct NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// ProceduralToolkit.LibTessDotNet.Tess
struct Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge
struct Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Face
struct Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex
struct Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C;
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE;

IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64;
IL2CPP_EXTERN_C String_t* _stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m230FE9743ED76CE16996600D2AD1BD86FCCD41FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m81F3DA97290F2261C02FBA96153CEE2AF4FB706A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m192B164DF44E7DBD72203C4BBC0143F7B95B0E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_m5201AE90CD0391C6658129210F44D64BFC1106C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mABCA8B3096288CE3D1AE740ED40CFB1648B96878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m1415C029D364C624A0EB24110DEAE23585476F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8DA2982E17923D362760FE11B581E64105342296 
{
};

// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> ProceduralToolkit.LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tF247858B74B2C07FEC512445DD013EF835B22544* ____pool_0;
};

// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> ProceduralToolkit.LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t0FE1500268B7A68B45F4E57E129828946D2E2D3F* ____pool_0;
};

// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> ProceduralToolkit.LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t46E028264B756CDDF2EEB436E57928C23828A57B* ____pool_0;
};

// ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> ProceduralToolkit.LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t6792D20CC531CD0320B063361E572307E6D8FD20* ____pool_0;
};

// ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<TValue> ProceduralToolkit.LibTessDotNet.Dict`1::_leq
	LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* ____leq_0;
	// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1::_head
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____head_1;
};

// ProceduralToolkit.LibTessDotNet.Dict`1/Node<System.Object>
struct Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB  : public RuntimeObject
{
	// TValue ProceduralToolkit.LibTessDotNet.Dict`1/Node::_key
	RuntimeObject* ____key_0;
	// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1/Node::_prev
	Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ____prev_1;
	// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1/Node::_next
	Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ____next_2;
};

// ProceduralToolkit.LibTessDotNet.Dict`1/Node<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D  : public RuntimeObject
{
	// TValue ProceduralToolkit.LibTessDotNet.Dict`1/Node::_key
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ____key_0;
	// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1/Node::_prev
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____prev_1;
	// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1/Node::_next
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____next_2;
};

// ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue> ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_leq
	LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* ____leq_0;
	// ProceduralToolkit.LibTessDotNet.PriorityHeap`1<TValue> ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_heap
	PriorityHeap_1_t48EE98C403DC2D565A4B87F712D45DE002291378* ____heap_1;
	// TValue[] ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_keys
	VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* ____keys_2;
	// System.Int32[] ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_order
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order_3;
	// System.Int32 ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_size
	int32_t ____size_4;
	// System.Int32 ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_max
	int32_t ____max_5;
	// System.Boolean ProceduralToolkit.LibTessDotNet.PriorityQueue`1::_initialized
	bool ____initialized_6;
};
struct Il2CppArrayBounds;

// ProceduralToolkit.LibTessDotNet.Geom
struct Geom_tAB10B7089C877A6000B26AFCCD326E52743FF8C7  : public RuntimeObject
{
};

// ProceduralToolkit.LibTessDotNet.IPool
struct IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7  : public RuntimeObject
{
};

// ProceduralToolkit.LibTessDotNet.Mesh
struct Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.Mesh::_vHead
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____vHead_0;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.Mesh::_fHead
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____fHead_1;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::_eHead
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eHead_2;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::_eHeadSym
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eHeadSym_3;
};

// ProceduralToolkit.LibTessDotNet.MeshUtils
struct MeshUtils_tAA33E2AF88D2FFC1F6816B0259520AD0D76DE80A  : public RuntimeObject
{
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

// ProceduralToolkit.LibTessDotNet.MeshUtils/Face
struct Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_prev
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____prev_0;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_next
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____next_1;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_anEdge
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____anEdge_2;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_trail
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____trail_3;
	// System.Int32 ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_n
	int32_t ____n_4;
	// System.Boolean ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_marked
	bool ____marked_5;
	// System.Boolean ProceduralToolkit.LibTessDotNet.MeshUtils/Face::_inside
	bool ____inside_6;
};

// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_eUp
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eUp_0;
	// ProceduralToolkit.LibTessDotNet.Dict`1/Node<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion> ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_nodeUp
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____nodeUp_1;
	// System.Int32 ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_windingNumber
	int32_t ____windingNumber_2;
	// System.Boolean ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_inside
	bool ____inside_3;
	// System.Boolean ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_sentinel
	bool ____sentinel_4;
	// System.Boolean ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_dirty
	bool ____dirty_5;
	// System.Boolean ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::_fixUpperEdge
	bool ____fixUpperEdge_6;
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

// ProceduralToolkit.LibTessDotNet.DefaultPool
struct DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E  : public IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7
{
	// System.Collections.Generic.IDictionary`2<System.Type,ProceduralToolkit.LibTessDotNet.ITypePool> ProceduralToolkit.LibTessDotNet.DefaultPool::_register
	RuntimeObject* ____register_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// ProceduralToolkit.LibTessDotNet.NullPool
struct NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF  : public IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7
{
};

// ProceduralToolkit.LibTessDotNet.PQHandle
struct PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 
{
	// System.Int32 ProceduralToolkit.LibTessDotNet.PQHandle::_handle
	int32_t ____handle_1;
};

struct PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields
{
	// System.Int32 ProceduralToolkit.LibTessDotNet.PQHandle::Invalid
	int32_t ___Invalid_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// ProceduralToolkit.LibTessDotNet.Vec3
struct Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 
{
	// System.Single ProceduralToolkit.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single ProceduralToolkit.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single ProceduralToolkit.LibTessDotNet.Vec3::Z
	float ___Z_3;
};

struct Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields
{
	// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.Vec3::Zero
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Zero_0;
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

// ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E 
{
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair::_e
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____e_0;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair::_eSym
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eSym_1;
};
// Native definition for P/Invoke marshalling of ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____e_0;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eSym_1;
};
// Native definition for COM marshalling of ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____e_0;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eSym_1;
};

// ProceduralToolkit.LibTessDotNet.ContourVertex
struct ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 
{
	// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.ContourVertex::Position
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Position_0;
	// System.Object ProceduralToolkit.LibTessDotNet.ContourVertex::Data
	RuntimeObject* ___Data_1;
};
// Native definition for P/Invoke marshalling of ProceduralToolkit.LibTessDotNet.ContourVertex
struct ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of ProceduralToolkit.LibTessDotNet.ContourVertex
struct ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Position_0;
	Il2CppIUnknown* ___Data_1;
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

// ProceduralToolkit.LibTessDotNet.Tess
struct Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.IPool ProceduralToolkit.LibTessDotNet.Tess::_pool
	IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ____pool_0;
	// ProceduralToolkit.LibTessDotNet.Mesh ProceduralToolkit.LibTessDotNet.Tess::_mesh
	Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* ____mesh_1;
	// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.Tess::_normal
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____normal_2;
	// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.Tess::_sUnit
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____sUnit_3;
	// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.Tess::_tUnit
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____tUnit_4;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::_bminX
	float ____bminX_5;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::_bminY
	float ____bminY_6;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::_bmaxX
	float ____bmaxX_7;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::_bmaxY
	float ____bmaxY_8;
	// ProceduralToolkit.LibTessDotNet.WindingRule ProceduralToolkit.LibTessDotNet.Tess::_windingRule
	int32_t ____windingRule_9;
	// ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion> ProceduralToolkit.LibTessDotNet.Tess::_dict
	Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* ____dict_10;
	// ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex> ProceduralToolkit.LibTessDotNet.Tess::_pq
	PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* ____pq_11;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.Tess::_event
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____event_12;
	// ProceduralToolkit.LibTessDotNet.CombineCallback ProceduralToolkit.LibTessDotNet.Tess::_combineCallback
	CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* ____combineCallback_13;
	// ProceduralToolkit.LibTessDotNet.ContourVertex[] ProceduralToolkit.LibTessDotNet.Tess::_vertices
	ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* ____vertices_14;
	// System.Int32 ProceduralToolkit.LibTessDotNet.Tess::_vertexCount
	int32_t ____vertexCount_15;
	// System.Int32[] ProceduralToolkit.LibTessDotNet.Tess::_elements
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements_16;
	// System.Int32 ProceduralToolkit.LibTessDotNet.Tess::_elementCount
	int32_t ____elementCount_17;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::SUnitX
	float ___SUnitX_19;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::SUnitY
	float ___SUnitY_20;
	// System.Single ProceduralToolkit.LibTessDotNet.Tess::SentinelCoord
	float ___SentinelCoord_21;
	// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::NoEmptyPolygons
	bool ___NoEmptyPolygons_22;
	// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::UsePooling
	bool ___UsePooling_23;
};

// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge
struct Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_pair
	EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E ____pair_0;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_next
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____next_1;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_Sym
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____Sym_2;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_Onext
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____Onext_3;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_Lnext
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____Lnext_4;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_Org
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____Org_5;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_Lface
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____Lface_6;
	// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_activeRegion
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ____activeRegion_7;
	// System.Int32 ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::_winding
	int32_t ____winding_8;
};

// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex
struct Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C  : public RuntimeObject
{
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_prev
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____prev_0;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_next
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____next_1;
	// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_anEdge
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____anEdge_2;
	// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_coords
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____coords_3;
	// System.Single ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_s
	float ____s_4;
	// System.Single ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_t
	float ____t_5;
	// ProceduralToolkit.LibTessDotNet.PQHandle ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_pqHandle
	PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 ____pqHandle_6;
	// System.Int32 ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_n
	int32_t ____n_7;
	// System.Object ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::_data
	RuntimeObject* ____data_8;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58  : public MulticastDelegate_t
{
};

// ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// ProceduralToolkit.LibTessDotNet.CombineCallback
struct CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9  : public MulticastDelegate_t
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// ProceduralToolkit.LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 m_Items[1];

	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data_1), (void*)NULL);
	}
	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data_1), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* m_Items[1];

	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared (DefaultTypePool_1_tF8EBCF95A3939B0FCE9443A92BB84DD32E1F2427* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>::Remove(ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_mADE66A181C30A7D76E41A158B59E42071A690A67_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ___node0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>::InsertBefore(ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_InsertBefore_m159D54C38BE44E595D44A97D90D4881802A11FD3_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ___node0, RuntimeObject* ___key1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>::Remove(ProceduralToolkit.LibTessDotNet.PQHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m764AD03A4DAEF58900CB92D6E4CF4C8994487266_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 ___handle0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.PQHandle ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 PriorityQueue_1_Insert_m8815D815BA459FA421D4AAC9EF0BA3EEA21C09B2_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>::Find(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_Find_mD5647439A46530CF6F934DBAA872EC67BC4A6EF7_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue ProceduralToolkit.LibTessDotNet.Dict`1/Node<System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_mE91C7EABEFDECA9C2C21D7214FBF02A903D24F7B_gshared_inline (Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* __this, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_Insert_m9674D115D025FBD4440C781AAF5F69C8B04E102E_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mE082BA53D5A6EEF208612B738F5AFA4D4097ADD3_gshared (LessOrEqual_t3A046E9D03F584A315E6C379447C15C2C6070FDC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>::.ctor(ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_mE8EDBDD11C7C90ACA3660350DEA390BCADF329B3_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, LessOrEqual_t3A046E9D03F584A315E6C379447C15C2C6070FDC* ___leq0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<System.Object>::Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_Min_m95F553429EA3146FA83B7B6150743BC59420BE41_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m528B5E5BB498D26109079AECCBB1F2763C07FB31_gshared (LessOrEqual_t5AC957501A13742C8127C186ED6D3E25C4511E21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>::.ctor(System.Int32,ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_mDB50D4B9714A8556BD7A7D269A47401351E7908E_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, int32_t ___initialSize0, LessOrEqual_t5AC957501A13742C8127C186ED6D3E25C4511E21* ___leq1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_mB0A6425655CF05A00ACDCA2D81F94246E95AE0DD_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, const RuntimeMethod* method) ;
// TValue ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>::Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Minimum_mA6204E6799B0E5DA0D94E9C154B506A1D0D7EC00_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, const RuntimeMethod* method) ;
// TValue ProceduralToolkit.LibTessDotNet.PriorityQueue`1<System.Object>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_ExtractMin_m4FD80D91FC46D53A0E54BD423163C0081E8351DC_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::VertLeq(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___lhs0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___rhs1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Geom::Swap(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex&,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___a0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___b1, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Geom::EdgeEval(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83 (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Geom::EdgeSign(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::TransLeq(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___lhs0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___rhs1, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Geom::TransEval(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Geom::TransSign(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair::Create(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils::MakeEdge(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eNext1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::MakeVertex(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrig1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vNext2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::MakeFace(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrig1, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___fNext2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::KillVertex(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vDel1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___newOrg2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::KillFace(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Face,ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___fDel1, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___newLFace2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::Splice(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___a0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___b1, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::KillEdge(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDel1, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::AddEdgeVertex(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_AddEdgeVertex_mC3ECCF182D8F521EBC26110F3001B903A55211C0 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Dst(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_m56F56B99812B22C677B6254CE6188FB788473604 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___value0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Rface(ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m66117D5A92950759B7A650E6A58360D9F0CD348D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___value0, const RuntimeMethod* method) ;
// System.Int32 ProceduralToolkit.LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68 (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::VertCCW(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Delete(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDel1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String ProceduralToolkit.LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::.ctor()
inline void DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4 (DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Face>::.ctor()
inline void DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3 (DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Edge>::.ctor()
inline void DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875 (DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.DefaultTypePool`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::.ctor()
inline void DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38 (DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::EnsureFirst(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** ___e0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4 (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::Remove(ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue>)
inline void Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ___node0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*, const RuntimeMethod*))Dict_1_Remove_mADE66A181C30A7D76E41A158B59E42071A690A67_gshared)(__this, ___node0, method);
}
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::RegionAbove(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::RegionBelow(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::Connect(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDst2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::FixUpperEdge(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___newEdge1, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::InsertBefore(ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue>,TValue)
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ___node0, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___key1, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*, const RuntimeMethod*))Dict_1_InsertBefore_m159D54C38BE44E595D44A97D90D4881802A11FD3_gshared)(__this, ___node0, ___key1, method);
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::IsWindingInside(ProceduralToolkit.LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DeleteRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::FinishRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Splice(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDst2, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::AddRegionBelow(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regAbove0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eNewUp1, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::CheckForRightSplice(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Geom::AddWinding(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDst0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eSrc1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::WalkDirtyRegions(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Geom::VertL1dist(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::VertexWeights(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___isect0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___org1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method) ;
// System.Object ProceduralToolkit.LibTessDotNet.CombineCallback::Invoke(ProceduralToolkit.LibTessDotNet.Vec3,System.Object[],System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_inline (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::VertEq(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___lhs0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___rhs1, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::SplitEdge(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::Remove(ProceduralToolkit.LibTessDotNet.PQHandle)
inline void PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 ___handle0, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314, const RuntimeMethod*))PriorityQueue_1_Remove_m764AD03A4DAEF58900CB92D6E4CF4C8994487266_gshared)(__this, ___handle0, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::SpliceMergeVertices(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e10, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e21, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Geom::EdgeIntersect(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_m4D225F1D0B04094B17E891B09BF88B31E4C17224 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___o10, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___d11, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___o22, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___d23, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v4, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::TopLeftRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Tess::FinishLeftRegions(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regFirst0, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regLast1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddRightEdges(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eFirst1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eLast2, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::TopRightRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopRightRegion_m36BDED50C55A6ABF5E1106897FB04E1B4BB6D007 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.PQHandle ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::Insert(TValue)
inline PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___value0, const RuntimeMethod* method)
{
	return ((  PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*, const RuntimeMethod*))PriorityQueue_1_Insert_m8815D815BA459FA421D4AAC9EF0BA3EEA21C09B2_gshared)(__this, ___value0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::GetIntersectData(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_mC7C5CC61E4012E373A4661A298DA00C2A9B10FBA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___isect0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___orgUp1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___dstUp2, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___orgLo3, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___dstLo4, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::CheckForLeftSplice(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_mA422AF26ED6CD7EBB1E540E2CBF125182C61771A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::CheckForIntersect(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::SweepEvent(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vEvent0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::Find(TValue)
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___key0, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*, const RuntimeMethod*))Dict_1_Find_mD5647439A46530CF6F934DBAA872EC67BC4A6EF7_gshared)(__this, ___key0, method);
}
// TValue ProceduralToolkit.LibTessDotNet.Dict`1/Node<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::get_Key()
inline ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_inline (Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* (*) (Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*, const RuntimeMethod*))Node_get_Key_mE91C7EABEFDECA9C2C21D7214FBF02A903D24F7B_gshared_inline)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ConnectLeftDegenerate(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vEvent1, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Dnext_m61B1425BB7BBFA4D996A431C104F8417603F206C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ComputeWinding(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m164A5309BBEAAA26966D2AE1E0CF8FAC99FA9376 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ConnectLeftVertex(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m688BD9B47D51640C1CE3F56EBB131201FF6174D4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vEvent0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ConnectRightVertex(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m7CF37EC43C24079CE8FEA77404E8A08BB22992D2 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eBottomLeft1, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::MakeEdge(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::Insert(TValue)
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___key0, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*, const RuntimeMethod*))Dict_1_Insert_m9674D115D025FBD4440C781AAF5F69C8B04E102E_gshared)(__this, ___key0, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_mBBAC12C0C1638916E114F128CD3F87B86508D94A (LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mE082BA53D5A6EEF208612B738F5AFA4D4097ADD3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::.ctor(ProceduralToolkit.LibTessDotNet.Dict`1/LessOrEqual<TValue>)
inline void Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* ___leq0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A*, const RuntimeMethod*))Dict_1__ctor_mE8EDBDD11C7C90ACA3660350DEA390BCADF329B3_gshared)(__this, ___leq0, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method) ;
// ProceduralToolkit.LibTessDotNet.Dict`1/Node<TValue> ProceduralToolkit.LibTessDotNet.Dict`1<ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion>::Min()
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, const RuntimeMethod*))Dict_1_Min_m95F553429EA3146FA83B7B6150743BC59420BE41_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_mC062AD51CEBEC2C0372E1AD778700E992E3015CE (LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m528B5E5BB498D26109079AECCBB1F2763C07FB31_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Int32,ProceduralToolkit.LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
inline void PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, int32_t ___initialSize0, LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* ___leq1, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, int32_t, LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58*, const RuntimeMethod*))PriorityQueue_1__ctor_mDB50D4B9714A8556BD7A7D269A47401351E7908E_gshared)(__this, ___initialSize0, ___leq1, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::Init()
inline void PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, const RuntimeMethod*))PriorityQueue_1_Init_mB0A6425655CF05A00ACDCA2D81F94246E95AE0DD_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_mEA740DA6799454F92769FF3D9A7377920D2657FA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_m60439FCFF58F6194C3C997FD0918BD7EEBC6FE8E (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// TValue ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::Minimum()
inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, const RuntimeMethod*))PriorityQueue_1_Minimum_mA6204E6799B0E5DA0D94E9C154B506A1D0D7EC00_gshared)(__this, method);
}
// TValue ProceduralToolkit.LibTessDotNet.PriorityQueue`1<ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex>::ExtractMin()
inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m4FD80D91FC46D53A0E54BD423163C0081E8351DC_gshared)(__this, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m760B02FF396436E30372443619D044DA95FCC05D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m000B1D23F66BAA98C855F506E6AD7EE087BE2DE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m1418BADB8C4AB3BD573CDBC48DB0F5AB1637C575 (DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::.ctor(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB97C95E8EFABD8EA0CAB9B9AB0A353B728ECB28D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mE6458D67CCDD6BC8DE755C638E600AA573298FCE (NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Sub(ProceduralToolkit.LibTessDotNet.Vec3&,ProceduralToolkit.LibTessDotNet.Vec3&,ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___lhs0, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___rhs1, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___result2, const RuntimeMethod* method) ;
// System.Int32 ProceduralToolkit.LibTessDotNet.Vec3::LongAxis(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v0, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.MeshUtils::FaceArea(ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___f0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Neg(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m56FA56AE9B5B9AC36E12FF1A40FCDA51EFF04139 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ComputeNormal(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m8A17094DCC720DDB670B30AAB562FC37ABD307A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___norm0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Dot(ProceduralToolkit.LibTessDotNet.Vec3&,ProceduralToolkit.LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___u0, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v1, float* ___dot2, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_mC98D6D1A4D24FC080952E17734F178CB20E35041 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::EdgeGoesLeft(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_m661D83069B722B9BF6031E6A9E5F3AA05F8CC06C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e0, const RuntimeMethod* method) ;
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::EdgeGoesRight(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m20C08A2EA78E8ED7B91CD6CD677F0F52E7A5F50A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::TessellateMonoRegion(ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_mAFDE0D12109933FBACE160C2FCFAF118FEA1458C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___face0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::ZapFace(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m5EA809DDA7500239AB92BEBF71D6F25F90FF326D (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___fZap1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::MergeConvexFaces(ProceduralToolkit.LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m5A5B25E0A8953C1CE73FC5C215C93A5B550DDFE3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method) ;
// System.Int32 ProceduralToolkit.LibTessDotNet.Tess::GetNeighbourFace(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_m5E5A22A378DB4BFA1F77FF6C42FEEDDD4734F39C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___edge0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>,ProceduralToolkit.LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) ;
// System.Single ProceduralToolkit.LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m805061A3ABFFED5CEEB369534F14C83195ADEB6C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___vertices0, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_mE898E1815D7491F44FA1AF3C242E3CDBDA49455F (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mA51153C7B94F34C4161B6060D67385A801DDACE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m8A41F77B75A390E8D960C52A6564CF48288AE90A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mAC4117DACBE4B60A5173D688C6919981B2C18B6D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_m8E950D86EC60346E478BD58B08B486430D5D4461 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.Tess::OutputPolymesh(ProceduralToolkit.LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_m86408071771F039677956D25E8E3A62EF95482C5 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method) ;
// System.Void ProceduralToolkit.LibTessDotNet.ContourVertex::.ctor(ProceduralToolkit.LibTessDotNet.Vec3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String ProceduralToolkit.LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, const RuntimeMethod* method) ;
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
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::IsWindingInside(ProceduralToolkit.LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rule0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002d;
			}
			case 4:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		// return (n & 1) == 1;
		int32_t L_1 = ___n1;
		return (bool)((((int32_t)((int32_t)(L_1&1))) == ((int32_t)1))? 1 : 0);
	}

IL_0023:
	{
		// return n != 0;
		int32_t L_2 = ___n1;
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0028:
	{
		// return n > 0;
		int32_t L_3 = ___n1;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		// return n < 0;
		int32_t L_4 = ___n1;
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		// return n >= 2 || n <= -2;
		int32_t L_5 = ___n1;
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___n1;
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003f:
	{
		return (bool)1;
	}

IL_0041:
	{
		// throw new Exception("Wrong winding rule");
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F_RuntimeMethod_var)));
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::VertCCW(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) 
{
	{
		// return (u._s * (v._t - w._t) + v._s * (w._t - u._t) + w._s * (u._t - v._t)) >= 0.0f;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___w2;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___u0;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = ___v1;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_5)))), ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_9, L_11)))))), ((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::VertEq(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___lhs0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return lhs._s == rhs._s && lhs._t == rhs._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::VertLeq(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___lhs0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return (lhs._s < rhs._s) || (lhs._s == rhs._s && lhs._t <= rhs._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Geom::EdgeEval(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var gapL = v._s - u._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// var gapR = w._s - v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// if (gapL + gapR > 0.0f)
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// if (gapL < gapR)
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		// return (v._t - u._t) + (u._t - w._t) * (gapL / (gapL + gapR));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = ___u0;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___w2;
		NullCheck(L_18);
		float L_19 = L_18->____t_5;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		// return (v._t - w._t) + (w._t - u._t) * (gapR / (gapL + gapR));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = ___v1;
		NullCheck(L_23);
		float L_24 = L_23->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___w2;
		NullCheck(L_25);
		float L_26 = L_25->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = ___w2;
		NullCheck(L_27);
		float L_28 = L_27->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = ___u0;
		NullCheck(L_29);
		float L_30 = L_29->____t_5;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Geom::EdgeSign(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var gapL = v._s - u._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// var gapR = w._s - v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// if (gapL + gapR > 0.0f)
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// return (v._t - w._t) * gapL + (v._t - u._t) * gapR;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___v1;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____t_5;
		float L_14 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___v1;
		NullCheck(L_15);
		float L_16 = L_15->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = ___u0;
		NullCheck(L_17);
		float L_18 = L_17->____t_5;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::TransLeq(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___lhs0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___rhs1, const RuntimeMethod* method) 
{
	{
		// return (lhs._t < rhs._t) || (lhs._t == rhs._t && lhs._s <= rhs._s);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Geom::TransEval(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var gapL = v._t - u._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// var gapR = w._t - v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// if (gapL + gapR > 0.0f)
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// if (gapL < gapR)
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		// return (v._s - u._s) + (u._s - w._s) * (gapL / (gapL + gapR));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = ___u0;
		NullCheck(L_16);
		float L_17 = L_16->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___w2;
		NullCheck(L_18);
		float L_19 = L_18->____s_4;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		// return (v._s - w._s) + (w._s - u._s) * (gapR / (gapL + gapR));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = ___v1;
		NullCheck(L_23);
		float L_24 = L_23->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___w2;
		NullCheck(L_25);
		float L_26 = L_25->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = ___w2;
		NullCheck(L_27);
		float L_28 = L_27->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = ___u0;
		NullCheck(L_29);
		float L_30 = L_29->____s_4;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Geom::TransSign(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var gapL = v._t - u._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// var gapR = w._t - v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// if (gapL + gapR > 0.0f)
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// return (v._s - w._s) * gapL + (v._s - u._s) * gapR;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___v1;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		float L_14 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___v1;
		NullCheck(L_15);
		float L_16 = L_15->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = ___u0;
		NullCheck(L_17);
		float L_18 = L_17->____s_4;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::EdgeGoesLeft(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_m661D83069B722B9BF6031E6A9E5F3AA05F8CC06C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e0, const RuntimeMethod* method) 
{
	{
		// return VertLeq(e._Dst, e._Org);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___e0;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_0, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___e0;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____Org_5;
		bool L_4;
		L_4 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Geom::EdgeGoesRight(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m20C08A2EA78E8ED7B91CD6CD677F0F52E7A5F50A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e0, const RuntimeMethod* method) 
{
	{
		// return VertLeq(e._Org, e._Dst);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___e0;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___e0;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3;
		L_3 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_2, NULL);
		bool L_4;
		L_4 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Geom::VertL1dist(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___u0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(u._s - v._s) + Math.Abs(u._t - v._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = ___u0;
		NullCheck(L_5);
		float L_6 = L_5->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = ___v1;
		NullCheck(L_7);
		float L_8 = L_7->____t_5;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		return ((float)il2cpp_codegen_add(L_4, L_9));
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Geom::AddWinding(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDst0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eSrc1, const RuntimeMethod* method) 
{
	{
		// eDst._winding += eSrc._winding;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___eDst0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____winding_8;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = ___eSrc1;
		NullCheck(L_3);
		int32_t L_4 = L_3->____winding_8;
		NullCheck(L_1);
		L_1->____winding_8 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		// eDst._Sym._winding += eSrc._Sym._winding;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___eDst0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____winding_8;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___eSrc1;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Sym_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____winding_8;
		NullCheck(L_7);
		L_7->____winding_8 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		// }
		return;
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83 (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method) 
{
	{
		// if (a < 0.0f)
		float L_0 = ___a0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// a = 0.0f;
		___a0 = (0.0f);
	}

IL_000f:
	{
		// if (b < 0.0f)
		float L_1 = ___b2;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// b = 0.0f;
		___b2 = (0.0f);
	}

IL_001e:
	{
		// return ((a <= b) ? ((b == 0.0f) ? ((x+y) / 2.0f)
		//         : (x + (y-x) * (a/(a+b))))
		//         : (y + (x-y) * (b/(a+b))));
		float L_2 = ___a0;
		float L_3 = ___b2;
		if ((((float)L_2) <= ((float)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		float L_4 = ___y3;
		float L_5 = ___x1;
		float L_6 = ___y3;
		float L_7 = ___b2;
		float L_8 = ___a0;
		float L_9 = ___b2;
		return ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))))));
	}

IL_002e:
	{
		float L_10 = ___b2;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_11 = ___x1;
		float L_12 = ___y3;
		float L_13 = ___x1;
		float L_14 = ___a0;
		float L_15 = ___a0;
		float L_16 = ___b2;
		return ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), ((float)(L_14/((float)il2cpp_codegen_add(L_15, L_16))))))));
	}

IL_0042:
	{
		float L_17 = ___x1;
		float L_18 = ___y3;
		return ((float)(((float)il2cpp_codegen_add(L_17, L_18))/(2.0f)));
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Geom::Swap(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex&,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___a0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___b1, const RuntimeMethod* method) 
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	{
		// var tmp = a;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_0 = ___a0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = *((Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C**)L_0);
		V_0 = L_1;
		// a = b;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_2 = ___a0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_3 = ___b1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = *((Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C**)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		// b = tmp;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_5 = ___b1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = V_0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Geom::EdgeIntersect(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_m4D225F1D0B04094B17E891B09BF88B31E4C17224 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___o10, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___d11, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___o22, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___d23, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___v4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// if (!VertLeq(o1, d1)) { Swap(ref o1, ref d1); }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___d11;
		bool L_2;
		L_2 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!VertLeq(o1, d1)) { Swap(ref o1, ref d1); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___o10), (&___d11), NULL);
	}

IL_0012:
	{
		// if (!VertLeq(o2, d2)) { Swap(ref o2, ref d2); }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___d23;
		bool L_5;
		L_5 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		// if (!VertLeq(o2, d2)) { Swap(ref o2, ref d2); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___o22), (&___d23), NULL);
	}

IL_0024:
	{
		// if (!VertLeq(o1, o2)) { Swap(ref o1, ref o2); Swap(ref d1, ref d2); }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = ___o22;
		bool L_8;
		L_8 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		// if (!VertLeq(o1, o2)) { Swap(ref o1, ref o2); Swap(ref d1, ref d2); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___o10), (&___o22), NULL);
		// if (!VertLeq(o1, o2)) { Swap(ref o1, ref o2); Swap(ref d1, ref d2); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___d11), (&___d23), NULL);
	}

IL_003f:
	{
		// if (!VertLeq(o2, d1))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___d11;
		bool L_11;
		L_11 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0067;
		}
	}
	{
		// v._s = (o2._s + d1._s) / 2.0f;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___v4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = ___o22;
		NullCheck(L_13);
		float L_14 = L_13->____s_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___d11;
		NullCheck(L_15);
		float L_16 = L_15->____s_4;
		NullCheck(L_12);
		L_12->____s_4 = ((float)(((float)il2cpp_codegen_add(L_14, L_16))/(2.0f)));
		goto IL_00eb;
	}

IL_0067:
	{
		// else if (VertLeq(d1, d2))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = ___d11;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___d23;
		bool L_19;
		L_19 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		// var z1 = EdgeEval(o1, o2, d1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = ___d11;
		float L_23;
		L_23 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_20, L_21, L_22, NULL);
		V_0 = L_23;
		// var z2 = EdgeEval(o2, d1, d2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___d11;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = ___d23;
		float L_27;
		L_27 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_24, L_25, L_26, NULL);
		V_1 = L_27;
		// if (z1 + z2 < 0.0f)
		float L_28 = V_0;
		float L_29 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_28, L_29))) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		// z1 = -z1;
		float L_30 = V_0;
		V_0 = ((-L_30));
		// z2 = -z2;
		float L_31 = V_1;
		V_1 = ((-L_31));
	}

IL_0092:
	{
		// v._s = Interpolate(z1, o2._s, z2, d1._s);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = ___v4;
		float L_33 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = ___o22;
		NullCheck(L_34);
		float L_35 = L_34->____s_4;
		float L_36 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = ___d11;
		NullCheck(L_37);
		float L_38 = L_37->____s_4;
		float L_39;
		L_39 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_33, L_35, L_36, L_38, NULL);
		NullCheck(L_32);
		L_32->____s_4 = L_39;
		goto IL_00eb;
	}

IL_00ae:
	{
		// var z1 = EdgeSign(o1, o2, d1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = ___d11;
		float L_43;
		L_43 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_40, L_41, L_42, NULL);
		V_2 = L_43;
		// var z2 = -EdgeSign(o1, d2, d1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45 = ___d23;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = ___d11;
		float L_47;
		L_47 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_44, L_45, L_46, NULL);
		V_3 = ((-L_47));
		// if (z1 + z2 < 0.0f)
		float L_48 = V_2;
		float L_49 = V_3;
		if ((!(((float)((float)il2cpp_codegen_add(L_48, L_49))) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// z1 = -z1;
		float L_50 = V_2;
		V_2 = ((-L_50));
		// z2 = -z2;
		float L_51 = V_3;
		V_3 = ((-L_51));
	}

IL_00d1:
	{
		// v._s = Interpolate(z1, o2._s, z2, d2._s);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = ___v4;
		float L_53 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = ___o22;
		NullCheck(L_54);
		float L_55 = L_54->____s_4;
		float L_56 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_57 = ___d23;
		NullCheck(L_57);
		float L_58 = L_57->____s_4;
		float L_59;
		L_59 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_53, L_55, L_56, L_58, NULL);
		NullCheck(L_52);
		L_52->____s_4 = L_59;
	}

IL_00eb:
	{
		// if (!TransLeq(o1, d1)) { Swap(ref o1, ref d1); }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_61 = ___d11;
		bool L_62;
		L_62 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_60, L_61, NULL);
		if (L_62)
		{
			goto IL_00fd;
		}
	}
	{
		// if (!TransLeq(o1, d1)) { Swap(ref o1, ref d1); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___o10), (&___d11), NULL);
	}

IL_00fd:
	{
		// if (!TransLeq(o2, d2)) { Swap(ref o2, ref d2); }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_64 = ___d23;
		bool L_65;
		L_65 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_010f;
		}
	}
	{
		// if (!TransLeq(o2, d2)) { Swap(ref o2, ref d2); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___o22), (&___d23), NULL);
	}

IL_010f:
	{
		// if (!TransLeq(o1, o2)) { Swap(ref o1, ref o2); Swap(ref d1, ref d2); }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_66 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = ___o22;
		bool L_68;
		L_68 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_66, L_67, NULL);
		if (L_68)
		{
			goto IL_012a;
		}
	}
	{
		// if (!TransLeq(o1, o2)) { Swap(ref o1, ref o2); Swap(ref d1, ref d2); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___o10), (&___o22), NULL);
		// if (!TransLeq(o1, o2)) { Swap(ref o1, ref o2); Swap(ref d1, ref d2); }
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___d11), (&___d23), NULL);
	}

IL_012a:
	{
		// if (!TransLeq(o2, d1))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_70 = ___d11;
		bool L_71;
		L_71 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_69, L_70, NULL);
		if (L_71)
		{
			goto IL_014e;
		}
	}
	{
		// v._t = (o2._t + d1._t) / 2.0f;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = ___v4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_73 = ___o22;
		NullCheck(L_73);
		float L_74 = L_73->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75 = ___d11;
		NullCheck(L_75);
		float L_76 = L_75->____t_5;
		NullCheck(L_72);
		L_72->____t_5 = ((float)(((float)il2cpp_codegen_add(L_74, L_76))/(2.0f)));
		return;
	}

IL_014e:
	{
		// else if (TransLeq(d1, d2))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_77 = ___d11;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_78 = ___d23;
		bool L_79;
		L_79 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_019e;
		}
	}
	{
		// var z1 = TransEval(o1, o2, d1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_80 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_81 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_82 = ___d11;
		float L_83;
		L_83 = Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757(L_80, L_81, L_82, NULL);
		V_4 = L_83;
		// var z2 = TransEval(o2, d1, d2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_84 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_85 = ___d11;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = ___d23;
		float L_87;
		L_87 = Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757(L_84, L_85, L_86, NULL);
		V_5 = L_87;
		// if (z1 + z2 < 0.0f)
		float L_88 = V_4;
		float L_89 = V_5;
		if ((!(((float)((float)il2cpp_codegen_add(L_88, L_89))) < ((float)(0.0f)))))
		{
			goto IL_0181;
		}
	}
	{
		// z1 = -z1;
		float L_90 = V_4;
		V_4 = ((-L_90));
		// z2 = -z2;
		float L_91 = V_5;
		V_5 = ((-L_91));
	}

IL_0181:
	{
		// v._t = Interpolate(z1, o2._t, z2, d1._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_92 = ___v4;
		float L_93 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_94 = ___o22;
		NullCheck(L_94);
		float L_95 = L_94->____t_5;
		float L_96 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_97 = ___d11;
		NullCheck(L_97);
		float L_98 = L_97->____t_5;
		float L_99;
		L_99 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_93, L_95, L_96, L_98, NULL);
		NullCheck(L_92);
		L_92->____t_5 = L_99;
		return;
	}

IL_019e:
	{
		// var z1 = TransSign(o1, o2, d1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_100 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_101 = ___o22;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_102 = ___d11;
		float L_103;
		L_103 = Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9(L_100, L_101, L_102, NULL);
		V_6 = L_103;
		// var z2 = -TransSign(o1, d2, d1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_104 = ___o10;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_105 = ___d23;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_106 = ___d11;
		float L_107;
		L_107 = Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9(L_104, L_105, L_106, NULL);
		V_7 = ((-L_107));
		// if (z1 + z2 < 0.0f)
		float L_108 = V_6;
		float L_109 = V_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_108, L_109))) < ((float)(0.0f)))))
		{
			goto IL_01c9;
		}
	}
	{
		// z1 = -z1;
		float L_110 = V_6;
		V_6 = ((-L_110));
		// z2 = -z2;
		float L_111 = V_7;
		V_7 = ((-L_111));
	}

IL_01c9:
	{
		// v._t = Interpolate(z1, o2._t, z2, d2._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_112 = ___v4;
		float L_113 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_114 = ___o22;
		NullCheck(L_114);
		float L_115 = L_114->____t_5;
		float L_116 = V_7;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_117 = ___d23;
		NullCheck(L_117);
		float L_118 = L_117->____t_5;
		float L_119;
		L_119 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_113, L_115, L_116, L_118, NULL);
		NullCheck(L_112);
		L_112->____t_5 = L_119;
		// }
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
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Init(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_m410FB0CDEB2503A7E64E429E740365DF83D7C8A9 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_5 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_6 = NULL;
	{
		// var v = _vHead = pool.Get<MeshUtils.Vertex>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var, L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = L_1;
		V_4 = L_2;
		__this->____vHead_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead_0), (void*)L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = V_4;
		// var f = _fHead = pool.Get<MeshUtils.Face>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_4 = ___pool0;
		NullCheck(L_4);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5;
		L_5 = GenericVirtualFuncInvoker0< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var, L_4);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = L_5;
		V_5 = L_6;
		__this->____fHead_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead_1), (void*)L_6);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_5;
		V_0 = L_7;
		// var pair = MeshUtils.EdgePair.Create(pool);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = ___pool0;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_9;
		L_9 = EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21(L_8, NULL);
		V_1 = L_9;
		// var e = _eHead = pair._e;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_10 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10.____e_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11;
		V_6 = L_12;
		__this->____eHead_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead_2), (void*)L_12);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_6;
		V_2 = L_13;
		// var eSym = _eHeadSym = pair._eSym;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_14 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = L_14.____eSym_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15;
		V_6 = L_16;
		__this->____eHeadSym_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym_3), (void*)L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_6;
		V_3 = L_17;
		// v._next = v._prev = v;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = L_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = L_18;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = L_19;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = L_20;
		V_4 = L_21;
		NullCheck(L_20);
		L_20->____prev_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____prev_0), (void*)L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = V_4;
		NullCheck(L_19);
		L_19->____next_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____next_1), (void*)L_22);
		// v._anEdge = null;
		NullCheck(L_18);
		L_18->____anEdge_2 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge_2), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// f._next = f._prev = f;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_23 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_24 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_25 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_26 = L_25;
		V_5 = L_26;
		NullCheck(L_24);
		L_24->____prev_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____prev_0), (void*)L_26);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_27 = V_5;
		NullCheck(L_23);
		L_23->____next_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____next_1), (void*)L_27);
		// f._anEdge = null;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_28 = V_0;
		NullCheck(L_28);
		L_28->____anEdge_2 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge_2), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// f._trail = null;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_29 = V_0;
		NullCheck(L_29);
		L_29->____trail_3 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____trail_3), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// f._marked = false;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_30 = V_0;
		NullCheck(L_30);
		L_30->____marked_5 = (bool)0;
		// f._inside = false;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_31 = V_0;
		NullCheck(L_31);
		L_31->____inside_6 = (bool)0;
		// e._next = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_2;
		NullCheck(L_32);
		L_32->____next_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____next_1), (void*)L_33);
		// e._Sym = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_3;
		NullCheck(L_34);
		L_34->____Sym_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Sym_2), (void*)L_35);
		// e._Onext = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_2;
		NullCheck(L_36);
		L_36->____Onext_3 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____Onext_3), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// e._Lnext = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_2;
		NullCheck(L_37);
		L_37->____Lnext_4 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Lnext_4), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// e._Org = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_2;
		NullCheck(L_38);
		L_38->____Org_5 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____Org_5), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		// e._Lface = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_2;
		NullCheck(L_39);
		L_39->____Lface_6 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____Lface_6), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// e._winding = 0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_2;
		NullCheck(L_40);
		L_40->____winding_8 = 0;
		// e._activeRegion = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_2;
		NullCheck(L_41);
		L_41->____activeRegion_7 = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->____activeRegion_7), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		// eSym._next = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_3;
		NullCheck(L_42);
		L_42->____next_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->____next_1), (void*)L_43);
		// eSym._Sym = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_2;
		NullCheck(L_44);
		L_44->____Sym_2 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->____Sym_2), (void*)L_45);
		// eSym._Onext = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_3;
		NullCheck(L_46);
		L_46->____Onext_3 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____Onext_3), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// eSym._Lnext = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_3;
		NullCheck(L_47);
		L_47->____Lnext_4 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____Lnext_4), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// eSym._Org = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_3;
		NullCheck(L_48);
		L_48->____Org_5 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____Org_5), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		// eSym._Lface = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_3;
		NullCheck(L_49);
		L_49->____Lface_6 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____Lface_6), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// eSym._winding = 0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_3;
		NullCheck(L_50);
		L_50->____winding_8 = 0;
		// eSym._activeRegion = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_3;
		NullCheck(L_51);
		L_51->____activeRegion_7 = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->____activeRegion_7), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_m428F69B56C8255FD7B048D2EC3D4948EB641460D (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_5 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_6 = NULL;
	{
		// for (MeshUtils.Face f = _fHead, fNext = _fHead; f._next != null; f = fNext)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = __this->____fHead_1;
		V_0 = L_0;
		// for (MeshUtils.Face f = _fHead, fNext = _fHead; f._next != null; f = fNext)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = __this->____fHead_1;
		V_1 = L_1;
		goto IL_0020;
	}

IL_0010:
	{
		// fNext = f._next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = V_0;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____next_1;
		V_1 = L_3;
		// pool.Return(f);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_4 = ___pool0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_4);
		GenericVirtualActionInvoker1< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var, L_4, L_5);
		// for (MeshUtils.Face f = _fHead, fNext = _fHead; f._next != null; f = fNext)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = V_1;
		V_0 = L_6;
	}

IL_0020:
	{
		// for (MeshUtils.Face f = _fHead, fNext = _fHead; f._next != null; f = fNext)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_0;
		NullCheck(L_7);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = L_7->____next_1;
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		// for (MeshUtils.Vertex v = _vHead, vNext = _vHead; v._next != null; v = vNext)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = __this->____vHead_0;
		V_2 = L_9;
		// for (MeshUtils.Vertex v = _vHead, vNext = _vHead; v._next != null; v = vNext)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = __this->____vHead_0;
		V_3 = L_10;
		goto IL_0048;
	}

IL_0038:
	{
		// vNext = v._next;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = L_11->____next_1;
		V_3 = L_12;
		// pool.Return(v);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_13 = ___pool0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = V_2;
		NullCheck(L_13);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_13, L_14);
		// for (MeshUtils.Vertex v = _vHead, vNext = _vHead; v._next != null; v = vNext)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_3;
		V_2 = L_15;
	}

IL_0048:
	{
		// for (MeshUtils.Vertex v = _vHead, vNext = _vHead; v._next != null; v = vNext)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = L_16->____next_1;
		if (L_17)
		{
			goto IL_0038;
		}
	}
	{
		// for (MeshUtils.Edge e = _eHead, eNext = _eHead; e._next != null; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = __this->____eHead_2;
		V_4 = L_18;
		// for (MeshUtils.Edge e = _eHead, eNext = _eHead; e._next != null; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = __this->____eHead_2;
		V_5 = L_19;
		goto IL_0084;
	}

IL_0062:
	{
		// eNext = e._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_4;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = L_20->____next_1;
		V_5 = L_21;
		// pool.Return(e._Sym);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_22 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_4;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Sym_2;
		NullCheck(L_22);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_22, L_24);
		// pool.Return(e);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_25 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_4;
		NullCheck(L_25);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_25, L_26);
		// for (MeshUtils.Edge e = _eHead, eNext = _eHead; e._next != null; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_5;
		V_4 = L_27;
	}

IL_0084:
	{
		// for (MeshUtils.Edge e = _eHead, eNext = _eHead; e._next != null; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_4;
		NullCheck(L_28);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = L_28->____next_1;
		if (L_29)
		{
			goto IL_0062;
		}
	}
	{
		// _vHead = null;
		__this->____vHead_0 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead_0), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		// _fHead = null;
		__this->____fHead_1 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead_1), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// _eHead = _eHeadSym = null;
		V_6 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		__this->____eHeadSym_3 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym_3), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_6;
		__this->____eHead_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead_2), (void*)L_30);
		// }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::MakeEdge(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		// var e = MeshUtils.MakeEdge(pool, _eHead);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = __this->____eHead_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F(L_0, L_1, NULL);
		V_0 = L_2;
		// MeshUtils.MakeVertex(pool, e, _vHead);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_3 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = __this->____vHead_0;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_3, L_4, L_5, NULL);
		// MeshUtils.MakeVertex(pool, e._Sym, _vHead);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_6 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____Sym_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = __this->____vHead_0;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_6, L_8, L_9, NULL);
		// MeshUtils.MakeFace(pool, e, _fHead);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_10 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = __this->____fHead_1;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_10, L_11, L_12, NULL);
		// return e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		return L_13;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Splice(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDst2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (eOrg == eDst)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___eOrg1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___eDst2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_0) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// bool joiningVertices = false;
		V_0 = (bool)0;
		// if (eDst._Org != eOrg._Org)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___eDst2;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = ___eOrg1;
		NullCheck(L_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = L_4->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_3) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// joiningVertices = true;
		V_0 = (bool)1;
		// MeshUtils.KillVertex(pool, eDst._Org, eOrg._Org);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_6 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___eDst2;
		NullCheck(L_7);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = L_7->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____Org_5;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_6, L_8, L_10, NULL);
	}

IL_0029:
	{
		// bool joiningLoops = false;
		V_1 = (bool)0;
		// if (eDst._Lface != eOrg._Lface)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = ___eDst2;
		NullCheck(L_11);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = L_11->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___eOrg1;
		NullCheck(L_13);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = L_13->____Lface_6;
		if ((((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_12) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_14)))
		{
			goto IL_004d;
		}
	}
	{
		// joiningLoops = true;
		V_1 = (bool)1;
		// MeshUtils.KillFace(pool, eDst._Lface, eOrg._Lface);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_15 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = ___eDst2;
		NullCheck(L_16);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = L_16->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = ___eOrg1;
		NullCheck(L_18);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_19 = L_18->____Lface_6;
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_15, L_17, L_19, NULL);
	}

IL_004d:
	{
		// MeshUtils.Splice(eDst, eOrg);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___eDst2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = ___eOrg1;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_20, L_21, NULL);
		// if (!joiningVertices)
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0070;
		}
	}
	{
		// MeshUtils.MakeVertex(pool, eDst, eOrg._Org);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_23 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = ___eDst2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = ___eOrg1;
		NullCheck(L_25);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = L_25->____Org_5;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_23, L_24, L_26, NULL);
		// eOrg._Org._anEdge = eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = ___eOrg1;
		NullCheck(L_27);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = L_27->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = ___eOrg1;
		NullCheck(L_28);
		L_28->____anEdge_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge_2), (void*)L_29);
	}

IL_0070:
	{
		// if (!joiningLoops)
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_008c;
		}
	}
	{
		// MeshUtils.MakeFace(pool, eDst, eOrg._Lface);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_31 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = ___eDst2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = ___eOrg1;
		NullCheck(L_33);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_34 = L_33->____Lface_6;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_31, L_32, L_34, NULL);
		// eOrg._Lface._anEdge = eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = ___eOrg1;
		NullCheck(L_35);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_36 = L_35->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = ___eOrg1;
		NullCheck(L_36);
		L_36->____anEdge_2 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____anEdge_2), (void*)L_37);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Delete(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDel1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	bool V_1 = false;
	{
		// var eDelSym = eDel._Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		// bool joiningLoops = false;
		V_1 = (bool)0;
		// if (eDel._Lface != eDel._Rface)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___eDel1;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = ___eDel1;
		NullCheck(L_4);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5;
		L_5 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_4, NULL);
		if ((((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_3) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		// joiningLoops = true;
		V_1 = (bool)1;
		// MeshUtils.KillFace(pool, eDel._Lface, eDel._Rface);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_6 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___eDel1;
		NullCheck(L_7);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = L_7->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___eDel1;
		NullCheck(L_9);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10;
		L_10 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_9, NULL);
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_6, L_8, L_10, NULL);
	}

IL_002b:
	{
		// if (eDel._Onext == eDel)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = ___eDel1;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___eDel1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_12) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_13))))
		{
			goto IL_0043;
		}
	}
	{
		// MeshUtils.KillVertex(pool, eDel._Org, null);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_14 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___eDel1;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____Org_5;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_14, L_16, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		goto IL_0081;
	}

IL_0043:
	{
		// eDel._Rface._anEdge = eDel._Oprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = ___eDel1;
		NullCheck(L_17);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18;
		L_18 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_17, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = ___eDel1;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20;
		L_20 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_19, NULL);
		NullCheck(L_18);
		L_18->____anEdge_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge_2), (void*)L_20);
		// eDel._Org._anEdge = eDel._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = ___eDel1;
		NullCheck(L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = L_21->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = ___eDel1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Onext_3;
		NullCheck(L_22);
		L_22->____anEdge_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____anEdge_2), (void*)L_24);
		// MeshUtils.Splice(eDel, eDel._Oprev);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = ___eDel1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = ___eDel1;
		NullCheck(L_26);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27;
		L_27 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_26, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_25, L_27, NULL);
		// if (!joiningLoops)
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0081;
		}
	}
	{
		// MeshUtils.MakeFace(pool, eDel, eDel._Lface);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_29 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = ___eDel1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = ___eDel1;
		NullCheck(L_31);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_32 = L_31->____Lface_6;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_29, L_30, L_32, NULL);
	}

IL_0081:
	{
		// if (eDelSym._Onext == eDelSym)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_0;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_34) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_35))))
		{
			goto IL_00a6;
		}
	}
	{
		// MeshUtils.KillVertex(pool, eDelSym._Org, null);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_36 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_0;
		NullCheck(L_37);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_38 = L_37->____Org_5;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_36, L_38, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		// MeshUtils.KillFace(pool, eDelSym._Lface, null);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_39 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_0;
		NullCheck(L_40);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_41 = L_40->____Lface_6;
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_39, L_41, (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL, NULL);
		goto IL_00d4;
	}

IL_00a6:
	{
		// eDel._Lface._anEdge = eDelSym._Oprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = ___eDel1;
		NullCheck(L_42);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_43 = L_42->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_0;
		NullCheck(L_44);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45;
		L_45 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_44, NULL);
		NullCheck(L_43);
		L_43->____anEdge_2 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->____anEdge_2), (void*)L_45);
		// eDelSym._Org._anEdge = eDelSym._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_0;
		NullCheck(L_46);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_47 = L_46->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_0;
		NullCheck(L_48);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = L_48->____Onext_3;
		NullCheck(L_47);
		L_47->____anEdge_2 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____anEdge_2), (void*)L_49);
		// MeshUtils.Splice(eDelSym, eDelSym._Oprev);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_0;
		NullCheck(L_51);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52;
		L_52 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_51, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_50, L_52, NULL);
	}

IL_00d4:
	{
		// MeshUtils.KillEdge(pool, eDel);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_53 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = ___eDel1;
		MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652(L_53, L_54, NULL);
		// }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::AddEdgeVertex(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_AddEdgeVertex_mC3ECCF182D8F521EBC26110F3001B903A55211C0 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_2 = NULL;
	{
		// var eNew = MeshUtils.MakeEdge(pool, eOrg);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___eOrg1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F(L_0, L_1, NULL);
		V_0 = L_2;
		// var eNewSym = eNew._Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		// MeshUtils.Splice(eNew, eOrg._Lnext);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____Lnext_4;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_5, L_7, NULL);
		// eNew._Org = eOrg._Dst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10;
		L_10 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_9, NULL);
		NullCheck(L_8);
		L_8->____Org_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Org_5), (void*)L_10);
		// MeshUtils.MakeVertex(pool, eNewSym, eNew._Org);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_11 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____Org_5;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_11, L_12, L_14, NULL);
		// eNew._Lface = eNewSym._Lface = eOrg._Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = ___eOrg1;
		NullCheck(L_17);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = L_17->____Lface_6;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->____Lface_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____Lface_6), (void*)L_19);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_20 = V_2;
		NullCheck(L_15);
		L_15->____Lface_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Lface_6), (void*)L_20);
		// return eNew;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_0;
		return L_21;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::SplitEdge(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		// var eTmp = AddEdgeVertex(pool, eOrg);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___eOrg1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = Mesh_AddEdgeVertex_mC3ECCF182D8F521EBC26110F3001B903A55211C0(__this, L_0, L_1, NULL);
		// var eNew = eTmp._Sym;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Sym_2;
		V_0 = L_3;
		// MeshUtils.Splice(eOrg._Sym, eOrg._Sym._Oprev);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = ___eOrg1;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____Sym_2;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8;
		L_8 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_7, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_5, L_8, NULL);
		// MeshUtils.Splice(eOrg._Sym, eNew);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___eOrg1;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_10, L_11, NULL);
		// eOrg._Dst = eNew._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___eOrg1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____Org_5;
		NullCheck(L_12);
		Edge_set__Dst_m56F56B99812B22C677B6254CE6188FB788473604(L_12, L_14, NULL);
		// eNew._Dst._anEdge = eNew._Sym; // may have pointed to eOrg->Sym
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16;
		L_16 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_15, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_0;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____Sym_2;
		NullCheck(L_16);
		L_16->____anEdge_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____anEdge_2), (void*)L_18);
		// eNew._Rface = eOrg._Rface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___eOrg1;
		NullCheck(L_20);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21;
		L_21 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_20, NULL);
		NullCheck(L_19);
		Edge_set__Rface_m66117D5A92950759B7A650E6A58360D9F0CD348D(L_19, L_21, NULL);
		// eNew._winding = eOrg._winding; // copy old winding information
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = ___eOrg1;
		NullCheck(L_23);
		int32_t L_24 = L_23->____winding_8;
		NullCheck(L_22);
		L_22->____winding_8 = L_24;
		// eNew._Sym._winding = eOrg._Sym._winding;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_0;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = ___eOrg1;
		NullCheck(L_27);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = L_27->____Sym_2;
		NullCheck(L_28);
		int32_t L_29 = L_28->____winding_8;
		NullCheck(L_26);
		L_26->____winding_8 = L_29;
		// return eNew;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_0;
		return L_30;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Mesh::Connect(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrg1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDst2, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	bool V_2 = false;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_3 = NULL;
	{
		// var eNew = MeshUtils.MakeEdge(pool, eOrg);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___eOrg1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F(L_0, L_1, NULL);
		V_0 = L_2;
		// var eNewSym = eNew._Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		// bool joiningLoops = false;
		V_2 = (bool)0;
		// if (eDst._Lface != eOrg._Lface)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___eDst2;
		NullCheck(L_5);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = L_5->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___eOrg1;
		NullCheck(L_7);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = L_7->____Lface_6;
		if ((((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_6) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		// joiningLoops = true;
		V_2 = (bool)1;
		// MeshUtils.KillFace(pool, eDst._Lface, eOrg._Lface);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_9 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = ___eDst2;
		NullCheck(L_10);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = L_10->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___eOrg1;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____Lface_6;
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_9, L_11, L_13, NULL);
	}

IL_0033:
	{
		// MeshUtils.Splice(eNew, eOrg._Lnext);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___eOrg1;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Lnext_4;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_14, L_16, NULL);
		// MeshUtils.Splice(eNewSym, eDst);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = ___eDst2;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_17, L_18, NULL);
		// eNew._Org = eOrg._Dst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___eOrg1;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21;
		L_21 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_20, NULL);
		NullCheck(L_19);
		L_19->____Org_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____Org_5), (void*)L_21);
		// eNewSym._Org = eDst._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = ___eDst2;
		NullCheck(L_23);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = L_23->____Org_5;
		NullCheck(L_22);
		L_22->____Org_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Org_5), (void*)L_24);
		// eNew._Lface = eNewSym._Lface = eOrg._Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = ___eOrg1;
		NullCheck(L_27);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_28 = L_27->____Lface_6;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_29 = L_28;
		V_3 = L_29;
		NullCheck(L_26);
		L_26->____Lface_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Lface_6), (void*)L_29);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_30 = V_3;
		NullCheck(L_25);
		L_25->____Lface_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface_6), (void*)L_30);
		// eOrg._Lface._anEdge = eNewSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = ___eOrg1;
		NullCheck(L_31);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_32 = L_31->____Lface_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_1;
		NullCheck(L_32);
		L_32->____anEdge_2 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge_2), (void*)L_33);
		// if (!joiningLoops)
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_008f;
		}
	}
	{
		// MeshUtils.MakeFace(pool, eNew, eOrg._Lface);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_35 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = ___eOrg1;
		NullCheck(L_37);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_38 = L_37->____Lface_6;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_35, L_36, L_38, NULL);
	}

IL_008f:
	{
		// return eNew;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_0;
		return L_39;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::ZapFace(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m5EA809DDA7500239AB92BEBF71D6F25F90FF326D (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___fZap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_4 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_5 = NULL;
	{
		// var eStart = fZap._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___fZap1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		// var eNext = eStart._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Lnext_4;
		V_1 = L_3;
	}

IL_000e:
	{
		// e = eNext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_1;
		V_2 = L_4;
		// eNext = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_2;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Lnext_4;
		V_1 = L_6;
		// e._Lface = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_2;
		NullCheck(L_7);
		L_7->____Lface_6 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____Lface_6), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// if (e._Rface == null)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9;
		L_9 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_8, NULL);
		if (L_9)
		{
			goto IL_009e;
		}
	}
	{
		// if (e._Onext == e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_2;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_11) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_12))))
		{
			goto IL_003e;
		}
	}
	{
		// MeshUtils.KillVertex(pool, e._Org, null);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_13 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = L_14->____Org_5;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_13, L_15, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		goto IL_005b;
	}

IL_003e:
	{
		// e._Org._anEdge = e._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = L_16->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_2;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____Onext_3;
		NullCheck(L_17);
		L_17->____anEdge_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____anEdge_2), (void*)L_19);
		// MeshUtils.Splice(e, e._Oprev);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_2;
		NullCheck(L_21);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22;
		L_22 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_21, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_20, L_22, NULL);
	}

IL_005b:
	{
		// eSym = e._Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_2;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Sym_2;
		V_3 = L_24;
		// if (eSym._Onext == eSym)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_3;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_3;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_27))))
		{
			goto IL_007a;
		}
	}
	{
		// MeshUtils.KillVertex(pool, eSym._Org, null);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_28 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30 = L_29->____Org_5;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_28, L_30, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		goto IL_0097;
	}

IL_007a:
	{
		// eSym._Org._anEdge = eSym._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_3;
		NullCheck(L_31);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = L_31->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_3;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Onext_3;
		NullCheck(L_32);
		L_32->____anEdge_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge_2), (void*)L_34);
		// MeshUtils.Splice(eSym, eSym._Oprev);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_3;
		NullCheck(L_36);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37;
		L_37 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_36, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_35, L_37, NULL);
	}

IL_0097:
	{
		// MeshUtils.KillEdge(pool, e);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_38 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_2;
		MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652(L_38, L_39, NULL);
	}

IL_009e:
	{
		// } while (e != eStart);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_40) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_41))))
		{
			goto IL_000e;
		}
	}
	{
		// var fPrev = fZap._prev;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_42 = ___fZap1;
		NullCheck(L_42);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_43 = L_42->____prev_0;
		V_4 = L_43;
		// var fNext = fZap._next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_44 = ___fZap1;
		NullCheck(L_44);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_45 = L_44->____next_1;
		V_5 = L_45;
		// fNext._prev = fPrev;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_46 = V_5;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_47 = V_4;
		NullCheck(L_46);
		L_46->____prev_0 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____prev_0), (void*)L_47);
		// fPrev._next = fNext;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_48 = V_4;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_49 = V_5;
		NullCheck(L_48);
		L_48->____next_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____next_1), (void*)L_49);
		// pool.Return(fZap);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_50 = ___pool0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_51 = ___fZap1;
		NullCheck(L_50);
		GenericVirtualActionInvoker1< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var, L_50, L_51);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::MergeConvexFaces(ProceduralToolkit.LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m5A5B25E0A8953C1CE73FC5C215C93A5B550DDFE3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// for (var f = _fHead._next; f != _fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = __this->____fHead_1;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____next_1;
		V_0 = L_1;
		goto IL_00fe;
	}

IL_0011:
	{
		// if (!f._inside)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->____inside_6;
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		// var eCur = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____anEdge_2;
		V_1 = L_5;
		// var vStart = eCur._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org_5;
		V_2 = L_7;
	}

IL_002a:
	{
		// var eNext = eCur._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Lnext_4;
		V_3 = L_9;
		// var eSym = eCur._Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____Sym_2;
		V_4 = L_11;
		// if (eSym != null && eSym._Lface != null && eSym._Lface._inside)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_4;
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_4;
		NullCheck(L_13);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = L_13->____Lface_6;
		if (!L_14)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_4;
		NullCheck(L_15);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = L_15->____Lface_6;
		NullCheck(L_16);
		bool L_17 = L_16->____inside_6;
		if (!L_17)
		{
			goto IL_00df;
		}
	}
	{
		// int curNv = f.VertsCount;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68(L_18, NULL);
		// int symNv = eSym._Lface.VertsCount;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_4;
		NullCheck(L_20);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21 = L_20->____Lface_6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68(L_21, NULL);
		V_5 = L_22;
		// if ((curNv + symNv - 2) <= maxVertsPerFace)
		int32_t L_23 = V_5;
		int32_t L_24 = ___maxVertsPerFace1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_23)), 2))) > ((int32_t)L_24)))
		{
			goto IL_00df;
		}
	}
	{
		// if (Geom.VertCCW(eCur._Lprev._Org, eCur._Org, eSym._Lnext._Lnext._Org) &&
		//     Geom.VertCCW(eSym._Lprev._Org, eSym._Org, eCur._Lnext._Lnext._Org))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26;
		L_26 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_25, NULL);
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = L_28->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_4;
		NullCheck(L_30);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = L_30->____Lnext_4;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = L_31->____Lnext_4;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____Org_5;
		bool L_34;
		L_34 = Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13(L_27, L_29, L_33, NULL);
		if (!L_34)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_4;
		NullCheck(L_35);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36;
		L_36 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_35, NULL);
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = L_36->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_4;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39 = L_38->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_1;
		NullCheck(L_40);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = L_40->____Lnext_4;
		NullCheck(L_41);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = L_41->____Lnext_4;
		NullCheck(L_42);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = L_42->____Org_5;
		bool L_44;
		L_44 = Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13(L_37, L_39, L_43, NULL);
		if (!L_44)
		{
			goto IL_00df;
		}
	}
	{
		// eNext = eSym._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_4;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____Lnext_4;
		V_3 = L_46;
		// Delete(pool, eSym);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_47 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_4;
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(__this, L_47, L_48, NULL);
		// eCur = null;
		V_1 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
	}

IL_00df:
	{
		// if (eCur != null && eCur._Lnext._Org == vStart)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00f0;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_1;
		NullCheck(L_50);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = L_50->____Lnext_4;
		NullCheck(L_51);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = L_51->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_53 = V_2;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_52) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_53)))
		{
			goto IL_00f7;
		}
	}

IL_00f0:
	{
		// eCur = eNext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = V_3;
		V_1 = L_54;
		// while (true)
		goto IL_002a;
	}

IL_00f7:
	{
		// for (var f = _fHead._next; f != _fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_55 = V_0;
		NullCheck(L_55);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_56 = L_55->____next_1;
		V_0 = L_56;
	}

IL_00fe:
	{
		// for (var f = _fHead._next; f != _fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_57 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_58 = __this->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_57) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_58))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m59551409C0B4244341B170413BFF3A7208631A81 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_5 = NULL;
	{
		// MeshUtils.Face fPrev = _fHead, f;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = __this->____fHead_1;
		V_1 = L_0;
		// for (fPrev = _fHead; (f = fPrev._next) != _fHead; fPrev = f)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = __this->____fHead_1;
		V_1 = L_1;
		goto IL_0029;
	}

IL_0010:
	{
		// e = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = V_2;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____anEdge_2;
		V_0 = L_3;
	}

IL_0017:
	{
		// e = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Lnext_4;
		V_0 = L_5;
		// } while (e != f._anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_2;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_6) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		// for (fPrev = _fHead; (f = fPrev._next) != _fHead; fPrev = f)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_2;
		V_1 = L_9;
	}

IL_0029:
	{
		// for (fPrev = _fHead; (f = fPrev._next) != _fHead; fPrev = f)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = V_1;
		NullCheck(L_10);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = L_10->____next_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = L_11;
		V_2 = L_12;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = __this->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_12) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_13))))
		{
			goto IL_0010;
		}
	}
	{
		// MeshUtils.Vertex vPrev = _vHead, v;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = __this->____vHead_0;
		V_3 = L_14;
		// for (vPrev = _vHead; (v = vPrev._next) != _vHead; vPrev = v)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = __this->____vHead_0;
		V_3 = L_15;
		goto IL_0065;
	}

IL_0049:
	{
		// e = v._anEdge;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_4;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = L_16->____anEdge_2;
		V_0 = L_17;
	}

IL_0051:
	{
		// e = e._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____Onext_3;
		V_0 = L_19;
		// } while (e != v._anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_4;
		NullCheck(L_21);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = L_21->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_20) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_22))))
		{
			goto IL_0051;
		}
	}
	{
		// for (vPrev = _vHead; (v = vPrev._next) != _vHead; vPrev = v)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = V_4;
		V_3 = L_23;
	}

IL_0065:
	{
		// for (vPrev = _vHead; (v = vPrev._next) != _vHead; vPrev = v)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = V_3;
		NullCheck(L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = L_24->____next_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = L_25;
		V_4 = L_26;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = __this->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_26) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_27))))
		{
			goto IL_0049;
		}
	}
	{
		// MeshUtils.Edge ePrev = _eHead;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = __this->____eHead_2;
		V_5 = L_28;
		// for (ePrev = _eHead; (e = ePrev._next) != _eHead; ePrev = e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = __this->____eHead_2;
		V_5 = L_29;
		goto IL_008b;
	}

IL_0088:
	{
		// for (ePrev = _eHead; (e = ePrev._next) != _eHead; ePrev = e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_0;
		V_5 = L_30;
	}

IL_008b:
	{
		// for (ePrev = _eHead; (e = ePrev._next) != _eHead; ePrev = e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_5;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = L_31->____next_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = L_32;
		V_0 = L_33;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = __this->____eHead_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_33) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_34))))
		{
			goto IL_0088;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m10BC8228F4F4F2AC5A311C49566077864EE32E81 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, const RuntimeMethod* method) 
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
// System.Single ProceduralToolkit.LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// if (index == 0) return X;
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (index == 0) return X;
		float L_1 = __this->___X_1;
		return L_1;
	}

IL_000a:
	{
		// if (index == 1) return Y;
		int32_t L_2 = ___index0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// if (index == 1) return Y;
		float L_3 = __this->___Y_2;
		return L_3;
	}

IL_0015:
	{
		// if (index == 2) return Z;
		int32_t L_4 = ___index0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		// if (index == 2) return Z;
		float L_5 = __this->___Z_3;
		return L_5;
	}

IL_0020:
	{
		// throw new IndexOutOfRangeException();
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  float Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	float _returnValue;
	_returnValue = Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	{
		// if (index == 0) X = value;
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// if (index == 0) X = value;
		float L_1 = ___value1;
		__this->___X_1 = L_1;
		return;
	}

IL_000b:
	{
		// else if (index == 1) Y = value;
		int32_t L_2 = ___index0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// else if (index == 1) Y = value;
		float L_3 = ___value1;
		__this->___Y_2 = L_3;
		return;
	}

IL_0017:
	{
		// else if (index == 2) Z = value;
		int32_t L_4 = ___index0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		// else if (index == 2) Z = value;
		float L_5 = ___value1;
		__this->___Z_3 = L_5;
		return;
	}

IL_0023:
	{
		// else throw new IndexOutOfRangeException();
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// X = x;
		float L_0 = ___x0;
		__this->___X_1 = L_0;
		// Y = y;
		float L_1 = ___y1;
		__this->___Y_2 = L_1;
		// Z = z;
		float L_2 = ___z2;
		__this->___Z_3 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Sub(ProceduralToolkit.LibTessDotNet.Vec3&,ProceduralToolkit.LibTessDotNet.Vec3&,ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___lhs0, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___rhs1, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___result2, const RuntimeMethod* method) 
{
	{
		// result.X = lhs.X - rhs.X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___result2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_1 = ___lhs0;
		float L_2 = L_1->___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___rhs1;
		float L_4 = L_3->___X_1;
		L_0->___X_1 = ((float)il2cpp_codegen_subtract(L_2, L_4));
		// result.Y = lhs.Y - rhs.Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_5 = ___result2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___lhs0;
		float L_7 = L_6->___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_8 = ___rhs1;
		float L_9 = L_8->___Y_2;
		L_5->___Y_2 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		// result.Z = lhs.Z - rhs.Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = ___result2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_11 = ___lhs0;
		float L_12 = L_11->___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_13 = ___rhs1;
		float L_14 = L_13->___Z_3;
		L_10->___Z_3 = ((float)il2cpp_codegen_subtract(L_12, L_14));
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Neg(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m56FA56AE9B5B9AC36E12FF1A40FCDA51EFF04139 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v0, const RuntimeMethod* method) 
{
	{
		// v.X = -v.X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___v0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_1 = ___v0;
		float L_2 = L_1->___X_1;
		L_0->___X_1 = ((-L_2));
		// v.Y = -v.Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___v0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_4 = ___v0;
		float L_5 = L_4->___Y_2;
		L_3->___Y_2 = ((-L_5));
		// v.Z = -v.Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___v0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_7 = ___v0;
		float L_8 = L_7->___Z_3;
		L_6->___Z_3 = ((-L_8));
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Dot(ProceduralToolkit.LibTessDotNet.Vec3&,ProceduralToolkit.LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___u0, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v1, float* ___dot2, const RuntimeMethod* method) 
{
	{
		// dot = u.X * v.X + u.Y * v.Y + u.Z * v.Z;
		float* L_0 = ___dot2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_1 = ___u0;
		float L_2 = L_1->___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___v1;
		float L_4 = L_3->___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_5 = ___u0;
		float L_6 = L_5->___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_7 = ___v1;
		float L_8 = L_7->___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_9 = ___u0;
		float L_10 = L_9->___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_11 = ___v1;
		float L_12 = L_11->___Z_3;
		*((float*)L_0) = (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::Normalize(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Normalize_m70C07321DBE959820C8D1103274500B31C54D591 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var len = v.X * v.X + v.Y * v.Y + v.Z * v.Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___v0;
		float L_1 = L_0->___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_2 = ___v0;
		float L_3 = L_2->___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_4 = ___v0;
		float L_5 = L_4->___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___v0;
		float L_7 = L_6->___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_8 = ___v0;
		float L_9 = L_8->___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = ___v0;
		float L_11 = L_10->___Z_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		// len = 1.0f / (Real)Math.Sqrt(len);
		float L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = sqrt(((double)L_12));
		V_0 = ((float)((1.0f)/((float)L_13)));
		// v.X *= len;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_14 = ___v0;
		float* L_15 = (&L_14->___X_1);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = V_0;
		*((float*)L_16) = (float)((float)il2cpp_codegen_multiply(L_17, L_18));
		// v.Y *= len;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_19 = ___v0;
		float* L_20 = (&L_19->___Y_2);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = V_0;
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, L_23));
		// v.Z *= len;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_24 = ___v0;
		float* L_25 = (&L_24->___Z_3);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28 = V_0;
		*((float*)L_26) = (float)((float)il2cpp_codegen_multiply(L_27, L_28));
		// }
		return;
	}
}
// System.Int32 ProceduralToolkit.LibTessDotNet.Vec3::LongAxis(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		// int i = 0;
		V_0 = 0;
		// if (Math.Abs(v.Y) > Math.Abs(v.X)) i = 1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___v0;
		float L_1 = L_0->___Y_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(L_1);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___v0;
		float L_4 = L_3->___X_1;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_001c;
		}
	}
	{
		// if (Math.Abs(v.Y) > Math.Abs(v.X)) i = 1;
		V_0 = 1;
	}

IL_001c:
	{
		// if (Math.Abs(v.Z) > Math.Abs(i == 0 ? v.X : v.Y)) i = 2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___v0;
		float L_7 = L_6->___Z_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = fabsf(L_7);
		int32_t L_9 = V_0;
		G_B3_0 = L_8;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0032;
		}
	}
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = ___v0;
		float L_11 = L_10->___Y_2;
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_12 = ___v0;
		float L_13 = L_12->___X_1;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = fabsf(G_B5_0);
		if ((!(((float)G_B5_1) > ((float)L_14))))
		{
			goto IL_0041;
		}
	}
	{
		// if (Math.Abs(v.Z) > Math.Abs(i == 0 ? v.X : v.Y)) i = 2;
		V_0 = 2;
	}

IL_0041:
	{
		// return i;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String ProceduralToolkit.LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}, {1}, {2}", X, Y, Z);
		float L_0 = __this->___X_1;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->___Y_2;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->___Z_3;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ProceduralToolkit.LibTessDotNet.Vec3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__cctor_mAD93378468566C5D245F685F1AA441DE96C663EB (const RuntimeMethod* method) 
{
	{
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
// System.Void ProceduralToolkit.LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m81F3DA97290F2261C02FBA96153CEE2AF4FB706A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m192B164DF44E7DBD72203C4BBC0143F7B95B0E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_m5201AE90CD0391C6658129210F44D64BFC1106C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mABCA8B3096288CE3D1AE740ED40CFB1648B96878_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IPool()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Register<MeshUtils.Vertex>(new DefaultTypePool<MeshUtils.Vertex>());
		DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50* L_0 = (DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50*)il2cpp_codegen_object_new(DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4(L_0, DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mABCA8B3096288CE3D1AE740ED40CFB1648B96878_RuntimeMethod_var, __this, L_0);
		// Register<MeshUtils.Face>(new DefaultTypePool<MeshUtils.Face>());
		DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259* L_1 = (DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259*)il2cpp_codegen_object_new(DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3(L_1, DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_m5201AE90CD0391C6658129210F44D64BFC1106C7_RuntimeMethod_var, __this, L_1);
		// Register<MeshUtils.Edge>(new DefaultTypePool<MeshUtils.Edge>());
		DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C* L_2 = (DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C*)il2cpp_codegen_object_new(DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875(L_2, DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m192B164DF44E7DBD72203C4BBC0143F7B95B0E7B_RuntimeMethod_var, __this, L_2);
		// Register<Tess.ActiveRegion>(new DefaultTypePool<Tess.ActiveRegion>());
		DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8* L_3 = (DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8*)il2cpp_codegen_object_new(DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38(L_3, DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m81F3DA97290F2261C02FBA96153CEE2AF4FB706A_RuntimeMethod_var, __this, L_3);
		// }
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
// System.Void ProceduralToolkit.LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mE6458D67CCDD6BC8DE755C638E600AA573298FCE (NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63(__this, NULL);
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
// System.Void ProceduralToolkit.LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m1418BADB8C4AB3BD573CDBC48DB0F5AB1637C575 (DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63(__this, NULL);
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
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::Splice(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___a0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___b1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// var aOnext = a._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___a0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		// var bOnext = b._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___b1;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Onext_3;
		V_1 = L_3;
		// aOnext._Sym._Lnext = b;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___b1;
		NullCheck(L_5);
		L_5->____Lnext_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Lnext_4), (void*)L_6);
		// bOnext._Sym._Lnext = a;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___a0;
		NullCheck(L_8);
		L_8->____Lnext_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Lnext_4), (void*)L_9);
		// a._Onext = bOnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = ___a0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_1;
		NullCheck(L_10);
		L_10->____Onext_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____Onext_3), (void*)L_11);
		// b._Onext = aOnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___b1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_12);
		L_12->____Onext_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____Onext_3), (void*)L_13);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::MakeVertex(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrig1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vNext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		// var vNew = pool.Get<MeshUtils.Vertex>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var, L_0);
		V_0 = L_1;
		// var vPrev = vNext._prev;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___vNext2;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____prev_0;
		V_1 = L_3;
		// vNew._prev = vPrev;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_0), (void*)L_5);
		// vPrev._next = vNew;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		// vNew._next = vNext;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___vNext2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		// vNext._prev = vNew;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___vNext2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev_0), (void*)L_11);
		// vNew._anEdge = eOrig;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->____anEdge_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge_2), (void*)L_13);
		// var e = eOrig;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = ___eOrig1;
		V_2 = L_14;
	}

IL_0033:
	{
		// e._Org = vNew;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_0;
		NullCheck(L_15);
		L_15->____Org_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Org_5), (void*)L_16);
		// e = e._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_2;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____Onext_3;
		V_2 = L_18;
		// } while (e != eOrig);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___eOrig1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_19) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_20))))
		{
			goto IL_0033;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::MakeFace(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eOrig1, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___fNext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		// var fNew = pool.Get<MeshUtils.Face>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1;
		L_1 = GenericVirtualFuncInvoker0< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var, L_0);
		V_0 = L_1;
		// var fPrev = fNext._prev;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = ___fNext2;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____prev_0;
		V_1 = L_3;
		// fNew._prev = fPrev;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_0), (void*)L_5);
		// fPrev._next = fNew;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = V_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		// fNew._next = fNext;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = ___fNext2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		// fNext._prev = fNew;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = ___fNext2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev_0), (void*)L_11);
		// fNew._anEdge = eOrig;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->____anEdge_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge_2), (void*)L_13);
		// fNew._trail = null;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = V_0;
		NullCheck(L_14);
		L_14->____trail_3 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____trail_3), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// fNew._marked = false;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = V_0;
		NullCheck(L_15);
		L_15->____marked_5 = (bool)0;
		// fNew._inside = fNext._inside;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = ___fNext2;
		NullCheck(L_17);
		bool L_18 = L_17->____inside_6;
		NullCheck(L_16);
		L_16->____inside_6 = L_18;
		// var e = eOrig;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = ___eOrig1;
		V_2 = L_19;
	}

IL_004d:
	{
		// e._Lface = fNew;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Lface_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Lface_6), (void*)L_21);
		// e = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_2;
		NullCheck(L_22);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = L_22->____Lnext_4;
		V_2 = L_23;
		// } while (e != eOrig);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = ___eOrig1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_24) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_25))))
		{
			goto IL_004d;
		}
	}
	{
		// }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils::MakeEdge(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eNext1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		// var pair = MeshUtils.EdgePair.Create(pool);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_1;
		L_1 = EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21(L_0, NULL);
		// var e = pair._e;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_2 = L_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2.____e_0;
		V_0 = L_3;
		// var eSym = pair._eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_2.____eSym_1;
		V_1 = L_4;
		// MeshUtils.Edge.EnsureFirst(ref eNext);
		Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8((&___eNext1), NULL);
		// var ePrev = eNext._Sym._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___eNext1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Sym_2;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____next_1;
		V_2 = L_7;
		// eSym._next = ePrev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		// ePrev._Sym._next = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_2;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_0;
		NullCheck(L_11);
		L_11->____next_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->____next_1), (void*)L_12);
		// e._next = eNext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = ___eNext1;
		NullCheck(L_13);
		L_13->____next_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next_1), (void*)L_14);
		// eNext._Sym._next = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___eNext1;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		NullCheck(L_16);
		L_16->____next_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next_1), (void*)L_17);
		// e._Sym = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_1;
		NullCheck(L_18);
		L_18->____Sym_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____Sym_2), (void*)L_19);
		// e._Onext = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Onext_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Onext_3), (void*)L_21);
		// e._Lnext = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_1;
		NullCheck(L_22);
		L_22->____Lnext_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Lnext_4), (void*)L_23);
		// e._Org = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_0;
		NullCheck(L_24);
		L_24->____Org_5 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____Org_5), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		// e._Lface = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_0;
		NullCheck(L_25);
		L_25->____Lface_6 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface_6), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// e._winding = 0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_0;
		NullCheck(L_26);
		L_26->____winding_8 = 0;
		// e._activeRegion = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_0;
		NullCheck(L_27);
		L_27->____activeRegion_7 = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____activeRegion_7), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		// eSym._Sym = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_0;
		NullCheck(L_28);
		L_28->____Sym_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____Sym_2), (void*)L_29);
		// eSym._Onext = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_1;
		NullCheck(L_30);
		L_30->____Onext_3 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____Onext_3), (void*)L_31);
		// eSym._Lnext = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_0;
		NullCheck(L_32);
		L_32->____Lnext_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____Lnext_4), (void*)L_33);
		// eSym._Org = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_1;
		NullCheck(L_34);
		L_34->____Org_5 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Org_5), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		// eSym._Lface = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_1;
		NullCheck(L_35);
		L_35->____Lface_6 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____Lface_6), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// eSym._winding = 0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_1;
		NullCheck(L_36);
		L_36->____winding_8 = 0;
		// eSym._activeRegion = null;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_1;
		NullCheck(L_37);
		L_37->____activeRegion_7 = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____activeRegion_7), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		// return e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_0;
		return L_38;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::KillEdge(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eDel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// Edge.EnsureFirst(ref eDel);
		Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8((&___eDel1), NULL);
		// var eNext = eDel._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____next_1;
		V_0 = L_1;
		// var ePrev = eDel._Sym._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___eDel1;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Sym_2;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____next_1;
		V_1 = L_4;
		// eNext._Sym._next = ePrev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		// ePrev._Sym._next = eNext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_0;
		NullCheck(L_9);
		L_9->____next_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____next_1), (void*)L_10);
		// pool.Return(eDel._Sym);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_11 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___eDel1;
		NullCheck(L_12);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = L_12->____Sym_2;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_11, L_13);
		// pool.Return(eDel);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_14 = ___pool0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___eDel1;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_14, L_15);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::KillVertex(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vDel1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___newOrg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	{
		// var eStart = vDel._anEdge;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___vDel1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		// var e = eStart;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		// e._Org = newOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___newOrg2;
		NullCheck(L_3);
		L_3->____Org_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Org_5), (void*)L_4);
		// e = e._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Onext_3;
		V_1 = L_6;
		// } while (e != eStart);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		// var vPrev = vDel._prev;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___vDel1;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____prev_0;
		V_2 = L_10;
		// var vNext = vDel._next;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = ___vDel1;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = L_11->____next_1;
		V_3 = L_12;
		// vNext._prev = vPrev;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev_0), (void*)L_14);
		// vPrev._next = vNext;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next_1), (void*)L_16);
		// pool.Return(vDel);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_17 = ___pool0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___vDel1;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_17, L_18);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils::KillFace(ProceduralToolkit.LibTessDotNet.IPool,ProceduralToolkit.LibTessDotNet.MeshUtils/Face,ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___fDel1, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___newLFace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_2 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_3 = NULL;
	{
		// var eStart = fDel._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___fDel1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		// var e = eStart;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		// e._Lface = newLFace;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = ___newLFace2;
		NullCheck(L_3);
		L_3->____Lface_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Lface_6), (void*)L_4);
		// e = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Lnext_4;
		V_1 = L_6;
		// } while (e != eStart);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		// var fPrev = fDel._prev;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = ___fDel1;
		NullCheck(L_9);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = L_9->____prev_0;
		V_2 = L_10;
		// var fNext = fDel._next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = ___fDel1;
		NullCheck(L_11);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = L_11->____next_1;
		V_3 = L_12;
		// fNext._prev = fPrev;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = V_3;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev_0), (void*)L_14);
		// fPrev._next = fNext;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next_1), (void*)L_16);
		// pool.Return(fDel);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_17 = ___pool0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = ___fDel1;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var, L_17, L_18);
		// }
		return;
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.MeshUtils::FaceArea(ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// Real area = 0;
		V_0 = (0.0f);
		// var e = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___f0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge_2;
		V_1 = L_1;
	}

IL_000d:
	{
		// area += (e._Org._s - e._Dst._s) * (e._Org._t + e._Dst._t);
		float L_2 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = L_3->____Org_5;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_6, NULL);
		NullCheck(L_7);
		float L_8 = L_7->____s_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_1;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____Org_5;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13;
		L_13 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->____t_5;
		V_0 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_8)), ((float)il2cpp_codegen_add(L_11, L_14))))));
		// e = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_1;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Lnext_4;
		V_1 = L_16;
		// } while (e != f._anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = ___f0;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_17) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_19))))
		{
			goto IL_000d;
		}
	}
	{
		// return area;
		float L_20 = V_0;
		return L_20;
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
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::Init(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_mE70A11963363F3B42EB1EEE907B60F30CB46F279 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_mEDBAA5D8B4BFB81FF6593D7CF2BB144EB637F83F (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	{
		// _prev = _next = null;
		V_0 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		__this->____next_1 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = V_0;
		__this->____prev_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_0), (void*)L_0);
		// _anEdge = null;
		__this->____anEdge_2 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge_2), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// _coords = Vec3.Zero;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero_0;
		__this->____coords_3 = L_1;
		// _s = 0;
		__this->____s_4 = (0.0f);
		// _t = 0;
		__this->____t_5 = (0.0f);
		// _pqHandle = new PQHandle();
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314* L_2 = (&__this->____pqHandle_6);
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314));
		// _n = 0;
		__this->____n_7 = 0;
		// _data = null;
		__this->____data_8 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_8), (void*)NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m08096456202DEB797890B68BFE58DA8E0E0A4476 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* __this, const RuntimeMethod* method) 
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
// System.Int32 ProceduralToolkit.LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68 (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// int n = 0;
		V_0 = 0;
		// var eCur = _anEdge;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____anEdge_2;
		V_1 = L_0;
	}

IL_0009:
	{
		// n++;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// eCur = eCur._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_1;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Lnext_4;
		V_1 = L_3;
		// } while (eCur != _anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = __this->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_4) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_5))))
		{
			goto IL_0009;
		}
	}
	{
		// return n;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Face::Init(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_m577D0D45840EE415108F9B4A373E1DBCF217D15B (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Face::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_m3A777E67CB7E0A99177B8178897FC1E80BF63DB7 (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	{
		// _prev = _next = null;
		V_0 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		__this->____next_1 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = V_0;
		__this->____prev_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_0), (void*)L_0);
		// _anEdge = null;
		__this->____anEdge_2 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge_2), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// _trail = null;
		__this->____trail_3 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trail_3), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// _n = 0;
		__this->____n_4 = 0;
		// _marked = false;
		__this->____marked_5 = (bool)0;
		// _inside = false;
		__this->____inside_6 = (bool)0;
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC04054356080E10C076D2B1CF780986ADA28723B (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_pinvoke(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_pinvoke_back(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke& marshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_pinvoke_cleanup(EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_com(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_com_back(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com& marshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_com_cleanup(EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com& marshaled)
{
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair::Create(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// var e = pool.Get<MeshUtils.Edge>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___pool0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1;
		L_1 = GenericVirtualFuncInvoker0< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var, L_0);
		V_0 = L_1;
		// var eSym = pool.Get<MeshUtils.Edge>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_2 = ___pool0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3;
		L_3 = GenericVirtualFuncInvoker0< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var, L_2);
		V_1 = L_3;
		// e._pair._e = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_5 = (&L_4->____pair_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		L_5->____e_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____e_0), (void*)L_6);
		// e._pair._eSym = eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_7);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_8 = (&L_7->____pair_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_1;
		L_8->____eSym_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____eSym_1), (void*)L_9);
		// eSym._pair = e._pair;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		NullCheck(L_11);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_12 = L_11->____pair_0;
		NullCheck(L_10);
		L_10->____pair_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair_0))->____e_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair_0))->____eSym_1), (void*)NULL);
		#endif
		// return e._pair;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_14 = L_13->____pair_0;
		return L_14;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/EdgePair::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4 (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		// _e = _eSym = null;
		V_0 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		__this->____eSym_1 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eSym_1), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = V_0;
		__this->____e_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4_AdjustorThunk (RuntimeObject* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method)
{
	EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E*>(__this + _offset);
	EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4(_thisAdjusted, ___pool0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ProceduralToolkit.LibTessDotNet.MeshUtils/Face ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____Lface_6;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Rface(ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m66117D5A92950759B7A650E6A58360D9F0CD348D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Lface_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lface_6), (void*)L_1);
		// internal Face _Rface { get { return _Sym._Lface; } set { _Sym._Lface = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____Org_5;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Dst(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_m56F56B99812B22C677B6254CE6188FB788473604 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Org_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Org_5), (void*)L_1);
		// internal Vertex _Dst { get { return _Sym._Org; }  set { _Sym._Org = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Lnext_4;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Oprev(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Oprev_m72B4098058398F9D8DD6F588521EAC01C33FB866 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Lnext_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lnext_4), (void*)L_1);
		// internal Edge _Oprev { get { return _Sym._Lnext; } set { _Sym._Lnext = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Onext_3;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Lprev(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Lprev_mE996F9975839C57232219D19FF690E93FC7ADC39 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		// internal Edge _Lprev { get { return _Onext._Sym; } set { _Onext._Sym = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Dprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Dprev_m0CF28DF8CA6D34E534B0B2B0A612C8C5723B64A8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Lnext_4;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Dprev(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dprev_m6FB1041E70B1D78A9AD7C44C34995B7A75F84F3C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		// internal Edge _Dprev { get { return _Lnext._Sym; } set { _Lnext._Sym = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Onext_3;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Rprev(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rprev_mACD8E1CB42B1F218A3826D1CEDDD6222584232F8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Onext_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Onext_3), (void*)L_1);
		// internal Edge _Rprev { get { return _Sym._Onext; } set { _Sym._Onext = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Dnext_m61B1425BB7BBFA4D996A431C104F8417603F206C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(__this, NULL);
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Dnext(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dnext_mF9DB1B0695356B61BC5060CC1940D8BB824B03DD (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(__this, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		// internal Edge _Dnext { get { return _Rprev._Sym; } set { _Rprev._Sym = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::get__Rnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Rnext_m234F4768F10009489832FFFE258CDB29F9C0E98D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(__this, NULL);
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::set__Rnext(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rnext_mF0B1A7BC1AD3E88F0C8D345796B8613BFE8CFD23 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___value0, const RuntimeMethod* method) 
{
	{
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(__this, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		// internal Edge _Rnext { get { return _Oprev._Sym; } set { _Oprev._Sym = value; } }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::EnsureFirst(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** ___e0, const RuntimeMethod* method) 
{
	{
		// if (e == e._pair._eSym)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_0 = ___e0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = *((Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861**)L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_2 = ___e0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = *((Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861**)L_2);
		NullCheck(L_3);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_4 = (&L_3->____pair_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eSym_1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_1) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		// e = e._Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_6 = ___e0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_7 = ___e0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = *((Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861**)L_7);
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Sym_2;
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::Init(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_m89426428963412E7E6C46CB50DD7BFBAE674B12C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m505962A66889E07658E348F1F2DA3D065E6C51A4 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		// _pair.Reset(pool);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_0 = (&__this->____pair_0);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = ___pool0;
		EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4(L_0, L_1, NULL);
		// _next = _Sym = _Onext = _Lnext = null;
		V_0 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		__this->____Lnext_4 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lnext_4), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2;
		V_0 = L_3;
		__this->____Onext_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Onext_3), (void*)L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4;
		V_0 = L_5;
		__this->____Sym_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sym_2), (void*)L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		__this->____next_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)L_6);
		// _Org = null;
		__this->____Org_5 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Org_5), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		// _Lface = null;
		__this->____Lface_6 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lface_6), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		// _activeRegion = null;
		__this->____activeRegion_7 = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRegion_7), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		// _winding = 0;
		__this->____winding_8 = 0;
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.MeshUtils/Edge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m878C37DCF956A74199816FC5FFC344B88058FF5E (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
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
// System.Void ProceduralToolkit.LibTessDotNet.PQHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_m88BB98E7C8BD4284E2ED771A8A96930FE7BA508A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int Invalid = 0x0fffffff;
		((PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var))->___Invalid_0 = ((int32_t)268435455);
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
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::RegionBelow(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	{
		// return reg._nodeUp._prev._key;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		NullCheck(L_0);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_1 = L_0->____nodeUp_1;
		NullCheck(L_1);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_2 = L_1->____prev_1;
		NullCheck(L_2);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = L_2->____key_0;
		return L_3;
	}
}
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::RegionAbove(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	{
		// return reg._nodeUp._next._key;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		NullCheck(L_0);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_1 = L_0->____nodeUp_1;
		NullCheck(L_1);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_2 = L_1->____next_2;
		NullCheck(L_2);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = L_2->____key_0;
		return L_3;
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::EdgeLeq(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg10, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg21, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// var e1 = reg1._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg10;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		// var e2 = reg2._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___reg21;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		// if (e1._Dst == _event)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5;
		L_5 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_4, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_5) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_6))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (e2._Dst == _event)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		NullCheck(L_7);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8;
		L_8 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_7, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_9))))
		{
			goto IL_0084;
		}
	}
	{
		// if (Geom.VertLeq(e1._Org, e2._Org))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_0;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = L_10->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = L_12->____Org_5;
		bool L_14;
		L_14 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		// return Geom.EdgeSign(e2._Dst, e1._Org, e2._Org) <= 0.0f;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16;
		L_16 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_15, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_0;
		NullCheck(L_17);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = L_17->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_1;
		NullCheck(L_19);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = L_19->____Org_5;
		float L_21;
		L_21 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_16, L_18, L_20, NULL);
		return (bool)((((int32_t)((!(((float)L_21) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0062:
	{
		// return Geom.EdgeSign(e1._Dst, e2._Org, e1._Org) >= 0.0f;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_0;
		NullCheck(L_22);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23;
		L_23 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_22, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_1;
		NullCheck(L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = L_24->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_0;
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____Org_5;
		float L_28;
		L_28 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_23, L_25, L_27, NULL);
		return (bool)((((int32_t)((!(((float)L_28) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0084:
	{
		// return Geom.EdgeSign(e2._Dst, _event, e2._Org) <= 0.0f;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_1;
		NullCheck(L_29);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30;
		L_30 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_29, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_31 = __this->____event_12;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____Org_5;
		float L_34;
		L_34 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_30, L_31, L_33, NULL);
		return (bool)((((int32_t)((!(((float)L_34) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a6:
	{
		// if (e2._Dst == _event)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_1;
		NullCheck(L_35);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_36;
		L_36 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_35, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_36) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_37))))
		{
			goto IL_00d6;
		}
	}
	{
		// return Geom.EdgeSign(e1._Dst, _event, e1._Org) >= 0.0f;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_0;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_38, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = __this->____event_12;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_0;
		NullCheck(L_41);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = L_41->____Org_5;
		float L_43;
		L_43 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_39, L_40, L_42, NULL);
		return (bool)((((int32_t)((!(((float)L_43) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00d6:
	{
		// var t1 = Geom.EdgeEval(e1._Dst, _event, e1._Org);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_0;
		NullCheck(L_44);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45;
		L_45 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_44, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = __this->____event_12;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_0;
		NullCheck(L_47);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_48 = L_47->____Org_5;
		float L_49;
		L_49 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_45, L_46, L_48, NULL);
		// var t2 = Geom.EdgeEval(e2._Dst, _event, e2._Org);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51;
		L_51 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_50, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = __this->____event_12;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_1;
		NullCheck(L_53);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = L_53->____Org_5;
		float L_55;
		L_55 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_51, L_52, L_54, NULL);
		V_2 = L_55;
		// return (t1 >= t2);
		float L_56 = V_2;
		return (bool)((((int32_t)((!(((float)L_49) >= ((float)L_56)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DeleteRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reg._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge_6;
		// reg._eUp._activeRegion = null;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___reg0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp_0;
		NullCheck(L_3);
		L_3->____activeRegion_7 = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____activeRegion_7), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		// _dict.Remove(reg._nodeUp);
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_4 = __this->____dict_10;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___reg0;
		NullCheck(L_5);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_6 = L_5->____nodeUp_1;
		NullCheck(L_4);
		Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1(L_4, L_6, Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1_RuntimeMethod_var);
		// _pool.Return(reg);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_7 = __this->____pool_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = ___reg0;
		NullCheck(L_7);
		GenericVirtualActionInvoker1< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var, L_7, L_8);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::FixUpperEdge(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___newEdge1, const RuntimeMethod* method) 
{
	{
		// _mesh.Delete(_pool, reg._eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___reg0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp_0;
		NullCheck(L_0);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_0, L_1, L_3, NULL);
		// reg._fixUpperEdge = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = ___reg0;
		NullCheck(L_4);
		L_4->____fixUpperEdge_6 = (bool)0;
		// reg._eUp = newEdge;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___reg0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___newEdge1;
		NullCheck(L_5);
		L_5->____eUp_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____eUp_0), (void*)L_6);
		// newEdge._activeRegion = reg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___newEdge1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = ___reg0;
		NullCheck(L_7);
		L_7->____activeRegion_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____activeRegion_7), (void*)L_8);
		// }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::TopLeftRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// var org = reg._eUp._Org;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp_0;
		NullCheck(L_1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = L_1->____Org_5;
		V_0 = L_2;
	}

IL_000c:
	{
		// reg = RegionAbove(reg);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = ___reg0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_3, NULL);
		___reg0 = L_4;
		// } while (reg._eUp._Org == org);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___reg0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____eUp_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_7) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		// if (reg._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___reg0;
		NullCheck(L_9);
		bool L_10 = L_9->____fixUpperEdge_6;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// var e = _mesh.Connect(_pool, RegionBelow(reg)._eUp._Sym, reg._eUp._Lnext);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_11 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_12 = __this->____pool_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13 = ___reg0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14;
		L_14 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_13, NULL);
		NullCheck(L_14);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = L_14->____eUp_0;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Sym_2;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_17 = ___reg0;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____eUp_0;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____Lnext_4;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20;
		L_20 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_11, L_12, L_16, L_19, NULL);
		V_1 = L_20;
		// FixUpperEdge(reg, e);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_21 = ___reg0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_1;
		Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6(__this, L_21, L_22, NULL);
		// reg = RegionAbove(reg);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = ___reg0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24;
		L_24 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_23, NULL);
		___reg0 = L_24;
	}

IL_006a:
	{
		// return reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = ___reg0;
		return L_25;
	}
}
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::TopRightRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopRightRegion_m36BDED50C55A6ABF5E1106897FB04E1B4BB6D007 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	{
		// var dst = reg._eUp._Dst;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp_0;
		NullCheck(L_1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2;
		L_2 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_1, NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		// reg = RegionAbove(reg);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = ___reg0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_3, NULL);
		___reg0 = L_4;
		// } while (reg._eUp._Dst == dst);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___reg0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____eUp_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_6, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_7) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		// return reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___reg0;
		return L_9;
	}
}
// ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion ProceduralToolkit.LibTessDotNet.Tess::AddRegionBelow(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regAbove0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eNewUp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	{
		// var regNew = _pool.Get<ActiveRegion>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = __this->____pool_0;
		NullCheck(L_0);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var, L_0);
		V_0 = L_1;
		// regNew._eUp = eNewUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = ___eNewUp1;
		NullCheck(L_2);
		L_2->____eUp_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp_0), (void*)L_3);
		// regNew._nodeUp = _dict.InsertBefore(regAbove._nodeUp, regNew);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_5 = __this->____dict_10;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = ___regAbove0;
		NullCheck(L_6);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_7 = L_6->____nodeUp_1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = V_0;
		NullCheck(L_5);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_9;
		L_9 = Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6(L_5, L_7, L_8, Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____nodeUp_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____nodeUp_1), (void*)L_9);
		// regNew._fixUpperEdge = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = V_0;
		NullCheck(L_10);
		L_10->____fixUpperEdge_6 = (bool)0;
		// regNew._sentinel = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11 = V_0;
		NullCheck(L_11);
		L_11->____sentinel_4 = (bool)0;
		// regNew._dirty = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = V_0;
		NullCheck(L_12);
		L_12->____dirty_5 = (bool)0;
		// eNewUp._activeRegion = regNew;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___eNewUp1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_0;
		NullCheck(L_13);
		L_13->____activeRegion_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____activeRegion_7), (void*)L_14);
		// return regNew;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15 = V_0;
		return L_15;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ComputeWinding(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m164A5309BBEAAA26966D2AE1E0CF8FAC99FA9376 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	{
		// reg._windingNumber = RegionAbove(reg)._windingNumber + reg._eUp._winding;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1 = ___reg0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2;
		L_2 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->____windingNumber_2;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = ___reg0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->____winding_8;
		NullCheck(L_0);
		L_0->____windingNumber_2 = ((int32_t)il2cpp_codegen_add(L_3, L_6));
		// reg._inside = Geom.IsWindingInside(_windingRule, reg._windingNumber);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_7 = ___reg0;
		int32_t L_8 = __this->____windingRule_9;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___reg0;
		NullCheck(L_9);
		int32_t L_10 = L_9->____windingNumber_2;
		bool L_11;
		L_11 = Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F(L_8, L_10, NULL);
		NullCheck(L_7);
		L_7->____inside_3 = L_11;
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::FinishRegion(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___reg0, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		// var e = reg._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		// var f = e._Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____Lface_6;
		// f._inside = reg._inside;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___reg0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_3;
		NullCheck(L_4);
		L_4->____inside_6 = L_6;
		// f._anEdge = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_4);
		L_4->____anEdge_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____anEdge_2), (void*)L_7);
		// DeleteRegion(reg);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = ___reg0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_8, NULL);
		// }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.MeshUtils/Edge ProceduralToolkit.LibTessDotNet.Tess::FinishLeftRegions(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regFirst0, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regLast1, const RuntimeMethod* method) 
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	{
		// var regPrev = regFirst;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___regFirst0;
		V_0 = L_0;
		// var ePrev = regFirst._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1 = ___regFirst0;
		NullCheck(L_1);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = L_1->____eUp_0;
		V_1 = L_2;
		goto IL_00ad;
	}

IL_000e:
	{
		// regPrev._fixUpperEdge = false;    // placement was OK
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = V_0;
		NullCheck(L_3);
		L_3->____fixUpperEdge_6 = (bool)0;
		// var reg = RegionBelow(regPrev);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5;
		L_5 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_4, NULL);
		V_2 = L_5;
		// var e = reg._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = V_2;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____eUp_0;
		V_3 = L_7;
		// if (e._Org != ePrev._Org)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_3;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = L_10->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_9) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_11)))
		{
			goto IL_0069;
		}
	}
	{
		// if (!reg._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = L_12->____fixUpperEdge_6;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		// FinishRegion(regPrev);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_0;
		Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8(__this, L_14, NULL);
		// break;
		goto IL_00b4;
	}

IL_0043:
	{
		// e = _mesh.Connect(_pool, ePrev._Lprev, e._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_15 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_16 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18;
		L_18 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_17, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_3;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = L_19->____Sym_2;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21;
		L_21 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_15, L_16, L_18, L_20, NULL);
		V_3 = L_21;
		// FixUpperEdge(reg, e);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_22 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_3;
		Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6(__this, L_22, L_23, NULL);
	}

IL_0069:
	{
		// if (ePrev._Onext != e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_1;
		NullCheck(L_24);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = L_24->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_3;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_25) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		// _mesh.Splice(_pool, e._Oprev, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_27 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_28 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		NullCheck(L_29);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30;
		L_30 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_29, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_27, L_28, L_30, L_31, NULL);
		// _mesh.Splice(_pool, ePrev, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_32 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_33 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_3;
		NullCheck(L_32);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_32, L_33, L_34, L_35, NULL);
	}

IL_009d:
	{
		// FinishRegion(regPrev); // may change reg.eUp
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_36 = V_0;
		Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8(__this, L_36, NULL);
		// ePrev = reg._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_37 = V_2;
		NullCheck(L_37);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = L_37->____eUp_0;
		V_1 = L_38;
		// regPrev = reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_39 = V_2;
		V_0 = L_39;
	}

IL_00ad:
	{
		// while (regPrev != regLast)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_40 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_41 = ___regLast1;
		if ((!(((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_40) == ((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_41))))
		{
			goto IL_000e;
		}
	}

IL_00b4:
	{
		// return ePrev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		return L_42;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddRightEdges(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eFirst1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eLast2, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	{
		// bool firstTime = true;
		V_0 = (bool)1;
		// var e = eFirst; do
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___eFirst1;
		V_1 = L_0;
	}

IL_0004:
	{
		// AddRegionBelow(regUp, e._Sym);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1 = ___regUp0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_1;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Sym_2;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6(__this, L_1, L_3, NULL);
		// e = e._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Onext_3;
		V_1 = L_6;
		// } while (e != eLast);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = ___eLast2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0004;
		}
	}
	{
		// if (eTopLeft == null)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___eTopLeft3;
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		// eTopLeft = RegionBelow(regUp)._eUp._Rprev;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11;
		L_11 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_10, NULL);
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11->____eUp_0;
		NullCheck(L_12);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13;
		L_13 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(L_12, NULL);
		___eTopLeft3 = L_13;
	}

IL_0034:
	{
		// ActiveRegion regPrev = regUp, reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = ___regUp0;
		V_2 = L_14;
		// var ePrev = eTopLeft;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___eTopLeft3;
		V_4 = L_15;
	}

IL_003a:
	{
		// reg = RegionBelow(regPrev);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = V_2;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_17;
		L_17 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_16, NULL);
		V_3 = L_17;
		// e = reg._eUp._Sym;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = V_3;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____eUp_0;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = L_19->____Sym_2;
		V_1 = L_20;
		// if (e._Org != ePrev._Org) break;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_1;
		NullCheck(L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = L_21->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_4;
		NullCheck(L_23);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = L_23->____Org_5;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_22) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_24))))
		{
			goto IL_0106;
		}
	}
	{
		// if (e._Onext != ePrev)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_4;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_27)))
		{
			goto IL_009b;
		}
	}
	{
		// _mesh.Splice(_pool, e._Oprev, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_28 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_29 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		NullCheck(L_30);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31;
		L_31 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_30, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_1;
		NullCheck(L_28);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_28, L_29, L_31, L_32, NULL);
		// _mesh.Splice(_pool, ePrev._Oprev, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_33 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_34 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_4;
		NullCheck(L_35);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36;
		L_36 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_35, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_1;
		NullCheck(L_33);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_33, L_34, L_36, L_37, NULL);
	}

IL_009b:
	{
		// reg._windingNumber = regPrev._windingNumber - e._winding;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_38 = V_3;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = L_39->____windingNumber_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->____winding_8;
		NullCheck(L_38);
		L_38->____windingNumber_2 = ((int32_t)il2cpp_codegen_subtract(L_40, L_42));
		// reg._inside = Geom.IsWindingInside(_windingRule, reg._windingNumber);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_43 = V_3;
		int32_t L_44 = __this->____windingRule_9;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->____windingNumber_2;
		bool L_47;
		L_47 = Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F(L_44, L_46, NULL);
		NullCheck(L_43);
		L_43->____inside_3 = L_47;
		// regPrev._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_48 = V_2;
		NullCheck(L_48);
		L_48->____dirty_5 = (bool)1;
		// if (!firstTime && CheckForRightSplice(regPrev))
		bool L_49 = V_0;
		if (L_49)
		{
			goto IL_00fa;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_50 = V_2;
		bool L_51;
		L_51 = Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45(__this, L_50, NULL);
		if (!L_51)
		{
			goto IL_00fa;
		}
	}
	{
		// Geom.AddWinding(e, ePrev);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_4;
		Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB(L_52, L_53, NULL);
		// DeleteRegion(regPrev);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_54 = V_2;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_54, NULL);
		// _mesh.Delete(_pool, ePrev);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_55 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_56 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_57 = V_4;
		NullCheck(L_55);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_55, L_56, L_57, NULL);
	}

IL_00fa:
	{
		// firstTime = false;
		V_0 = (bool)0;
		// regPrev = reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_58 = V_3;
		V_2 = L_58;
		// ePrev = e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = V_1;
		V_4 = L_59;
		// while (true)
		goto IL_003a;
	}

IL_0106:
	{
		// regPrev._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_60 = V_2;
		NullCheck(L_60);
		L_60->____dirty_5 = (bool)1;
		// if (cleanUp)
		bool L_61 = ___cleanUp4;
		if (!L_61)
		{
			goto IL_0118;
		}
	}
	{
		// WalkDirtyRegions(regPrev);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_62 = V_2;
		Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF(__this, L_62, NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::SpliceMergeVertices(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e10, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___e21, const RuntimeMethod* method) 
{
	{
		// _mesh.Splice(_pool, e1, e2);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___e10;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = ___e21;
		NullCheck(L_0);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::VertexWeights(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___isect0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___org1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var t1 = Geom.VertL1dist(org, isect);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___org1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___isect0;
		float L_2;
		L_2 = Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC(L_0, L_1, NULL);
		V_0 = L_2;
		// var t2 = Geom.VertL1dist(dst, isect);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___dst2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___isect0;
		float L_5;
		L_5 = Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC(L_3, L_4, NULL);
		V_1 = L_5;
		// w0 = (t2 / (t1 + t2)) / 2.0f;
		float* L_6 = ___w03;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*((float*)L_6) = (float)((float)(((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))/(2.0f)));
		// w1 = (t1 / (t1 + t2)) / 2.0f;
		float* L_10 = ___w14;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*((float*)L_10) = (float)((float)(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13))))/(2.0f)));
		// isect._coords.X += w0 * org._coords.X + w1 * dst._coords.X;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___isect0;
		NullCheck(L_14);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_15 = (&L_14->____coords_3);
		float* L_16 = (&L_15->___X_1);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float* L_19 = ___w03;
		float L_20 = *((float*)L_19);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___org1;
		NullCheck(L_21);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_22 = (&L_21->____coords_3);
		float L_23 = L_22->___X_1;
		float* L_24 = ___w14;
		float L_25 = *((float*)L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = ___dst2;
		NullCheck(L_26);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_27 = (&L_26->____coords_3);
		float L_28 = L_27->___X_1;
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_28))))));
		// isect._coords.Y += w0 * org._coords.Y + w1 * dst._coords.Y;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = ___isect0;
		NullCheck(L_29);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_30 = (&L_29->____coords_3);
		float* L_31 = (&L_30->___Y_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float* L_34 = ___w03;
		float L_35 = *((float*)L_34);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_36 = ___org1;
		NullCheck(L_36);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_37 = (&L_36->____coords_3);
		float L_38 = L_37->___Y_2;
		float* L_39 = ___w14;
		float L_40 = *((float*)L_39);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = ___dst2;
		NullCheck(L_41);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_42 = (&L_41->____coords_3);
		float L_43 = L_42->___Y_2;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_35, L_38)), ((float)il2cpp_codegen_multiply(L_40, L_43))))));
		// isect._coords.Z += w0 * org._coords.Z + w1 * dst._coords.Z;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = ___isect0;
		NullCheck(L_44);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_45 = (&L_44->____coords_3);
		float* L_46 = (&L_45->___Z_3);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float* L_49 = ___w03;
		float L_50 = *((float*)L_49);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = ___org1;
		NullCheck(L_51);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_52 = (&L_51->____coords_3);
		float L_53 = L_52->___Z_3;
		float* L_54 = ___w14;
		float L_55 = *((float*)L_54);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_56 = ___dst2;
		NullCheck(L_56);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_57 = (&L_56->____coords_3);
		float L_58 = L_57->___Z_3;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_50, L_53)), ((float)il2cpp_codegen_multiply(L_55, L_58))))));
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::GetIntersectData(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_mC7C5CC61E4012E373A4661A298DA00C2A9B10FBA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___isect0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___orgUp1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___dstUp2, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___orgLo3, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___dstLo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// isect._coords = Vec3.Zero;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___isect0;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero_0;
		NullCheck(L_0);
		L_0->____coords_3 = L_1;
		// VertexWeights(isect, orgUp, dstUp, out w0, out w1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___isect0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___orgUp1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___dstUp2;
		Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045(__this, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		// VertexWeights(isect, orgLo, dstLo, out w2, out w3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = ___isect0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___orgLo3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = ___dstLo4;
		Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045(__this, L_5, L_6, L_7, (&V_2), (&V_3), NULL);
		// if (_combineCallback != null)
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* L_8 = __this->____combineCallback_13;
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		// isect._data = _combineCallback(
		//     isect._coords,
		//     new object[] { orgUp._data, dstUp._data, orgLo._data, dstLo._data },
		//     new Real[] { w0, w1, w2, w3 }
		// );
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___isect0;
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* L_10 = __this->____combineCallback_13;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = ___isect0;
		NullCheck(L_11);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_12 = L_11->____coords_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___orgUp1;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->____data_8;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___dstUp2;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->____data_8;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___orgLo3;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->____data_8;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = ___dstLo4;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->____data_8;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_26;
		float L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_27;
		float L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = L_29;
		float L_32 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = L_31;
		float L_34 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_34);
		NullCheck(L_10);
		RuntimeObject* L_35;
		L_35 = CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_inline(L_10, L_12, L_23, L_33, NULL);
		NullCheck(L_9);
		L_9->____data_8 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____data_8), (void*)L_35);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::CheckForRightSplice(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	bool V_3 = false;
	{
		// var regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		// var eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		// var eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		// if (Geom.VertLeq(eUp._Org, eLo._Org))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org_5;
		bool L_10;
		L_10 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_00da;
		}
	}
	{
		// if (Geom.EdgeSign(eLo._Dst, eUp._Org, eLo._Org) > 0.0f)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12;
		L_12 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_11, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_1;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_2;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____Org_5;
		float L_17;
		L_17 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// if (!Geom.VertEq(eUp._Org, eLo._Org))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_1;
		NullCheck(L_18);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = L_18->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_2;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = L_20->____Org_5;
		bool L_22;
		L_22 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_19, L_21, NULL);
		if (L_22)
		{
			goto IL_00a4;
		}
	}
	{
		// _mesh.SplitEdge(_pool, eLo._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_2;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Sym_2;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27;
		L_27 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_23, L_24, L_26, NULL);
		// _mesh.Splice(_pool, eUp, eLo._Oprev);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_28 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_29 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_2;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32;
		L_32 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_31, NULL);
		NullCheck(L_28);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_28, L_29, L_30, L_32, NULL);
		// regUp._dirty = regLo._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_33 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = V_0;
		int32_t L_35 = 1;
		V_3 = (bool)L_35;
		NullCheck(L_34);
		L_34->____dirty_5 = (bool)L_35;
		bool L_36 = V_3;
		NullCheck(L_33);
		L_33->____dirty_5 = L_36;
		goto IL_0140;
	}

IL_00a4:
	{
		// else if (eUp._Org != eLo._Org)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_1;
		NullCheck(L_37);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_38 = L_37->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_2;
		NullCheck(L_39);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = L_39->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_38) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_40)))
		{
			goto IL_0140;
		}
	}
	{
		// _pq.Remove(eUp._Org._pqHandle);
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_41 = __this->____pq_11;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		NullCheck(L_42);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = L_42->____Org_5;
		NullCheck(L_43);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 L_44 = L_43->____pqHandle_6;
		NullCheck(L_41);
		PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6(L_41, L_44, PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6_RuntimeMethod_var);
		// SpliceMergeVertices(eLo._Oprev, eUp);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_2;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46;
		L_46 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_45, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_1;
		Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67(__this, L_46, L_47, NULL);
		goto IL_0140;
	}

IL_00da:
	{
		// if (Geom.EdgeSign(eUp._Dst, eLo._Org, eUp._Org) < 0.0f)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_1;
		NullCheck(L_48);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_49;
		L_49 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_48, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_2;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = L_50->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_1;
		NullCheck(L_52);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_53 = L_52->____Org_5;
		float L_54;
		L_54 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_49, L_51, L_53, NULL);
		if ((!(((float)L_54) < ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00fa:
	{
		// RegionAbove(regUp)._dirty = regUp._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_55 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_56;
		L_56 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_55, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_57 = ___regUp0;
		int32_t L_58 = 1;
		V_3 = (bool)L_58;
		NullCheck(L_57);
		L_57->____dirty_5 = (bool)L_58;
		bool L_59 = V_3;
		NullCheck(L_56);
		L_56->____dirty_5 = L_59;
		// _mesh.SplitEdge(_pool, eUp._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_60 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_61 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_62 = V_1;
		NullCheck(L_62);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_63 = L_62->____Sym_2;
		NullCheck(L_60);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_64;
		L_64 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_60, L_61, L_63, NULL);
		// _mesh.Splice(_pool, eLo._Oprev, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_65 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_66 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_67 = V_2;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68;
		L_68 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_67, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_69 = V_1;
		NullCheck(L_65);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_65, L_66, L_68, L_69, NULL);
	}

IL_0140:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::CheckForLeftSplice(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_mA422AF26ED6CD7EBB1E540E2CBF125182C61771A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) 
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	bool V_4 = false;
	{
		// var regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		// var eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		// var eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		// if (Geom.VertLeq(eUp._Dst, eLo._Dst))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_6, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9;
		L_9 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_8, NULL);
		bool L_10;
		L_10 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		// if (Geom.EdgeSign(eUp._Dst, eLo._Dst, eUp._Org) < 0.0f)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_1;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12;
		L_12 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_11, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_2;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14;
		L_14 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_13, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____Org_5;
		float L_17;
		L_17 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0049:
	{
		// RegionAbove(regUp)._dirty = regUp._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_19;
		L_19 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_18, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_20 = ___regUp0;
		int32_t L_21 = 1;
		V_4 = (bool)L_21;
		NullCheck(L_20);
		L_20->____dirty_5 = (bool)L_21;
		bool L_22 = V_4;
		NullCheck(L_19);
		L_19->____dirty_5 = L_22;
		// var e = _mesh.SplitEdge(_pool, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26;
		L_26 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_23, L_24, L_25, NULL);
		V_3 = L_26;
		// _mesh.Splice(_pool, eLo._Sym, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_27 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_28 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_2;
		NullCheck(L_29);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = L_29->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_27, L_28, L_30, L_31, NULL);
		// e._Lface._inside = regUp._inside;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_3;
		NullCheck(L_32);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_33 = L_32->____Lface_6;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = ___regUp0;
		NullCheck(L_34);
		bool L_35 = L_34->____inside_3;
		NullCheck(L_33);
		L_33->____inside_6 = L_35;
		goto IL_0110;
	}

IL_009f:
	{
		// if (Geom.EdgeSign(eLo._Dst, eUp._Dst, eLo._Org) > 0.0f)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_2;
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37;
		L_37 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_36, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_38, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_2;
		NullCheck(L_40);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = L_40->____Org_5;
		float L_42;
		L_42 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_37, L_39, L_41, NULL);
		if ((!(((float)L_42) > ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00bf:
	{
		// regUp._dirty = regLo._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_43 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_44 = V_0;
		int32_t L_45 = 1;
		V_4 = (bool)L_45;
		NullCheck(L_44);
		L_44->____dirty_5 = (bool)L_45;
		bool L_46 = V_4;
		NullCheck(L_43);
		L_43->____dirty_5 = L_46;
		// var e = _mesh.SplitEdge(_pool, eLo);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_47 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_48 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_2;
		NullCheck(L_47);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50;
		L_50 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_47, L_48, L_49, NULL);
		// _mesh.Splice(_pool, eUp._Lnext, eLo._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_51 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_52 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_1;
		NullCheck(L_53);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = L_53->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55 = V_2;
		NullCheck(L_55);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_56 = L_55->____Sym_2;
		NullCheck(L_51);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_51, L_52, L_54, L_56, NULL);
		// e._Rface._inside = regUp._inside;
		NullCheck(L_50);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_57;
		L_57 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_50, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_58 = ___regUp0;
		NullCheck(L_58);
		bool L_59 = L_58->____inside_3;
		NullCheck(L_57);
		L_57->____inside_6 = L_59;
	}

IL_0110:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean ProceduralToolkit.LibTessDotNet.Tess::CheckForIntersect(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_5 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_6 = NULL;
	float V_7 = 0.0f;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_8 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_9 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_10 = NULL;
	bool V_11 = false;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* G_B14_0 = NULL;
	{
		// var regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		// var eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		// var eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		// var orgUp = eUp._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org_5;
		V_3 = L_7;
		// var orgLo = eLo._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org_5;
		V_4 = L_9;
		// var dstUp = eUp._Dst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11;
		L_11 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_10, NULL);
		V_5 = L_11;
		// var dstLo = eLo._Dst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13;
		L_13 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_12, NULL);
		V_6 = L_13;
		// if( orgUp == orgLo )
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_4;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_14) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_15))))
		{
			goto IL_003c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003c:
	{
		// var tMinUp = Math.Min(orgUp._t, dstUp._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_3;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = V_5;
		NullCheck(L_18);
		float L_19 = L_18->____t_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_17, L_19, NULL);
		// var tMaxLo = Math.Max(orgLo._t, dstLo._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_4;
		NullCheck(L_21);
		float L_22 = L_21->____t_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = V_6;
		NullCheck(L_23);
		float L_24 = L_23->____t_5;
		float L_25;
		L_25 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_22, L_24, NULL);
		V_7 = L_25;
		// if( tMinUp > tMaxLo )
		float L_26 = V_7;
		if ((!(((float)L_20) > ((float)L_26))))
		{
			goto IL_0069;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0069:
	{
		// if (Geom.VertLeq(orgUp, orgLo))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = V_4;
		bool L_29;
		L_29 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_0086;
		}
	}
	{
		// if (Geom.EdgeSign( dstLo, orgUp, orgLo ) > 0.0f)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_31 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = V_4;
		float L_33;
		L_33 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_30, L_31, L_32, NULL);
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0086:
	{
		// if (Geom.EdgeSign( dstUp, orgLo, orgUp ) < 0.0f)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_35 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_36 = V_3;
		float L_37;
		L_37 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_34, L_35, L_36, NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0099:
	{
		// var isect = _pool.Get<MeshUtils.Vertex>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_38 = __this->____pool_0;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = GenericVirtualFuncInvoker0< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var, L_38);
		V_8 = L_39;
		// Geom.EdgeIntersect(dstUp, orgUp, dstLo, orgLo, isect);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = V_8;
		Geom_EdgeIntersect_m4D225F1D0B04094B17E891B09BF88B31E4C17224(L_40, L_41, L_42, L_43, L_44, NULL);
		// if (Geom.VertLeq(isect, _event))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = __this->____event_12;
		bool L_47;
		L_47 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_00e7;
		}
	}
	{
		// isect._s = _event._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_48 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_49 = __this->____event_12;
		NullCheck(L_49);
		float L_50 = L_49->____s_4;
		NullCheck(L_48);
		L_48->____s_4 = L_50;
		// isect._t = _event._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = __this->____event_12;
		NullCheck(L_52);
		float L_53 = L_52->____t_5;
		NullCheck(L_51);
		L_51->____t_5 = L_53;
	}

IL_00e7:
	{
		// var orgMin = Geom.VertLeq(orgUp, orgLo) ? orgUp : orgLo;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_55 = V_4;
		bool L_56;
		L_56 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_54, L_55, NULL);
		if (L_56)
		{
			goto IL_00f5;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_57 = V_4;
		G_B14_0 = L_57;
		goto IL_00f6;
	}

IL_00f5:
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_58 = V_3;
		G_B14_0 = L_58;
	}

IL_00f6:
	{
		V_9 = G_B14_0;
		// if (Geom.VertLeq(orgMin, isect))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_59 = V_9;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60 = V_8;
		bool L_61;
		L_61 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_011f;
		}
	}
	{
		// isect._s = orgMin._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = V_9;
		NullCheck(L_63);
		float L_64 = L_63->____s_4;
		NullCheck(L_62);
		L_62->____s_4 = L_64;
		// isect._t = orgMin._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_66 = V_9;
		NullCheck(L_66);
		float L_67 = L_66->____t_5;
		NullCheck(L_65);
		L_65->____t_5 = L_67;
	}

IL_011f:
	{
		// if (Geom.VertEq(isect, orgUp) || Geom.VertEq(isect, orgLo))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_68 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = V_3;
		bool L_70;
		L_70 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_68, L_69, NULL);
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_71 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = V_4;
		bool L_73;
		L_73 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_71, L_72, NULL);
		if (!L_73)
		{
			goto IL_014b;
		}
	}

IL_0134:
	{
		// CheckForRightSplice(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_74 = ___regUp0;
		bool L_75;
		L_75 = Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45(__this, L_74, NULL);
		// _pool.Return(isect);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_76 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_77 = V_8;
		NullCheck(L_76);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_76, L_77);
		// return false;
		return (bool)0;
	}

IL_014b:
	{
		// if (   (! Geom.VertEq(dstUp, _event)
		//     && Geom.EdgeSign(dstUp, _event, isect) >= 0.0f)
		//     || (! Geom.VertEq(dstLo, _event)
		//     && Geom.EdgeSign(dstLo, _event, isect) <= 0.0f))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_78 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_79 = __this->____event_12;
		bool L_80;
		L_80 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_78, L_79, NULL);
		if (L_80)
		{
			goto IL_0170;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_81 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_82 = __this->____event_12;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_83 = V_8;
		float L_84;
		L_84 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_81, L_82, L_83, NULL);
		if ((((float)L_84) >= ((float)(0.0f))))
		{
			goto IL_019b;
		}
	}

IL_0170:
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_85 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = __this->____event_12;
		bool L_87;
		L_87 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_85, L_86, NULL);
		if (L_87)
		{
			goto IL_03a0;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_88 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_89 = __this->____event_12;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_90 = V_8;
		float L_91;
		L_91 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_88, L_89, L_90, NULL);
		if ((!(((float)L_91) <= ((float)(0.0f)))))
		{
			goto IL_03a0;
		}
	}

IL_019b:
	{
		// if (dstLo == _event)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_92 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_93 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_92) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_93))))
		{
			goto IL_0219;
		}
	}
	{
		// _mesh.SplitEdge(_pool, eUp._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_94 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_95 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_96 = V_1;
		NullCheck(L_96);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_97 = L_96->____Sym_2;
		NullCheck(L_94);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_98;
		L_98 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_94, L_95, L_97, NULL);
		// _mesh.Splice(_pool, eLo._Sym, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_99 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_100 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_101 = V_2;
		NullCheck(L_101);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_102 = L_101->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_103 = V_1;
		NullCheck(L_99);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_99, L_100, L_102, L_103, NULL);
		// regUp = TopLeftRegion(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_104 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_105;
		L_105 = Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD(__this, L_104, NULL);
		___regUp0 = L_105;
		// eUp = RegionBelow(regUp)._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_106 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_107;
		L_107 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_106, NULL);
		NullCheck(L_107);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_108 = L_107->____eUp_0;
		V_1 = L_108;
		// FinishLeftRegions(RegionBelow(regUp), regLo);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_109 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_110;
		L_110 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_109, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_111 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_112;
		L_112 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_110, L_111, NULL);
		// AddRightEdges(regUp, eUp._Oprev, eUp, eUp, true);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_113 = ___regUp0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_114 = V_1;
		NullCheck(L_114);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_115;
		L_115 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_114, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_116 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_117 = V_1;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_113, L_115, L_116, L_117, (bool)1, NULL);
		// _pool.Return(isect);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_118 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_119 = V_8;
		NullCheck(L_118);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_118, L_119);
		// return true;
		return (bool)1;
	}

IL_0219:
	{
		// if( dstUp == _event ) {
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_120 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_121 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_120) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_121))))
		{
			goto IL_02b3;
		}
	}
	{
		// _mesh.SplitEdge(_pool, eLo._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_122 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_123 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_124 = V_2;
		NullCheck(L_124);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_125 = L_124->____Sym_2;
		NullCheck(L_122);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_126;
		L_126 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_122, L_123, L_125, NULL);
		// _mesh.Splice(_pool, eUp._Lnext, eLo._Oprev);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_127 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_128 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_129 = V_1;
		NullCheck(L_129);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_130 = L_129->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_131 = V_2;
		NullCheck(L_131);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_132;
		L_132 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_131, NULL);
		NullCheck(L_127);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_127, L_128, L_130, L_132, NULL);
		// regLo = regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_133 = ___regUp0;
		V_0 = L_133;
		// regUp = TopRightRegion(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_134 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_135;
		L_135 = Tess_TopRightRegion_m36BDED50C55A6ABF5E1106897FB04E1B4BB6D007(__this, L_134, NULL);
		___regUp0 = L_135;
		// var e = RegionBelow(regUp)._eUp._Rprev;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_136 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_137;
		L_137 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_136, NULL);
		NullCheck(L_137);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_138 = L_137->____eUp_0;
		NullCheck(L_138);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_139;
		L_139 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(L_138, NULL);
		V_10 = L_139;
		// regLo._eUp = eLo._Oprev;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_140 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_141 = V_2;
		NullCheck(L_141);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_142;
		L_142 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_141, NULL);
		NullCheck(L_140);
		L_140->____eUp_0 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&L_140->____eUp_0), (void*)L_142);
		// eLo = FinishLeftRegions(regLo, null);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_143 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_144;
		L_144 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_143, (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL, NULL);
		V_2 = L_144;
		// AddRightEdges(regUp, eLo._Onext, eUp._Rprev, e, true);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_145 = ___regUp0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_146 = V_2;
		NullCheck(L_146);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_147 = L_146->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_148 = V_1;
		NullCheck(L_148);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_149;
		L_149 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(L_148, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_150 = V_10;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_145, L_147, L_149, L_150, (bool)1, NULL);
		// _pool.Return(isect);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_151 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_152 = V_8;
		NullCheck(L_151);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_151, L_152);
		// return true;
		return (bool)1;
	}

IL_02b3:
	{
		// if (Geom.EdgeSign( dstUp, _event, isect ) >= 0.0f)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_153 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_154 = __this->____event_12;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_155 = V_8;
		float L_156;
		L_156 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_153, L_154, L_155, NULL);
		if ((!(((float)L_156) >= ((float)(0.0f)))))
		{
			goto IL_0325;
		}
	}
	{
		// RegionAbove(regUp)._dirty = regUp._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_157 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_158;
		L_158 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_157, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_159 = ___regUp0;
		int32_t L_160 = 1;
		V_11 = (bool)L_160;
		NullCheck(L_159);
		L_159->____dirty_5 = (bool)L_160;
		bool L_161 = V_11;
		NullCheck(L_158);
		L_158->____dirty_5 = L_161;
		// _mesh.SplitEdge(_pool, eUp._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_162 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_163 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_164 = V_1;
		NullCheck(L_164);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_165 = L_164->____Sym_2;
		NullCheck(L_162);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_166;
		L_166 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_162, L_163, L_165, NULL);
		// eUp._Org._s = _event._s;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_167 = V_1;
		NullCheck(L_167);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_168 = L_167->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_169 = __this->____event_12;
		NullCheck(L_169);
		float L_170 = L_169->____s_4;
		NullCheck(L_168);
		L_168->____s_4 = L_170;
		// eUp._Org._t = _event._t;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_171 = V_1;
		NullCheck(L_171);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_172 = L_171->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_173 = __this->____event_12;
		NullCheck(L_173);
		float L_174 = L_173->____t_5;
		NullCheck(L_172);
		L_172->____t_5 = L_174;
	}

IL_0325:
	{
		// if (Geom.EdgeSign(dstLo, _event, isect) <= 0.0f)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_175 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_176 = __this->____event_12;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_177 = V_8;
		float L_178;
		L_178 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_175, L_176, L_177, NULL);
		if ((!(((float)L_178) <= ((float)(0.0f)))))
		{
			goto IL_0391;
		}
	}
	{
		// regUp._dirty = regLo._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_179 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_180 = V_0;
		int32_t L_181 = 1;
		V_11 = (bool)L_181;
		NullCheck(L_180);
		L_180->____dirty_5 = (bool)L_181;
		bool L_182 = V_11;
		NullCheck(L_179);
		L_179->____dirty_5 = L_182;
		// _mesh.SplitEdge(_pool, eLo._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_183 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_184 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_185 = V_2;
		NullCheck(L_185);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_186 = L_185->____Sym_2;
		NullCheck(L_183);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_187;
		L_187 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_183, L_184, L_186, NULL);
		// eLo._Org._s = _event._s;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_188 = V_2;
		NullCheck(L_188);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_189 = L_188->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_190 = __this->____event_12;
		NullCheck(L_190);
		float L_191 = L_190->____s_4;
		NullCheck(L_189);
		L_189->____s_4 = L_191;
		// eLo._Org._t = _event._t;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_192 = V_2;
		NullCheck(L_192);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_193 = L_192->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_194 = __this->____event_12;
		NullCheck(L_194);
		float L_195 = L_194->____t_5;
		NullCheck(L_193);
		L_193->____t_5 = L_195;
	}

IL_0391:
	{
		// _pool.Return(isect);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_196 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_197 = V_8;
		NullCheck(L_196);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_196, L_197);
		// return false;
		return (bool)0;
	}

IL_03a0:
	{
		// _mesh.SplitEdge(_pool, eUp._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_198 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_199 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_200 = V_1;
		NullCheck(L_200);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_201 = L_200->____Sym_2;
		NullCheck(L_198);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_202;
		L_202 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_198, L_199, L_201, NULL);
		// _mesh.SplitEdge(_pool, eLo._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_203 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_204 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_205 = V_2;
		NullCheck(L_205);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_206 = L_205->____Sym_2;
		NullCheck(L_203);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_207;
		L_207 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_203, L_204, L_206, NULL);
		// _mesh.Splice(_pool, eLo._Oprev, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_208 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_209 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_210 = V_2;
		NullCheck(L_210);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_211;
		L_211 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_210, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_212 = V_1;
		NullCheck(L_208);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_208, L_209, L_211, L_212, NULL);
		// eUp._Org._s = isect._s;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_213 = V_1;
		NullCheck(L_213);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_214 = L_213->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_215 = V_8;
		NullCheck(L_215);
		float L_216 = L_215->____s_4;
		NullCheck(L_214);
		L_214->____s_4 = L_216;
		// eUp._Org._t = isect._t;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_217 = V_1;
		NullCheck(L_217);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_218 = L_217->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_219 = V_8;
		NullCheck(L_219);
		float L_220 = L_219->____t_5;
		NullCheck(L_218);
		L_218->____t_5 = L_220;
		// _pool.Return(isect);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_221 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_222 = V_8;
		NullCheck(L_221);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_221, L_222);
		// isect = null;
		V_8 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		// eUp._Org._pqHandle = _pq.Insert(eUp._Org);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_223 = V_1;
		NullCheck(L_223);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_224 = L_223->____Org_5;
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_225 = __this->____pq_11;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_226 = V_1;
		NullCheck(L_226);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_227 = L_226->____Org_5;
		NullCheck(L_225);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 L_228;
		L_228 = PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1(L_225, L_227, PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		NullCheck(L_224);
		L_224->____pqHandle_6 = L_228;
		// if (eUp._Org._pqHandle._handle == PQHandle.Invalid)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_229 = V_1;
		NullCheck(L_229);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_230 = L_229->____Org_5;
		NullCheck(L_230);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314* L_231 = (&L_230->____pqHandle_6);
		int32_t L_232 = L_231->____handle_1;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		int32_t L_233 = ((PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var))->___Invalid_0;
		if ((!(((uint32_t)L_232) == ((uint32_t)L_233))))
		{
			goto IL_045a;
		}
	}
	{
		// throw new InvalidOperationException("PQHandle should not be invalid");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_234 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_234);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_234, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_234, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6_RuntimeMethod_var)));
	}

IL_045a:
	{
		// GetIntersectData(eUp._Org, orgUp, dstUp, orgLo, dstLo);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_235 = V_1;
		NullCheck(L_235);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_236 = L_235->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_237 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_238 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_239 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_240 = V_6;
		Tess_GetIntersectData_mC7C5CC61E4012E373A4661A298DA00C2A9B10FBA(__this, L_236, L_237, L_238, L_239, L_240, NULL);
		// RegionAbove(regUp)._dirty = regUp._dirty = regLo._dirty = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_241 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_242;
		L_242 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_241, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_243 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_244 = V_0;
		int32_t L_245 = 1;
		V_11 = (bool)L_245;
		NullCheck(L_244);
		L_244->____dirty_5 = (bool)L_245;
		bool L_246 = V_11;
		bool L_247 = L_246;
		V_11 = L_247;
		NullCheck(L_243);
		L_243->____dirty_5 = L_247;
		bool L_248 = V_11;
		NullCheck(L_242);
		L_242->____dirty_5 = L_248;
		// return false;
		return (bool)0;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::WalkDirtyRegions(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, const RuntimeMethod* method) 
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		// var regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_000a:
	{
		// regUp = regLo;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		___regUp0 = L_2;
		// regLo = RegionBelow(regLo);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		// while (regLo._dirty)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____dirty_5;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		// if (!regUp._dirty)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_7 = ___regUp0;
		NullCheck(L_7);
		bool L_8 = L_7->____dirty_5;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// regLo = regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___regUp0;
		V_0 = L_9;
		// regUp = RegionAbove( regUp );
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11;
		L_11 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_10, NULL);
		___regUp0 = L_11;
		// if(regUp == null || !regUp._dirty)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = ___regUp0;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13 = ___regUp0;
		NullCheck(L_13);
		bool L_14 = L_13->____dirty_5;
		if (L_14)
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		// return;
		return;
	}

IL_003c:
	{
		// regUp._dirty = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15 = ___regUp0;
		NullCheck(L_15);
		L_15->____dirty_5 = (bool)0;
		// eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = ___regUp0;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = L_16->____eUp_0;
		V_1 = L_17;
		// eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = V_0;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____eUp_0;
		V_2 = L_19;
		// if (eUp._Dst != eLo._Dst)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21;
		L_21 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_20, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_2;
		NullCheck(L_22);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23;
		L_23 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_22, NULL);
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_21) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		// if (CheckForLeftSplice(regUp))
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24 = ___regUp0;
		bool L_25;
		L_25 = Tess_CheckForLeftSplice_mA422AF26ED6CD7EBB1E540E2CBF125182C61771A(__this, L_24, NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		// if (regLo._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____fixUpperEdge_6;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		// DeleteRegion(regLo);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_28 = V_0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_28, NULL);
		// _mesh.Delete(_pool, eLo);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_29 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_30 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_2;
		NullCheck(L_29);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_29, L_30, L_31, NULL);
		// regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_32 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_33;
		L_33 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_32, NULL);
		V_0 = L_33;
		// eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = V_0;
		NullCheck(L_34);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = L_34->____eUp_0;
		V_2 = L_35;
		goto IL_00cb;
	}

IL_009a:
	{
		// else if( regUp._fixUpperEdge )
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_36 = ___regUp0;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge_6;
		if (!L_37)
		{
			goto IL_00cb;
		}
	}
	{
		// DeleteRegion(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_38 = ___regUp0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_38, NULL);
		// _mesh.Delete(_pool, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_39 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_40 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_1;
		NullCheck(L_39);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_39, L_40, L_41, NULL);
		// regUp = RegionAbove(regLo);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_42 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_43;
		L_43 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_42, NULL);
		___regUp0 = L_43;
		// eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_44 = ___regUp0;
		NullCheck(L_44);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = L_44->____eUp_0;
		V_1 = L_45;
	}

IL_00cb:
	{
		// if (eUp._Org != eLo._Org)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_47 = L_46->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_2;
		NullCheck(L_48);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_49 = L_48->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_47) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_49)))
		{
			goto IL_0125;
		}
	}
	{
		// if(    eUp._Dst != eLo._Dst
		//     && ! regUp._fixUpperEdge && ! regLo._fixUpperEdge
		//     && (eUp._Dst == _event || eLo._Dst == _event) )
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51;
		L_51 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_50, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_2;
		NullCheck(L_52);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_53;
		L_53 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_52, NULL);
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_51) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_53)))
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_54 = ___regUp0;
		NullCheck(L_54);
		bool L_55 = L_54->____fixUpperEdge_6;
		if (L_55)
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_56 = V_0;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge_6;
		if (L_57)
		{
			goto IL_011d;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_58 = V_1;
		NullCheck(L_58);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_59;
		L_59 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_58, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60 = __this->____event_12;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_59) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_60)))
		{
			goto IL_0113;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_2;
		NullCheck(L_61);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62;
		L_62 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_61, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_62) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_63))))
		{
			goto IL_011d;
		}
	}

IL_0113:
	{
		// if (CheckForIntersect(regUp))
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_64 = ___regUp0;
		bool L_65;
		L_65 = Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6(__this, L_64, NULL);
		if (!L_65)
		{
			goto IL_0125;
		}
	}
	{
		// return;
		return;
	}

IL_011d:
	{
		// CheckForRightSplice(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_66 = ___regUp0;
		bool L_67;
		L_67 = Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45(__this, L_66, NULL);
	}

IL_0125:
	{
		// if (eUp._Org == eLo._Org && eUp._Dst == eLo._Dst)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = V_1;
		NullCheck(L_68);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = L_68->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_70 = V_2;
		NullCheck(L_70);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_71 = L_70->____Org_5;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_69) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_71))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_72 = V_1;
		NullCheck(L_72);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_73;
		L_73 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_72, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_74 = V_2;
		NullCheck(L_74);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75;
		L_75 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_74, NULL);
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_73) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_75))))
		{
			goto IL_0015;
		}
	}
	{
		// Geom.AddWinding(eLo, eUp);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_76 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_77 = V_1;
		Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB(L_76, L_77, NULL);
		// DeleteRegion(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_78 = ___regUp0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_78, NULL);
		// _mesh.Delete(_pool, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_79 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_80 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_81 = V_1;
		NullCheck(L_79);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_79, L_80, L_81, NULL);
		// regUp = RegionAbove(regLo);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_82 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_83;
		L_83 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_82, NULL);
		___regUp0 = L_83;
		// while (true)
		goto IL_0015;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ConnectRightVertex(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m7CF37EC43C24079CE8FEA77404E8A08BB22992D2 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___eBottomLeft1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	bool V_4 = false;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_5 = NULL;
	{
		// var eTopLeft = eBottomLeft._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___eBottomLeft1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		// var regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3;
		L_3 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_2, NULL);
		V_1 = L_3;
		// var eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = ___regUp0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		// var eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = V_1;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____eUp_0;
		V_3 = L_7;
		// bool degenerate = false;
		V_4 = (bool)0;
		// if (eUp._Dst != eLo._Dst)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9;
		L_9 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_8, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_3;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11;
		L_11 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_10, NULL);
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_9) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		// CheckForIntersect(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = ___regUp0;
		bool L_13;
		L_13 = Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6(__this, L_12, NULL);
	}

IL_0036:
	{
		// if (Geom.VertEq(eUp._Org, _event))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = L_14->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = __this->____event_12;
		bool L_17;
		L_17 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		// _mesh.Splice(_pool, eTopLeft._Oprev, eUp);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_18 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_19 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21;
		L_21 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_20, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_2;
		NullCheck(L_18);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_18, L_19, L_21, L_22, NULL);
		// regUp = TopLeftRegion(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24;
		L_24 = Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD(__this, L_23, NULL);
		___regUp0 = L_24;
		// eTopLeft = RegionBelow(regUp)._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_26;
		L_26 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_25, NULL);
		NullCheck(L_26);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = L_26->____eUp_0;
		V_0 = L_27;
		// FinishLeftRegions(RegionBelow(regUp), regLo);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_28 = ___regUp0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_29;
		L_29 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_28, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_30 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31;
		L_31 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_29, L_30, NULL);
		// degenerate = true;
		V_4 = (bool)1;
	}

IL_0089:
	{
		// if (Geom.VertEq(eLo._Org, _event))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_3;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = __this->____event_12;
		bool L_35;
		L_35 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		// _mesh.Splice(_pool, eBottomLeft, eLo._Oprev);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_36 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_37 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = ___eBottomLeft1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_3;
		NullCheck(L_39);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40;
		L_40 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_39, NULL);
		NullCheck(L_36);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_36, L_37, L_38, L_40, NULL);
		// eBottomLeft = FinishLeftRegions(regLo, null);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_41 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42;
		L_42 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_41, (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL, NULL);
		___eBottomLeft1 = L_42;
		// degenerate = true;
		V_4 = (bool)1;
	}

IL_00c1:
	{
		// if (degenerate)
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_00d6;
		}
	}
	{
		// AddRightEdges(regUp, eBottomLeft._Onext, eTopLeft, eTopLeft, true);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_44 = ___regUp0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = ___eBottomLeft1;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_0;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_44, L_46, L_47, L_48, (bool)1, NULL);
		// return;
		return;
	}

IL_00d6:
	{
		// if (Geom.VertLeq(eLo._Org, eUp._Org))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_3;
		NullCheck(L_49);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_50 = L_49->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_2;
		NullCheck(L_51);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = L_51->____Org_5;
		bool L_53;
		L_53 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_00f3;
		}
	}
	{
		// eNew = eLo._Oprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = V_3;
		NullCheck(L_54);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55;
		L_55 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_54, NULL);
		V_5 = L_55;
		goto IL_00f6;
	}

IL_00f3:
	{
		// eNew = eUp;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_56 = V_2;
		V_5 = L_56;
	}

IL_00f6:
	{
		// eNew = _mesh.Connect(_pool, eBottomLeft._Lprev, eNew);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_57 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_58 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = ___eBottomLeft1;
		NullCheck(L_59);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_60;
		L_60 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_59, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_5;
		NullCheck(L_57);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_62;
		L_62 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_57, L_58, L_60, L_61, NULL);
		V_5 = L_62;
		// AddRightEdges(regUp, eNew, eNew._Onext, eNew._Onext, false);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_63 = ___regUp0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_64 = V_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_65 = V_5;
		NullCheck(L_65);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_66 = L_65->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_67 = V_5;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = L_67->____Onext_3;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_63, L_64, L_66, L_68, (bool)0, NULL);
		// eNew._Sym._activeRegion._fixUpperEdge = true;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_69 = V_5;
		NullCheck(L_69);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_70 = L_69->____Sym_2;
		NullCheck(L_70);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_71 = L_70->____activeRegion_7;
		NullCheck(L_71);
		L_71->____fixUpperEdge_6 = (bool)1;
		// WalkDirtyRegions(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_72 = ___regUp0;
		Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF(__this, L_72, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ConnectLeftDegenerate(ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion,ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___regUp0, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vEvent1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		// var e = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___regUp0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		// if (Geom.VertEq(e._Org, vEvent))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____Org_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___vEvent1;
		bool L_5;
		L_5 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("Vertices should have been merged before");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0_RuntimeMethod_var)));
	}

IL_0020:
	{
		// if (!Geom.VertEq(e._Dst, vEvent))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_7);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8;
		L_8 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_7, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___vEvent1;
		bool L_10;
		L_10 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_008c;
		}
	}
	{
		// _mesh.SplitEdge(_pool, e._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_11 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_12 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = L_13->____Sym_2;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15;
		L_15 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_11, L_12, L_14, NULL);
		// if (regUp._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = ___regUp0;
		NullCheck(L_16);
		bool L_17 = L_16->____fixUpperEdge_6;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		// _mesh.Delete(_pool, e._Onext);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_18 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_19 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = L_20->____Onext_3;
		NullCheck(L_18);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_18, L_19, L_21, NULL);
		// regUp._fixUpperEdge = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_22 = ___regUp0;
		NullCheck(L_22);
		L_22->____fixUpperEdge_6 = (bool)0;
	}

IL_006c:
	{
		// _mesh.Splice(_pool, vEvent._anEdge, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___vEvent1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____anEdge_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_0;
		NullCheck(L_23);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_23, L_24, L_26, L_27, NULL);
		// SweepEvent(vEvent);    // recurse
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = ___vEvent1;
		Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78(__this, L_28, NULL);
		// return;
		return;
	}

IL_008c:
	{
		// throw new InvalidOperationException("Vertices should have been merged before");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0_RuntimeMethod_var)));
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ConnectLeftVertex(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m688BD9B47D51640C1CE3F56EBB131201FF6174D4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_5 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_6 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* G_B7_0 = NULL;
	{
		// var tmp = _pool.Get<ActiveRegion>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = __this->____pool_0;
		NullCheck(L_0);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var, L_0);
		V_0 = L_1;
		// tmp._eUp = vEvent._anEdge._Sym;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___vEvent0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____anEdge_2;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Sym_2;
		NullCheck(L_2);
		L_2->____eUp_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp_0), (void*)L_5);
		// var regUp = _dict.Find(tmp).Key;
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_6 = __this->____dict_10;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_7 = V_0;
		NullCheck(L_6);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_8;
		L_8 = Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546(L_6, L_7, Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546_RuntimeMethod_var);
		NullCheck(L_8);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9;
		L_9 = Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_inline(L_8, Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		V_1 = L_9;
		// _pool.Return(tmp);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_10 = __this->____pool_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11 = V_0;
		NullCheck(L_10);
		GenericVirtualActionInvoker1< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var, L_10, L_11);
		// var regLo = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = V_1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13;
		L_13 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_12, NULL);
		V_2 = L_13;
		// if (regLo == null)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_2;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		// return;
		return;
	}

IL_0047:
	{
		// var eUp = regUp._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15 = V_1;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____eUp_0;
		V_3 = L_16;
		// var eLo = regLo._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_17 = V_2;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____eUp_0;
		V_4 = L_18;
		// if (Geom.EdgeSign(eUp._Dst, vEvent, eUp._Org) == 0.0f)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_3;
		NullCheck(L_19);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20;
		L_20 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_19, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___vEvent0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_3;
		NullCheck(L_22);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = L_22->____Org_5;
		float L_24;
		L_24 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_20, L_21, L_23, NULL);
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// ConnectLeftDegenerate(regUp, vEvent);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = ___vEvent0;
		Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0(__this, L_25, L_26, NULL);
		// return;
		return;
	}

IL_0078:
	{
		// var reg = Geom.VertLeq(eLo._Dst, eUp._Dst) ? regUp : regLo;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_4;
		NullCheck(L_27);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28;
		L_28 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_27, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30;
		L_30 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_29, NULL);
		bool L_31;
		L_31 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_008f;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_32 = V_2;
		G_B7_0 = L_32;
		goto IL_0090;
	}

IL_008f:
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_33 = V_1;
		G_B7_0 = L_33;
	}

IL_0090:
	{
		V_5 = G_B7_0;
		// if (regUp._inside || reg._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = V_1;
		NullCheck(L_34);
		bool L_35 = L_34->____inside_3;
		if (L_35)
		{
			goto IL_00a3;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_36 = V_5;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge_6;
		if (!L_37)
		{
			goto IL_011f;
		}
	}

IL_00a3:
	{
		// if (reg == regUp)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_38 = V_5;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_39 = V_1;
		if ((!(((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_38) == ((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_39))))
		{
			goto IL_00ce;
		}
	}
	{
		// eNew = _mesh.Connect(_pool, vEvent._anEdge._Sym, eUp._Lnext);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_40 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_41 = __this->____pool_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = ___vEvent0;
		NullCheck(L_42);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = L_42->____anEdge_2;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Sym_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_3;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____Lnext_4;
		NullCheck(L_40);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47;
		L_47 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_40, L_41, L_44, L_46, NULL);
		V_6 = L_47;
		goto IL_00f3;
	}

IL_00ce:
	{
		// eNew = _mesh.Connect(_pool, eLo._Dnext, vEvent._anEdge)._Sym;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_48 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_49 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_4;
		NullCheck(L_50);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51;
		L_51 = Edge_get__Dnext_m61B1425BB7BBFA4D996A431C104F8417603F206C(L_50, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = ___vEvent0;
		NullCheck(L_52);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = L_52->____anEdge_2;
		NullCheck(L_48);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54;
		L_54 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_48, L_49, L_51, L_53, NULL);
		NullCheck(L_54);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55 = L_54->____Sym_2;
		V_6 = L_55;
	}

IL_00f3:
	{
		// if (reg._fixUpperEdge)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_56 = V_5;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge_6;
		if (!L_57)
		{
			goto IL_0108;
		}
	}
	{
		// FixUpperEdge(reg, eNew);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_58 = V_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = V_6;
		Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6(__this, L_58, L_59, NULL);
		goto IL_0117;
	}

IL_0108:
	{
		// ComputeWinding(AddRegionBelow(regUp, eNew));
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_60 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_6;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_62;
		L_62 = Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6(__this, L_60, L_61, NULL);
		Tess_ComputeWinding_m164A5309BBEAAA26966D2AE1E0CF8FAC99FA9376(__this, L_62, NULL);
	}

IL_0117:
	{
		// SweepEvent(vEvent);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = ___vEvent0;
		Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78(__this, L_63, NULL);
		return;
	}

IL_011f:
	{
		// AddRightEdges(regUp, vEvent._anEdge, vEvent._anEdge, null, true);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_64 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = ___vEvent0;
		NullCheck(L_65);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_66 = L_65->____anEdge_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = ___vEvent0;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = L_67->____anEdge_2;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_64, L_66, L_68, (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::SweepEvent(ProceduralToolkit.LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___vEvent0, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	{
		// _event = vEvent;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___vEvent0;
		__this->____event_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_12), (void*)L_0);
		// var e = vEvent._anEdge;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___vEvent0;
		NullCheck(L_1);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = L_1->____anEdge_2;
		V_0 = L_2;
		goto IL_0028;
	}

IL_0010:
	{
		// e = e._Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____Onext_3;
		V_0 = L_4;
		// if (e == vEvent._anEdge)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___vEvent0;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_5) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		// ConnectLeftVertex(vEvent);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___vEvent0;
		Tess_ConnectLeftVertex_m688BD9B47D51640C1CE3F56EBB131201FF6174D4(__this, L_8, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// while (e._activeRegion == null)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_0;
		NullCheck(L_9);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = L_9->____activeRegion_7;
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		// var regUp = TopLeftRegion(e._activeRegion);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		NullCheck(L_11);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = L_11->____activeRegion_7;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13;
		L_13 = Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD(__this, L_12, NULL);
		V_1 = L_13;
		// var reg = RegionBelow(regUp);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15;
		L_15 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_14, NULL);
		V_2 = L_15;
		// var eTopLeft = reg._eUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = V_2;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = L_16->____eUp_0;
		V_3 = L_17;
		// var eBottomLeft = FinishLeftRegions(reg, null);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19;
		L_19 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_18, (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL, NULL);
		V_4 = L_19;
		// if (eBottomLeft._Onext == eTopLeft)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_4;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = L_20->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_3;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_21) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		// ConnectRightVertex(regUp, eBottomLeft);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_4;
		Tess_ConnectRightVertex_m7CF37EC43C24079CE8FEA77404E8A08BB22992D2(__this, L_23, L_24, NULL);
		return;
	}

IL_006a:
	{
		// AddRightEdges(regUp, eBottomLeft._Onext, eTopLeft, eTopLeft, true);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_4;
		NullCheck(L_26);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = L_26->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_25, L_27, L_28, L_29, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	{
		// var e = _mesh.MakeEdge(_pool);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool_0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C(L_0, L_1, NULL);
		V_0 = L_2;
		// e._Org._s = smax;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = L_3->____Org_5;
		float L_5 = ___smax1;
		NullCheck(L_4);
		L_4->____s_4 = L_5;
		// e._Org._t = t;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org_5;
		float L_8 = ___t2;
		NullCheck(L_7);
		L_7->____t_5 = L_8;
		// e._Dst._s = smin;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10;
		L_10 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_9, NULL);
		float L_11 = ___smin0;
		NullCheck(L_10);
		L_10->____s_4 = L_11;
		// e._Dst._t = t;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13;
		L_13 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_12, NULL);
		float L_14 = ___t2;
		NullCheck(L_13);
		L_13->____t_5 = L_14;
		// _event = e._Dst; // initialize it
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16;
		L_16 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_15, NULL);
		__this->____event_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_12), (void*)L_16);
		// var reg = _pool.Get<ActiveRegion>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_17 = __this->____pool_0;
		NullCheck(L_17);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18;
		L_18 = GenericVirtualFuncInvoker0< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var, L_17);
		V_1 = L_18;
		// reg._eUp = e;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_19 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		NullCheck(L_19);
		L_19->____eUp_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____eUp_0), (void*)L_20);
		// reg._windingNumber = 0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_21 = V_1;
		NullCheck(L_21);
		L_21->____windingNumber_2 = 0;
		// reg._inside = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_22 = V_1;
		NullCheck(L_22);
		L_22->____inside_3 = (bool)0;
		// reg._fixUpperEdge = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = V_1;
		NullCheck(L_23);
		L_23->____fixUpperEdge_6 = (bool)0;
		// reg._sentinel = true;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24 = V_1;
		NullCheck(L_24);
		L_24->____sentinel_4 = (bool)1;
		// reg._dirty = false;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = V_1;
		NullCheck(L_25);
		L_25->____dirty_5 = (bool)0;
		// reg._nodeUp = _dict.Insert(reg);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_26 = V_1;
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_27 = __this->____dict_10;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_28 = V_1;
		NullCheck(L_27);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_29;
		L_29 = Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8(L_27, L_28, Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->____nodeUp_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____nodeUp_1), (void*)L_29);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_m60439FCFF58F6194C3C997FD0918BD7EEBC6FE8E (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dict = new Dict<ActiveRegion>(EdgeLeq);
		LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* L_0 = (LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A*)il2cpp_codegen_object_new(LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LessOrEqual__ctor_mBBAC12C0C1638916E114F128CD3F87B86508D94A(L_0, __this, (intptr_t)((void*)Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C_RuntimeMethod_var), NULL);
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_1 = (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*)il2cpp_codegen_object_new(Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A(L_1, L_0, Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A_RuntimeMethod_var);
		__this->____dict_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict_10), (void*)L_1);
		// AddSentinel(-SentinelCoord, SentinelCoord, -SentinelCoord);
		float L_2 = __this->___SentinelCoord_21;
		float L_3 = __this->___SentinelCoord_21;
		float L_4 = __this->___SentinelCoord_21;
		Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4(__this, ((-L_2)), L_3, ((-L_4)), NULL);
		// AddSentinel(-SentinelCoord, SentinelCoord, +SentinelCoord);
		float L_5 = __this->___SentinelCoord_21;
		float L_6 = __this->___SentinelCoord_21;
		float L_7 = __this->___SentinelCoord_21;
		Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4(__this, ((-L_5)), L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m760B02FF396436E30372443619D044DA95FCC05D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	{
		goto IL_0010;
	}

IL_0002:
	{
		// if (!reg._sentinel)
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = V_0;
		NullCheck(L_0);
		bool L_1 = L_0->____sentinel_4;
		// DeleteRegion(reg);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_2, NULL);
	}

IL_0010:
	{
		// while ((reg = _dict.Min().Key) != null)
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_3 = __this->____dict_10;
		NullCheck(L_3);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_4;
		L_4 = Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739(L_3, Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739_RuntimeMethod_var);
		NullCheck(L_4);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5;
		L_5 = Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_inline(L_4, Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// _dict = null;
		__this->____dict_10 = (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict_10), (void*)(Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*)NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_mEA740DA6799454F92769FF3D9A7377920D2657FA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	{
		// MeshUtils.Edge eHead = _mesh._eHead, e, eNext, eLnext;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eHead_2;
		V_0 = L_1;
		// for (e = eHead._next; e != eHead; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____next_1;
		V_1 = L_3;
		goto IL_00c5;
	}

IL_0018:
	{
		// eNext = e._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_1;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____next_1;
		V_2 = L_5;
		// eLnext = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____Lnext_4;
		V_3 = L_7;
		// if (Geom.VertEq(e._Org, e._Dst) && e._Lnext._Lnext != e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11;
		L_11 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_10, NULL);
		bool L_12;
		L_12 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_1;
		NullCheck(L_13);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = L_13->____Lnext_4;
		NullCheck(L_14);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = L_14->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_1;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_15) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		// SpliceMergeVertices(eLnext, e);    // deletes e.Org
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_1;
		Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67(__this, L_17, L_18, NULL);
		// _mesh.Delete(_pool, e); // e is a self-loop
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_20 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_1;
		NullCheck(L_19);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_19, L_20, L_21, NULL);
		// e = eLnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_3;
		V_1 = L_22;
		// eLnext = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Lnext_4;
		V_3 = L_24;
	}

IL_006a:
	{
		// if (eLnext._Lnext == e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_3;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_27))))
		{
			goto IL_00c3;
		}
	}
	{
		// if (eLnext != e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_1;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_28) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		// if (eLnext == eNext || eLnext == eNext._Sym)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_2;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_30) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_31)))
		{
			goto IL_0084;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_2;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Sym_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_32) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_34))))
		{
			goto IL_008b;
		}
	}

IL_0084:
	{
		// eNext = eNext._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_2;
		NullCheck(L_35);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = L_35->____next_1;
		V_2 = L_36;
	}

IL_008b:
	{
		// _mesh.Delete(_pool, eLnext);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_37 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_38 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_3;
		NullCheck(L_37);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_37, L_38, L_39, NULL);
	}

IL_009d:
	{
		// if (e == eNext || e == eNext._Sym)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_2;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_40) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_2;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Sym_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_42) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_44))))
		{
			goto IL_00b1;
		}
	}

IL_00aa:
	{
		// eNext = eNext._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_2;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____next_1;
		V_2 = L_46;
	}

IL_00b1:
	{
		// _mesh.Delete(_pool, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_47 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_48 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_1;
		NullCheck(L_47);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_47, L_48, L_49, NULL);
	}

IL_00c3:
	{
		// for (e = eHead._next; e != eHead; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_2;
		V_1 = L_50;
	}

IL_00c5:
	{
		// for (e = eHead._next; e != eHead; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_51) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_52))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// MeshUtils.Vertex vHead = _mesh._vHead, v;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____vHead_0;
		V_0 = L_1;
		// int vertexCount = 0;
		V_2 = 0;
		// for (v = vHead._next; v != vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____next_1;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0017:
	{
		// vertexCount++;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// for (v = vHead._next; v != vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = V_1;
		NullCheck(L_5);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = L_5->____next_1;
		V_1 = L_6;
	}

IL_0022:
	{
		// for (v = vHead._next; v != vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_7) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		// vertexCount += 8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		// _pq = new PriorityQueue<MeshUtils.Vertex>(vertexCount, Geom.VertLeq);
		int32_t L_10 = V_2;
		LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* L_11 = (LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58*)il2cpp_codegen_object_new(LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LessOrEqual__ctor_mC062AD51CEBEC2C0372E1AD778700E992E3015CE(L_11, NULL, (intptr_t)((void*)Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1_RuntimeMethod_var), NULL);
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_12 = (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*)il2cpp_codegen_object_new(PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F(L_12, L_10, L_11, PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F_RuntimeMethod_var);
		__this->____pq_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq_11), (void*)L_12);
		// vHead = _mesh._vHead;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_13 = __this->____mesh_1;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____vHead_0;
		V_0 = L_14;
		// for( v = vHead._next; v != vHead; v = v._next ) {
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____next_1;
		V_1 = L_16;
		goto IL_008d;
	}

IL_0057:
	{
		// v._pqHandle = _pq.Insert(v);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = V_1;
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_18 = __this->____pq_11;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = V_1;
		NullCheck(L_18);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 L_20;
		L_20 = PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1(L_18, L_19, PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->____pqHandle_6 = L_20;
		// if (v._pqHandle._handle == PQHandle.Invalid)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_1;
		NullCheck(L_21);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314* L_22 = (&L_21->____pqHandle_6);
		int32_t L_23 = L_22->____handle_1;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		int32_t L_24 = ((PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var))->___Invalid_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0086;
		}
	}
	{
		// throw new InvalidOperationException("PQHandle should not be invalid");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D_RuntimeMethod_var)));
	}

IL_0086:
	{
		// for( v = vHead._next; v != vHead; v = v._next ) {
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = V_1;
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____next_1;
		V_1 = L_27;
	}

IL_008d:
	{
		// for( v = vHead._next; v != vHead; v = v._next ) {
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_28) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_29))))
		{
			goto IL_0057;
		}
	}
	{
		// _pq.Init();
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_30 = __this->____pq_11;
		NullCheck(L_30);
		PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1(L_30, PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m000B1D23F66BAA98C855F506E6AD7EE087BE2DE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		// _pq = null;
		__this->____pq_11 = (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq_11), (void*)(PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*)NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = fNext)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_004f;
	}

IL_0013:
	{
		// fNext = f._next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3->____next_1;
		V_1 = L_4;
		// e = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____anEdge_2;
		V_2 = L_6;
		// if (e._Lnext._Lnext == e)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_2;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____Lnext_4;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_9) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_10))))
		{
			goto IL_004d;
		}
	}
	{
		// Geom.AddWinding(e._Onext, e);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_2;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11->____Onext_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_2;
		Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB(L_12, L_13, NULL);
		// _mesh.Delete(_pool, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_14 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_15 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_2;
		NullCheck(L_14);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_14, L_15, L_16, NULL);
	}

IL_004d:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = fNext)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = V_1;
		V_0 = L_17;
	}

IL_004f:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = fNext)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh_1;
		NullCheck(L_19);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_20 = L_19->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_18) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_20))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mA51153C7B94F34C4161B6060D67385A801DDACE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_1 = NULL;
	{
		// RemoveDegenerateEdges();
		Tess_RemoveDegenerateEdges_mEA740DA6799454F92769FF3D9A7377920D2657FA(__this, NULL);
		// InitPriorityQ();
		Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D(__this, NULL);
		// RemoveDegenerateFaces();
		Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544(__this, NULL);
		// InitEdgeDict();
		Tess_InitEdgeDict_m60439FCFF58F6194C3C997FD0918BD7EEBC6FE8E(__this, NULL);
		goto IL_0059;
	}

IL_001a:
	{
		// vNext = _pq.Minimum();
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_0 = __this->____pq_11;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771(L_0, PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771_RuntimeMethod_var);
		V_1 = L_1;
		// if (vNext == null || !Geom.VertEq(vNext, v))
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = V_0;
		bool L_5;
		L_5 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// vNext = _pq.ExtractMin();
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_6 = __this->____pq_11;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4(L_6, PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var);
		V_1 = L_7;
		// SpliceMergeVertices(v._anEdge, vNext._anEdge);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____anEdge_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = V_1;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____anEdge_2;
		Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67(__this, L_9, L_11, NULL);
		// while (true)
		goto IL_001a;
	}

IL_0052:
	{
		// SweepEvent(v);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = V_0;
		Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78(__this, L_12, NULL);
	}

IL_0059:
	{
		// while ((v = _pq.ExtractMin()) != null)
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_13 = __this->____pq_11;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14;
		L_14 = PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4(L_13, PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = L_14;
		V_0 = L_15;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		// DoneEdgeDict();
		Tess_DoneEdgeDict_m760B02FF396436E30372443619D044DA95FCC05D(__this, NULL);
		// DonePriorityQ();
		Tess_DonePriorityQ_m000B1D23F66BAA98C855F506E6AD7EE087BE2DE8(__this, NULL);
		// RemoveDegenerateFaces();
		Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544(__this, NULL);
		// }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.Vec3 ProceduralToolkit.LibTessDotNet.Tess::get_Normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 Tess_get_Normal_m27C8EF3650BF0BD02CB1706A4624F73E23997657 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		// public Vec3 Normal { get { return _normal; } set { _normal = value; } }
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = __this->____normal_2;
		return L_0;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::set_Normal(ProceduralToolkit.LibTessDotNet.Vec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_set_Normal_mCA55A2A33161A330A2B225D4C62061572CDE3463 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vec3 Normal { get { return _normal; } set { _normal = value; } }
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ___value0;
		__this->____normal_2 = L_0;
		// public Vec3 Normal { get { return _normal; } set { _normal = value; } }
		return;
	}
}
// ProceduralToolkit.LibTessDotNet.ContourVertex[] ProceduralToolkit.LibTessDotNet.Tess::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* Tess_get_Vertices_m74F558EAFA4C61978E7B9D5C71390AF54FF3665B (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		// public ContourVertex[] Vertices { get { return _vertices; } }
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_0 = __this->____vertices_14;
		return L_0;
	}
}
// System.Int32 ProceduralToolkit.LibTessDotNet.Tess::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_VertexCount_mE74A775085AD12D6BEC8458C890A5B1DCD2E1F57 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		// public int VertexCount { get { return _vertexCount; } }
		int32_t L_0 = __this->____vertexCount_15;
		return L_0;
	}
}
// System.Int32[] ProceduralToolkit.LibTessDotNet.Tess::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mE42B4713E624EE5016B6C7F5C9DF538D215E2D14 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		// public int[] Elements { get { return _elements; } }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____elements_16;
		return L_0;
	}
}
// System.Int32 ProceduralToolkit.LibTessDotNet.Tess::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_mF11A80B7813FABD939913FBF2A050172CE8B1B3D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		// public int ElementCount { get { return _elementCount; } }
		int32_t L_0 = __this->____elementCount_17;
		return L_0;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m13D977CD43A379DEC7E5DA51E9AD30E49E6B34FB (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new DefaultPool())
		DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E* L_0 = (DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E*)il2cpp_codegen_object_new(DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPool__ctor_m1418BADB8C4AB3BD573CDBC48DB0F5AB1637C575(L_0, NULL);
		Tess__ctor_mB97C95E8EFABD8EA0CAB9B9AB0A353B728ECB28D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::.ctor(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB97C95E8EFABD8EA0CAB9B9AB0A353B728ECB28D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// public Real SUnitX = 1;
		__this->___SUnitX_19 = (1.0f);
		// public Real SentinelCoord = 4e30f;
		__this->___SentinelCoord_21 = (4.00000006E+30f);
		// public bool UsePooling = true;
		__this->___UsePooling_23 = (bool)1;
		// public Tess(IPool pool)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _normal = Vec3.Zero;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero_0;
		__this->____normal_2 = L_0;
		// _bminX = _bminY = _bmaxX = _bmaxY = 0;
		float L_1 = (0.0f);
		V_0 = L_1;
		__this->____bmaxY_8 = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->____bmaxX_7 = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->____bminY_6 = L_5;
		float L_6 = V_0;
		__this->____bminX_5 = L_6;
		// _windingRule = WindingRule.EvenOdd;
		__this->____windingRule_9 = 0;
		// _pool = pool;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_7 = ___pool0;
		__this->____pool_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_0), (void*)L_7);
		// if (_pool == null)
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = __this->____pool_0;
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		// _pool = new NullPool();
		NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF* L_9 = (NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF*)il2cpp_codegen_object_new(NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NullPool__ctor_mE6458D67CCDD6BC8DE755C638E600AA573298FCE(L_9, NULL);
		__this->____pool_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_0), (void*)L_9);
	}

IL_0075:
	{
		// _mesh = null;
		__this->____mesh_1 = (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)(Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL);
		// _vertices = null;
		__this->____vertices_14 = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL);
		// _vertexCount = 0;
		__this->____vertexCount_15 = 0;
		// _elements = null;
		__this->____elements_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// _elementCount = 0;
		__this->____elementCount_17 = 0;
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ComputeNormal(ProceduralToolkit.LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m8A17094DCC720DDB670B30AAB562FC37ABD307A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___norm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_8 = NULL;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// var v = _mesh._vHead._next;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____vHead_0;
		NullCheck(L_1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = L_1->____next_1;
		V_0 = L_2;
		// var minVal = new Real[3] { v._coords.X, v._coords.Y, v._coords.Z };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = V_0;
		NullCheck(L_5);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = (&L_5->____coords_3);
		float L_7 = L_6->___X_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = V_0;
		NullCheck(L_9);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = (&L_9->____coords_3);
		float L_11 = L_10->___Y_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = V_0;
		NullCheck(L_13);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_14 = (&L_13->____coords_3);
		float L_15 = L_14->___Z_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		// var minVert = new MeshUtils.Vertex[3] { v, v, v };
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_16 = (VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)SZArrayNew(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_17 = L_16;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_18);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_19 = L_17;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_20);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_21 = L_19;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_22);
		V_2 = L_21;
		// var maxVal = new Real[3] { v._coords.X, v._coords.Y, v._coords.Z };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = V_0;
		NullCheck(L_25);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_26 = (&L_25->____coords_3);
		float L_27 = L_26->___X_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_24;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = V_0;
		NullCheck(L_29);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_30 = (&L_29->____coords_3);
		float L_31 = L_30->___Y_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_28;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = V_0;
		NullCheck(L_33);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_34 = (&L_33->____coords_3);
		float L_35 = L_34->___Z_3;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		// var maxVert = new MeshUtils.Vertex[3] { v, v, v };
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_36 = (VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)SZArrayNew(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_37 = L_36;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_38);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_39 = L_37;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_40);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_41 = L_39;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_42);
		V_4 = L_41;
		goto IL_0175;
	}

IL_009f:
	{
		// if (v._coords.X < minVal[0]) { minVal[0] = v._coords.X; minVert[0] = v; }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = V_0;
		NullCheck(L_43);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_44 = (&L_43->____coords_3);
		float L_45 = L_44->___X_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((float)L_45) < ((float)L_48))))
		{
			goto IL_00c1;
		}
	}
	{
		// if (v._coords.X < minVal[0]) { minVal[0] = v._coords.X; minVert[0] = v; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_50 = V_0;
		NullCheck(L_50);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_51 = (&L_50->____coords_3);
		float L_52 = L_51->___X_1;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_52);
		// if (v._coords.X < minVal[0]) { minVal[0] = v._coords.X; minVert[0] = v; }
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_53 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = V_0;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_54);
	}

IL_00c1:
	{
		// if (v._coords.Y < minVal[1]) { minVal[1] = v._coords.Y; minVert[1] = v; }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_55 = V_0;
		NullCheck(L_55);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_56 = (&L_55->____coords_3);
		float L_57 = L_56->___Y_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 1;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((float)L_57) < ((float)L_60))))
		{
			goto IL_00e3;
		}
	}
	{
		// if (v._coords.Y < minVal[1]) { minVal[1] = v._coords.Y; minVert[1] = v; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_0;
		NullCheck(L_62);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_63 = (&L_62->____coords_3);
		float L_64 = L_63->___Y_2;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_64);
		// if (v._coords.Y < minVal[1]) { minVal[1] = v._coords.Y; minVert[1] = v; }
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_65 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_66 = V_0;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_66);
	}

IL_00e3:
	{
		// if (v._coords.Z < minVal[2]) { minVal[2] = v._coords.Z; minVert[2] = v; }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = V_0;
		NullCheck(L_67);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_68 = (&L_67->____coords_3);
		float L_69 = L_68->___Z_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 2;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((float)L_69) < ((float)L_72))))
		{
			goto IL_0105;
		}
	}
	{
		// if (v._coords.Z < minVal[2]) { minVal[2] = v._coords.Z; minVert[2] = v; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_74 = V_0;
		NullCheck(L_74);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_75 = (&L_74->____coords_3);
		float L_76 = L_75->___Z_3;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_76);
		// if (v._coords.Z < minVal[2]) { minVal[2] = v._coords.Z; minVert[2] = v; }
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_77 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_78 = V_0;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_78);
	}

IL_0105:
	{
		// if (v._coords.X > maxVal[0]) { maxVal[0] = v._coords.X; maxVert[0] = v; }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_79 = V_0;
		NullCheck(L_79);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_80 = (&L_79->____coords_3);
		float L_81 = L_80->___X_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((float)L_81) > ((float)L_84))))
		{
			goto IL_0128;
		}
	}
	{
		// if (v._coords.X > maxVal[0]) { maxVal[0] = v._coords.X; maxVert[0] = v; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = V_0;
		NullCheck(L_86);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_87 = (&L_86->____coords_3);
		float L_88 = L_87->___X_1;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_88);
		// if (v._coords.X > maxVal[0]) { maxVal[0] = v._coords.X; maxVert[0] = v; }
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_89 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_90 = V_0;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_90);
	}

IL_0128:
	{
		// if (v._coords.Y > maxVal[1]) { maxVal[1] = v._coords.Y; maxVert[1] = v; }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_91 = V_0;
		NullCheck(L_91);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_92 = (&L_91->____coords_3);
		float L_93 = L_92->___Y_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = V_3;
		NullCheck(L_94);
		int32_t L_95 = 1;
		float L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((float)L_93) > ((float)L_96))))
		{
			goto IL_014b;
		}
	}
	{
		// if (v._coords.Y > maxVal[1]) { maxVal[1] = v._coords.Y; maxVert[1] = v; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_98 = V_0;
		NullCheck(L_98);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_99 = (&L_98->____coords_3);
		float L_100 = L_99->___Y_2;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_100);
		// if (v._coords.Y > maxVal[1]) { maxVal[1] = v._coords.Y; maxVert[1] = v; }
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_101 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_102 = V_0;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_102);
	}

IL_014b:
	{
		// if (v._coords.Z > maxVal[2]) { maxVal[2] = v._coords.Z; maxVert[2] = v; }
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_103 = V_0;
		NullCheck(L_103);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_104 = (&L_103->____coords_3);
		float L_105 = L_104->___Z_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106 = V_3;
		NullCheck(L_106);
		int32_t L_107 = 2;
		float L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((!(((float)L_105) > ((float)L_108))))
		{
			goto IL_016e;
		}
	}
	{
		// if (v._coords.Z > maxVal[2]) { maxVal[2] = v._coords.Z; maxVert[2] = v; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_110 = V_0;
		NullCheck(L_110);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_111 = (&L_110->____coords_3);
		float L_112 = L_111->___Z_3;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_112);
		// if (v._coords.Z > maxVal[2]) { maxVal[2] = v._coords.Z; maxVert[2] = v; }
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_113 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_114 = V_0;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_114);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_114);
	}

IL_016e:
	{
		// for (; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_115 = V_0;
		NullCheck(L_115);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_116 = L_115->____next_1;
		V_0 = L_116;
	}

IL_0175:
	{
		// for (; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_117 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_118 = __this->____mesh_1;
		NullCheck(L_118);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_119 = L_118->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_117) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_119))))
		{
			goto IL_009f;
		}
	}
	{
		// int i = 0;
		V_5 = 0;
		// if (maxVal[1] - minVal[1] > maxVal[0] - minVal[0]) { i = 1; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_120 = V_3;
		NullCheck(L_120);
		int32_t L_121 = 1;
		float L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = V_1;
		NullCheck(L_123);
		int32_t L_124 = 1;
		float L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_126 = V_3;
		NullCheck(L_126);
		int32_t L_127 = 0;
		float L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 0;
		float L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_122, L_125))) > ((float)((float)il2cpp_codegen_subtract(L_128, L_131))))))
		{
			goto IL_019c;
		}
	}
	{
		// if (maxVal[1] - minVal[1] > maxVal[0] - minVal[0]) { i = 1; }
		V_5 = 1;
	}

IL_019c:
	{
		// if (maxVal[2] - minVal[2] > maxVal[i] - minVal[i]) { i = 2; }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = V_3;
		NullCheck(L_132);
		int32_t L_133 = 2;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_135 = V_1;
		NullCheck(L_135);
		int32_t L_136 = 2;
		float L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_3;
		int32_t L_139 = V_5;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_142 = V_1;
		int32_t L_143 = V_5;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		float L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_134, L_137))) > ((float)((float)il2cpp_codegen_subtract(L_141, L_145))))))
		{
			goto IL_01b1;
		}
	}
	{
		// if (maxVal[2] - minVal[2] > maxVal[i] - minVal[i]) { i = 2; }
		V_5 = 2;
	}

IL_01b1:
	{
		// if (minVal[i] >= maxVal[i])
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = V_1;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = V_3;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((!(((float)L_149) >= ((float)L_153))))
		{
			goto IL_01d6;
		}
	}
	{
		// norm = new Vec3(0, 0, 1);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_154 = ___norm0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183((&L_155), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)L_154 = L_155;
		// return;
		return;
	}

IL_01d6:
	{
		// Real maxLen2 = 0, tLen2;
		V_6 = (0.0f);
		// var v1 = minVert[i];
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_156 = V_2;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		// var v2 = maxVert[i];
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_160 = V_4;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_8 = L_163;
		// Vec3.Sub(ref v1._coords, ref v2._coords, out d1);
		NullCheck(L_159);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_164 = (&L_159->____coords_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_165 = V_8;
		NullCheck(L_165);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_166 = (&L_165->____coords_3);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110(L_164, L_166, (&V_9), NULL);
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_167 = __this->____mesh_1;
		NullCheck(L_167);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_168 = L_167->____vHead_0;
		NullCheck(L_168);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_169 = L_168->____next_1;
		V_0 = L_169;
		goto IL_02e1;
	}

IL_0211:
	{
		// Vec3.Sub(ref v._coords, ref v2._coords, out d2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_170 = V_0;
		NullCheck(L_170);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_171 = (&L_170->____coords_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_172 = V_8;
		NullCheck(L_172);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_173 = (&L_172->____coords_3);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110(L_171, L_173, (&V_10), NULL);
		// tNorm.X = d1.Y * d2.Z - d1.Z * d2.Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_174 = V_9;
		float L_175 = L_174.___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_176 = V_10;
		float L_177 = L_176.___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_178 = V_9;
		float L_179 = L_178.___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_180 = V_10;
		float L_181 = L_180.___Y_2;
		(&V_11)->___X_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_175, L_177)), ((float)il2cpp_codegen_multiply(L_179, L_181))));
		// tNorm.Y = d1.Z * d2.X - d1.X * d2.Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_182 = V_9;
		float L_183 = L_182.___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_184 = V_10;
		float L_185 = L_184.___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_186 = V_9;
		float L_187 = L_186.___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_188 = V_10;
		float L_189 = L_188.___Z_3;
		(&V_11)->___Y_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_183, L_185)), ((float)il2cpp_codegen_multiply(L_187, L_189))));
		// tNorm.Z = d1.X * d2.Y - d1.Y * d2.X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_190 = V_9;
		float L_191 = L_190.___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_192 = V_10;
		float L_193 = L_192.___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_194 = V_9;
		float L_195 = L_194.___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_196 = V_10;
		float L_197 = L_196.___X_1;
		(&V_11)->___Z_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_191, L_193)), ((float)il2cpp_codegen_multiply(L_195, L_197))));
		// tLen2 = tNorm.X*tNorm.X + tNorm.Y*tNorm.Y + tNorm.Z*tNorm.Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_198 = V_11;
		float L_199 = L_198.___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_200 = V_11;
		float L_201 = L_200.___X_1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_202 = V_11;
		float L_203 = L_202.___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_204 = V_11;
		float L_205 = L_204.___Y_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_206 = V_11;
		float L_207 = L_206.___Z_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_208 = V_11;
		float L_209 = L_208.___Z_3;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_199, L_201)), ((float)il2cpp_codegen_multiply(L_203, L_205)))), ((float)il2cpp_codegen_multiply(L_207, L_209))));
		// if (tLen2 > maxLen2)
		float L_210 = V_7;
		float L_211 = V_6;
		if ((!(((float)L_210) > ((float)L_211))))
		{
			goto IL_02da;
		}
	}
	{
		// maxLen2 = tLen2;
		float L_212 = V_7;
		V_6 = L_212;
		// norm = tNorm;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_213 = ___norm0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_214 = V_11;
		*(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)L_213 = L_214;
	}

IL_02da:
	{
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_215 = V_0;
		NullCheck(L_215);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_216 = L_215->____next_1;
		V_0 = L_216;
	}

IL_02e1:
	{
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_217 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_218 = __this->____mesh_1;
		NullCheck(L_218);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_219 = L_218->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_217) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_219))))
		{
			goto IL_0211;
		}
	}
	{
		// if (maxLen2 <= 0.0f)
		float L_220 = V_6;
		if ((!(((float)L_220) <= ((float)(0.0f)))))
		{
			goto IL_031c;
		}
	}
	{
		// norm = Vec3.Zero;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_221 = ___norm0;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_222 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero_0;
		*(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)L_221 = L_222;
		// i = Vec3.LongAxis(ref d1);
		int32_t L_223;
		L_223 = Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB((&V_9), NULL);
		V_5 = L_223;
		// norm[i] = 1;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_224 = ___norm0;
		int32_t L_225 = V_5;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_224, L_225, (1.0f), NULL);
	}

IL_031c:
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_mC98D6D1A4D24FC080952E17734F178CB20E35041 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	{
		// Real area = 0.0f;
		V_0 = (0.0f);
		// for (var f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next_1;
		V_1 = L_2;
		goto IL_0037;
	}

IL_0019:
	{
		// if (f._anEdge._winding <= 0)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_1;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____anEdge_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding_8;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// area += MeshUtils.FaceArea(f);
		float L_6 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_1;
		float L_8;
		L_8 = MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_6, L_8));
	}

IL_0030:
	{
		// for (var f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_1;
		NullCheck(L_9);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = L_9->____next_1;
		V_1 = L_10;
	}

IL_0037:
	{
		// for (var f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = V_1;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_12 = __this->____mesh_1;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_11) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_13))))
		{
			goto IL_0019;
		}
	}
	{
		// if (area < 0.0f)
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_15 = __this->____mesh_1;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____vHead_0;
		NullCheck(L_16);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = L_16->____next_1;
		V_2 = L_17;
		goto IL_0074;
	}

IL_0060:
	{
		// v._t = -v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = V_2;
		NullCheck(L_19);
		float L_20 = L_19->____t_5;
		NullCheck(L_18);
		L_18->____t_5 = ((-L_20));
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_2;
		NullCheck(L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = L_21->____next_1;
		V_2 = L_22;
	}

IL_0074:
	{
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = V_2;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_24 = __this->____mesh_1;
		NullCheck(L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = L_24->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_23) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_25))))
		{
			goto IL_0060;
		}
	}
	{
		// Vec3.Neg(ref _tUnit);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_26 = (&__this->____tUnit_4);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Neg_m56FA56AE9B5B9AC36E12FF1A40FCDA51EFF04139(L_26, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_mE898E1815D7491F44FA1AF3C242E3CDBDA49455F (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t G_B6_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	int32_t G_B7_1 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B8_1 = NULL;
	float G_B10_0 = 0.0f;
	int32_t G_B10_1 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B10_2 = NULL;
	{
		// var norm = _normal;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = __this->____normal_2;
		V_0 = L_0;
		// bool computedNormal = false;
		V_1 = (bool)0;
		// if (norm.X == 0.0f && norm.Y == 0.0f && norm.Z == 0.0f)
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = V_0;
		float L_2 = L_1.___X_1;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_3 = V_0;
		float L_4 = L_3.___Y_2;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_5 = V_0;
		float L_6 = L_5.___Z_3;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// ComputeNormal(ref norm);
		Tess_ComputeNormal_m8A17094DCC720DDB670B30AAB562FC37ABD307A6(__this, (&V_0), NULL);
		// _normal = norm;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_7 = V_0;
		__this->____normal_2 = L_7;
		// computedNormal = true;
		V_1 = (bool)1;
	}

IL_0041:
	{
		// int i = Vec3.LongAxis(ref norm);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB((&V_0), NULL);
		V_2 = L_8;
		// _sUnit[i] = 0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_9 = (&__this->____sUnit_3);
		int32_t L_10 = V_2;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_9, L_10, (0.0f), NULL);
		// _sUnit[(i + 1) % 3] = SUnitX;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_11 = (&__this->____sUnit_3);
		int32_t L_12 = V_2;
		float L_13 = __this->___SUnitX_19;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_11, ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%3)), L_13, NULL);
		// _sUnit[(i + 2) % 3] = SUnitY;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_14 = (&__this->____sUnit_3);
		int32_t L_15 = V_2;
		float L_16 = __this->___SUnitY_20;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(L_15, 2))%3)), L_16, NULL);
		// _tUnit[i] = 0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_17 = (&__this->____tUnit_4);
		int32_t L_18 = V_2;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_17, L_18, (0.0f), NULL);
		// _tUnit[(i + 1) % 3] = norm[i] > 0.0f ? -SUnitY : SUnitY;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_19 = (&__this->____tUnit_4);
		int32_t L_20 = V_2;
		int32_t L_21 = V_2;
		float L_22;
		L_22 = Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF((&V_0), L_21, NULL);
		G_B5_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
		G_B5_1 = L_19;
		if ((((float)L_22) > ((float)(0.0f))))
		{
			G_B6_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
			G_B6_1 = L_19;
			goto IL_00b9;
		}
	}
	{
		float L_23 = __this->___SUnitY_20;
		G_B7_0 = L_23;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00c0;
	}

IL_00b9:
	{
		float L_24 = __this->___SUnitY_20;
		G_B7_0 = ((-L_24));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00c0:
	{
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(G_B7_2, G_B7_1, G_B7_0, NULL);
		// _tUnit[(i + 2) % 3] = norm[i] > 0.0f ? SUnitX : -SUnitX;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_25 = (&__this->____tUnit_4);
		int32_t L_26 = V_2;
		int32_t L_27 = V_2;
		float L_28;
		L_28 = Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF((&V_0), L_27, NULL);
		G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
		G_B8_1 = L_25;
		if ((((float)L_28) > ((float)(0.0f))))
		{
			G_B9_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
			G_B9_1 = L_25;
			goto IL_00e8;
		}
	}
	{
		float L_29 = __this->___SUnitX_19;
		G_B10_0 = ((-L_29));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00ee;
	}

IL_00e8:
	{
		float L_30 = __this->___SUnitX_19;
		G_B10_0 = L_30;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00ee:
	{
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(G_B10_2, G_B10_1, G_B10_0, NULL);
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_31 = __this->____mesh_1;
		NullCheck(L_31);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = L_31->____vHead_0;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____next_1;
		V_4 = L_33;
		goto IL_0142;
	}

IL_0107:
	{
		// Vec3.Dot(ref v._coords, ref _sUnit, out v._s);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = V_4;
		NullCheck(L_34);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_35 = (&L_34->____coords_3);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_36 = (&__this->____sUnit_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = V_4;
		NullCheck(L_37);
		float* L_38 = (&L_37->____s_4);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341(L_35, L_36, L_38, NULL);
		// Vec3.Dot(ref v._coords, ref _tUnit, out v._t);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39 = V_4;
		NullCheck(L_39);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_40 = (&L_39->____coords_3);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_41 = (&__this->____tUnit_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = V_4;
		NullCheck(L_42);
		float* L_43 = (&L_42->____t_5);
		Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341(L_40, L_41, L_43, NULL);
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = V_4;
		NullCheck(L_44);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45 = L_44->____next_1;
		V_4 = L_45;
	}

IL_0142:
	{
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = V_4;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_47 = __this->____mesh_1;
		NullCheck(L_47);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_48 = L_47->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_46) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_48))))
		{
			goto IL_0107;
		}
	}
	{
		// if (computedNormal)
		bool L_49 = V_1;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		// CheckOrientation();
		Tess_CheckOrientation_mC98D6D1A4D24FC080952E17734F178CB20E35041(__this, NULL);
	}

IL_015a:
	{
		// bool first = true;
		V_3 = (bool)1;
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_50 = __this->____mesh_1;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = L_50->____vHead_0;
		NullCheck(L_51);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = L_51->____next_1;
		V_5 = L_52;
		goto IL_0223;
	}

IL_0173:
	{
		// if (first)
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_01aa;
		}
	}
	{
		// _bminX = _bmaxX = v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = V_5;
		NullCheck(L_54);
		float L_55 = L_54->____s_4;
		float L_56 = L_55;
		V_6 = L_56;
		__this->____bmaxX_7 = L_56;
		float L_57 = V_6;
		__this->____bminX_5 = L_57;
		// _bminY = _bmaxY = v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_58 = V_5;
		NullCheck(L_58);
		float L_59 = L_58->____t_5;
		float L_60 = L_59;
		V_6 = L_60;
		__this->____bmaxY_8 = L_60;
		float L_61 = V_6;
		__this->____bminY_6 = L_61;
		// first = false;
		V_3 = (bool)0;
		goto IL_021a;
	}

IL_01aa:
	{
		// if (v._s < _bminX) _bminX = v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_5;
		NullCheck(L_62);
		float L_63 = L_62->____s_4;
		float L_64 = __this->____bminX_5;
		if ((!(((float)L_63) < ((float)L_64))))
		{
			goto IL_01c6;
		}
	}
	{
		// if (v._s < _bminX) _bminX = v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = V_5;
		NullCheck(L_65);
		float L_66 = L_65->____s_4;
		__this->____bminX_5 = L_66;
	}

IL_01c6:
	{
		// if (v._s > _bmaxX) _bmaxX = v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = V_5;
		NullCheck(L_67);
		float L_68 = L_67->____s_4;
		float L_69 = __this->____bmaxX_7;
		if ((!(((float)L_68) > ((float)L_69))))
		{
			goto IL_01e2;
		}
	}
	{
		// if (v._s > _bmaxX) _bmaxX = v._s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_70 = V_5;
		NullCheck(L_70);
		float L_71 = L_70->____s_4;
		__this->____bmaxX_7 = L_71;
	}

IL_01e2:
	{
		// if (v._t < _bminY) _bminY = v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->____t_5;
		float L_74 = __this->____bminY_6;
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_01fe;
		}
	}
	{
		// if (v._t < _bminY) _bminY = v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75 = V_5;
		NullCheck(L_75);
		float L_76 = L_75->____t_5;
		__this->____bminY_6 = L_76;
	}

IL_01fe:
	{
		// if (v._t > _bmaxY) _bmaxY = v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_77 = V_5;
		NullCheck(L_77);
		float L_78 = L_77->____t_5;
		float L_79 = __this->____bmaxY_8;
		if ((!(((float)L_78) > ((float)L_79))))
		{
			goto IL_021a;
		}
	}
	{
		// if (v._t > _bmaxY) _bmaxY = v._t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_80 = V_5;
		NullCheck(L_80);
		float L_81 = L_80->____t_5;
		__this->____bmaxY_8 = L_81;
	}

IL_021a:
	{
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_82 = V_5;
		NullCheck(L_82);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_83 = L_82->____next_1;
		V_5 = L_83;
	}

IL_0223:
	{
		// for (var v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_84 = V_5;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_85 = __this->____mesh_1;
		NullCheck(L_85);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = L_85->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_84) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_86))))
		{
			goto IL_0173;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::TessellateMonoRegion(ProceduralToolkit.LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_mAFDE0D12109933FBACE160C2FCFAF118FEA1458C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___face0, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		// var up = face._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___face0;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		goto IL_0010;
	}

IL_0009:
	{
		// while (Geom.VertLeq(up._Dst, up._Org)) up = up._Lprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3;
		L_3 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_2, NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		// while (Geom.VertLeq(up._Dst, up._Org)) up = up._Lprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5;
		L_5 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_4, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org_5;
		bool L_8;
		L_8 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		goto IL_002c;
	}

IL_0025:
	{
		// while (Geom.VertLeq(up._Org, up._Dst)) up = up._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_0;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Lnext_4;
		V_0 = L_10;
	}

IL_002c:
	{
		// while (Geom.VertLeq(up._Org, up._Dst)) up = up._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = L_11->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14;
		L_14 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_13, NULL);
		bool L_15;
		L_15 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0025;
		}
	}
	{
		// var lo = up._Lprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_0;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17;
		L_17 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_16, NULL);
		V_1 = L_17;
		goto IL_0121;
	}

IL_004b:
	{
		// if (Geom.VertLeq(up._Dst, lo._Org))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		NullCheck(L_18);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19;
		L_19 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_18, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = L_20->____Org_5;
		bool L_22;
		L_22 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_0081;
	}

IL_0063:
	{
		// lo = _mesh.Connect(_pool, lo._Lnext, lo)._Sym;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28;
		L_28 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_23, L_24, L_26, L_27, NULL);
		NullCheck(L_28);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = L_28->____Sym_2;
		V_1 = L_29;
	}

IL_0081:
	{
		// while (lo._Lnext != up && (Geom.EdgeGoesLeft(lo._Lnext)
		//     || Geom.EdgeSign(lo._Org, lo._Dst, lo._Lnext._Dst) <= 0.0f))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		NullCheck(L_30);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = L_30->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_0;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_31) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_32)))
		{
			goto IL_00ba;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_1;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Lnext_4;
		bool L_35;
		L_35 = Geom_EdgeGoesLeft_m661D83069B722B9BF6031E6A9E5F3AA05F8CC06C(L_34, NULL);
		if (L_35)
		{
			goto IL_0063;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = L_36->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_38, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_1;
		NullCheck(L_40);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = L_40->____Lnext_4;
		NullCheck(L_41);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42;
		L_42 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_41, NULL);
		float L_43;
		L_43 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_37, L_39, L_42, NULL);
		if ((((float)L_43) <= ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}

IL_00ba:
	{
		// lo = lo._Lprev;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_1;
		NullCheck(L_44);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45;
		L_45 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_44, NULL);
		V_1 = L_45;
		goto IL_0121;
	}

IL_00c3:
	{
		// up = _mesh.Connect(_pool, up, up._Lprev)._Sym;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_46 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_47 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_0;
		NullCheck(L_49);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50;
		L_50 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_49, NULL);
		NullCheck(L_46);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51;
		L_51 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_46, L_47, L_48, L_50, NULL);
		NullCheck(L_51);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = L_51->____Sym_2;
		V_0 = L_52;
	}

IL_00e1:
	{
		// while (lo._Lnext != up && (Geom.EdgeGoesRight(up._Lprev)
		//     || Geom.EdgeSign(up._Dst, up._Org, up._Lprev._Org) >= 0.0f))
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_1;
		NullCheck(L_53);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = L_53->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55 = V_0;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_54) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_55)))
		{
			goto IL_011a;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_56 = V_0;
		NullCheck(L_56);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_57;
		L_57 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_56, NULL);
		bool L_58;
		L_58 = Geom_EdgeGoesRight_m20C08A2EA78E8ED7B91CD6CD677F0F52E7A5F50A(L_57, NULL);
		if (L_58)
		{
			goto IL_00c3;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = V_0;
		NullCheck(L_59);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60;
		L_60 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_59, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_0;
		NullCheck(L_61);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = L_61->____Org_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_63 = V_0;
		NullCheck(L_63);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_64;
		L_64 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_63, NULL);
		NullCheck(L_64);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = L_64->____Org_5;
		float L_66;
		L_66 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_60, L_62, L_65, NULL);
		if ((((float)L_66) >= ((float)(0.0f))))
		{
			goto IL_00c3;
		}
	}

IL_011a:
	{
		// up = up._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_67 = V_0;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = L_67->____Lnext_4;
		V_0 = L_68;
	}

IL_0121:
	{
		// while (up._Lnext != lo)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_69 = V_0;
		NullCheck(L_69);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_70 = L_69->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_71 = V_1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_70) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_71))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_014d;
	}

IL_012f:
	{
		// lo = _mesh.Connect(_pool, lo._Lnext, lo)._Sym;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_72 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_73 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_74 = V_1;
		NullCheck(L_74);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_75 = L_74->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_76 = V_1;
		NullCheck(L_72);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_77;
		L_77 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_72, L_73, L_75, L_76, NULL);
		NullCheck(L_77);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_78 = L_77->____Sym_2;
		V_1 = L_78;
	}

IL_014d:
	{
		// while (lo._Lnext._Lnext != up)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_79 = V_1;
		NullCheck(L_79);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_80 = L_79->____Lnext_4;
		NullCheck(L_80);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_81 = L_80->____Lnext_4;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_82 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_81) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_82))))
		{
			goto IL_012f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mAC4117DACBE4B60A5173D688C6919981B2C18B6D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		// next = f._next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3->____next_1;
		V_1 = L_4;
		// if (f._inside)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_6;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// TessellateMonoRegion(f);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_0;
		Tess_TessellateMonoRegion_mAFDE0D12109933FBACE160C2FCFAF118FEA1458C(__this, L_7, NULL);
	}

IL_0029:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = V_1;
		V_0 = L_8;
	}

IL_002b:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_10 = __this->____mesh_1;
		NullCheck(L_10);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = L_10->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_9) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_11))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::DiscardExterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DiscardExterior_m6A19039A07D59F7331400AC84CCDB45D281B6C12 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0036;
	}

IL_0013:
	{
		// next = f._next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3->____next_1;
		V_1 = L_4;
		// if( ! f._inside ) {
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_6;
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		// _mesh.ZapFace(_pool, f);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_7 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = __this->____pool_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_0;
		NullCheck(L_7);
		Mesh_ZapFace_m5EA809DDA7500239AB92BEBF71D6F25F90FF326D(L_7, L_8, L_9, NULL);
	}

IL_0034:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = V_1;
		V_0 = L_10;
	}

IL_0036:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_12 = __this->____mesh_1;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_11) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_13))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m8A41F77B75A390E8D960C52A6564CF48288AE90A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* G_B4_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* G_B5_1 = NULL;
	{
		// for (e = _mesh._eHead._next; e != _mesh._eHead; e = eNext)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eHead_2;
		NullCheck(L_1);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_006c;
	}

IL_0013:
	{
		// eNext = e._next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____next_1;
		V_1 = L_4;
		// if (e._Rface._inside != e._Lface._inside)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		NullCheck(L_5);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6;
		L_6 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->____inside_6;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		NullCheck(L_8);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = L_8->____Lface_6;
		NullCheck(L_9);
		bool L_10 = L_9->____inside_6;
		if ((((int32_t)L_7) == ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		// e._winding = (e._Lface._inside) ? value : -value;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_0;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____Lface_6;
		NullCheck(L_13);
		bool L_14 = L_13->____inside_6;
		G_B3_0 = L_11;
		if (L_14)
		{
			G_B4_0 = L_11;
			goto IL_0044;
		}
	}
	{
		int32_t L_15 = ___value0;
		G_B5_0 = ((-L_15));
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_16 = ___value0;
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		G_B5_1->____winding_8 = G_B5_0;
		goto IL_006a;
	}

IL_004c:
	{
		// if (!keepOnlyBoundary)
		bool L_17 = ___keepOnlyBoundary1;
		if (L_17)
		{
			goto IL_0058;
		}
	}
	{
		// e._winding = 0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		NullCheck(L_18);
		L_18->____winding_8 = 0;
		goto IL_006a;
	}

IL_0058:
	{
		// _mesh.Delete(_pool, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_20 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_0;
		NullCheck(L_19);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_19, L_20, L_21, NULL);
	}

IL_006a:
	{
		// for (e = _mesh._eHead._next; e != _mesh._eHead; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_1;
		V_0 = L_22;
	}

IL_006c:
	{
		// for (e = _mesh._eHead._next; e != _mesh._eHead; e = eNext)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_24 = __this->____mesh_1;
		NullCheck(L_24);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = L_24->____eHead_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_23) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_25))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 ProceduralToolkit.LibTessDotNet.Tess::GetNeighbourFace(ProceduralToolkit.LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_m5E5A22A378DB4BFA1F77FF6C42FEEDDD4734F39C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___edge0, const RuntimeMethod* method) 
{
	{
		// if (edge._Rface == null)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___edge0;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1;
		L_1 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return Undef;
		return (-1);
	}

IL_000a:
	{
		// if (!edge._Rface._inside)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___edge0;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3;
		L_3 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_2, NULL);
		NullCheck(L_3);
		bool L_4 = L_3->____inside_6;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		// return Undef;
		return (-1);
	}

IL_0019:
	{
		// return edge._Rface._n;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___edge0;
		NullCheck(L_5);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6;
		L_6 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->____n_4;
		return L_7;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::OutputPolymesh(ProceduralToolkit.LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_m86408071771F039677956D25E8E3A62EF95482C5 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int maxFaceCount = 0;
		V_3 = 0;
		// int maxVertexCount = 0;
		V_4 = 0;
		// if (polySize < 3)
		int32_t L_0 = ___polySize1;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		// polySize = 3;
		___polySize1 = 3;
	}

IL_000c:
	{
		// if (polySize > 3)
		int32_t L_1 = ___polySize1;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		// _mesh.MergeConvexFaces(_pool, polySize);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_2 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_3 = __this->____pool_0;
		int32_t L_4 = ___polySize1;
		NullCheck(L_2);
		Mesh_MergeConvexFaces_m5A5B25E0A8953C1CE73FC5C215C93A5B550DDFE3(L_2, L_3, L_4, NULL);
	}

IL_0022:
	{
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_5 = __this->____mesh_1;
		NullCheck(L_5);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = L_5->____vHead_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____next_1;
		V_0 = L_7;
		goto IL_0043;
	}

IL_0035:
	{
		// v._n = Undef;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		NullCheck(L_8);
		L_8->____n_7 = (-1);
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____next_1;
		V_0 = L_10;
	}

IL_0043:
	{
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_12 = __this->____mesh_1;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = L_12->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_11) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_13))))
		{
			goto IL_0035;
		}
	}
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_14 = __this->____mesh_1;
		NullCheck(L_14);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = L_14->____fHead_1;
		NullCheck(L_15);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = L_15->____next_1;
		V_1 = L_16;
		goto IL_00dd;
	}

IL_0064:
	{
		// f._n = Undef;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = V_1;
		NullCheck(L_17);
		L_17->____n_4 = (-1);
		// if (!f._inside) continue;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->____inside_6;
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		// if (NoEmptyPolygons)
		bool L_20 = __this->___NoEmptyPolygons_22;
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		// var area = MeshUtils.FaceArea(f);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21 = V_1;
		float L_22;
		L_22 = MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C(L_21, NULL);
		// if (Math.Abs(area) < Real.Epsilon)
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_23;
		L_23 = fabsf(L_22);
		if ((((float)L_23) < ((float)(1.40129846E-45f))))
		{
			goto IL_00d6;
		}
	}

IL_008d:
	{
		// edge = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_24 = V_1;
		NullCheck(L_24);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = L_24->____anEdge_2;
		V_2 = L_25;
		// faceVerts = 0;
		V_5 = 0;
	}

IL_0097:
	{
		// v = edge._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_2;
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____Org_5;
		V_0 = L_27;
		// if (v._n == Undef)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->____n_7;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00b5;
		}
	}
	{
		// v._n = maxVertexCount;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		L_30->____n_7 = L_31;
		// maxVertexCount++;
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b5:
	{
		// faceVerts++;
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		// edge = edge._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_2;
		NullCheck(L_34);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = L_34->____Lnext_4;
		V_2 = L_35;
		// while (edge != f._anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_37 = V_1;
		NullCheck(L_37);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = L_37->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_36) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_38))))
		{
			goto IL_0097;
		}
	}
	{
		// f._n = maxFaceCount;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_39 = V_1;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		L_39->____n_4 = L_40;
		// ++maxFaceCount;
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d6:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_42 = V_1;
		NullCheck(L_42);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_43 = L_42->____next_1;
		V_1 = L_43;
	}

IL_00dd:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_44 = V_1;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_45 = __this->____mesh_1;
		NullCheck(L_45);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_46 = L_45->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_44) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_46))))
		{
			goto IL_0064;
		}
	}
	{
		// _elementCount = maxFaceCount;
		int32_t L_47 = V_3;
		__this->____elementCount_17 = L_47;
		// if (elementType == ElementType.ConnectedPolygons)
		int32_t L_48 = ___elementType0;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_00fd;
		}
	}
	{
		// maxFaceCount *= 2;
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_49, 2));
	}

IL_00fd:
	{
		// _elements = new int[maxFaceCount * polySize];
		int32_t L_50 = V_3;
		int32_t L_51 = ___polySize1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_50, L_51)));
		__this->____elements_16 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)L_52);
		// _vertexCount = maxVertexCount;
		int32_t L_53 = V_4;
		__this->____vertexCount_15 = L_53;
		// _vertices = new ContourVertex[_vertexCount];
		int32_t L_54 = __this->____vertexCount_15;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_55 = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)SZArrayNew(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var, (uint32_t)L_54);
		__this->____vertices_14 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)L_55);
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_56 = __this->____mesh_1;
		NullCheck(L_56);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_57 = L_56->____vHead_0;
		NullCheck(L_57);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_58 = L_57->____next_1;
		V_0 = L_58;
		goto IL_017f;
	}

IL_0137:
	{
		// if (v._n != Undef)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = L_59->____n_7;
		if ((((int32_t)L_60) == ((int32_t)(-1))))
		{
			goto IL_0178;
		}
	}
	{
		// _vertices[v._n].Position = v._coords;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_61 = __this->____vertices_14;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = L_62->____n_7;
		NullCheck(L_61);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_64 = V_0;
		NullCheck(L_64);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_65 = L_64->____coords_3;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___Position_0 = L_65;
		// _vertices[v._n].Data = v._data;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_66 = __this->____vertices_14;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->____n_7;
		NullCheck(L_66);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = V_0;
		NullCheck(L_69);
		RuntimeObject* L_70 = L_69->____data_8;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___Data_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___Data_1), (void*)L_70);
	}

IL_0178:
	{
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_71 = V_0;
		NullCheck(L_71);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = L_71->____next_1;
		V_0 = L_72;
	}

IL_017f:
	{
		// for (v = _mesh._vHead._next; v != _mesh._vHead; v = v._next)
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_73 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_74 = __this->____mesh_1;
		NullCheck(L_74);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75 = L_74->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_73) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_75))))
		{
			goto IL_0137;
		}
	}
	{
		// int elementIndex = 0;
		V_7 = 0;
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_76 = __this->____mesh_1;
		NullCheck(L_76);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_77 = L_76->____fHead_1;
		NullCheck(L_77);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_78 = L_77->____next_1;
		V_1 = L_78;
		goto IL_0280;
	}

IL_01a6:
	{
		// if (!f._inside) continue;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_79 = V_1;
		NullCheck(L_79);
		bool L_80 = L_79->____inside_6;
		if (!L_80)
		{
			goto IL_0279;
		}
	}
	{
		// if (NoEmptyPolygons)
		bool L_81 = __this->___NoEmptyPolygons_22;
		if (!L_81)
		{
			goto IL_01ce;
		}
	}
	{
		// var area = MeshUtils.FaceArea(f);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_82 = V_1;
		float L_83;
		L_83 = MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C(L_82, NULL);
		// if (Math.Abs(area) < Real.Epsilon)
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_84;
		L_84 = fabsf(L_83);
		if ((((float)L_84) < ((float)(1.40129846E-45f))))
		{
			goto IL_0279;
		}
	}

IL_01ce:
	{
		// edge = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_85 = V_1;
		NullCheck(L_85);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_86 = L_85->____anEdge_2;
		V_2 = L_86;
		// faceVerts = 0;
		V_5 = 0;
	}

IL_01d8:
	{
		// v = edge._Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_87 = V_2;
		NullCheck(L_87);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_88 = L_87->____Org_5;
		V_0 = L_88;
		// _elements[elementIndex++] = v._n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____elements_16;
		int32_t L_90 = V_7;
		int32_t L_91 = L_90;
		V_7 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93 = L_92->____n_7;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_93);
		// faceVerts++;
		int32_t L_94 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		// edge = edge._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_95 = V_2;
		NullCheck(L_95);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_96 = L_95->____Lnext_4;
		V_2 = L_96;
		// } while (edge != f._anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_97 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_98 = V_1;
		NullCheck(L_98);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_99 = L_98->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_97) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_99))))
		{
			goto IL_01d8;
		}
	}
	{
		// for (i = faceVerts; i < polySize; ++i)
		int32_t L_100 = V_5;
		V_6 = L_100;
		goto IL_0224;
	}

IL_020f:
	{
		// _elements[elementIndex++] = Undef;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->____elements_16;
		int32_t L_102 = V_7;
		int32_t L_103 = L_102;
		V_7 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)(-1));
		// for (i = faceVerts; i < polySize; ++i)
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0224:
	{
		// for (i = faceVerts; i < polySize; ++i)
		int32_t L_105 = V_6;
		int32_t L_106 = ___polySize1;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_020f;
		}
	}
	{
		// if (elementType == ElementType.ConnectedPolygons)
		int32_t L_107 = ___elementType0;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_0279;
		}
	}
	{
		// edge = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_108 = V_1;
		NullCheck(L_108);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_109 = L_108->____anEdge_2;
		V_2 = L_109;
	}

IL_0234:
	{
		// _elements[elementIndex++] = GetNeighbourFace(edge);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____elements_16;
		int32_t L_111 = V_7;
		int32_t L_112 = L_111;
		V_7 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_113 = V_2;
		int32_t L_114;
		L_114 = Tess_GetNeighbourFace_m5E5A22A378DB4BFA1F77FF6C42FEEDDD4734F39C(__this, L_113, NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (int32_t)L_114);
		// edge = edge._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_115 = V_2;
		NullCheck(L_115);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_116 = L_115->____Lnext_4;
		V_2 = L_116;
		// } while (edge != f._anEdge);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_117 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_118 = V_1;
		NullCheck(L_118);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_119 = L_118->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_117) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_119))))
		{
			goto IL_0234;
		}
	}
	{
		// for (i = faceVerts; i < polySize; ++i)
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_0274;
	}

IL_025f:
	{
		// _elements[elementIndex++] = Undef;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____elements_16;
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		// for (i = faceVerts; i < polySize; ++i)
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_0274:
	{
		// for (i = faceVerts; i < polySize; ++i)
		int32_t L_125 = V_6;
		int32_t L_126 = ___polySize1;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_025f;
		}
	}

IL_0279:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_127 = V_1;
		NullCheck(L_127);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_128 = L_127->____next_1;
		V_1 = L_128;
	}

IL_0280:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_129 = V_1;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_130 = __this->____mesh_1;
		NullCheck(L_130);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_131 = L_130->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_129) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_131))))
		{
			goto IL_01a6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_m8E950D86EC60346E478BD58B08B486430D5D4461 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int startVert = 0;
		V_3 = 0;
		// int vertCount = 0;
		V_4 = 0;
		// _vertexCount = 0;
		__this->____vertexCount_15 = 0;
		// _elementCount = 0;
		__this->____elementCount_17 = 0;
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0065;
	}

IL_0026:
	{
		// if (!f._inside) continue;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->____inside_6;
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// start = edge = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____anEdge_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6;
		V_1 = L_7;
		V_2 = L_7;
	}

IL_0037:
	{
		// ++_vertexCount;
		int32_t L_8 = __this->____vertexCount_15;
		__this->____vertexCount_15 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// edge = edge._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_1;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Lnext_4;
		V_1 = L_10;
		// while (edge != start);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_11) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_12))))
		{
			goto IL_0037;
		}
	}
	{
		// ++_elementCount;
		int32_t L_13 = __this->____elementCount_17;
		__this->____elementCount_17 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = V_0;
		NullCheck(L_14);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = L_14->____next_1;
		V_0 = L_15;
	}

IL_0065:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_17 = __this->____mesh_1;
		NullCheck(L_17);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = L_17->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_16) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_18))))
		{
			goto IL_0026;
		}
	}
	{
		// _elements = new int[_elementCount * 2];
		int32_t L_19 = __this->____elementCount_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)));
		__this->____elements_16 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)L_20);
		// _vertices = new ContourVertex[_vertexCount];
		int32_t L_21 = __this->____vertexCount_15;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_22 = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)SZArrayNew(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->____vertices_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)L_22);
		// int vertIndex = 0;
		V_5 = 0;
		// int elementIndex = 0;
		V_6 = 0;
		// startVert = 0;
		V_3 = 0;
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh_1;
		NullCheck(L_23);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_24 = L_23->____fHead_1;
		NullCheck(L_24);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_25 = L_24->____next_1;
		V_0 = L_25;
		goto IL_0148;
	}

IL_00b5:
	{
		// if (!f._inside) continue;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____inside_6;
		if (!L_27)
		{
			goto IL_0141;
		}
	}
	{
		// vertCount = 0;
		V_4 = 0;
		// start = edge = f._anEdge;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_28 = V_0;
		NullCheck(L_28);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = L_28->____anEdge_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = L_29;
		V_1 = L_30;
		V_2 = L_30;
	}

IL_00cc:
	{
		// _vertices[vertIndex].Position = edge._Org._coords;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_31 = __this->____vertices_14;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_1;
		NullCheck(L_33);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = L_33->____Org_5;
		NullCheck(L_34);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_35 = L_34->____coords_3;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___Position_0 = L_35;
		// _vertices[vertIndex].Data = edge._Org._data;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_36 = __this->____vertices_14;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39 = L_38->____Org_5;
		NullCheck(L_39);
		RuntimeObject* L_40 = L_39->____data_8;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Data_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Data_1), (void*)L_40);
		// ++vertIndex;
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		// ++vertCount;
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		// edge = edge._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_1;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Lnext_4;
		V_1 = L_44;
		// } while (edge != start);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_45) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_46))))
		{
			goto IL_00cc;
		}
	}
	{
		// _elements[elementIndex++] = startVert;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->____elements_16;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_50);
		// _elements[elementIndex++] = vertCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->____elements_16;
		int32_t L_52 = V_6;
		int32_t L_53 = L_52;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_4;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		// startVert += vertCount;
		int32_t L_55 = V_3;
		int32_t L_56 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
	}

IL_0141:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_57 = V_0;
		NullCheck(L_57);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_58 = L_57->____next_1;
		V_0 = L_58;
	}

IL_0148:
	{
		// for (f = _mesh._fHead._next; f != _mesh._fHead; f = f._next)
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_59 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_60 = __this->____mesh_1;
		NullCheck(L_60);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_61 = L_60->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_59) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_61))))
		{
			goto IL_00b5;
		}
	}
	{
		// }
		return;
	}
}
// System.Single ProceduralToolkit.LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m805061A3ABFFED5CEEB369534F14C83195ADEB6C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___vertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Real area = 0.0f;
		V_0 = (0.0f);
		// for (int i = 0; i < vertices.Count; i++)
		V_1 = 0;
		goto IL_005b;
	}

IL_000a:
	{
		// var v0 = vertices[i];
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_2;
		L_2 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		// var v1 = vertices[(i + 1) % vertices.Count];
		RuntimeObject* L_3 = ___vertices0;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___vertices0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_7;
		L_7 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_3, ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_6)));
		V_3 = L_7;
		// area += v0.Position.X * v1.Position.Y;
		float L_8 = V_0;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_9 = V_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_10 = L_9.___Position_0;
		float L_11 = L_10.___X_1;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_12 = V_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_13 = L_12.___Position_0;
		float L_14 = L_13.___Y_2;
		V_0 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_14))));
		// area -= v0.Position.Y * v1.Position.X;
		float L_15 = V_0;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_16 = V_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_17 = L_16.___Position_0;
		float L_18 = L_17.___Y_2;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_19 = V_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_20 = L_19.___Position_0;
		float L_21 = L_20.___X_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(L_18, L_21))));
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___vertices0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000a;
		}
	}
	{
		// return 0.5f * area;
		float L_26 = V_0;
		return ((float)il2cpp_codegen_multiply((0.5f), L_26));
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddContour(ProceduralToolkit.LibTessDotNet.ContourVertex[],ProceduralToolkit.LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m167A3645E455198C686B8DAC398BD6E999A6B13E (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	{
		// AddContourInternal(vertices, forceOrientation);
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A(__this, (RuntimeObject*)L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddContour(System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>,ProceduralToolkit.LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m4A4D0117021E8CB0E5194F570D6A8E27169064E0 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	{
		// AddContourInternal(vertices, forceOrientation);
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>,ProceduralToolkit.LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m230FE9743ED76CE16996600D2AD1BD86FCCD41FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (_mesh == null)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh_1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _mesh = _pool.Get<Mesh>();
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool_0;
		NullCheck(L_1);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_2;
		L_2 = GenericVirtualFuncInvoker0< Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* >::Invoke(IPool_Get_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m230FE9743ED76CE16996600D2AD1BD86FCCD41FF_RuntimeMethod_var, L_1);
		__this->____mesh_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)L_2);
	}

IL_0019:
	{
		// bool reverse = false;
		V_0 = (bool)0;
		// if (forceOrientation != ContourOrientation.Original)
		int32_t L_3 = ___forceOrientation1;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// var area = SignedArea(vertices);
		RuntimeObject* L_4 = ___vertices0;
		float L_5;
		L_5 = Tess_SignedArea_m805061A3ABFFED5CEEB369534F14C83195ADEB6C(__this, L_4, NULL);
		V_2 = L_5;
		// reverse = (forceOrientation == ContourOrientation.Clockwise && area < 0.0f) || (forceOrientation == ContourOrientation.CounterClockwise && area > 0.0f);
		int32_t L_6 = ___forceOrientation1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		float L_7 = V_2;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}

IL_0032:
	{
		int32_t L_8 = ___forceOrientation1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		float L_9 = V_2;
		G_B9_0 = ((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0044;
	}

IL_0040:
	{
		G_B9_0 = 0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B9_0 = 1;
	}

IL_0044:
	{
		V_0 = (bool)G_B9_0;
	}

IL_0045:
	{
		// MeshUtils.Edge e = null;
		V_1 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		// for (int i = 0; i < vertices.Count; ++i)
		V_3 = 0;
		goto IL_00f0;
	}

IL_004e:
	{
		// if (e == null)
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		// e = _mesh.MakeEdge(_pool);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_11 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_12 = __this->____pool_0;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13;
		L_13 = Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C(L_11, L_12, NULL);
		V_1 = L_13;
		// _mesh.Splice(_pool, e, e._Sym);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_14 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_15 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____Sym_2;
		NullCheck(L_14);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_14, L_15, L_16, L_18, NULL);
		goto IL_0097;
	}

IL_007d:
	{
		// _mesh.SplitEdge(_pool, e);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh_1;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_20 = __this->____pool_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_1;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22;
		L_22 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_19, L_20, L_21, NULL);
		// e = e._Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Lnext_4;
		V_1 = L_24;
	}

IL_0097:
	{
		// int index = reverse ? vertices.Count - 1 - i : i;
		bool L_25 = V_0;
		if (L_25)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_3;
		G_B17_0 = L_26;
		goto IL_00a7;
	}

IL_009d:
	{
		RuntimeObject* L_27 = ___vertices0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_27);
		int32_t L_29 = V_3;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_28, 1)), L_29));
	}

IL_00a7:
	{
		V_4 = G_B17_0;
		// e._Org._coords = vertices[index].Position;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		NullCheck(L_30);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_31 = L_30->____Org_5;
		RuntimeObject* L_32 = ___vertices0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_34;
		L_34 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_32, L_33);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_35 = L_34.___Position_0;
		NullCheck(L_31);
		L_31->____coords_3 = L_35;
		// e._Org._data = vertices[index].Data;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = L_36->____Org_5;
		RuntimeObject* L_38 = ___vertices0;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_40;
		L_40 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_41 = L_40.___Data_1;
		NullCheck(L_37);
		L_37->____data_8 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____data_8), (void*)L_41);
		// e._winding = 1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		NullCheck(L_42);
		L_42->____winding_8 = 1;
		// e._Sym._winding = -1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_1;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Sym_2;
		NullCheck(L_44);
		L_44->____winding_8 = (-1);
		// for (int i = 0; i < vertices.Count; ++i)
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f0:
	{
		// for (int i = 0; i < vertices.Count; ++i)
		int32_t L_46 = V_3;
		RuntimeObject* L_47 = ___vertices0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<ProceduralToolkit.LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_47);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_004e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess::Tessellate(ProceduralToolkit.LibTessDotNet.WindingRule,ProceduralToolkit.LibTessDotNet.ElementType,System.Int32,ProceduralToolkit.LibTessDotNet.CombineCallback,ProceduralToolkit.LibTessDotNet.Vec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m09035B8F3A60F908AD64CC78FEE995442B38D156 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___windingRule0, int32_t ___elementType1, int32_t ___polySize2, CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* ___combineCallback3, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___normal4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m1415C029D364C624A0EB24110DEAE23585476F65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _normal = normal;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ___normal4;
		__this->____normal_2 = L_0;
		// _vertices = null;
		__this->____vertices_14 = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL);
		// _elements = null;
		__this->____elements_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// _windingRule = windingRule;
		int32_t L_1 = ___windingRule0;
		__this->____windingRule_9 = L_1;
		// _combineCallback = combineCallback;
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* L_2 = ___combineCallback3;
		__this->____combineCallback_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____combineCallback_13), (void*)L_2);
		// if (_mesh == null)
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_3 = __this->____mesh_1;
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// return;
		return;
	}

IL_002e:
	{
		// ProjectPolygon();
		Tess_ProjectPolygon_mE898E1815D7491F44FA1AF3C242E3CDBDA49455F(__this, NULL);
		// ComputeInterior();
		Tess_ComputeInterior_mA51153C7B94F34C4161B6060D67385A801DDACE8(__this, NULL);
		// if (elementType == ElementType.BoundaryContours)
		int32_t L_4 = ___elementType1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		// SetWindingNumber(1, true);
		Tess_SetWindingNumber_m8A41F77B75A390E8D960C52A6564CF48288AE90A(__this, 1, (bool)1, NULL);
		goto IL_004e;
	}

IL_0048:
	{
		// TessellateInterior();
		Tess_TessellateInterior_mAC4117DACBE4B60A5173D688C6919981B2C18B6D(__this, NULL);
	}

IL_004e:
	{
		// if (elementType == ElementType.BoundaryContours)
		int32_t L_5 = ___elementType1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		// OutputContours();
		Tess_OutputContours_m8E950D86EC60346E478BD58B08B486430D5D4461(__this, NULL);
		goto IL_0062;
	}

IL_005a:
	{
		// OutputPolymesh(elementType, polySize);
		int32_t L_6 = ___elementType1;
		int32_t L_7 = ___polySize2;
		Tess_OutputPolymesh_m86408071771F039677956D25E8E3A62EF95482C5(__this, L_6, L_7, NULL);
	}

IL_0062:
	{
		// _pool.Return(_mesh);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = __this->____pool_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_9 = __this->____mesh_1;
		NullCheck(L_8);
		GenericVirtualActionInvoker1< Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* >::Invoke(IPool_Return_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m1415C029D364C624A0EB24110DEAE23585476F65_RuntimeMethod_var, L_8, L_9);
		// _mesh = null;
		__this->____mesh_1 = (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)(Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL);
		// }
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
// System.Void ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::Init(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_mFB460BD793FDF5BCAAE75A1BF2F3D8B21C497C97 (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::Reset(ProceduralToolkit.LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m3435EEFA4A447A6A181FE25104F685072403823B (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___pool0, const RuntimeMethod* method) 
{
	{
		// _eUp = null;
		__this->____eUp_0 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eUp_0), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		// _nodeUp = null;
		__this->____nodeUp_1 = (Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeUp_1), (void*)(Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*)NULL);
		// _windingNumber = 0;
		__this->____windingNumber_2 = 0;
		// _inside = false;
		__this->____inside_3 = (bool)0;
		// _sentinel = false;
		__this->____sentinel_4 = (bool)0;
		// _dirty = false;
		__this->____dirty_5 = (bool)0;
		// _fixUpperEdge = false;
		__this->____fixUpperEdge_6 = (bool)0;
		// }
		return;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.Tess/ActiveRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m09E7360A72243F807CC57FD938B6ED62685793D9 (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: ProceduralToolkit.LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_pinvoke(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke& marshaled)
{
	marshaled.___Position_0 = unmarshaled.___Position_0;
	if (unmarshaled.___Data_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			marshaled.___Data_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data_1));
			(marshaled.___Data_1)->AddRef();
		}
		else
		{
			marshaled.___Data_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data_1);
		}
	}
	else
	{
		marshaled.___Data_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_pinvoke_back(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke& marshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position_0;
	unmarshaled.___Position_0 = unmarshaledPosition_temp_0;
	if (marshaled.___Data_1 != NULL)
	{
		unmarshaled.___Data_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data_1), Il2CppIUnknown::IID, marshaled.___Data_1);
		}
	}
	else
	{
		unmarshaled.___Data_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: ProceduralToolkit.LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_pinvoke_cleanup(ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Data_1 != NULL)
	{
		(marshaled.___Data_1)->Release();
		marshaled.___Data_1 = NULL;
	}
}
// Conversion methods for marshalling of: ProceduralToolkit.LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_com(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com& marshaled)
{
	marshaled.___Position_0 = unmarshaled.___Position_0;
	if (unmarshaled.___Data_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			marshaled.___Data_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data_1));
			(marshaled.___Data_1)->AddRef();
		}
		else
		{
			marshaled.___Data_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data_1);
		}
	}
	else
	{
		marshaled.___Data_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_com_back(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com& marshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position_0;
	unmarshaled.___Position_0 = unmarshaledPosition_temp_0;
	if (marshaled.___Data_1 != NULL)
	{
		unmarshaled.___Data_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data_1), Il2CppIUnknown::IID, marshaled.___Data_1);
		}
	}
	else
	{
		unmarshaled.___Data_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: ProceduralToolkit.LibTessDotNet.ContourVertex
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_com_cleanup(ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com& marshaled)
{
	if (marshaled.___Data_1 != NULL)
	{
		(marshaled.___Data_1)->Release();
		marshaled.___Data_1 = NULL;
	}
}
// System.Void ProceduralToolkit.LibTessDotNet.ContourVertex::.ctor(ProceduralToolkit.LibTessDotNet.Vec3,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	{
		// Position = position;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ___position0;
		__this->___Position_0 = L_0;
		// Data = data;
		RuntimeObject* L_1 = ___data1;
		__this->___Data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614_AdjustorThunk (RuntimeObject* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, RuntimeObject* ___data1, const RuntimeMethod* method)
{
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503*>(__this + _offset);
	ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614(_thisAdjusted, ___position0, ___data1, method);
}
// System.String ProceduralToolkit.LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}, {1}", Position, Data);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = __this->___Position_0;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = __this->___Data_1;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_Multicast(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* currentDelegate = reinterpret_cast<CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenInst(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, ___data1, ___weights2, method);
}
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenStatic(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, ___data1, ___weights2, method);
}
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenStaticInvoker(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___data1, ___weights2);
}
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_ClosedStaticInvoker(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< RuntimeObject*, RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___data1, ___weights2);
}
// System.Void ProceduralToolkit.LibTessDotNet.CombineCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m62215A5A14C79B8EBB783889AEF5AD56ED685CF1 (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_Multicast;
}
// System.Object ProceduralToolkit.LibTessDotNet.CombineCallback::Invoke(ProceduralToolkit.LibTessDotNet.Vec3,System.Object[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95 (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ProceduralToolkit.LibTessDotNet.CombineCallback::BeginInvoke(ProceduralToolkit.LibTessDotNet.Vec3,System.Object[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_BeginInvoke_m578CCFBB0B8DADF667286A95EF57E83CD2B495C5 (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = ___data1;
	__d_args[2] = ___weights2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Object ProceduralToolkit.LibTessDotNet.CombineCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_EndInvoke_m75155E33B425B7F964FE0FB38131E909E252024C (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_inline (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___position0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_mE91C7EABEFDECA9C2C21D7214FBF02A903D24F7B_gshared_inline (Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* __this, const RuntimeMethod* method) 
{
	{
		// public TValue Key { get { return _key; } }
		RuntimeObject* L_0 = (RuntimeObject*)__this->____key_0;
		return L_0;
	}
}
