﻿#include "pch-cpp.hpp"

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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454;
// <>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct KeyCollection_tBA9E4C362038AD4D8203839B7639184250B7EB02;
// System.Lazy`1<FlutterUnityIntegration.UnityMessageManager>
struct Lazy_1_t6F494A9DD8C65745EEC22482A12BA8565B069417;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_t40D855C9E22F0BF3C0ADBC1B41CF44E16D5E0FD2;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct ValueCollection_t76308479C314C62501C70F5884CCFFC9D72B7612;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,FlutterUnityIntegration.UnityMessage>[]
struct EntryU5BU5D_t393AE08BA714246E21C0D33B596C7DE1017B2E0E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DataEntity
struct DataEntity_tAFB880C654464CE42679E257FFC8E10EF5336CF3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MyCamera
struct MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022;
// FlutterUnityIntegration.NativeAPI
struct NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0;
// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9;
// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653;
IL2CPP_EXTERN_C String_t* _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35;
IL2CPP_EXTERN_C String_t* _stringLiteral60D5801B3DE1545126B373152DA0C17EB568D85F;
IL2CPP_EXTERN_C String_t* _stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722;
IL2CPP_EXTERN_C String_t* _stringLiteral760169E7AE156E641A9FAC31B690204CA3886D52;
IL2CPP_EXTERN_C String_t* _stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0E5290DB062976B52276D06F5EB17401B88C6E;
IL2CPP_EXTERN_C String_t* _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA8045E997F6A30602D5147099A2B221E2F630869;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753;
IL2CPP_EXTERN_C String_t* _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0CDF7F5311E73540C4F9F2978C444A15E7A301;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC7482193E8D01B80483F5F3F840A549FBF0FCB33;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FE69257573A6E44D72421466C0E9D63845A045;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFC901B4E2B434A280FD1946EAA34B218E8AE76EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_m7FC9BC0749D4A2B108D27F5C2AC23BF6EC3339F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CdataU3Ei__Field_3;
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject* ___U3CdataU3Ei__Field_3;
};

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t393AE08BA714246E21C0D33B596C7DE1017B2E0E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBA9E4C362038AD4D8203839B7639184250B7EB02* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t76308479C314C62501C70F5884CCFFC9D72B7612* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// DataEntity
struct DataEntity_tAFB880C654464CE42679E257FFC8E10EF5336CF3  : public RuntimeObject
{
	// System.String DataEntity::name
	String_t* ___name_0;
	// System.Int32[] DataEntity::imageData
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___imageData_1;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187  : public RuntimeObject
{
	// System.Int32 FlutterUnityIntegration.MessageHandler::id
	int32_t ___id_0;
	// System.String FlutterUnityIntegration.MessageHandler::seq
	String_t* ___seq_1;
	// System.String FlutterUnityIntegration.MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken FlutterUnityIntegration.MessageHandler::data
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data_3;
};

// FlutterUnityIntegration.NativeAPI
struct NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1  : public RuntimeObject
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

// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0  : public RuntimeObject
{
	// System.String FlutterUnityIntegration.UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject FlutterUnityIntegration.UnityMessage::data
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data_1;
	// System.Action`1<System.Object> FlutterUnityIntegration.UnityMessage::callBack
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack_2;
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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
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

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
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

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9  : public MulticastDelegate_t
{
};

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7  : public MulticastDelegate_t
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

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_StaticFields
{
	// System.Lazy`1<T> FlutterUnityIntegration.SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t6F494A9DD8C65745EEC22482A12BA8565B069417* ___LazyInstance_4;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MyCamera
struct MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D MyCamera::_imageTexture2D
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____imageTexture2D_4;
	// System.IntPtr MyCamera::_nativeTexturePointer
	intptr_t ____nativeTexturePointer_5;
	// UnityEngine.AndroidJavaObject MyCamera::_androidApiInstance
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____androidApiInstance_6;
};

// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Rotate::RotateAmount
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RotateAmount_4;
};

// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56  : public SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF
{
	// FlutterUnityIntegration.UnityMessageManager/MessageDelegate FlutterUnityIntegration.UnityMessageManager::OnMessage
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___OnMessage_7;
	// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate FlutterUnityIntegration.UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage> FlutterUnityIntegration.UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* ___waitCallbackMessageMap_9;
};

struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields
{
	// System.Int32 FlutterUnityIntegration.UnityMessageManager::ID
	int32_t ___ID_6;
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_Instance_m607F0B93984CCC4DBC13E391B53DEED876E6C123_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_gshared (RuntimeObject* ___value0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_m8A6C9A6253EECF37C0F43554ECC15A565BFE8C9D_gshared (/*<>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___id0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___seq1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___name2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___data3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m17203366119014F4963976DF6B8E83DE49274252_gshared (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.MessageHandler::getData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_getData_TisIl2CppFullySharedGenericAny_m3C7681691F028E8CACF2B96FBB68D53EBD233931_gshared (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_m951CBAC39C5B1891C1AF0673AF8B1CAC9078AAA9_gshared (SingletonMonoBehaviour_1_t40D855C9E22F0BF3C0ADBC1B41CF44E16D5E0FD2* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<FlutterUnityIntegration.UnityMessageManager>()
inline UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* GameObject_AddComponent_TisUnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_m7FC9BC0749D4A2B108D27F5C2AC23BF6EC3339F3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Unload_mAC3EDA0BE38D1A2D7C34A20F0547DC63D356900C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void MyCamera::InitializeAndroidSurface(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyCamera_InitializeAndroidSurface_mE284F19C1E83D6982F09C4BF4454A664A5080367 (MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022* __this, int32_t ___viewportWidth0, int32_t ___viewportHeight1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)il2cppRetVal;
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___fieldName0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___methodName0, ___args1, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::get_Instance()
inline UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_m607F0B93984CCC4DBC13E391B53DEED876E6C123_gshared)(method);
}
// System.String System.IntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D (String_t* ___htmlString0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_mDD2898A6D41376DEB7033193BD31AA946EEEF460 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m1EC3A84E3AD1C76D7915A5DD44597E60CB4CF1FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m15E0FC94CB42CDA85229509AD473E2BE0E27762F (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___json0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_gshared)(___value0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_gshared)(___value0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data3, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200 (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject* ___data3, const RuntimeMethod* method)
{
	((  void (*) (/*<>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m8A6C9A6253EECF37C0F43554ECC15A565BFE8C9D_gshared)((U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*)__this, (Il2CppFullySharedGenericAny)&___id0, (Il2CppFullySharedGenericAny)___seq1, (Il2CppFullySharedGenericAny)___name2, (Il2CppFullySharedGenericAny)___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m17203366119014F4963976DF6B8E83DE49274252_gshared)((UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*)__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5 (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C (String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___key0, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99 (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data3, const RuntimeMethod* method)
{
	((  void (*) (/*<>f__AnonymousType0`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m8A6C9A6253EECF37C0F43554ECC15A565BFE8C9D_gshared)((U3CU3Ef__AnonymousType0_4_t04E1331A11B0999933DD8DFB1D05EB42173A7D78*)__this, (Il2CppFullySharedGenericAny)&___id0, (Il2CppFullySharedGenericAny)___seq1, (Il2CppFullySharedGenericAny)___name2, (Il2CppFullySharedGenericAny)___data3, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076 (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___key0, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny*)___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Remove(TKey)
inline bool Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, method);
}
// T FlutterUnityIntegration.MessageHandler::getData<System.Object>()
inline RuntimeObject* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MessageHandler_getData_TisIl2CppFullySharedGenericAny_m3C7681691F028E8CACF2B96FBB68D53EBD233931_gshared)((MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___obj0, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9 (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07 (SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF*, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_m951CBAC39C5B1891C1AF0673AF8B1CAC9078AAA9_gshared)(__this, method);
}
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
// System.Void DataEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataEntity__ctor_m129471822A89E354C4A5DFB8EA31A5D96DF081BA (DataEntity_tAFB880C654464CE42679E257FFC8E10EF5336CF3* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_m7FC9BC0749D4A2B108D27F5C2AC23BF6EC3339F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.AddComponent<UnityMessageManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_1;
		L_1 = GameObject_AddComponent_TisUnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_m7FC9BC0749D4A2B108D27F5C2AC23BF6EC3339F3(L_0, GameObject_AddComponent_TisUnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_m7FC9BC0749D4A2B108D27F5C2AC23BF6EC3339F3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void GameManager::HandleWebFnCall(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleWebFnCall_m376ED43FA51805EF23D17DD050E5B73897EC6185 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D5801B3DE1545126B373152DA0C17EB568D85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8045E997F6A30602D5147099A2B221E2F630869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7482193E8D01B80483F5F3F840A549FBF0FCB33);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___action0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722, NULL);
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_2 = ___action0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral60D5801B3DE1545126B373152DA0C17EB568D85F, NULL);
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_4 = ___action0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralC7482193E8D01B80483F5F3F840A549FBF0FCB33, NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_6 = ___action0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralA8045E997F6A30602D5147099A2B221E2F630869, NULL);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		return;
	}

IL_0035:
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// break;
		return;
	}

IL_0040:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// break;
		return;
	}

IL_004b:
	{
		// Application.Unload();
		Application_Unload_mAC3EDA0BE38D1A2D7C34A20F0547DC63D356900C(NULL);
		// break;
		return;
	}

IL_0051:
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void MyCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyCamera_Start_mC5474215DDA8CFBB04A81B98A697D22E87302C00 (MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _imageTexture2D = new Texture2D(500, 500, TextureFormat.ARGB32, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_0, ((int32_t)500), ((int32_t)500), 5, (bool)0, NULL);
		__this->____imageTexture2D_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____imageTexture2D_4), (void*)L_0);
		// _imageTexture2D.filterMode = FilterMode.Point;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->____imageTexture2D_4;
		NullCheck(L_1);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_1, 0, NULL);
		// _imageTexture2D.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->____imageTexture2D_4;
		NullCheck(L_2);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_2, NULL);
		// GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->____imageTexture2D_4;
		NullCheck(L_4);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_4, L_5, NULL);
		// _nativeTexturePointer = _imageTexture2D.GetNativeTexturePtr();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->____imageTexture2D_4;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_6, NULL);
		__this->____nativeTexturePointer_5 = L_7;
		// }
		return;
	}
}
// System.Void MyCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyCamera_Update_m222CD0C434E8B466C479E0BD3489436EC2D210CE (MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral760169E7AE156E641A9FAC31B690204CA3886D52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_androidApiInstance == null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____androidApiInstance_6;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// InitializeAndroidSurface(500, 500);
		MyCamera_InitializeAndroidSurface_mE284F19C1E83D6982F09C4BF4454A664A5080367(__this, ((int32_t)500), ((int32_t)500), NULL);
		return;
	}

IL_0019:
	{
		// _androidApiInstance.Call("updateSurfaceTexture");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->____androidApiInstance_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral760169E7AE156E641A9FAC31B690204CA3886D52, L_2, NULL);
		// }
		return;
	}
}
// System.Void MyCamera::InitializeAndroidSurface(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyCamera_InitializeAndroidSurface_mE284F19C1E83D6982F09C4BF4454A664A5080367 (MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022* __this, int32_t ___viewportWidth0, int32_t ___viewportHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0CDF7F5311E73540C4F9F2978C444A15E7A301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// AndroidJavaClass androidWebViewApiClass =
		//     new AndroidJavaClass("com.cloudwebrtc.webrtc.TextureRendererPlugIn");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteralBA0CDF7F5311E73540C4F9F2978C444A15E7A301, NULL);
		V_0 = L_0;
		// AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// _androidApiInstance =
		//     androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject,
		//         viewportWidth, viewportHeight, _nativeTexturePointer.ToInt32());
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		int32_t L_8 = ___viewportWidth0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12 = ___viewportHeight1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		intptr_t* L_16 = (&__this->____nativeTexturePointer_5);
		int32_t L_17;
		L_17 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292(L_16, NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_19);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20;
		L_20 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_3, _stringLiteral8172BAC95C9A5BE9FAE6423959034DB348689962, L_15, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		__this->____androidApiInstance_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidApiInstance_6), (void*)L_20);
		// }
		return;
	}
}
// System.Void MyCamera::GetTextureId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyCamera_GetTextureId_m52DC91AB773CD613635A784C5DDE72251C81D5DD (MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5FE69257573A6E44D72421466C0E9D63845A045);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("New action = " + data);
		String_t* L_0 = ___data0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE5FE69257573A6E44D72421466C0E9D63845A045, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// UnityMessageManager.Instance.SendMessageToFlutter(_nativeTexturePointer.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_2;
		L_2 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		intptr_t* L_3 = (&__this->____nativeTexturePointer_5);
		String_t* L_4;
		L_4 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C(L_3, NULL);
		NullCheck(L_2);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void MyCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyCamera__ctor_m0CE88422A5D977C542707ED85B2ECFBD09D2A873 (MyCamera_t62596E4C3E5F71D34EC3B2DABC487558A961A022* __this, const RuntimeMethod* method) 
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
// System.Void Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_mD322E77A3CF2BEF28C4DF71D3F529107F511B1FB (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// RotateAmount = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___RotateAmount_4 = L_0;
		// }
		return;
	}
}
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m73D585515036D9B7AAD8336BFB8567283CE4C7E7 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// gameObject.transform.Rotate(RotateAmount * Time.deltaTime * 120);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___RotateAmount_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (120.0f), NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_5, NULL);
		// for (int i = 0; i < Input.touchCount; ++i)
		V_0 = 0;
		goto IL_0093;
	}

IL_002e:
	{
		// if (Input.GetTouch(i).phase.Equals(TouchPhase.Began))
		int32_t L_6 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_7;
		L_7 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_6, NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_2 = L_8;
		int32_t L_9 = 0;
		RuntimeObject* L_10 = Box(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, &L_9);
		Il2CppFakeBox<int32_t> L_11(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, (&V_2));
		bool L_12;
		L_12 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), L_10, NULL);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// var hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_3), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		int32_t L_14 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_15;
		L_15 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_14, NULL);
		V_1 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		NullCheck(L_13);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18;
		L_18 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_13, L_17, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_19;
		L_19 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_18, (&V_3), NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		// UnityMessageManager.Instance.SendMessageToFlutter("The cube feels touched.");
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_20;
		L_20 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		NullCheck(L_20);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_20, _stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB, NULL);
	}

IL_008f:
	{
		// for (int i = 0; i < Input.touchCount; ++i)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0093:
	{
		// for (int i = 0; i < Input.touchCount; ++i)
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rotate::SetRotationSpeed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetRotationSpeed_mD754DB628A79A7B2ADAED25DE732A29E7548F2F1 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A0E5290DB062976B52276D06F5EB17401B88C6E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Debug.Log("New speed = " + message);
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7A0E5290DB062976B52276D06F5EB17401B88C6E, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// float value = float.Parse(message);
		String_t* L_2 = ___message0;
		float L_3;
		L_3 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_2, NULL);
		V_0 = L_3;
		// RotateAmount = new Vector3(value, value, value);
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___RotateAmount_4 = L_7;
		// }
		return;
	}
}
// System.Void Rotate::SetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetColor_mE3C0CA983F786E8A9A0346E63B093A9DF79EB673 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, String_t* ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC901B4E2B434A280FD1946EAA34B218E8AE76EC);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("New color = " + color);
		String_t* L_0 = ___color0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFC901B4E2B434A280FD1946EAA34B218E8AE76EC, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// ColorUtility.TryParseHtmlString(color, out greenColor);
		String_t* L_2 = ___color0;
		bool L_3;
		L_3 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(L_2, (&V_0), NULL);
		// gameObject.GetComponent<Renderer>().material.color = greenColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_4, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m0EE5CC8EB699542BFC438DC3D547D39E442E9EE4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
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
// System.Void SceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Start_mB9AA9E8ADCE59F893E3EF8E891ED5E1F3AB80DA0 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Update_m1F381D68B1B1F69A0F9A5876813BB7D437E3A713 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_m52CC0D044A8AB6655C06F870DD8FC071DE0F8875 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("scene = " + idx);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___idx0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// SceneManager.LoadScene(idx, LoadSceneMode.Single);
		int32_t L_2 = ___idx0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98(L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::MessengerFlutter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_MessengerFlutter_mD72284AC6111B4DD6761AC527423C3C0AC88CA0B (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.SendMessageToFlutter("Hey man");
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_0, _stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::SwitchNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_SwitchNative_m68C165016C6A7B1F29960507F65455523EA3A5F8 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.ShowHostMainWindow();
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_ShowHostMainWindow_mDD2898A6D41376DEB7033193BD31AA946EEEF460(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::UnloadNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_UnloadNative_mA699427D00E7DD75BD5EFA4B0D54AFE5A0AFEACA (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.UnloadMainWindow();
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_UnloadMainWindow_m1EC3A84E3AD1C76D7915A5DD44597E60CB4CF1FD(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::QuitNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_QuitNative_mFE5B0B163F9D560A10ADB3574AFE755BAF6BFA43 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.QuitUnityWindow();
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_QuitUnityWindow_m15E0FC94CB42CDA85229509AD473E2BE0E27762F(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
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
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, NULL);
		// jc.CallStatic("onUnitySceneLoaded", scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___scene0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&___scene0), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		bool L_9;
		L_9 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&___scene0), NULL);
		bool L_10 = L_9;
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		bool L_13;
		L_13 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&___scene0), NULL);
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653, L_12, NULL);
		// }
		goto IL_005f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005f;
	}// end catch (depth: 1)

IL_005f:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, NULL);
		// jc.CallStatic("onUnityMessage", message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532, L_2, NULL);
		// }
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, NULL);
		// var overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// overrideActivity.Call("showMainActivity");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35, L_2, NULL);
		// }
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// overrideActivity.Call("unloadPlayer");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2, L_2, NULL);
		// }
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, NULL);
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// overrideActivity.Call("quitPlayer");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753, L_2, NULL);
		// }
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Exception)
		// Debug.Log(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_mA061363778EC083B262B2B1F2350ED7B9AE97AD9 (NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1* __this, const RuntimeMethod* method) 
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
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// var m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_0, NULL);
		V_0 = L_1;
		// var handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_0;
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8(L_3, Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_5 = V_0;
		NullCheck(L_5);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_6, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8 = V_0;
		NullCheck(L_8);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_9, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11 = V_0;
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_13 = (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*)il2cpp_codegen_object_new(MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE(L_13, L_4, L_7, L_10, L_12, NULL);
		// return handler;
		return L_13;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data3, const RuntimeMethod* method) 
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->___id_0 = L_0;
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->___seq_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seq_1), (void*)L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_2);
		// this.data = data;
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3 = ___data3;
		__this->___data_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m46F4AB9D42028AEA5D5F11F6BB10B4490385E963 (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, RuntimeObject* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->___id_0;
		String_t* L_1 = __this->___name_2;
		RuntimeObject* L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* L_3 = (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4;
		L_4 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_3, NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_5, L_8, NULL);
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
// System.Void FlutterUnityIntegration.UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_mDEC55E5CFC43BE8B679F2B49B6245BD6DD3DE9FC (UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* __this, const RuntimeMethod* method) 
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
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		int32_t L_0 = ((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6;
		((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6;
		return L_1;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m72A64B53769F3968F62E977712541F3EB6700CBD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_1 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_2 = NULL;
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_2 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var));
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_6 = V_2;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_7 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_9 = V_0;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_9) == ((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_m7B30D079CD871DE3B1213E9E33179EEF595E48FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_1 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_2 = NULL;
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_2 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var));
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_6 = V_2;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_7 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_9 = V_0;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_9) == ((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_mA4F4A939F058D2172A994AA83878FC49F4A60D28 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_1 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_2 = NULL;
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_2 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7** L_5 = (&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_6 = V_2;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_7 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_9 = V_0;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_mE9773A6B3A6DEF366B0FA9668DAA27532C005925 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_1 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_2 = NULL;
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_2 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7** L_5 = (&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_6 = V_2;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_7 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_9 = V_0;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m513A44342D5A5336DB3BB0AD0501525BC0A4F63D (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___scene0;
		int32_t L_1 = ___mode1;
		NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_mDD2898A6D41376DEB7033193BD31AA946EEEF460 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m1EC3A84E3AD1C76D7915A5DD44597E60CB4CF1FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m15E0FC94CB42CDA85229509AD473E2BE0E27762F (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___message0;
		NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(FlutterUnityIntegration.UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m5258B3CDED96288FA463D52AD7DF4D392674A5E0 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// var id = generateId();
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B(NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_1 = ___message0;
		NullCheck(L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = L_1->___callBack_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_3 = __this->___waitCallbackMessageMap_9;
		int32_t L_4 = V_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC(L_3, L_4, L_5, Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var);
	}

IL_001b:
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_7 = ___message0;
		NullCheck(L_7);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = L_7->___callBack_2;
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_11 = ___message0;
		NullCheck(L_11);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_12 = L_11->___data_1;
		U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* L_13 = (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99(L_13, G_B5_1, G_B5_0, L_10, L_12, U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_14;
		L_14 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_13, NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_15, L_18, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_mA23F949C1E38D874363AF6EFC0B9D7F7ABC9BD19 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* G_B2_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* G_B1_0 = NULL;
	{
		// OnMessage?.Invoke(message);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___message0;
		NullCheck(G_B2_0);
		MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m5075BDBB0B6A49C5FB47DFCAFD55D1267BF5E3B5 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* V_0 = NULL;
	UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* V_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B7_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* G_B11_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* G_B10_0 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		___message0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// var handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_5;
		L_5 = MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55(L_4, NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___seq_1;
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, NULL);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_9 = __this->___waitCallbackMessageMap_9;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___id_0;
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076(L_9, L_11, (&V_1), Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		return;
	}

IL_0051:
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_13 = __this->___waitCallbackMessageMap_9;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___id_0;
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB(L_13, L_15, Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var);
		// m.callBack?.Invoke(handler.getData<object>()); // todo
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_17 = V_1;
		NullCheck(L_17);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = L_17->___callBack_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = L_18;
		G_B7_0 = L_19;
		if (L_19)
		{
			G_B8_0 = L_19;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC(L_20, MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var);
		NullCheck(G_B8_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B8_0, L_21, NULL);
		// return;
		return;
	}

IL_007a:
	{
		// OnFlutterMessage?.Invoke(handler);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_22 = __this->___OnFlutterMessage_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_23 = L_22;
		G_B10_0 = L_23;
		if (L_23)
		{
			G_B11_0 = L_23;
			goto IL_0085;
		}
	}
	{
		return;
	}

IL_0085:
	{
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_24 = V_0;
		NullCheck(G_B11_0);
		MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline(G_B11_0, L_24, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m33386834F5F300E49185600FC190C57D3E9C0233 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_0 = (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*)il2cpp_codegen_object_new(Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9(L_0, Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var);
		__this->___waitCallbackMessageMap_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitCallbackMessageMap_9), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07(__this, SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var);
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
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_Multicast(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* currentDelegate = reinterpret_cast<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenInst(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStatic(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStaticInvoker(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_ClosedStaticInvoker(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_m1309BD3DE28E87C0CC24EB097613F916E8E4A1DB (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_Multicast;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_mBBFD55486390BFD20AD687A88C02D1C554C6A3E3 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m1C05B416E71A364B4560BA5085ECBBAF6BF87E97 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_Multicast(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* currentDelegate = reinterpret_cast<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInst(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	typedef void (*FunctionPointerType) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handler0, method);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStatic(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handler0, method);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStaticInvoker(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* >::Invoke(__this->___method_ptr_0, method, NULL, ___handler0);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_ClosedStaticInvoker(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handler0);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenVirtual(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___handler0);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInterface(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___handler0);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericVirtual(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	GenericVirtualActionInvoker0::Invoke(method, ___handler0);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericInterface(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	GenericInterfaceActionInvoker0::Invoke(method, ___handler0);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m287CBD25D77011FC5A52D1090F6CC31353AB6364 (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStatic;
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
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_Multicast;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::BeginInvoke(FlutterUnityIntegration.MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m0CC5C5B29E11DD03F1726B49E4B1E516479AC58D (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mAD2746E001DB9A3D18A1D806610542321FE0CF16 (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___handler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
