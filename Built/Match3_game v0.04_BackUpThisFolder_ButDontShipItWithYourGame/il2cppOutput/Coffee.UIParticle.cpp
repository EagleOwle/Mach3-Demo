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
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.ParticleSystem>
struct Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5;
// System.Action`1<Coffee.UIExtensions.UIParticleRenderer>
struct Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<UnityEngine.ParticleSystem>
struct Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<Coffee.UIExtensions.UIParticleRenderer,System.Boolean>
struct Func_2_t8088633FF805362A739441B155C556233F03BC61;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tB8C86BD783ADA156CF66B9AF8F1FB3B64D57CE5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Coffee.UIExtensions.UIParticleRenderer>
struct IEnumerable_1_t91E93ED153EB4DA005BF44D7BE3D9932430C59CA;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Material>
struct IEnumerator_1_t5D9E78977F76B19488ECD670AF4141B5BDE5D584;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>
struct IList_1_t72FB00ED108E0B025CB606B5D30FDCAFA71EC96E;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D;
// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>
struct List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560;
// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>
struct List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A;
// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>
struct List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E;
// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>
struct List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// Coffee.UIExtensions.AnimatableProperty[]
struct AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Coffee.UIExtensions.UIParticle[]
struct UIParticleU5BU5D_t544A60FF0B8074B7194D37503DC16F548C1AB449;
// Coffee.UIExtensions.UIParticleAttractor[]
struct UIParticleAttractorU5BU5D_tDE28A84BE85643F80284E75EBD6CA9052A41F2D7;
// Coffee.UIExtensions.UIParticleRenderer[]
struct UIParticleRendererU5BU5D_t3FC833A07F44CBEBA8A6DCB80CFE3306677F5285;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry[]
struct MatEntryU5BU5D_t7A597521D3F50FE3AF5A9FF9D32D5DD8825AB325;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;
// Coffee.UIExtensions.AnimatableProperty
struct AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Coffee.UIParticleExtensions.ModifiedMaterial
struct ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Coffee.UIExtensions.UIParticle
struct UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A;
// Coffee.UIExtensions.UIParticleAttractor
struct UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207;
// Coffee.UIExtensions.UIParticleRenderer
struct UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry
struct MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6;
// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c
struct U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1;
// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Coffee.UIExtensions.UIParticle/<>c
struct U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D;
// Coffee.UIExtensions.UIParticle/<get_materials>d__45
struct U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8088633FF805362A739441B155C556233F03BC61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t1DC364E5410E2617892D4CEF18A65BEA2E44D342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t72FB00ED108E0B025CB606B5D30FDCAFA71EC96E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BB6A54C48827D7DFD66BED24353A0F8912C3BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral12B363083EBF1FAEEE8FDA71C4E8EC36669184E2;
IL2CPP_EXTERN_C String_t* _stringLiteral2B327D2FB139F5A78A9CCC3F762C1AB38666DF68;
IL2CPP_EXTERN_C String_t* _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233;
IL2CPP_EXTERN_C String_t* _stringLiteral51200D2D6F2B8D298B93BB96EDA4DDA4D2C8B9C6;
IL2CPP_EXTERN_C String_t* _stringLiteral630B475143446D51D217974B7BB3B2517DB71B94;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6BCCA9F2A48510AEAFC95CFAE64E30655A89E0;
IL2CPP_EXTERN_C String_t* _stringLiteral91BB54F029DDD193B345649C315D693C57CEFFD7;
IL2CPP_EXTERN_C String_t* _stringLiteral98532F85D79345857F234D135EEFF078E57A298A;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8911211305C4AEF7FBDE656489498B731CAAB8;
IL2CPP_EXTERN_C String_t* _stringLiteralCB855CC0C5ABDEB3EE77330A8D7ADA86CDA6975C;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD2E28522BA2DE018DE067A5FE101F56C3DF88A0;
IL2CPP_EXTERN_C String_t* _stringLiteralECAB08698F1F2BBEE077B8989495CC738010AE11;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_mE9269D3EE9FD755EC213CBBDF3A4462C1A20293C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m2B34E47497ECDD04D71E44BA1335865A83A5BF92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m34240EB3B13C9B23CB88F83D71D53AF794E9F54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m85426FEF7B77EAB7E8D29B4D8C6662F665DC3819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m087023F074BAB34B154AE9CACC43CE3E7579BDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9309FCE8DD4F2DF377889F6775AEF47277B6BB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA2E7504F687771C6C8E4A510A91CB4283173B70B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF79D48A0448AF36E83173EAD8719A6FB24F43FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m61836CEFE3C56080DDBDA3CB7DFD093E825DF7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_mD32E4C8CF97486593065599879B45D1EDF5008F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m2F65E94647001597B9C0BF8FFCA8A6BEFC143D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m91639C4C7269B75500B1B55E2090DFCF51510705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA47B55289C88E5CE1FC27D2950DD30049B942E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m575921CC7F37FDCC9476A7B0F9E2F6BC448CA8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m05332107DA4D8C8D747D79BDFC45DBE8FCEF8C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3086176CF1C6968AA9B3BE3B05AAF3904BD43281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF6E2ABAB2C2CE2DB28EBEAF3DD0B6D83ABF22C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFA2A7B866E3D26CB85200669A7E7191996BB1ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m33FA04333721E227C186DC2CD72C1543BDF7FCA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAF0BCCFD1DA4D8E82368288A6C2B6DB3E985AA1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mCC33EFDE50719315873AF62DA1F08BBB03DF55E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_ValidateArguments_m732E71FF4C28CBEDD8D4CD51DA409198224ED395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CClearU3Eb__56_0_m1F11054A89363CED17EBC8D2215CA9AA935990B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExecU3Eb__7_0_mAA5D4817E6876DD7B94ED07A25C75397CA70B688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__68_0_m32243B552846EFF19B0208DE1E685879DC72D05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPauseU3Eb__53_0_m40AC4E1147DCAB561C538B4DC5152E5E52FEA873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPlayU3Eb__52_0_m17345A73E62BEBC5AC3776503CA5206200CF554B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStopU3Eb__55_0_m174CF951BFE9FABCA287727A848D512C5259220A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateRenderersU3Eb__64_0_mE504788E5A01C8BC851C2A8F5DCD96C32444FD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CSortForRenderingU3Eb__0_mB0AEAFBDD90132F4CA3B97BD9EFF25EE1E91A77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_materialsU3Ed__45_System_Collections_IEnumerator_Reset_m6DCBD412030315589ED1112D0639DBDAE809A10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticleRenderer_GetWorldMatrix_m546BA0052D188C023838E498956E08116098BDB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticleUpdater_Refresh_m2EC9D6D83153A41D82601FA4967E4ACA1A5594C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticle_U3CRefreshParticlesU3Eb__61_0_mD35B7901C44997DB50B4087B999923C75C4B60A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticle_UpdateRendererMaterial_m8AFA03DD9869500311E38FDEE660C4FA6910875D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD;
struct CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7A1DAC793D14F276D1255B931780F4839862BB3D 
{
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>
struct List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIParticleU5BU5D_t544A60FF0B8074B7194D37503DC16F548C1AB449* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIParticleU5BU5D_t544A60FF0B8074B7194D37503DC16F548C1AB449* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>
struct List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIParticleAttractorU5BU5D_tDE28A84BE85643F80284E75EBD6CA9052A41F2D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIParticleAttractorU5BU5D_tDE28A84BE85643F80284E75EBD6CA9052A41F2D7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>
struct List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIParticleRendererU5BU5D_t3FC833A07F44CBEBA8A6DCB80CFE3306677F5285* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIParticleRendererU5BU5D_t3FC833A07F44CBEBA8A6DCB80CFE3306677F5285* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>
struct List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MatEntryU5BU5D_t7A597521D3F50FE3AF5A9FF9D32D5DD8825AB325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MatEntryU5BU5D_t7A597521D3F50FE3AF5A9FF9D32D5DD8825AB325* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Coffee.UIParticleExtensions.ModifiedMaterial
struct ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED  : public RuntimeObject
{
};

struct ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields
{
	// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry> Coffee.UIParticleExtensions.ModifiedMaterial::s_Entries
	List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* ___s_Entries_0;
};

// Coffee.UIParticleExtensions.ParticleSystemExtensions
struct ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218  : public RuntimeObject
{
};

struct ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields
{
	// UnityEngine.ParticleSystem/Particle[] Coffee.UIParticleExtensions.ParticleSystemExtensions::s_TmpParticles
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___s_TmpParticles_0;
};

// Coffee.UIParticleExtensions.SpriteExtensions
struct SpriteExtensions_t05960A4C550A1DB688B12D64304062BD7C5BC1A4  : public RuntimeObject
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

// Coffee.UIExtensions.UIParticleUpdater
struct UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC  : public RuntimeObject
{
};

struct UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields
{
	// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle> Coffee.UIExtensions.UIParticleUpdater::s_ActiveParticles
	List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* ___s_ActiveParticles_0;
	// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor> Coffee.UIExtensions.UIParticleUpdater::s_ActiveAttractors
	List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* ___s_ActiveAttractors_1;
	// System.Collections.Generic.HashSet`1<System.Int32> Coffee.UIExtensions.UIParticleUpdater::s_UpdatedGroupIds
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___s_UpdatedGroupIds_2;
	// System.Int32 Coffee.UIExtensions.UIParticleUpdater::frameCount
	int32_t ___frameCount_3;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Coffee.UIParticleExtensions.Vector3Extensions
struct Vector3Extensions_tA0E5B1194000E63D8250DEFA5731621B93AA039A  : public RuntimeObject
{
};

// Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry
struct MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6  : public RuntimeObject
{
	// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::baseMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___baseMat_0;
	// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::customMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___customMat_1;
	// System.Int32 Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::count
	int32_t ___count_2;
	// UnityEngine.Texture Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
	// System.Int32 Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::id
	int32_t ___id_4;
};

// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c
struct U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1  : public RuntimeObject
{
};

struct U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields
{
	// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::<>9
	U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1* ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.ParticleSystem> Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::<>9__7_0
	Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* ___U3CU3E9__7_0_1;
};

// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387  : public RuntimeObject
{
	// UnityEngine.Transform Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_0;
	// System.Boolean Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0::sortByMaterial
	bool ___sortByMaterial_1;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0::self
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___self_2;
};

// Coffee.UIExtensions.UIParticle/<>c
struct U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D  : public RuntimeObject
{
};

struct U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields
{
	// Coffee.UIExtensions.UIParticle/<>c Coffee.UIExtensions.UIParticle/<>c::<>9
	U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__52_0
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___U3CU3E9__52_0_1;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__53_0
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___U3CU3E9__53_0_2;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__55_0
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___U3CU3E9__55_0_3;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__56_0
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___U3CU3E9__56_0_4;
	// System.Func`2<Coffee.UIExtensions.UIParticleRenderer,System.Boolean> Coffee.UIExtensions.UIParticle/<>c::<>9__64_0
	Func_2_t8088633FF805362A739441B155C556233F03BC61* ___U3CU3E9__64_0_5;
	// System.Action`1<Coffee.UIExtensions.UIParticleRenderer> Coffee.UIExtensions.UIParticle/<>c::<>9__68_0
	Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* ___U3CU3E9__68_0_6;
};

// Coffee.UIExtensions.UIParticle/<get_materials>d__45
struct U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9  : public RuntimeObject
{
	// System.Int32 Coffee.UIExtensions.UIParticle/<get_materials>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Material Coffee.UIExtensions.UIParticle/<get_materials>d__45::<>2__current
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CU3E2__current_1;
	// System.Int32 Coffee.UIExtensions.UIParticle/<get_materials>d__45::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Coffee.UIExtensions.UIParticle Coffee.UIExtensions.UIParticle/<get_materials>d__45::<>4__this
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___U3CU3E4__this_3;
	// System.Int32 Coffee.UIExtensions.UIParticle/<get_materials>d__45::<i>5__1
	int32_t ___U3CiU3E5__1_4;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
struct Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.CombineInstance
struct CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE 
{
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RealtimeLightmapScaleOffset_4;
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

// UnityEngine.DrivenTransformProperties
struct DrivenTransformProperties_tD1EB40CCB39CF25DE1F0B28D452E8D9DE712F434 
{
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___2;
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

// UnityEngine.HideFlags
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.ParticleSystemAnimationMode
struct ParticleSystemAnimationMode_t5230D6A5CC2A4B77ED5FADECA1A9C91519615836 
{
	// System.Int32 UnityEngine.ParticleSystemAnimationMode::value__
	int32_t ___value___2;
};

// UnityEngine.ParticleSystemCurveMode
struct ParticleSystemCurveMode_t8BE38B5D6B050709BAE31B5556CFC3DA69FC8405 
{
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;
};

// UnityEngine.ParticleSystemRenderMode
struct ParticleSystemRenderMode_tD7B2EC732ED8FF53C74A71D5FD7122C15B2DB314 
{
	// System.Int32 UnityEngine.ParticleSystemRenderMode::value__
	int32_t ___value___2;
};

// UnityEngine.ParticleSystemSimulationSpace
struct ParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05 
{
	// System.Int32 UnityEngine.ParticleSystemSimulationSpace::value__
	int32_t ___value___2;
};

// UnityEngine.RenderMode
struct RenderMode_tB63553E26C26A0B62C47B995F86AC41768494633 
{
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.UVChannelFlags
struct UVChannelFlags_t2F06BABDACD7D027D0D4AF4561C3E9443A962099 
{
	// System.Int32 UnityEngine.Rendering.UVChannelFlags::value__
	int32_t ___value___2;
};

// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType
struct ShaderPropertyType_t0DE93E47736291D77B07DB09E54EE659D716BA86 
{
	// System.Int32 Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// Coffee.UIExtensions.UIParticle/MeshSharing
struct MeshSharing_t0CA3128A7CD1CC5AF4393B11825A083B55335CF0 
{
	// System.Int32 Coffee.UIExtensions.UIParticle/MeshSharing::value__
	int32_t ___value___2;
};

// Coffee.UIExtensions.UIParticleAttractor/Movement
struct Movement_tCAB753D8AD171CDA4371B4CB8B32A072827FAF7A 
{
	// System.Int32 Coffee.UIExtensions.UIParticleAttractor/Movement::value__
	int32_t ___value___2;
};

// Coffee.UIExtensions.AnimatableProperty
struct AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B  : public RuntimeObject
{
	// System.String Coffee.UIExtensions.AnimatableProperty::m_Name
	String_t* ___m_Name_0;
	// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType Coffee.UIExtensions.AnimatableProperty::m_Type
	int32_t ___m_Type_1;
	// System.Int32 Coffee.UIExtensions.AnimatableProperty::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_2;
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

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// System.Action`1<UnityEngine.ParticleSystem>
struct Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5  : public MulticastDelegate_t
{
};

// System.Action`1<Coffee.UIExtensions.UIParticleRenderer>
struct Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E  : public MulticastDelegate_t
{
};

// System.Comparison`1<UnityEngine.ParticleSystem>
struct Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14  : public MulticastDelegate_t
{
};

// System.Func`2<Coffee.UIExtensions.UIParticleRenderer,System.Boolean>
struct Func_2_t8088633FF805362A739441B155C556233F03BC61  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC  : public MulticastDelegate_t
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

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Coffee.UIExtensions.UIParticleAttractor
struct UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem Coffee.UIExtensions.UIParticleAttractor::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_4;
	// System.Single Coffee.UIExtensions.UIParticleAttractor::m_DestinationRadius
	float ___m_DestinationRadius_5;
	// System.Single Coffee.UIExtensions.UIParticleAttractor::m_DelayRate
	float ___m_DelayRate_6;
	// System.Single Coffee.UIExtensions.UIParticleAttractor::m_MaxSpeed
	float ___m_MaxSpeed_7;
	// Coffee.UIExtensions.UIParticleAttractor/Movement Coffee.UIExtensions.UIParticleAttractor::m_Movement
	int32_t ___m_Movement_8;
	// UnityEngine.Events.UnityEvent Coffee.UIExtensions.UIParticleAttractor::m_OnAttracted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___m_OnAttracted_9;
	// Coffee.UIExtensions.UIParticle Coffee.UIExtensions.UIParticleAttractor::_uiParticle
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ____uiParticle_10;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Coffee.UIExtensions.UIParticle
struct UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.Boolean Coffee.UIExtensions.UIParticle::m_IsTrail
	bool ___m_IsTrail_36;
	// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::m_Scale3D
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale3D_37;
	// Coffee.UIExtensions.AnimatableProperty[] Coffee.UIExtensions.UIParticle::m_AnimatableProperties
	AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* ___m_AnimatableProperties_38;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::m_Particles
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___m_Particles_39;
	// Coffee.UIExtensions.UIParticle/MeshSharing Coffee.UIExtensions.UIParticle::m_MeshSharing
	int32_t ___m_MeshSharing_40;
	// System.Int32 Coffee.UIExtensions.UIParticle::m_GroupId
	int32_t ___m_GroupId_41;
	// System.Int32 Coffee.UIExtensions.UIParticle::m_GroupMaxId
	int32_t ___m_GroupMaxId_42;
	// System.Boolean Coffee.UIExtensions.UIParticle::m_AbsoluteMode
	bool ___m_AbsoluteMode_43;
	// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer> Coffee.UIExtensions.UIParticle::m_Renderers
	List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* ___m_Renderers_44;
	// UnityEngine.DrivenRectTransformTracker Coffee.UIExtensions.UIParticle::_tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ____tracker_45;
	// UnityEngine.Camera Coffee.UIExtensions.UIParticle::_orthoCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____orthoCamera_46;
	// System.Int32 Coffee.UIExtensions.UIParticle::_groupId
	int32_t ____groupId_47;
	// System.Boolean Coffee.UIExtensions.UIParticle::<isPaused>k__BackingField
	bool ___U3CisPausedU3Ek__BackingField_48;
};

// Coffee.UIExtensions.UIParticleRenderer
struct UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.ParticleSystemRenderer Coffee.UIExtensions.UIParticleRenderer::_renderer
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ____renderer_41;
	// UnityEngine.ParticleSystem Coffee.UIExtensions.UIParticleRenderer::_particleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____particleSystem_42;
	// System.Int32 Coffee.UIExtensions.UIParticleRenderer::_prevParticleCount
	int32_t ____prevParticleCount_43;
	// Coffee.UIExtensions.UIParticle Coffee.UIExtensions.UIParticleRenderer::_parent
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ____parent_44;
	// System.Int32 Coffee.UIExtensions.UIParticleRenderer::_index
	int32_t ____index_45;
	// System.Boolean Coffee.UIExtensions.UIParticleRenderer::_isTrail
	bool ____isTrail_46;
	// UnityEngine.Material Coffee.UIExtensions.UIParticleRenderer::_modifiedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____modifiedMaterial_47;
	// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleRenderer::_prevScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____prevScale_48;
	// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleRenderer::_prevPsPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____prevPsPos_49;
	// UnityEngine.Vector2Int Coffee.UIExtensions.UIParticleRenderer::_prevScreenSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ____prevScreenSize_50;
	// System.Boolean Coffee.UIExtensions.UIParticleRenderer::_delay
	bool ____delay_51;
	// System.Boolean Coffee.UIExtensions.UIParticleRenderer::_prewarm
	bool ____prewarm_52;
	// UnityEngine.Material Coffee.UIExtensions.UIParticleRenderer::_currentMaterialForRendering
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____currentMaterialForRendering_53;
	// UnityEngine.Bounds Coffee.UIExtensions.UIParticleRenderer::_lastBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ____lastBounds_54;
};

struct UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields
{
	// UnityEngine.CombineInstance[] Coffee.UIExtensions.UIParticleRenderer::s_CombineInstances
	CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* ___s_CombineInstances_36;
	// System.Collections.Generic.List`1<UnityEngine.Material> Coffee.UIExtensions.UIParticleRenderer::s_Materials
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___s_Materials_37;
	// UnityEngine.MaterialPropertyBlock Coffee.UIExtensions.UIParticleRenderer::s_Mpb
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___s_Mpb_38;
	// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer> Coffee.UIExtensions.UIParticleRenderer::s_Renderers
	List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* ___s_Renderers_39;
	// UnityEngine.Vector3[] Coffee.UIExtensions.UIParticleRenderer::s_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Corners_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7  : public RuntimeArray
{
	ALIGN_FIELD (8) Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D m_Items[1];

	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		m_Items[index] = value;
	}
};
// Coffee.UIExtensions.AnimatableProperty[]
struct AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* m_Items[1];

	inline AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093  : public RuntimeArray
{
	ALIGN_FIELD (8) CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE m_Items[1];

	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE value)
	{
		m_Items[index] = value;
	}
};
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


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m4868C4419C3E29B41F77CB99B3E2309A46091C0A_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::get_Item(System.Int32)
inline MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* (*) (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::get_Count()
inline int32_t List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_inline (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatEntry__ctor_m95A29ECBB09E5F56185A6A71067960FB5B6F8A77 (MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::Add(T)
inline void List_1_Add_m9309FCE8DD4F2DF377889F6775AEF47277B6BB62_inline (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* __this, MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2*, MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_DestroyImmediate_m0A00187B7A8852594E4B17707FD805E500AA2816 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2F65E94647001597B9C0BF8FFCA8A6BEFC143D89 (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::.ctor()
inline void List_1__ctor_m3086176CF1C6968AA9B3BE3B05AAF3904BD43281 (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Scale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemRenderMode UnityEngine.ParticleSystemRenderer::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemRenderer_get_renderMode_m3987FC7C0D54B11949FFECEAD5DFCE68FF872061 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.ParticleSystemRenderer::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ParticleSystemRenderer_get_mesh_mE2E2318844C5F3F32E0A556E65A23CB7F48B5F65 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.ParticleSystem/MainModule::get_customSimulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* MainModule_get_customSimulationSpace_mCCB54D66ACBD9DFDC0A8DF80EB569658C1F6FAEF (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m1F619A4C5209CD9182A65CFA3EC3729F47E8CA0D (U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mD1255815116A13B87CF3F7FD473EF0C4FF52CE4E (Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m575921CC7F37FDCC9476A7B0F9E2F6BC448CA8B6 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemAnimationMode UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_mode_m675B6ECB7DE53BBCDAEEA723757A8341417B2CA6 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.ParticleSystem/TextureSheetAnimationModule::GetSprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TextureSheetAnimationModule_GetSprite_mD35652D2AC3B135427DE5EC42AFC62051693BEB6 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Coffee.UIParticleExtensions.SpriteExtensions::GetActualTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* SpriteExtensions_GetActualTexture_mFA226985EF9C60364D45C115CDB1A56415292BD0 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___self0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_spriteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_spriteCount_m575F53291200E03602CF854CA93A5BCE2890DD85 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mDCC2653E12642E8D80F98FE5AA07FAA226F83CA7 (Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD*, const RuntimeMethod*))List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_mD32E4C8CF97486593065599879B45D1EDF5008F7 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.ParticleSystemRenderer::get_trailMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ParticleSystemRenderer_get_trailMaterial_m867F4445CF404D4D1C6970BF645C70BA1784A005 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortingLayer_GetLayerValueFromID_mBB4C1609D3D68940C64087C874E16A817D90321B (int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystemRenderer::get_sortingFudge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 Coffee.UIParticleExtensions.ParticleSystemExtensions::GetIndex(System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensions_GetIndex_mD7149509ECDDEBFE1F9EF8231330EAD5F3677890 (RuntimeObject* ___list0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___ps1, const RuntimeMethod* method) ;
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEACF68918C3839EF55A2D57219BA9F2632C7BC88 (U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1* __this, const RuntimeMethod* method) ;
// System.Int32 Coffee.UIExtensions.AnimatableProperty::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType Coffee.UIExtensions.AnimatableProperty::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_type_mD826320325E689819E2858A8BB25F102BE6878C3 (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.MaterialPropertyBlock::GetColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MaterialPropertyBlock_GetColor_m4F65D7F8EC406C8AF05EE8AD4DC957F20D60EC4F (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.MaterialPropertyBlock::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 MaterialPropertyBlock_GetVector_mFB1EDB2008F46FF8D452B77D1FD27AA5530D1C2F (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.MaterialPropertyBlock::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialPropertyBlock_GetFloat_m569A4AE2E3925A80996F525E3E97E59B55128BEE (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.MaterialPropertyBlock::GetTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* MaterialPropertyBlock_GetTexture_m639AFB0B59A91E4A3E0415FBA7943FC0CD9F5CF1 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.AnimatableProperty::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatableProperty_set_id_mD7944AD0E42E0557BB99B36C3C2F13734D2981B3_inline (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle::ResetGroupId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_ResetGroupId_mCCF269CE3E29E779C8C7F70BC8EFCA1E76129545 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle/<get_materials>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_materialsU3Ed__45__ctor_m2965B2FDD5D8611C8CBA1A58D8BB8FED3B314CFF (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::get_particles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8F92F11AA54AAB578EDEBA52FF1AE343E6C389D2 (Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::Exec(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,System.Action`1<UnityEngine.ParticleSystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_Exec_mE364884A373D7868A7A3FC79A534144093ACAFAF (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___self0, Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___action1, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle::set_isPaused(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemInstance(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemInstance_m1861DAA2786A8487DED8268798215D02C20DF76E (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instance0, bool ___destroyOldParticles1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_mB7BA09B83D6B2A93A4F9DB909DD420D4E438FAB1 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.ParticleSystem>(System.Collections.Generic.List`1<T>)
inline void GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m85426FEF7B77EAB7E8D29B4D8C6662F665DC3819 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m4868C4419C3E29B41F77CB99B3E2309A46091C0A_gshared)(__this, ___results0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
inline Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::Dispose()
inline void Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422 (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::get_Current()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_inline (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Rendering.UVChannelFlags UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_uvChannelMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_uvChannelMask_m7073447C213635C0BC84E34992D7D5E5E4CE154F (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_uvChannelMask(UnityEngine.Rendering.UVChannelFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::MoveNext()
inline bool Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_m67C9375DAB39134F95AE8C749C0293A147EBE2C8 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___particles0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<Coffee.UIExtensions.UIParticleRenderer>(System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_mE9269D3EE9FD755EC213CBBDF3A4462C1A20293C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* ___results0, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared)(__this, ___results0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Coffee.UIExtensions.UIParticleRenderer Coffee.UIExtensions.UIParticle::GetRenderer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* UIParticle_GetRenderer_m0653C955C59F6ECA76C88DEC42059F3FB1480551 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleRenderer::Set(Coffee.UIExtensions.UIParticle,UnityEngine.ParticleSystem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Set_mD3728320114E45DCFE7164165E86F7162A134336 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___parent0, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem1, bool ___isTrail2, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/TrailModule UnityEngine.ParticleSystem::get_trails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
inline int32_t List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::Clear(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Clear_m412CE9A1BDE7A72B7392FE16F77FE936FB072E25 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::get_Count()
inline int32_t List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::Inverse(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Coffee.UIExtensions.UIParticleRenderer,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m99F2CFD480DEC3F5E0C720980F33714BFA7035D8 (Func_2_t8088633FF805362A739441B155C556233F03BC61* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8088633FF805362A739441B155C556233F03BC61*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<Coffee.UIExtensions.UIParticleRenderer>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m2B34E47497ECDD04D71E44BA1335865A83A5BF92 (RuntimeObject* ___source0, Func_2_t8088633FF805362A739441B155C556233F03BC61* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t8088633FF805362A739441B155C556233F03BC61*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mDCE2755EF33EFD51A60E9238A1537E3B41351058_gshared)(___source0, ___predicate1, method);
}
// UnityEngine.Camera Coffee.UIExtensions.UIParticle::GetBakeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* UIParticle_GetBakeCamera_m9CEE72A5C1D1740406554A3331AB6B8626D3CBCE (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::get_Item(System.Int32)
inline UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329 (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateMesh(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateMesh_m09549AA6D13601B8F8F1C20923C6FDDF96C57DF9 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___bakeCamera0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateParticleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateParticleCount_mFD2CF7B625D4F7F434FF80A4B35052682E58789A (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrivenRectTransformTracker_Add_mC0CE417831BF58E6DA81770CE5E2A99B142EEFEC (DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___driver0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform1, int32_t ___drivenProperties2, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleUpdater::Register(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Register_m2FF1ECC9511A96C705F1047A08BEFBE3BE662789 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___particle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_mE43630019E83200D10F07E3454A1D2F5EF68824D (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_OnEnable_m4BF46ECE5E57E2EE11ED4CE41AD50DADF141C9BC (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrivenRectTransformTracker_Clear_m9A7F5130E4007F70B14AB1FF13A2997C073A64EE (DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleUpdater::Unregister(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Unregister_mDABD8EE790906552608D0A2114985A83C4EECECD (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___particle0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Coffee.UIExtensions.UIParticleRenderer>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4FEEBE2ACB14B3BD5E06B79492AB5897D5F636C3 (Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m61836CEFE3C56080DDBDA3CB7DFD093E825DF7E8 (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_OnDisable_m9123E729FA7BE001037CDE14E8A75B69AD68E16C (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaskableGraphic_get_maskable_m34B87CD87CFF73FF4E09D892ADB316E412F22660 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_set_maskable_mC2486FDC0636C83AC3BDBFF11E6E85CC27F15689 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, bool ___value0, const RuntimeMethod* method) ;
// Coffee.UIExtensions.UIParticleRenderer Coffee.UIExtensions.UIParticleRenderer::AddRenderer(Coffee.UIExtensions.UIParticle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* UIParticleRenderer_AddRenderer_m12135FEA68000EF6F57C438CB0BBE7F5DA08CEAB (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___parent0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::Add(T)
inline void List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_inline (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::set_Item(System.Int32,T)
inline void List_1_set_Item_mCC33EFDE50719315873AF62DA1F08BBB03DF55E0 (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, int32_t ___index0, UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, int32_t, UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Canvas_get_rootCanvas_m74DEA02014963B54DF651BE14284BDAFDA61DDFE (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
inline void List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::.ctor()
inline void List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Coffee.UIExtensions.UIParticle>()
inline UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.Collections.Generic.IEnumerable<UnityEngine.Material>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_materialsU3Ed__45_System_Collections_Generic_IEnumerableU3CUnityEngine_MaterialU3E_GetEnumerator_mD7C14F5B8570E3AA3EE381C07310C218AD0197D8 (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE063C210F95C7D014F1B52FC55699BB7CCCFD3B7 (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_mE81EFF12AC1E2C08F3AE86DA7CF0D5CA4EA8F91F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___t0, bool ___withChildren1, bool ___restart2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Pause_m2A5CE9D753E6E58FB9BC62C6A548B01E9FA63009 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Contains(T)
inline bool List_1_Contains_mF79D48A0448AF36E83173EAD8719A6FB24F43FDF (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Register(Coffee.UIExtensions.UIParticleAttractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Register_m9F6EF5806423AB115404590D71E4D7A3705A1323 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* ___attractor0, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleUpdater::Unregister(Coffee.UIExtensions.UIParticleAttractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Unregister_m2438E5AEADF8A9B98AC4E5F816BD27EFD4E12C4B (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* ___attractor0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::get_particleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/Particle[] Coffee.UIParticleExtensions.ParticleSystemExtensions::GetParticleArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ParticleSystemExtensions_GetParticleArray_m629E5875E57E88914BCC16C7328753B5ACB72116 (int32_t ___size0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleAttractor::GetDestinationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticleAttractor_GetDestinationPosition_m3684540494FA429432B9A333A2BE8FABB02EF29A (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleAttractor::GetAttractedPosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticleAttractor_GetAttractedPosition_m6F82891983EC67846F760AF63B6B9807AD2275A0 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___duration2, float ___time3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles0, int32_t ___size1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::get_scale3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticle_get_scale3D_mCEBA095AC7965D040D06922E02276BCD6956D0D7 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::GetScaled(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_GetScaled_m0045896A163F6848691633AB2A8AA99CB2EB4E52 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other22, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_mBA32C7EAC64C56C7D68480549FA9A892FA5C1728 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Coffee.UIParticleExtensions.ParticleSystemExtensions::GetTextureForSprite(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ParticleSystemExtensions_GetTextureForSprite_mA3097381DFF8AA5975E5A942E5C693E620964D6B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___self0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___components1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Coffee.UIExtensions.UIParticleRenderer>()
inline UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* GameObject_GetComponent_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m34240EB3B13C9B23CB88F83D71D53AF794E9F54D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::GetModifiedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* MaskableGraphic_GetModifiedMaterial_mBE4C5B18ED4221E0A6C026C750B6A04E9B35312A (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___baseMaterial0, const RuntimeMethod* method) ;
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::Remove(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_Remove_m74F283D7ACB95C75BC35D69DB5C47F96A9ECA68E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___customMat0, const RuntimeMethod* method) ;
// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial::Add(UnityEngine.Material,UnityEngine.Texture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ModifiedMaterial_Add_m34306D8C8473A61A072248F70B041CC6D1F602AF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___baseMat0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, int32_t ___id2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.UI.Graphic::get_workerMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_prewarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_prewarm_m2B4B37F0B20CA2FDAB53315FC47E8FDCF3BBCD72 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetSharedMaterials_m40B0D467465E249E770D2BD5111E21989DEF08D2 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___m0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_inline (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleRenderer::GetWorldScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticleRenderer_GetWorldScale_mB7E160C281DA6BACF121AC6DF12E573544342DAF (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetTexture_m8A670DA4B435058550D64A1B16CAB8E421F45AAC (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// Coffee.UIExtensions.UIParticle/MeshSharing Coffee.UIExtensions.UIParticle::get_meshSharing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticle_get_meshSharing_mB5632CFE43194AD9264EFC511383CD7EAC54D5DC (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::GetScaled(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other11, const RuntimeMethod* method) ;
// System.Boolean Coffee.UIParticleExtensions.Vector3Extensions::IsVisible(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Extensions_IsVisible_m6A3E8644C9CC6227597EC01AFB95A36EC9AD8A54 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasRenderer::GetInheritedAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasRenderer_GetInheritedAlpha_m55E826F02D368D3510AE8B2EE42729CF167127F7 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::BeginSample(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::EndSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437 (const RuntimeMethod* method) ;
// System.Boolean Coffee.UIExtensions.UIParticle::get_canSimulate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_canSimulate_m762C8B5EE86615A2D12E6773EBF982CDF190FB80 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleRenderer::ResolveResolutionChange(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_ResolveResolutionChange_m89A907B894F8AE4B66BE19D4595973B54E90D7DF (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___psPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) ;
// System.Boolean Coffee.UIExtensions.UIParticle::get_isPaused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIParticle_get_isPaused_m690FE640B6BFAA5FA947F3D1C06557769ADBC7A3_inline (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleRenderer::Simulate(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Simulate_m19DD2EE8731FFFD69BF43ADA71AE538C922B69CA (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, bool ___paused1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_time_mDB612DCED4B4345E40BE98597A5895F48BC0ECDC (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.CombineInstance::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* CombineInstance_get_mesh_m85416E24709E1C5314B8FAD8B8F2D155B9C2481C (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystemRenderer::BakeTrailsMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_BakeTrailsMesh_mDAD9AB8BD85A68CC7BD0B4DF02A7558F1845AC34 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, bool ___useTransform2, const RuntimeMethod* method) ;
// System.Boolean Coffee.UIParticleExtensions.ParticleSystemExtensions::CanBakeMesh(UnityEngine.ParticleSystemRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystemExtensions_CanBakeMesh_m511867228B928821D0860A599BFA89601B07C03E (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystemRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_BakeMesh_m9CC200A5574186FB88AA904ABF70FBDA957E5141 (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, bool ___useTransform2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_m46EF7B8B9E01367724B1783F4CBE032CE2CC810E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___keepVertexLayout0, const RuntimeMethod* method) ;
// System.Boolean Coffee.UIExtensions.UIParticle::get_absoluteMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_absoluteMode_m8BA7DE6C5FBFF684D12AFE4DB69AC994180A5EDF (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 Coffee.UIExtensions.UIParticleRenderer::GetWorldMatrix(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UIParticleRenderer_GetWorldMatrix_m546BA0052D188C023838E498956E08116098BDB0 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___psPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_transform_m9C9911DE1F613A1B949DF89CD46B0E8F742F3BEE (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Translate_m95D44EDD1A9856DD11C639692E47B7A35EF745E2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_CombineMeshes_m23172B6FF99A4464AA5F4A497209121978A165D5 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* ___combine0, bool ___mergeSubMeshes1, bool ___useMatrices2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>::Clear()
inline void List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_inline (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_useMeshSharing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Int32 Coffee.UIExtensions.UIParticle::get_groupId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleUpdater::GetGroupedRenderers(System.Int32,System.Int32,System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_GetGroupedRenderers_mE1760E1B821C42F09868C22784BBEB48AE794961 (int32_t ___groupId0, int32_t ___index1, List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* ___results2, const RuntimeMethod* method) ;
// System.Boolean Coffee.UIExtensions.UIParticle::get_canRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_canRender_mA306605C69B343C33FEF48259D65F3262C040032 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateMaterialProperties_mB35AAB7D145EE27C29A63A483E9DC3A60822ECB9 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_set_materialCount_m333926C78CD98557B86A8EAC66F47BD4DD4554C3 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetMaterial_mBB733E272FB6A5B30C3B24F557AF5ED9EAC5DBD7 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_mesh_mB74AB585ED11B0D8B619F7ADC8B55286DD50A1B5 (CombineInstance_t77DDB096E69D0AD2690C57046C5ACD1239451BBE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Rect Coffee.UIExtensions.UIParticleRenderer::get_rootCanvasRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UIParticleRenderer_get_rootCanvasRect_mD7F1E91B01114283CB9AD8A251E59F0F79EF47CB (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Overlaps_m3F0BA2C8BB81491978B21EB21C8A6D3BBED02E41 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other0, bool ___allowInverse1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CanvasRenderer_get_cull_m48007D7CB40B3C0EC29F0CB316AFAC88748EF3D7 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_set_cull_mA2A521F41185511CCFF6E2BFCD7B68B1DE3C0D9D (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISystemProfilerApi_AddMarker_m86FB0AD20A17D79720E18D726307D16280920FBA (String_t* ___name0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj1, const RuntimeMethod* method) ;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::get_onCullStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* MaskableGraphic_get_onCullStateChanged_m8452945E93AF20B975D85E61999B51039CAF6538 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// UnityEngine.ParticleSystemSimulationSpace Coffee.UIParticleExtensions.ParticleSystemExtensions::GetActualSimulationSpace(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensions_GetActualSimulationSpace_mED1F78247B56DAF453A7D3C15E2C3C6FE5FFD362 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___self0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_worldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_worldSpace_mB5628233374EF9380309BAC8D3BE98CFAD755EB0 (TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2Int::op_Inequality(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Inequality_mA2A179D6CB186661DF13284FC4BB6B4838DF8B54_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___lhs0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::GetScaled(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_GetScaled_mF8F549E879A837A29471C2391A8A09A048064D71 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_useUnscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_useUnscaledTime_m06B0F3A0207D09044C0A1A0DE306EB82E6ADCD12 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/EmissionModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmissionModule_get_enabled_mD58661B08716E8841806F1C8E0D52AF7FCB39768 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/EmissionModule::get_rateOverDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 EmissionModule_get_rateOverDistance_m667AC2FE9C65E7D1B3F97FBB15A1F4C69296AF30 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/EmissionModule::get_rateOverDistanceMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EmissionModule_get_rateOverDistanceMultiplier_m781D7F7A779335C1D6979A1446DE019E6A58AFF1 (EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___t0, bool ___withChildren1, bool ___restart2, bool ___fixedTimeStep3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.MaterialPropertyBlock::get_isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialPropertyBlock_get_isEmpty_mB74C027D1A62295F7D182B86EBC5F173489A7E38 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.AnimatableProperty::UpdateMaterialProperties(UnityEngine.Material,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_UpdateMaterialProperties_mCBB1CDEC2003A0D97793B4AF7A097141E000BDEA (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___mpb1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Int32)
inline void List_1__ctor_m05332107DA4D8C8D747D79BDFC45DBE8FCEF8C23 (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::get_Count()
inline int32_t List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::Add(T)
inline void List_1_Add_m087023F074BAB34B154AE9CACC43CE3E7579BDF1_inline (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* __this, UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560*, UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::Remove(T)
inline bool List_1_Remove_m91639C4C7269B75500B1B55E2090DFCF51510705 (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* __this, UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560*, UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>::Add(T)
inline void List_1_Add_mA2E7504F687771C6C8E4A510A91CB4283173B70B_inline (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* __this, UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A*, UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>::Remove(T)
inline bool List_1_Remove_mA47B55289C88E5CE1FC27D2950DD30049B942E79 (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* __this, UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A*, UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillRenderCanvases__ctor_mD8174C0964F8864D65270FFCAF275BD0BAC8DCF3 (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_remove_willRenderCanvases_m50B55BBCEC98C23AF7E09A7F5F513939CEE0F652 (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_add_willRenderCanvases_mC422627A81F9E101686192E587FC42C20718265A (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::get_Item(System.Int32)
inline UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9 (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* (*) (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_isPrimary_mE05CB06D3F9B5B1CD5A6D1CFEB9CC4FF8174A0CA (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
inline bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___item0, method);
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateTransformScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateTransformScale_mE7A5792C1B0144A22D229B0C3172830E84F8B94F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void Coffee.UIExtensions.UIParticle::UpdateRenderers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateRenderers_m139A9B2E7386C382A69D668E78374D6BEDC5FB65 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
inline void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>::get_Item(System.Int32)
inline UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* List_1_get_Item_mAF0BCCFD1DA4D8E82368288A6C2B6DB3E985AA1B (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* (*) (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::Attract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_Attract_m3DA836DC11630521BF08A738C8CBF5EB9FFD4110 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>::get_Count()
inline int32_t List_1_get_Count_m33FA04333721E227C186DC2CD72C1543BDF7FCA0_inline (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateParticleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateParticleCount_mBE0114F49AA989090CD8AA48190C2B2D8F975600 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::.ctor()
inline void List_1__ctor_mFA2A7B866E3D26CB85200669A7E7191996BB1ADB (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleAttractor>::.ctor()
inline void List_1__ctor_mF6E2ABAB2C2CE2DB28EBEAF3DD0B6D83ABF22C5F (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::ValidateArguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m732E71FF4C28CBEDD8D4CD51DA409198224ED395_inline (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::BeginSampleImpl(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_BeginSampleImpl_m11DCED1F062EEB6A07FE36224080BAEDC65D5A87 (String_t* ___name0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___targetObject1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2Int::op_Equality(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m0BACF220C29A50100740A626E2A928F9F96E6759_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___lhs0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial::Add(UnityEngine.Material,UnityEngine.Texture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ModifiedMaterial_Add_m34306D8C8473A61A072248F70B041CC6D1F602AF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___baseMat0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture1, int32_t ___id2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9309FCE8DD4F2DF377889F6775AEF47277B6BB62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		V_1 = 0;
		goto IL_0061;
	}

IL_0005:
	{
		// e = s_Entries[i];
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_0 = ((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_2;
		L_2 = List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB(L_0, L_1, List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB_RuntimeMethod_var);
		V_0 = L_2;
		// if (e.baseMat != baseMat || e.texture != texture || e.id != id) continue;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_3 = V_0;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3->___baseMat_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___baseMat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_7 = V_0;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = L_7->___texture_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = ___texture1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_003c;
		}
	}
	{
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___id_4;
		int32_t L_13 = ___id2;
		G_B5_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 1;
	}

IL_003d:
	{
		V_2 = (bool)G_B5_0;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0043;
		}
	}
	{
		// if (e.baseMat != baseMat || e.texture != texture || e.id != id) continue;
		goto IL_005d;
	}

IL_0043:
	{
		// ++e.count;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_15 = V_0;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___count_2;
		NullCheck(L_16);
		L_16->___count_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// return e.customMat;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_18 = V_0;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = L_18->___customMat_1;
		V_3 = L_19;
		goto IL_00de;
	}

IL_005d:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0061:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_22 = ((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_inline(L_22, List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_21) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_0005;
		}
	}
	{
		// e = new MatEntry();
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_25 = (MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6*)il2cpp_codegen_object_new(MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		MatEntry__ctor_m95A29ECBB09E5F56185A6A71067960FB5B6F8A77(L_25, NULL);
		V_0 = L_25;
		// e.count = 1;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_26 = V_0;
		NullCheck(L_26);
		L_26->___count_2 = 1;
		// e.baseMat = baseMat;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_27 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___baseMat0;
		NullCheck(L_27);
		L_27->___baseMat_0 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___baseMat_0), (void*)L_28);
		// e.texture = texture;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_29 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_30 = ___texture1;
		NullCheck(L_29);
		L_29->___texture_3 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___texture_3), (void*)L_30);
		// e.id = id;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_31 = V_0;
		int32_t L_32 = ___id2;
		NullCheck(L_31);
		L_31->___id_4 = L_32;
		// e.customMat = new Material(baseMat);
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_33 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = ___baseMat0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_35, L_34, NULL);
		NullCheck(L_33);
		L_33->___customMat_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___customMat_1), (void*)L_35);
		// e.customMat.hideFlags = HideFlags.HideAndDontSave;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_36 = V_0;
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = L_36->___customMat_1;
		NullCheck(L_37);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_37, ((int32_t)61), NULL);
		// if (texture)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_38 = ___texture1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_38, NULL);
		V_5 = L_39;
		bool L_40 = V_5;
		if (!L_40)
		{
			goto IL_00c9;
		}
	}
	{
		// e.customMat.mainTexture = texture;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_41 = V_0;
		NullCheck(L_41);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = L_41->___customMat_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_43 = ___texture1;
		NullCheck(L_42);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_42, L_43, NULL);
	}

IL_00c9:
	{
		// s_Entries.Add(e);
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_44 = ((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_45 = V_0;
		NullCheck(L_44);
		List_1_Add_m9309FCE8DD4F2DF377889F6775AEF47277B6BB62_inline(L_44, L_45, List_1_Add_m9309FCE8DD4F2DF377889F6775AEF47277B6BB62_RuntimeMethod_var);
		// return e.customMat;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_46 = V_0;
		NullCheck(L_46);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = L_46->___customMat_1;
		V_3 = L_47;
		goto IL_00de;
	}

IL_00de:
	{
		// }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = V_3;
		return L_48;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::Remove(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_Remove_m74F283D7ACB95C75BC35D69DB5C47F96A9ECA68E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___customMat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m2F65E94647001597B9C0BF8FFCA8A6BEFC143D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// if (!customMat) return;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___customMat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!customMat) return;
		goto IL_0094;
	}

IL_0013:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		V_1 = 0;
		goto IL_0081;
	}

IL_0017:
	{
		// var e = s_Entries[i];
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_3 = ((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_5;
		L_5 = List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB(L_3, L_4, List_1_get_Item_mA6B050A6E1D4DC7ECC832F5301E4FCE087A459FB_RuntimeMethod_var);
		V_2 = L_5;
		// if (e.customMat != customMat) continue;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_6 = V_2;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___customMat_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___customMat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// if (e.customMat != customMat) continue;
		goto IL_007d;
	}

IL_0036:
	{
		// if (--e.count == 0)
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_11 = V_2;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->___count_2;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_14 = V_5;
		NullCheck(L_12);
		L_12->___count_2 = L_14;
		int32_t L_15 = V_5;
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		// DestroyImmediate(e.customMat);
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_17 = V_2;
		NullCheck(L_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = L_17->___customMat_1;
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		ModifiedMaterial_DestroyImmediate_m0A00187B7A8852594E4B17707FD805E500AA2816(L_18, NULL);
		// e.baseMat = null;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_19 = V_2;
		NullCheck(L_19);
		L_19->___baseMat_0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___baseMat_0), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// e.texture = null;
		MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* L_20 = V_2;
		NullCheck(L_20);
		L_20->___texture_3 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___texture_3), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		// s_Entries.RemoveAt(i);
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_21 = ((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		List_1_RemoveAt_m2F65E94647001597B9C0BF8FFCA8A6BEFC143D89(L_21, L_22, List_1_RemoveAt_m2F65E94647001597B9C0BF8FFCA8A6BEFC143D89_RuntimeMethod_var);
	}

IL_007b:
	{
		// break;
		goto IL_0094;
	}

IL_007d:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0081:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_25 = ((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_inline(L_25, List_1_get_Count_m46DAA0D699BD06551AA0AB45A8EE0A4AD97A7BB5_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (L_27)
		{
			goto IL_0017;
		}
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_DestroyImmediate_m0A00187B7A8852594E4B17707FD805E500AA2816 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!obj) return;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (!obj) return;
		goto IL_0029;
	}

IL_0010:
	{
		// if (Application.isEditor)
		bool L_3;
		L_3 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// Object.DestroyImmediate(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_5, NULL);
		goto IL_0029;
	}

IL_0022:
	{
		// Object.Destroy(obj);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial__ctor_m6DC99AEBF4EBC0AFF0D2CCAA1BBBF8482854D886 (ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial__cctor_m19FBA75AF69213709634AA6FEE8670689048CF36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3086176CF1C6968AA9B3BE3B05AAF3904BD43281_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<MatEntry> s_Entries = new List<MatEntry>();
		List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2* L_0 = (List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2*)il2cpp_codegen_object_new(List_1_tC77A1414E6252F662CF80427039C00F3BD6CE7A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3086176CF1C6968AA9B3BE3B05AAF3904BD43281(L_0, List_1__ctor_m3086176CF1C6968AA9B3BE3B05AAF3904BD43281_RuntimeMethod_var);
		((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var))->___s_Entries_0), (void*)L_0);
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
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatEntry__ctor_m95A29ECBB09E5F56185A6A71067960FB5B6F8A77 (MatEntry_tD74124F15DFFC330464B07BFE4F5A5D159C2C8C6* __this, const RuntimeMethod* method) 
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
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::Inverse(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B9_1 = NULL;
	{
		// self.x = Mathf.Approximately(self.x, 0) ? 1 : 1 / self.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___self0;
		float L_1 = L_0.___x_2;
		bool L_2;
		L_2 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_1, (0.0f), NULL);
		G_B1_0 = (&___self0);
		if (L_2)
		{
			G_B2_0 = (&___self0);
			goto IL_0023;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___self0;
		float L_4 = L_3.___x_2;
		G_B3_0 = ((float)((1.0f)/L_4));
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		G_B3_1->___x_2 = G_B3_0;
		// self.y = Mathf.Approximately(self.y, 0) ? 1 : 1 / self.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___self0;
		float L_6 = L_5.___y_3;
		bool L_7;
		L_7 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_6, (0.0f), NULL);
		G_B4_0 = (&___self0);
		if (L_7)
		{
			G_B5_0 = (&___self0);
			goto IL_004f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___self0;
		float L_9 = L_8.___y_3;
		G_B6_0 = ((float)((1.0f)/L_9));
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		G_B6_1->___y_3 = G_B6_0;
		// self.z = Mathf.Approximately(self.z, 0) ? 1 : 1 / self.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___self0;
		float L_11 = L_10.___z_4;
		bool L_12;
		L_12 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_11, (0.0f), NULL);
		G_B7_0 = (&___self0);
		if (L_12)
		{
			G_B8_0 = (&___self0);
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___self0;
		float L_14 = L_13.___z_4;
		G_B9_0 = ((float)((1.0f)/L_14));
		G_B9_1 = G_B7_0;
		goto IL_0080;
	}

IL_007b:
	{
		G_B9_0 = (1.0f);
		G_B9_1 = G_B8_0;
	}

IL_0080:
	{
		G_B9_1->___z_4 = G_B9_0;
		// return self;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___self0;
		V_0 = L_15;
		goto IL_0089;
	}

IL_0089:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::GetScaled(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other11, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// self.Scale(other1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___other11;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&___self0), L_0, NULL);
		// return self;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___self0;
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::GetScaled(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_GetScaled_m0045896A163F6848691633AB2A8AA99CB2EB4E52 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other22, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// self.Scale(other1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___other11;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&___self0), L_0, NULL);
		// self.Scale(other2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other22;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&___self0), L_1, NULL);
		// return self;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___self0;
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 Coffee.UIParticleExtensions.Vector3Extensions::GetScaled(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Extensions_GetScaled_mF8F549E879A837A29471C2391A8A09A048064D71 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other22, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other33, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// self.Scale(other1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___other11;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&___self0), L_0, NULL);
		// self.Scale(other2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other22;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&___self0), L_1, NULL);
		// self.Scale(other3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___other33;
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&___self0), L_2, NULL);
		// return self;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___self0;
		V_0 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Coffee.UIParticleExtensions.Vector3Extensions::IsVisible(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Extensions_IsVisible_m6A3E8644C9CC6227597EC01AFB95A36EC9AD8A54 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return 0 < Mathf.Abs(self.x * self.y * self.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___self0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___self0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___self0;
		float L_5 = L_4.___z_4;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_3)), L_5)));
		V_0 = (bool)((((float)(0.0f)) < ((float)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_7 = V_0;
		return L_7;
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
// UnityEngine.Texture2D Coffee.UIParticleExtensions.SpriteExtensions::GetActualTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* SpriteExtensions_GetActualTexture_mFA226985EF9C60364D45C115CDB1A56415292BD0 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B3_0 = NULL;
	{
		// return self ? self.texture : null;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___self0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___self0;
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = V_0;
		return L_4;
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
// UnityEngine.ParticleSystem/Particle[] Coffee.UIParticleExtensions.ParticleSystemExtensions::GetParticleArray(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ParticleSystemExtensions_GetParticleArray_m629E5875E57E88914BCC16C7328753B5ACB72116 (int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* V_2 = NULL;
	{
		// if (s_TmpParticles.Length < size)
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_0 = ((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0;
		NullCheck(L_0);
		int32_t L_1 = ___size0;
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		goto IL_001c;
	}

IL_0012:
	{
		// size = Mathf.NextPowerOfTwo(size);
		int32_t L_3 = ___size0;
		int32_t L_4;
		L_4 = Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014(L_3, NULL);
		___size0 = L_4;
	}

IL_001c:
	{
		// while(s_TmpParticles.Length < size)
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_5 = ((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0;
		NullCheck(L_5);
		int32_t L_6 = ___size0;
		V_1 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0012;
		}
	}
	{
		// s_TmpParticles = new ParticleSystem.Particle[size];
		int32_t L_8 = ___size0;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_9 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)SZArrayNew(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var, (uint32_t)L_8);
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0), (void*)L_9);
	}

IL_0036:
	{
		// return s_TmpParticles;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_10 = ((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0;
		V_2 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Coffee.UIParticleExtensions.ParticleSystemExtensions::CanBakeMesh(UnityEngine.ParticleSystemRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystemExtensions_CanBakeMesh_m511867228B928821D0860A599BFA89601B07C03E (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (self.renderMode == ParticleSystemRenderMode.Mesh && self.mesh == null) return false;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_0 = ___self0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ParticleSystemRenderer_get_renderMode_m3987FC7C0D54B11949FFECEAD5DFCE68FF872061(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0018;
		}
	}
	{
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_2 = ___self0;
		NullCheck(L_2);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = ParticleSystemRenderer_get_mesh_mE2E2318844C5F3F32E0A556E65A23CB7F48B5F65(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// if (self.renderMode == ParticleSystemRenderMode.Mesh && self.mesh == null) return false;
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0021:
	{
		// if (self.renderMode == ParticleSystemRenderMode.None) return false;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_6 = ___self0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ParticleSystemRenderer_get_renderMode_m3987FC7C0D54B11949FFECEAD5DFCE68FF872061(L_6, NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)5))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// if (self.renderMode == ParticleSystemRenderMode.None) return false;
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0032:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.ParticleSystemSimulationSpace Coffee.UIParticleExtensions.ParticleSystemExtensions::GetActualSimulationSpace(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensions_GetActualSimulationSpace_mED1F78247B56DAF453A7D3C15E2C3C6FE5FFD362 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		// var main = self.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___self0;
		NullCheck(L_0);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_1;
		L_1 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_0, NULL);
		V_0 = L_1;
		// var space = main.simulationSpace;
		int32_t L_2;
		L_2 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC((&V_0), NULL);
		V_1 = L_2;
		// if (space == ParticleSystemSimulationSpace.Custom && !main.customSimulationSpace)
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = MainModule_get_customSimulationSpace_mCCB54D66ACBD9DFDC0A8DF80EB569658C1F6FAEF((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// space = ParticleSystemSimulationSpace.Local;
		V_1 = 0;
	}

IL_002c:
	{
		// return space;
		int32_t L_7 = V_1;
		V_3 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_8 = V_3;
		return L_8;
	}
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::SortForRendering(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_SortForRendering_mAC18698754AF8304AB68184607911A836A502AE5 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___self0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform1, bool ___sortByMaterial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m575921CC7F37FDCC9476A7B0F9E2F6BC448CA8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CSortForRenderingU3Eb__0_mB0AEAFBDD90132F4CA3B97BD9EFF25EE1E91A77C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* L_0 = (U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m1F619A4C5209CD9182A65CFA3EC3729F47E8CA0D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transform1;
		NullCheck(L_1);
		L_1->___transform_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___transform_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* L_3 = V_0;
		bool L_4 = ___sortByMaterial2;
		NullCheck(L_3);
		L_3->___sortByMaterial_1 = L_4;
		U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* L_5 = V_0;
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_6 = ___self0;
		NullCheck(L_5);
		L_5->___self_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___self_2), (void*)L_6);
		// self.Sort((a, b) =>
		// {
		//     var tr = transform;
		//     var aRenderer = a.GetComponent<ParticleSystemRenderer>();
		//     var bRenderer = b.GetComponent<ParticleSystemRenderer>();
		// 
		//     // Render queue: ascending
		//     var aMat = aRenderer.sharedMaterial ?? aRenderer.trailMaterial;
		//     var bMat = bRenderer.sharedMaterial ?? bRenderer.trailMaterial;
		//     if (!aMat && !bMat) return 0;
		//     if (!aMat) return -1;
		//     if (!bMat) return 1;
		// 
		//     if (sortByMaterial)
		//         return aMat.GetInstanceID() - bMat.GetInstanceID();
		// 
		//     if (aMat.renderQueue != bMat.renderQueue)
		//         return aMat.renderQueue - bMat.renderQueue;
		// 
		//     // Sorting layer: ascending
		//     if (aRenderer.sortingLayerID != bRenderer.sortingLayerID)
		//         return SortingLayer.GetLayerValueFromID(aRenderer.sortingLayerID) - SortingLayer.GetLayerValueFromID(bRenderer.sortingLayerID);
		// 
		//     // Sorting order: ascending
		//     if (aRenderer.sortingOrder != bRenderer.sortingOrder)
		//         return aRenderer.sortingOrder - bRenderer.sortingOrder;
		// 
		//     // Z position & sortingFudge: descending
		//     var aTransform = a.transform;
		//     var bTransform = b.transform;
		//     var aPos = tr.InverseTransformPoint(aTransform.position).z + aRenderer.sortingFudge;
		//     var bPos = tr.InverseTransformPoint(bTransform.position).z + bRenderer.sortingFudge;
		//     if (!Mathf.Approximately(aPos, bPos))
		//         return (int)Mathf.Sign(bPos - aPos);
		// 
		//     return (int)Mathf.Sign(GetIndex(self, a) - GetIndex(self, b));
		// });
		U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* L_7 = V_0;
		NullCheck(L_7);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_8 = L_7->___self_2;
		U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* L_9 = V_0;
		Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14* L_10 = (Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14*)il2cpp_codegen_object_new(Comparison_1_t5AB70D4C03C5CD2314983C261C896102FCACBA14_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Comparison_1__ctor_mD1255815116A13B87CF3F7FD473EF0C4FF52CE4E(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CSortForRenderingU3Eb__0_mB0AEAFBDD90132F4CA3B97BD9EFF25EE1E91A77C_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		List_1_Sort_m575921CC7F37FDCC9476A7B0F9E2F6BC448CA8B6(L_8, L_10, List_1_Sort_m575921CC7F37FDCC9476A7B0F9E2F6BC448CA8B6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Coffee.UIParticleExtensions.ParticleSystemExtensions::GetIndex(System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensions_GetIndex_mD7149509ECDDEBFE1F9EF8231330EAD5F3677890 (RuntimeObject* ___list0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___ps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1DC364E5410E2617892D4CEF18A65BEA2E44D342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t72FB00ED108E0B025CB606B5D30FDCAFA71EC96E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// for (var i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0005:
	{
		// if (list[i].GetInstanceID() == ps.GetInstanceID()) return i;
		RuntimeObject* L_0 = ___list0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2;
		L_2 = InterfaceFuncInvoker1< ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::get_Item(System.Int32) */, IList_1_t72FB00ED108E0B025CB606B5D30FDCAFA71EC96E_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___ps1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_4, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// if (list[i].GetInstanceID() == ps.GetInstanceID()) return i;
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0038;
	}

IL_0022:
	{
		// for (var i = 0; i < list.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		// for (var i = 0; i < list.Count; i++)
		int32_t L_9 = V_0;
		RuntimeObject* L_10 = ___list0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::get_Count() */, ICollection_1_t1DC364E5410E2617892D4CEF18A65BEA2E44D342_il2cpp_TypeInfo_var, L_10);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		int32_t L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.Texture2D Coffee.UIParticleExtensions.ParticleSystemExtensions::GetTextureForSprite(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ParticleSystemExtensions_GetTextureForSprite_mA3097381DFF8AA5975E5A942E5C693E620964D6B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!self) return null;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___self0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (!self) return null;
		V_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_0082;
	}

IL_0012:
	{
		// var tsaModule = self.textureSheetAnimation;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = ___self0;
		NullCheck(L_3);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_4;
		L_4 = ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B(L_3, NULL);
		V_0 = L_4;
		// if (!tsaModule.enabled || tsaModule.mode != ParticleSystemAnimationMode.Sprites) return null;
		bool L_5;
		L_5 = TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136((&V_0), NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6;
		L_6 = TextureSheetAnimationModule_get_mode_m675B6ECB7DE53BBCDAEEA723757A8341417B2CA6((&V_0), NULL);
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 1;
	}

IL_0032:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// if (!tsaModule.enabled || tsaModule.mode != ParticleSystemAnimationMode.Sprites) return null;
		V_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_0082;
	}

IL_003a:
	{
		// for (var i = 0; i < tsaModule.spriteCount; i++)
		V_4 = 0;
		goto IL_006d;
	}

IL_003f:
	{
		// var sprite = tsaModule.GetSprite(i);
		int32_t L_8 = V_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = TextureSheetAnimationModule_GetSprite_mD35652D2AC3B135427DE5EC42AFC62051693BEB6((&V_0), L_8, NULL);
		V_5 = L_9;
		// if (!sprite) continue;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// if (!sprite) continue;
		goto IL_0067;
	}

IL_005d:
	{
		// return sprite.GetActualTexture();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = V_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14;
		L_14 = SpriteExtensions_GetActualTexture_mFA226985EF9C60364D45C115CDB1A56415292BD0(L_13, NULL);
		V_2 = L_14;
		goto IL_0082;
	}

IL_0067:
	{
		// for (var i = 0; i < tsaModule.spriteCount; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006d:
	{
		// for (var i = 0; i < tsaModule.spriteCount; i++)
		int32_t L_16 = V_4;
		int32_t L_17;
		L_17 = TextureSheetAnimationModule_get_spriteCount_m575F53291200E03602CF854CA93A5BCE2890DD85((&V_0), NULL);
		V_7 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_7;
		if (L_18)
		{
			goto IL_003f;
		}
	}
	{
		// return null;
		V_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_0082;
	}

IL_0082:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = V_2;
		return L_19;
	}
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::Exec(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,System.Action`1<UnityEngine.ParticleSystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_Exec_mE364884A373D7868A7A3FC79A534144093ACAFAF (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___self0, Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_mD32E4C8CF97486593065599879B45D1EDF5008F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExecU3Eb__7_0_mAA5D4817E6876DD7B94ED07A25C75397CA70B688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* G_B2_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B2_1 = NULL;
	Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* G_B1_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B1_1 = NULL;
	{
		// self.RemoveAll(p => !p);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0 = ___self0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var);
		Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* L_1 = ((U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var);
		U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1* L_3 = ((U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* L_4 = (Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD*)il2cpp_codegen_object_new(Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_mDCC2653E12642E8D80F98FE5AA07FAA226F83CA7(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CExecU3Eb__7_0_mAA5D4817E6876DD7B94ED07A25C75397CA70B688_RuntimeMethod_var), NULL);
		Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* L_5 = L_4;
		((U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		NullCheck(G_B2_1);
		int32_t L_6;
		L_6 = List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3(G_B2_1, G_B2_0, List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3_RuntimeMethod_var);
		// self.ForEach(action);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_7 = ___self0;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_8 = ___action1;
		NullCheck(L_7);
		List_1_ForEach_mD32E4C8CF97486593065599879B45D1EDF5008F7(L_7, L_8, List_1_ForEach_mD32E4C8CF97486593065599879B45D1EDF5008F7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions__cctor_mA18E7D2153483220207A41F7B0EEB19FDFF17717 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ParticleSystem.Particle[] s_TmpParticles = new ParticleSystem.Particle[2048];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_0 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)SZArrayNew(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var))->___s_TmpParticles_0), (void*)L_0);
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
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m1F619A4C5209CD9182A65CFA3EC3729F47E8CA0D (U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass4_0::<SortForRendering>b__0(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass4_0_U3CSortForRenderingU3Eb__0_mB0AEAFBDD90132F4CA3B97BD9EFF25EE1E91A77C (U3CU3Ec__DisplayClass4_0_tC8B4F014D1440154E6E1CF0EED1F1F473EFF4387* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___a0, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* V_1 = NULL;
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* V_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		// var tr = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transform_0;
		V_0 = L_0;
		// var aRenderer = a.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = ___a0;
		NullCheck(L_1);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_2;
		L_2 = Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023(L_1, Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		V_1 = L_2;
		// var bRenderer = b.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = ___b1;
		NullCheck(L_3);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_4;
		L_4 = Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023(L_3, Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		V_2 = L_4;
		// var aMat = aRenderer.sharedMaterial ?? aRenderer.trailMaterial;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_5 = V_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_5, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0026;
		}
	}
	{
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_8 = V_1;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = ParticleSystemRenderer_get_trailMaterial_m867F4445CF404D4D1C6970BF645C70BA1784A005(L_8, NULL);
		G_B2_0 = L_9;
	}

IL_0026:
	{
		V_3 = G_B2_0;
		// var bMat = bRenderer.sharedMaterial ?? bRenderer.trailMaterial;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_10 = V_2;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_10, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0037;
		}
	}
	{
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_13 = V_2;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = ParticleSystemRenderer_get_trailMaterial_m867F4445CF404D4D1C6970BF645C70BA1784A005(L_13, NULL);
		G_B4_0 = L_14;
	}

IL_0037:
	{
		V_4 = G_B4_0;
		// if (!aMat && !bMat) return 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		if (L_16)
		{
			goto IL_004d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_17, NULL);
		G_B7_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B7_0 = 0;
	}

IL_004e:
	{
		V_9 = (bool)G_B7_0;
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		// if (!aMat && !bMat) return 0;
		V_10 = 0;
		goto IL_01c4;
	}

IL_005c:
	{
		// if (!aMat) return -1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_20, NULL);
		V_11 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		// if (!aMat) return -1;
		V_10 = (-1);
		goto IL_01c4;
	}

IL_0073:
	{
		// if (!bMat) return 1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		V_12 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		// if (!bMat) return 1;
		V_10 = 1;
		goto IL_01c4;
	}

IL_008b:
	{
		// if (sortByMaterial)
		bool L_26 = __this->___sortByMaterial_1;
		V_13 = L_26;
		bool L_27 = V_13;
		if (!L_27)
		{
			goto IL_00ac;
		}
	}
	{
		// return aMat.GetInstanceID() - bMat.GetInstanceID();
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_28, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = V_4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_30, NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_29, L_31));
		goto IL_01c4;
	}

IL_00ac:
	{
		// if (aMat.renderQueue != bMat.renderQueue)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_32, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = V_4;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_34, NULL);
		V_14 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_14;
		if (!L_36)
		{
			goto IL_00d9;
		}
	}
	{
		// return aMat.renderQueue - bMat.renderQueue;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_37, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_39, NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_38, L_40));
		goto IL_01c4;
	}

IL_00d9:
	{
		// if (aRenderer.sortingLayerID != bRenderer.sortingLayerID)
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_41, NULL);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_43 = V_2;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_43, NULL);
		V_15 = (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)L_44))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_15;
		if (!L_45)
		{
			goto IL_010e;
		}
	}
	{
		// return SortingLayer.GetLayerValueFromID(aRenderer.sortingLayerID) - SortingLayer.GetLayerValueFromID(bRenderer.sortingLayerID);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_46, NULL);
		int32_t L_48;
		L_48 = SortingLayer_GetLayerValueFromID_mBB4C1609D3D68940C64087C874E16A817D90321B(L_47, NULL);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_49 = V_2;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_49, NULL);
		int32_t L_51;
		L_51 = SortingLayer_GetLayerValueFromID_mBB4C1609D3D68940C64087C874E16A817D90321B(L_50, NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_48, L_51));
		goto IL_01c4;
	}

IL_010e:
	{
		// if (aRenderer.sortingOrder != bRenderer.sortingOrder)
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_52, NULL);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_54 = V_2;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_54, NULL);
		V_16 = (bool)((((int32_t)((((int32_t)L_53) == ((int32_t)L_55))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_16;
		if (!L_56)
		{
			goto IL_0139;
		}
	}
	{
		// return aRenderer.sortingOrder - bRenderer.sortingOrder;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_57 = V_1;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_57, NULL);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_59, NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_58, L_60));
		goto IL_01c4;
	}

IL_0139:
	{
		// var aTransform = a.transform;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_61 = ___a0;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_61, NULL);
		V_5 = L_62;
		// var bTransform = b.transform;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_63 = ___b1;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		V_6 = L_64;
		// var aPos = tr.InverseTransformPoint(aTransform.position).z + aRenderer.sortingFudge;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = V_5;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_65, L_67, NULL);
		float L_69 = L_68.___z_4;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_70 = V_1;
		NullCheck(L_70);
		float L_71;
		L_71 = ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48(L_70, NULL);
		V_7 = ((float)il2cpp_codegen_add(L_69, L_71));
		// var bPos = tr.InverseTransformPoint(bTransform.position).z + bRenderer.sortingFudge;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = V_6;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_72, L_74, NULL);
		float L_76 = L_75.___z_4;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_77 = V_2;
		NullCheck(L_77);
		float L_78;
		L_78 = ParticleSystemRenderer_get_sortingFudge_mE8617225CDEB6C31A6D75FFF91FCCDF8D95ABF48(L_77, NULL);
		V_8 = ((float)il2cpp_codegen_add(L_76, L_78));
		// if (!Mathf.Approximately(aPos, bPos))
		float L_79 = V_7;
		float L_80 = V_8;
		bool L_81;
		L_81 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_79, L_80, NULL);
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01a0;
		}
	}
	{
		// return (int)Mathf.Sign(bPos - aPos);
		float L_83 = V_8;
		float L_84 = V_7;
		float L_85;
		L_85 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_subtract(L_83, L_84)), NULL);
		V_10 = il2cpp_codegen_cast_double_to_int<int32_t>(L_85);
		goto IL_01c4;
	}

IL_01a0:
	{
		// return (int)Mathf.Sign(GetIndex(self, a) - GetIndex(self, b));
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_86 = __this->___self_2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_87 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		int32_t L_88;
		L_88 = ParticleSystemExtensions_GetIndex_mD7149509ECDDEBFE1F9EF8231330EAD5F3677890(L_86, L_87, NULL);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_89 = __this->___self_2;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_90 = ___b1;
		int32_t L_91;
		L_91 = ParticleSystemExtensions_GetIndex_mD7149509ECDDEBFE1F9EF8231330EAD5F3677890(L_89, L_90, NULL);
		float L_92;
		L_92 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)((int32_t)il2cpp_codegen_subtract(L_88, L_91))), NULL);
		V_10 = il2cpp_codegen_cast_double_to_int<int32_t>(L_92);
		goto IL_01c4;
	}

IL_01c4:
	{
		// });
		int32_t L_93 = V_10;
		return L_93;
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
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m16D656575BC5D67B1DAC18B9F3CD71F7810516E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1* L_0 = (U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1*)il2cpp_codegen_object_new(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEACF68918C3839EF55A2D57219BA9F2632C7BC88(L_0, NULL);
		((U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEACF68918C3839EF55A2D57219BA9F2632C7BC88 (U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::<Exec>b__7_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExecU3Eb__7_0_mAA5D4817E6876DD7B94ED07A25C75397CA70B688 (U3CU3Ec_t1F7836B3E2739F523958DD0B4CDA644FA11F04E1* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// self.RemoveAll(p => !p);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Int32 Coffee.UIExtensions.AnimatableProperty::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) 
{
	{
		// public int id { get; private set; }
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_set_id_mD7944AD0E42E0557BB99B36C3C2F13734D2981B3 (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int id { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType Coffee.UIExtensions.AnimatableProperty::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_type_mD826320325E689819E2858A8BB25F102BE6878C3 (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Type; }
		int32_t L_0 = __this->___m_Type_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Type; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::UpdateMaterialProperties(UnityEngine.Material,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_UpdateMaterialProperties_mCBB1CDEC2003A0D97793B4AF7A097141E000BDEA (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___mpb1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	{
		// if (!material.HasProperty(id)) return;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		int32_t L_1;
		L_1 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// if (!material.HasProperty(id)) return;
		goto IL_0109;
	}

IL_0019:
	{
		// switch (type)
		int32_t L_4;
		L_4 = AnimatableProperty_get_type_mD826320325E689819E2858A8BB25F102BE6878C3(__this, NULL);
		V_6 = L_4;
		int32_t L_5 = V_6;
		V_5 = L_5;
		int32_t L_6 = V_5;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_007b;
			}
			case 2:
			{
				goto IL_00ae;
			}
			case 3:
			{
				goto IL_00ae;
			}
			case 4:
			{
				goto IL_00dc;
			}
		}
	}
	{
		goto IL_0109;
	}

IL_0045:
	{
		// var color = mpb.GetColor(id);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_7 = ___mpb1;
		int32_t L_8;
		L_8 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = MaterialPropertyBlock_GetColor_m4F65D7F8EC406C8AF05EE8AD4DC957F20D60EC4F(L_7, L_8, NULL);
		V_1 = L_9;
		// if (color != default(Color))
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_1;
		il2cpp_codegen_initobj((&V_8), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_8;
		bool L_12;
		L_12 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_10, L_11, NULL);
		V_7 = L_12;
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		// material.SetColor(id, color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = ___material0;
		int32_t L_15;
		L_15 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_1;
		NullCheck(L_14);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_14, L_15, L_16, NULL);
	}

IL_0076:
	{
		// break;
		goto IL_0109;
	}

IL_007b:
	{
		// var vector = mpb.GetVector(id);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_17 = ___mpb1;
		int32_t L_18;
		L_18 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		NullCheck(L_17);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19;
		L_19 = MaterialPropertyBlock_GetVector_mFB1EDB2008F46FF8D452B77D1FD27AA5530D1C2F(L_17, L_18, NULL);
		V_2 = L_19;
		// if (vector != default(Vector4))
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = V_2;
		il2cpp_codegen_initobj((&V_10), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_10;
		bool L_22;
		L_22 = Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline(L_20, L_21, NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		// material.SetVector(id, vector);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = ___material0;
		int32_t L_25;
		L_25 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_2;
		NullCheck(L_24);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_24, L_25, L_26, NULL);
	}

IL_00ac:
	{
		// break;
		goto IL_0109;
	}

IL_00ae:
	{
		// var value = mpb.GetFloat(id);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_27 = ___mpb1;
		int32_t L_28;
		L_28 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		NullCheck(L_27);
		float L_29;
		L_29 = MaterialPropertyBlock_GetFloat_m569A4AE2E3925A80996F525E3E97E59B55128BEE(L_27, L_28, NULL);
		V_3 = L_29;
		// if (value != default(float))
		float L_30 = V_3;
		V_11 = (bool)((((int32_t)((((float)L_30) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_00da;
		}
	}
	{
		// material.SetFloat(id, value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = ___material0;
		int32_t L_33;
		L_33 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		float L_34 = V_3;
		NullCheck(L_32);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_32, L_33, L_34, NULL);
	}

IL_00da:
	{
		// break;
		goto IL_0109;
	}

IL_00dc:
	{
		// var tex = mpb.GetTexture(id);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_35 = ___mpb1;
		int32_t L_36;
		L_36 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		NullCheck(L_35);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_37;
		L_37 = MaterialPropertyBlock_GetTexture_m639AFB0B59A91E4A3E0415FBA7943FC0CD9F5CF1(L_35, L_36, NULL);
		V_4 = L_37;
		// if (tex != default(Texture))
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_38 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_12 = L_39;
		bool L_40 = V_12;
		if (!L_40)
		{
			goto IL_0107;
		}
	}
	{
		// material.SetTexture(id, tex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = ___material0;
		int32_t L_42;
		L_42 = AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_43 = V_4;
		NullCheck(L_41);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_41, L_42, L_43, NULL);
	}

IL_0107:
	{
		// break;
		goto IL_0109;
	}

IL_0109:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_OnBeforeSerialize_m4CBFA69ED59A1B2C1190717FDA2E899FC08CDB43 (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_OnAfterDeserialize_m5C476DC39F7732524AF68C11686B4F636C3573E5 (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) 
{
	{
		// id = Shader.PropertyToID(m_Name);
		String_t* L_0 = __this->___m_Name_0;
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(L_0, NULL);
		AnimatableProperty_set_id_mD7944AD0E42E0557BB99B36C3C2F13734D2981B3_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty__ctor_m0351CF48B18DD6387BD4258DFE3DDE08831DB660 (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string m_Name = "";
		__this->___m_Name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] ShaderPropertyType m_Type = ShaderPropertyType.Vector;
		__this->___m_Type_1 = 1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Coffee.UIExtensions.UIParticle::get_raycastTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_raycastTarget_m5AA3BF3A00B45B1E875B1EE1AA50AF049510867B (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_raycastTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_raycastTarget_m02EAF9B3D73D60E80E6D8D37CFDB14B603F5E06D (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// Coffee.UIExtensions.UIParticle/MeshSharing Coffee.UIExtensions.UIParticle::get_meshSharing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticle_get_meshSharing_mB5632CFE43194AD9264EFC511383CD7EAC54D5DC (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_MeshSharing; }
		int32_t L_0 = __this->___m_MeshSharing_40;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MeshSharing; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_meshSharing(Coffee.UIExtensions.UIParticle/MeshSharing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_meshSharing_m9A0563347AC9CC9DF3B391D6C3BF5DF880558C6C (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_MeshSharing = value; }
		int32_t L_0 = ___value0;
		__this->___m_MeshSharing_40 = L_0;
		// set { m_MeshSharing = value; }
		return;
	}
}
// System.Int32 Coffee.UIExtensions.UIParticle::get_groupId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _groupId; }
		int32_t L_0 = __this->____groupId_47;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _groupId; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_groupId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_groupId_mE747C7AB3F9F70292FB5FF462EC487215DF5DF56 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_GroupId == value) return;
		int32_t L_0 = __this->___m_GroupId_41;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (m_GroupId == value) return;
		goto IL_0033;
	}

IL_0010:
	{
		// m_GroupId = value;
		int32_t L_3 = ___value0;
		__this->___m_GroupId_41 = L_3;
		// if (m_GroupId != m_GroupMaxId)
		int32_t L_4 = __this->___m_GroupId_41;
		int32_t L_5 = __this->___m_GroupMaxId_42;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// ResetGroupId();
		UIParticle_ResetGroupId_mCCF269CE3E29E779C8C7F70BC8EFCA1E76129545(__this, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Int32 Coffee.UIExtensions.UIParticle::get_groupMaxId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticle_get_groupMaxId_mD8A4EBAC4222D93AD4699C6DE9554A8DC8A0545B (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_GroupMaxId; }
		int32_t L_0 = __this->___m_GroupMaxId_42;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_GroupMaxId; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_groupMaxId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_groupMaxId_mE0045FE1B41A72BE1C8ACEDFD41AC9BBDC01437E (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_GroupMaxId == value) return;
		int32_t L_0 = __this->___m_GroupMaxId_42;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (m_GroupMaxId == value) return;
		goto IL_001e;
	}

IL_0010:
	{
		// m_GroupMaxId = value;
		int32_t L_3 = ___value0;
		__this->___m_GroupMaxId_42 = L_3;
		// ResetGroupId();
		UIParticle_ResetGroupId_mCCF269CE3E29E779C8C7F70BC8EFCA1E76129545(__this, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_absoluteMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_absoluteMode_m8BA7DE6C5FBFF684D12AFE4DB69AC994180A5EDF (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_AbsoluteMode; }
		bool L_0 = __this->___m_AbsoluteMode_43;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_AbsoluteMode; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_absoluteMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_absoluteMode_mF71B11ABD88B0258A8857C9CF5C19D7C549133B6 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_AbsoluteMode = value; }
		bool L_0 = ___value0;
		__this->___m_AbsoluteMode_43 = L_0;
		// set { m_AbsoluteMode = value; }
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_useMeshSharing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_MeshSharing != MeshSharing.None; }
		int32_t L_0 = __this->___m_MeshSharing_40;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return m_MeshSharing != MeshSharing.None; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_isPrimary_mE05CB06D3F9B5B1CD5A6D1CFEB9CC4FF8174A0CA (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return m_MeshSharing == MeshSharing.Primary || m_MeshSharing == MeshSharing.PrimarySimulator; }
		int32_t L_0 = __this->___m_MeshSharing_40;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_MeshSharing_40;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// get { return m_MeshSharing == MeshSharing.Primary || m_MeshSharing == MeshSharing.PrimarySimulator; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_canSimulate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_canSimulate_m762C8B5EE86615A2D12E6773EBF982CDF190FB80 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// get { return m_MeshSharing == MeshSharing.None || m_MeshSharing == MeshSharing.Auto || m_MeshSharing == MeshSharing.Primary || m_MeshSharing == MeshSharing.PrimarySimulator; }
		int32_t L_0 = __this->___m_MeshSharing_40;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = __this->___m_MeshSharing_40;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = __this->___m_MeshSharing_40;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->___m_MeshSharing_40;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B5_0;
		goto IL_002a;
	}

IL_002a:
	{
		// get { return m_MeshSharing == MeshSharing.None || m_MeshSharing == MeshSharing.Auto || m_MeshSharing == MeshSharing.Primary || m_MeshSharing == MeshSharing.PrimarySimulator; }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_canRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_canRender_mA306605C69B343C33FEF48259D65F3262C040032 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// get { return m_MeshSharing == MeshSharing.None || m_MeshSharing == MeshSharing.Auto || m_MeshSharing == MeshSharing.Primary || m_MeshSharing == MeshSharing.Reprica; }
		int32_t L_0 = __this->___m_MeshSharing_40;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = __this->___m_MeshSharing_40;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = __this->___m_MeshSharing_40;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->___m_MeshSharing_40;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)4))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B5_0;
		goto IL_002a;
	}

IL_002a:
	{
		// get { return m_MeshSharing == MeshSharing.None || m_MeshSharing == MeshSharing.Auto || m_MeshSharing == MeshSharing.Primary || m_MeshSharing == MeshSharing.Reprica; }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Single Coffee.UIExtensions.UIParticle::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIParticle_get_scale_m3D52659CFC5F295BB52C273E1AE5889DB31ABCDB (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return m_Scale3D.x; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___m_Scale3D_37);
		float L_1 = L_0->___x_2;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return m_Scale3D.x; }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_scale_m949A32707E29C4D6228AD939EF25420861F56E72 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Scale3D = new Vector3(value, value, value); }
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___m_Scale3D_37 = L_3;
		// set { m_Scale3D = new Vector3(value, value, value); }
		return;
	}
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::get_scale3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticle_get_scale3D_mCEBA095AC7965D040D06922E02276BCD6956D0D7 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_Scale3D; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Scale3D_37;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Scale3D; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_scale3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_scale3D_m4CE3A13EB6C406EC0CBFBD1B1BFDDA5DC0613FB1 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Scale3D = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_Scale3D_37 = L_0;
		// set { m_Scale3D = value; }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::get_particles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* V_0 = NULL;
	{
		// get { return m_Particles; }
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0 = __this->___m_Particles_39;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Particles; }
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIParticle_get_materials_m3E44DAC112357DE1A925E2966AEFAB59E3B071E9 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* L_0 = (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9*)il2cpp_codegen_object_new(U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_materialsU3Ed__45__ctor_m2965B2FDD5D8611C8CBA1A58D8BB8FED3B314CFF(L_0, ((int32_t)-2), NULL);
		V_0 = L_0;
		U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* L_2 = V_0;
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Material Coffee.UIExtensions.UIParticle::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* UIParticle_get_materialForRendering_mEE797FABE609B840F9C9E2D8A471C019BC6E9B01 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// get { return null; }
		V_0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return null; }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_isPaused_m690FE640B6BFAA5FA947F3D1C06557769ADBC7A3 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// public bool isPaused { get; internal set; }
		bool L_0 = __this->___U3CisPausedU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_isPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isPaused { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CisPausedU3Ek__BackingField_48 = L_0;
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Play_m1172BE3536CF81E2F204D61D43243317999F9561 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPlayU3Eb__52_0_m17345A73E62BEBC5AC3776503CA5206200CF554B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B2_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B2_1 = NULL;
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B1_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Simulate(0, false, true));
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0;
		L_0 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_1 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__52_0_1;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_3 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_4 = (Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5*)il2cpp_codegen_object_new(Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m8F92F11AA54AAB578EDEBA52FF1AE343E6C389D2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CPlayU3Eb__52_0_m17345A73E62BEBC5AC3776503CA5206200CF554B_RuntimeMethod_var), NULL);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_5 = L_4;
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__52_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__52_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleSystemExtensions_Exec_mE364884A373D7868A7A3FC79A534144093ACAFAF(G_B2_1, G_B2_0, NULL);
		// isPaused = false;
		UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Pause_mA81D7E4A34ADF69151C9171ADA0CC73B5AD8367F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPauseU3Eb__53_0_m40AC4E1147DCAB561C538B4DC5152E5E52FEA873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B2_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B2_1 = NULL;
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B1_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Pause());
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0;
		L_0 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_1 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__53_0_2;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_3 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_4 = (Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5*)il2cpp_codegen_object_new(Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m8F92F11AA54AAB578EDEBA52FF1AE343E6C389D2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CPauseU3Eb__53_0_m40AC4E1147DCAB561C538B4DC5152E5E52FEA873_RuntimeMethod_var), NULL);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_5 = L_4;
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__53_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__53_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleSystemExtensions_Exec_mE364884A373D7868A7A3FC79A534144093ACAFAF(G_B2_1, G_B2_0, NULL);
		// isPaused = true;
		UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Resume_mE163735D4AE93A332D9F0FED8CCBB86D5B490147 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// isPaused = false;
		UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Stop_m2472AC98073DDC42F3291409C9DA9745E7BF0263 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStopU3Eb__55_0_m174CF951BFE9FABCA287727A848D512C5259220A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B2_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B2_1 = NULL;
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B1_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Stop());
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0;
		L_0 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_1 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__55_0_3;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_3 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_4 = (Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5*)il2cpp_codegen_object_new(Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m8F92F11AA54AAB578EDEBA52FF1AE343E6C389D2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CStopU3Eb__55_0_m174CF951BFE9FABCA287727A848D512C5259220A_RuntimeMethod_var), NULL);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_5 = L_4;
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__55_0_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__55_0_3), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleSystemExtensions_Exec_mE364884A373D7868A7A3FC79A534144093ACAFAF(G_B2_1, G_B2_0, NULL);
		// isPaused = true;
		UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Clear_mDE09F594EDBF5B463CBFD1BFA437866769A32540 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CClearU3Eb__56_0_m1F11054A89363CED17EBC8D2215CA9AA935990B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B2_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B2_1 = NULL;
	Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* G_B1_0 = NULL;
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Clear());
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0;
		L_0 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_1 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__56_0_4;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_3 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_4 = (Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5*)il2cpp_codegen_object_new(Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m8F92F11AA54AAB578EDEBA52FF1AE343E6C389D2(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CClearU3Eb__56_0_m1F11054A89363CED17EBC8D2215CA9AA935990B7_RuntimeMethod_var), NULL);
		Action_1_t0FCAFCB292CE179C907E98DD17FF1061E6CAC5F5* L_5 = L_4;
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__56_0_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__56_0_4), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleSystemExtensions_Exec_mE364884A373D7868A7A3FC79A534144093ACAFAF(G_B2_1, G_B2_0, NULL);
		// isPaused = true;
		UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemInstance(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemInstance_m14B352C3B13E41F4E2EBD22FE48D33CCCFB3A228 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instance0, const RuntimeMethod* method) 
{
	{
		// SetParticleSystemInstance(instance, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___instance0;
		UIParticle_SetParticleSystemInstance_m1861DAA2786A8487DED8268798215D02C20DF76E(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemInstance(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemInstance_m1861DAA2786A8487DED8268798215D02C20DF76E (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instance0, bool ___destroyOldParticles1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		// if (!instance) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___instance0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!instance) return;
		goto IL_009d;
	}

IL_0013:
	{
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_2;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_6;
					if (!L_6)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_7 = V_6;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0022_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_8 = V_2;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_3 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// var go = child.gameObject;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_3;
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
				V_4 = L_11;
				// go.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_4;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
				// if (!destroyOldParticles) continue;
				bool L_13 = ___destroyOldParticles1;
				V_5 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
				bool L_14 = V_5;
				if (!L_14)
				{
					goto IL_004c_1;
				}
			}
			{
				// if (!destroyOldParticles) continue;
				goto IL_0055_1;
			}

IL_004c_1:
			{
				// Destroy(go);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_15, NULL);
			}

IL_0055_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		// var tr = instance.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ___instance0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		V_0 = L_19;
		// tr.SetParent(transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_20, L_21, (bool)0, NULL);
		// tr.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_22);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_22, L_23, NULL);
		// RefreshParticles(instance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = ___instance0;
		UIParticle_RefreshParticles_mB7BA09B83D6B2A93A4F9DB909DD420D4E438FAB1(__this, L_24, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemPrefab_mB1BF6C6C47DF410B2B42BC4F24AC7E7AD860A6EA (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!prefab) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (!prefab) return;
		goto IL_0023;
	}

IL_0010:
	{
		// SetParticleSystemInstance(Instantiate(prefab.gameObject), true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___prefab0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		UIParticle_SetParticleSystemInstance_m1861DAA2786A8487DED8268798215D02C20DF76E(__this, L_5, (bool)1, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_mE43630019E83200D10F07E3454A1D2F5EF68824D (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// RefreshParticles(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		UIParticle_RefreshParticles_mB7BA09B83D6B2A93A4F9DB909DD420D4E438FAB1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_mB7BA09B83D6B2A93A4F9DB909DD420D4E438FAB1 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m85426FEF7B77EAB7E8D29B4D8C6662F665DC3819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_U3CRefreshParticlesU3Eb__61_0_mD35B7901C44997DB50B4087B999923C75C4B60A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_2 = NULL;
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!root) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___root0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!root) return;
		goto IL_00a5;
	}

IL_0013:
	{
		// root.GetComponentsInChildren(particles);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___root0;
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_4;
		L_4 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		NullCheck(L_3);
		GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m85426FEF7B77EAB7E8D29B4D8C6662F665DC3819(L_3, L_4, GameObject_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m85426FEF7B77EAB7E8D29B4D8C6662F665DC3819_RuntimeMethod_var);
		// particles.RemoveAll(x => x.GetComponentInParent<UIParticle>() != this);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_5;
		L_5 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD* L_6 = (Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD*)il2cpp_codegen_object_new(Predicate_1_t9EBDA213D451800B4BDB5956738B502A621E6EDD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_mDCC2653E12642E8D80F98FE5AA07FAA226F83CA7(L_6, __this, (intptr_t)((void*)UIParticle_U3CRefreshParticlesU3Eb__61_0_mD35B7901C44997DB50B4087B999923C75C4B60A0_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3(L_5, L_6, List_1_RemoveAll_mC8BE3156CBF4B416F02D4852BEA4BB13E6076FB3_RuntimeMethod_var);
		// foreach (var ps in particles)
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_8;
		L_8 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		NullCheck(L_8);
		Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F L_9;
		L_9 = List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C(L_8, List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0089:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422((&V_1), Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007e_1;
			}

IL_0047_1:
			{
				// foreach (var ps in particles)
				ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10;
				L_10 = Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_inline((&V_1), Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var);
				V_2 = L_10;
				// var tsa = ps.textureSheetAnimation;
				ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = V_2;
				NullCheck(L_11);
				TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_12;
				L_12 = ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B(L_11, NULL);
				V_3 = L_12;
				// if (tsa.mode == ParticleSystemAnimationMode.Sprites && tsa.uvChannelMask == 0)
				int32_t L_13;
				L_13 = TextureSheetAnimationModule_get_mode_m675B6ECB7DE53BBCDAEEA723757A8341417B2CA6((&V_3), NULL);
				if ((!(((uint32_t)L_13) == ((uint32_t)1))))
				{
					goto IL_006d_1;
				}
			}
			{
				int32_t L_14;
				L_14 = TextureSheetAnimationModule_get_uvChannelMask_m7073447C213635C0BC84E34992D7D5E5E4CE154F((&V_3), NULL);
				G_B7_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				goto IL_006e_1;
			}

IL_006d_1:
			{
				G_B7_0 = 0;
			}

IL_006e_1:
			{
				V_4 = (bool)G_B7_0;
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_007d_1;
				}
			}
			{
				// tsa.uvChannelMask = UVChannelFlags.UV0;
				TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_3), 1, NULL);
			}

IL_007d_1:
			{
			}

IL_007e_1:
			{
				// foreach (var ps in particles)
				bool L_16;
				L_16 = Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA((&V_1), Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// RefreshParticles(particles);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_17;
		L_17 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		UIParticle_RefreshParticles_m67C9375DAB39134F95AE8C749C0293A147EBE2C8(__this, L_17, NULL);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_m67C9375DAB39134F95AE8C749C0293A147EBE2C8 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___particles0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_mE9269D3EE9FD755EC213CBBDF3A4462C1A20293C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		// GetComponentsInChildren(m_Renderers);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_0 = __this->___m_Renderers_44;
		Component_GetComponentsInChildren_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_mE9269D3EE9FD755EC213CBBDF3A4462C1A20293C(__this, L_0, Component_GetComponentsInChildren_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_mE9269D3EE9FD755EC213CBBDF3A4462C1A20293C_RuntimeMethod_var);
		// var j = 0;
		V_0 = 0;
		// for (var i = 0; i < particles.Count; i++)
		V_1 = 0;
		goto IL_007e;
	}

IL_0014:
	{
		// if (!particles[i]) continue;
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_1 = ___particles0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3;
		L_3 = List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD(L_1, L_2, List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// if (!particles[i]) continue;
		goto IL_007a;
	}

IL_002a:
	{
		// GetRenderer(j++).Set(this, particles[i], false);
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_8;
		L_8 = UIParticle_GetRenderer_m0653C955C59F6ECA76C88DEC42059F3FB1480551(__this, L_7, NULL);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_9 = ___particles0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11;
		L_11 = List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD(L_9, L_10, List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		NullCheck(L_8);
		UIParticleRenderer_Set_mD3728320114E45DCFE7164165E86F7162A134336(L_8, __this, L_11, (bool)0, NULL);
		// if (particles[i].trails.enabled)
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_12 = ___particles0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14;
		L_14 = List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD(L_12, L_13, List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		NullCheck(L_14);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_15;
		L_15 = ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66(L_14, NULL);
		V_4 = L_15;
		bool L_16;
		L_16 = TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C((&V_4), NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		// GetRenderer(j++).Set(this, particles[i], true);
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_20;
		L_20 = UIParticle_GetRenderer_m0653C955C59F6ECA76C88DEC42059F3FB1480551(__this, L_19, NULL);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_21 = ___particles0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_23;
		L_23 = List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD(L_21, L_22, List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		NullCheck(L_20);
		UIParticleRenderer_Set_mD3728320114E45DCFE7164165E86F7162A134336(L_20, __this, L_23, (bool)1, NULL);
	}

IL_0079:
	{
	}

IL_007a:
	{
		// for (var i = 0; i < particles.Count; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007e:
	{
		// for (var i = 0; i < particles.Count; i++)
		int32_t L_25 = V_1;
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_26 = ___particles0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline(L_26, List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00a3;
	}

IL_008f:
	{
		// GetRenderer(j).Clear(j);
		int32_t L_29 = V_0;
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_30;
		L_30 = UIParticle_GetRenderer_m0653C955C59F6ECA76C88DEC42059F3FB1480551(__this, L_29, NULL);
		int32_t L_31 = V_0;
		NullCheck(L_30);
		UIParticleRenderer_Clear_m412CE9A1BDE7A72B7392FE16F77FE936FB072E25(L_30, L_31, NULL);
		// for (; j < m_Renderers.Count; j++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00a3:
	{
		// for (; j < m_Renderers.Count; j++)
		int32_t L_33 = V_0;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_34 = __this->___m_Renderers_44;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_34, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_33) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_6;
		if (L_36)
		{
			goto IL_008f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateTransformScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateTransformScale_mE7A5792C1B0144A22D229B0C3172830E84F8B94F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var newScale = transform.parent.lossyScale.Inverse();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_2, NULL);
		V_0 = L_3;
		// if (transform.localScale != newScale)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		bool L_7;
		L_7 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_5, L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		// transform.localScale = newScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateRenderers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateRenderers_m139A9B2E7386C382A69D668E78374D6BEDC5FB65 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m2B34E47497ECDD04D71E44BA1335865A83A5BF92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8088633FF805362A739441B155C556233F03BC61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateRenderersU3Eb__64_0_mE504788E5A01C8BC851C2A8F5DCD96C32444FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Func_2_t8088633FF805362A739441B155C556233F03BC61* G_B4_0 = NULL;
	List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* G_B4_1 = NULL;
	Func_2_t8088633FF805362A739441B155C556233F03BC61* G_B3_0 = NULL;
	List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* G_B3_1 = NULL;
	{
		// if (!isActiveAndEnabled) return;
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!isActiveAndEnabled) return;
		goto IL_00a4;
	}

IL_0013:
	{
		// if (m_Renderers.Any(x => !x))
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_2 = __this->___m_Renderers_44;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		Func_2_t8088633FF805362A739441B155C556233F03BC61* L_3 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_5;
		Func_2_t8088633FF805362A739441B155C556233F03BC61* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_5 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t8088633FF805362A739441B155C556233F03BC61* L_6 = (Func_2_t8088633FF805362A739441B155C556233F03BC61*)il2cpp_codegen_object_new(Func_2_t8088633FF805362A739441B155C556233F03BC61_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m99F2CFD480DEC3F5E0C720980F33714BFA7035D8(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CUpdateRenderersU3Eb__64_0_mE504788E5A01C8BC851C2A8F5DCD96C32444FD70_RuntimeMethod_var), NULL);
		Func_2_t8088633FF805362A739441B155C556233F03BC61* L_7 = L_6;
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_5), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0038:
	{
		bool L_8;
		L_8 = Enumerable_Any_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m2B34E47497ECDD04D71E44BA1335865A83A5BF92(G_B4_1, G_B4_0, Enumerable_Any_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m2B34E47497ECDD04D71E44BA1335865A83A5BF92_RuntimeMethod_var);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// RefreshParticles(particles);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_10;
		L_10 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		UIParticle_RefreshParticles_m67C9375DAB39134F95AE8C749C0293A147EBE2C8(__this, L_10, NULL);
	}

IL_0050:
	{
		// var bakeCamera = GetBakeCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = UIParticle_GetBakeCamera_m9CEE72A5C1D1740406554A3331AB6B8626D3CBCE(__this, NULL);
		V_0 = L_11;
		// for (var i = 0; i < m_Renderers.Count; i++)
		V_3 = 0;
		goto IL_0090;
	}

IL_005b:
	{
		// if (!m_Renderers[i]) continue;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_12 = __this->___m_Renderers_44;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_14;
		L_14 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_12, L_13, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_14, NULL);
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// if (!m_Renderers[i]) continue;
		goto IL_008c;
	}

IL_0078:
	{
		// m_Renderers[i].UpdateMesh(bakeCamera);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_17 = __this->___m_Renderers_44;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_19;
		L_19 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_17, L_18, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = V_0;
		NullCheck(L_19);
		UIParticleRenderer_UpdateMesh_m09549AA6D13601B8F8F1C20923C6FDDF96C57DF9(L_19, L_20, NULL);
	}

IL_008c:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0090:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_22 = V_3;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_23 = __this->___m_Renderers_44;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_23, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_005b;
		}
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateParticleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateParticleCount_mBE0114F49AA989090CD8AA48190C2B2D8F975600 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (!m_Renderers[i]) continue;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_0 = __this->___m_Renderers_44;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_2;
		L_2 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_0, L_1, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// if (!m_Renderers[i]) continue;
		goto IL_0033;
	}

IL_0020:
	{
		// m_Renderers[i].UpdateParticleCount();
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_5 = __this->___m_Renderers_44;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_7;
		L_7 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_5, L_6, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_7);
		UIParticleRenderer_UpdateParticleCount_mFD2CF7B625D4F7F434FF80A4B35052682E58789A(L_7, NULL);
	}

IL_0033:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_9 = V_0;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_10 = __this->___m_Renderers_44;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_10, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_OnEnable_m3DFCB3522236F9CD60D796DDBFBB5E67558F844F (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_UpdateRendererMaterial_m8AFA03DD9869500311E38FDEE660C4FA6910875D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// ResetGroupId();
		UIParticle_ResetGroupId_mCCF269CE3E29E779C8C7F70BC8EFCA1E76129545(__this, NULL);
		// _tracker.Add(this, rectTransform, DrivenTransformProperties.Scale);
		DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1* L_0 = (&__this->____tracker_45);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(__this, NULL);
		DrivenRectTransformTracker_Add_mC0CE417831BF58E6DA81770CE5E2A99B142EEFEC(L_0, __this, L_1, ((int32_t)224), NULL);
		// UIParticleUpdater.Register(this);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		UIParticleUpdater_Register_m2FF1ECC9511A96C705F1047A08BEFBE3BE662789(__this, NULL);
		// RegisterDirtyMaterialCallback(UpdateRendererMaterial);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)UIParticle_UpdateRendererMaterial_m8AFA03DD9869500311E38FDEE660C4FA6910875D_RuntimeMethod_var), NULL);
		Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013(__this, L_2, NULL);
		// if (0 < particles.Count)
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_3;
		L_3 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline(L_3, List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)0) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		// RefreshParticles(particles);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_6;
		L_6 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(__this, NULL);
		UIParticle_RefreshParticles_m67C9375DAB39134F95AE8C749C0293A147EBE2C8(__this, L_6, NULL);
		goto IL_0066;
	}

IL_005d:
	{
		// RefreshParticles();
		UIParticle_RefreshParticles_mE43630019E83200D10F07E3454A1D2F5EF68824D(__this, NULL);
	}

IL_0066:
	{
		// base.OnEnable();
		MaskableGraphic_OnEnable_m4BF46ECE5E57E2EE11ED4CE41AD50DADF141C9BC(__this, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::ResetGroupId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_ResetGroupId_mCCF269CE3E29E779C8C7F70BC8EFCA1E76129545 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (m_GroupId == m_GroupMaxId)
		int32_t L_0 = __this->___m_GroupId_41;
		int32_t L_1 = __this->___m_GroupMaxId_42;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// _groupId = m_GroupId;
		int32_t L_3 = __this->___m_GroupId_41;
		__this->____groupId_47 = L_3;
		goto IL_003e;
	}

IL_0023:
	{
		// _groupId = Random.Range(m_GroupId, m_GroupMaxId + 1);
		int32_t L_4 = __this->___m_GroupId_41;
		int32_t L_5 = __this->___m_GroupMaxId_42;
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		__this->____groupId_47 = L_6;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_OnDisable_m9AEC623323C26BFE2311AAED603D68AE73F8E6F7 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m61836CEFE3C56080DDBDA3CB7DFD093E825DF7E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__68_0_m32243B552846EFF19B0208DE1E685879DC72D05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_UpdateRendererMaterial_m8AFA03DD9869500311E38FDEE660C4FA6910875D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* G_B2_0 = NULL;
	List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* G_B2_1 = NULL;
	Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* G_B1_0 = NULL;
	List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* G_B1_1 = NULL;
	{
		// _tracker.Clear();
		DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1* L_0 = (&__this->____tracker_45);
		DrivenRectTransformTracker_Clear_m9A7F5130E4007F70B14AB1FF13A2997C073A64EE(L_0, NULL);
		// UIParticleUpdater.Unregister(this);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		UIParticleUpdater_Unregister_mDABD8EE790906552608D0A2114985A83C4EECECD(__this, NULL);
		// m_Renderers.ForEach(r => r.Clear());
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_1 = __this->___m_Renderers_44;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* L_2 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__68_0_6;
		Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0039;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_4 = ((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* L_5 = (Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E*)il2cpp_codegen_object_new(Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m4FEEBE2ACB14B3BD5E06B79492AB5897D5F636C3(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3COnDisableU3Eb__68_0_m32243B552846EFF19B0208DE1E685879DC72D05E_RuntimeMethod_var), NULL);
		Action_1_t328CEDDCFEA9EA7A89FF25648D95910ECC05C15E* L_6 = L_5;
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__68_0_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9__68_0_6), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0039:
	{
		NullCheck(G_B2_1);
		List_1_ForEach_m61836CEFE3C56080DDBDA3CB7DFD093E825DF7E8(G_B2_1, G_B2_0, List_1_ForEach_m61836CEFE3C56080DDBDA3CB7DFD093E825DF7E8_RuntimeMethod_var);
		// UnregisterDirtyMaterialCallback(UpdateRendererMaterial);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)UIParticle_UpdateRendererMaterial_m8AFA03DD9869500311E38FDEE660C4FA6910875D_RuntimeMethod_var), NULL);
		Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2(__this, L_7, NULL);
		// base.OnDisable();
		MaskableGraphic_OnDisable_m9123E729FA7BE001037CDE14E8A75B69AD68E16C(__this, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateMaterial_m5AE1AAF6490AA7D39F6F11B6C5844C92C4DD6AF4 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateGeometry_m57A929942D77AF7EF92DD9598BFD27D23EF8119B (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_OnDidApplyAnimationProperties_m4E69818DDBB8A141B8E04CDFDE5305BEA86E524B (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateRendererMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateRendererMaterial_m8AFA03DD9869500311E38FDEE660C4FA6910875D (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0005:
	{
		// if (!m_Renderers[i]) continue;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_0 = __this->___m_Renderers_44;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_2;
		L_2 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_0, L_1, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// if (!m_Renderers[i]) continue;
		goto IL_004b;
	}

IL_0020:
	{
		// m_Renderers[i].maskable = maskable;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_5 = __this->___m_Renderers_44;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_7;
		L_7 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_5, L_6, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		bool L_8;
		L_8 = MaskableGraphic_get_maskable_m34B87CD87CFF73FF4E09D892ADB316E412F22660(__this, NULL);
		NullCheck(L_7);
		MaskableGraphic_set_maskable_mC2486FDC0636C83AC3BDBFF11E6E85CC27F15689(L_7, L_8, NULL);
		// m_Renderers[i].SetMaterialDirty();
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_9 = __this->___m_Renderers_44;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_11;
		L_11 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_9, L_10, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(29 /* System.Void UnityEngine.UI.Graphic::SetMaterialDirty() */, L_11);
	}

IL_004b:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_13 = V_0;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_14 = __this->___m_Renderers_44;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_14, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// Coffee.UIExtensions.UIParticleRenderer Coffee.UIExtensions.UIParticle::GetRenderer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* UIParticle_GetRenderer_m0653C955C59F6ECA76C88DEC42059F3FB1480551 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mCC33EFDE50719315873AF62DA1F08BBB03DF55E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* V_2 = NULL;
	{
		// if (m_Renderers.Count <= index)
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_0 = __this->___m_Renderers_44;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_0, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		int32_t L_2 = ___index0;
		V_0 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// m_Renderers.Add(UIParticleRenderer.AddRenderer(this, index));
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_4 = __this->___m_Renderers_44;
		int32_t L_5 = ___index0;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_6;
		L_6 = UIParticleRenderer_AddRenderer_m12135FEA68000EF6F57C438CB0BBE7F5DA08CEAB(__this, L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_inline(L_4, L_6, List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_RuntimeMethod_var);
	}

IL_002b:
	{
		// if (!m_Renderers[index])
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_7 = __this->___m_Renderers_44;
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_9;
		L_9 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_7, L_8, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_9, NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// m_Renderers[index] = UIParticleRenderer.AddRenderer(this, index);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_12 = __this->___m_Renderers_44;
		int32_t L_13 = ___index0;
		int32_t L_14 = ___index0;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_15;
		L_15 = UIParticleRenderer_AddRenderer_m12135FEA68000EF6F57C438CB0BBE7F5DA08CEAB(__this, L_14, NULL);
		NullCheck(L_12);
		List_1_set_Item_mCC33EFDE50719315873AF62DA1F08BBB03DF55E0(L_12, L_13, L_15, List_1_set_Item_mCC33EFDE50719315873AF62DA1F08BBB03DF55E0_RuntimeMethod_var);
	}

IL_0059:
	{
		// return m_Renderers[index];
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_16 = __this->___m_Renderers_44;
		int32_t L_17 = ___index0;
		NullCheck(L_16);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_18;
		L_18 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_16, L_17, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		V_2 = L_18;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_19 = V_2;
		return L_19;
	}
}
// UnityEngine.Camera Coffee.UIExtensions.UIParticle::GetBakeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* UIParticle_GetBakeCamera_m9CEE72A5C1D1740406554A3331AB6B8626D3CBCE (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BB54F029DDD193B345649C315D693C57CEFFD7);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_8;
	memset((&V_8), 0, sizeof(V_8));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	{
		// if (!canvas) return Camera.main;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (!canvas) return Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		V_3 = L_3;
		goto IL_016c;
	}

IL_001e:
	{
		// var root = canvas.rootCanvas;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = Canvas_get_rootCanvas_m74DEA02014963B54DF651BE14284BDAFDA61DDFE(L_4, NULL);
		V_0 = L_5;
		// if (root.renderMode != RenderMode.ScreenSpaceOverlay) return root.worldCamera ? root.worldCamera : Camera.main;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_6, NULL);
		V_4 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// if (root.renderMode != RenderMode.ScreenSpaceOverlay) return root.worldCamera ? root.worldCamera : Camera.main;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = V_0;
		NullCheck(L_9);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (L_11)
		{
			goto IL_004d;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B6_0 = L_12;
		goto IL_0053;
	}

IL_004d:
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13 = V_0;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_13, NULL);
		G_B6_0 = L_14;
	}

IL_0053:
	{
		V_3 = G_B6_0;
		goto IL_016c;
	}

IL_0059:
	{
		// if (!_orthoCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->____orthoCamera_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00dd;
		}
	}
	{
		// _orthoCamera = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->____orthoCamera_46 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____orthoCamera_46), (void*)L_18);
		// if (!_orthoCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->____orthoCamera_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00dc;
		}
	}
	{
		// var go = new GameObject("UIParticleOverlayCamera")
		// {
		//     hideFlags = HideFlags.DontSave,
		// };
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, _stringLiteral91BB54F029DDD193B345649C315D693C57CEFFD7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22;
		NullCheck(L_23);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_23, ((int32_t)52), NULL);
		V_7 = L_23;
		// go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_7;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// go.transform.SetParent(transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_7;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_26, L_27, (bool)0, NULL);
		// _orthoCamera = go.AddComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_7;
		NullCheck(L_28);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29;
		L_29 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_28, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		__this->____orthoCamera_46 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____orthoCamera_46), (void*)L_29);
		// _orthoCamera.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = __this->____orthoCamera_46;
		NullCheck(L_30);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_30, (bool)0, NULL);
	}

IL_00dc:
	{
	}

IL_00dd:
	{
		// var size = ((RectTransform)root.transform).rect.size;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_31 = V_0;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_32, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33;
		L_33 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_32, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_8 = L_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_8), NULL);
		V_1 = L_34;
		// _orthoCamera.orthographicSize = Mathf.Max(size.x, size.y) * root.scaleFactor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = __this->____orthoCamera_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_1;
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_1;
		float L_39 = L_38.___y_1;
		float L_40;
		L_40 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_37, L_39, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_41 = V_0;
		NullCheck(L_41);
		float L_42;
		L_42 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_41, NULL);
		NullCheck(L_35);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_35, ((float)il2cpp_codegen_multiply(L_40, L_42)), NULL);
		// _orthoCamera.transform.SetPositionAndRotation(new Vector3(0, 0, -1000), Quaternion.identity);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = __this->____orthoCamera_46;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_45), (0.0f), (0.0f), (-1000.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_44);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_44, L_45, L_46, NULL);
		// _orthoCamera.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_47 = __this->____orthoCamera_46;
		NullCheck(L_47);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_47, (bool)1, NULL);
		// _orthoCamera.farClipPlane = 2000f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_48 = __this->____orthoCamera_46;
		NullCheck(L_48);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_48, (2000.0f), NULL);
		// return _orthoCamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49 = __this->____orthoCamera_46;
		V_3 = L_49;
		goto IL_016c;
	}

IL_016c:
	{
		// }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50 = V_3;
		return L_50;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle__ctor_m2FE9BD9DC93B562005DCE205BD8BF2DF556ABB55 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector][SerializeField] internal bool m_IsTrail = false;
		__this->___m_IsTrail_36 = (bool)0;
		// private Vector3 m_Scale3D = new Vector3(10, 10, 10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (10.0f), (10.0f), (10.0f), /*hidden argument*/NULL);
		__this->___m_Scale3D_37 = L_0;
		// internal AnimatableProperty[] m_AnimatableProperties = new AnimatableProperty[0];
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_1 = (AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD*)(AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD*)SZArrayNew(AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_AnimatableProperties_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimatableProperties_38), (void*)L_1);
		// private List<ParticleSystem> m_Particles = new List<ParticleSystem>();
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_2 = (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*)il2cpp_codegen_object_new(List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651(L_2, List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		__this->___m_Particles_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Particles_39), (void*)L_2);
		// private MeshSharing m_MeshSharing = MeshSharing.None;
		__this->___m_MeshSharing_40 = 0;
		// private int m_GroupId = 0;
		__this->___m_GroupId_41 = 0;
		// private int m_GroupMaxId = 0;
		__this->___m_GroupMaxId_42 = 0;
		// private bool m_AbsoluteMode = false;
		__this->___m_AbsoluteMode_43 = (bool)0;
		// private List<UIParticleRenderer> m_Renderers = new List<UIParticleRenderer>();
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_3 = (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*)il2cpp_codegen_object_new(List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D(L_3, List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D_RuntimeMethod_var);
		__this->___m_Renderers_44 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Renderers_44), (void*)L_3);
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::<RefreshParticles>b__61_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_U3CRefreshParticlesU3Eb__61_0_mD35B7901C44997DB50B4087B999923C75C4B60A0 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particles.RemoveAll(x => x.GetComponentInParent<UIParticle>() != this);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___x0;
		NullCheck(L_0);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_1;
		L_1 = Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC(L_0, Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, __this, NULL);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Coffee.UIExtensions.UIParticle/<get_materials>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_materialsU3Ed__45__ctor_m2965B2FDD5D8611C8CBA1A58D8BB8FED3B314CFF (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_materialsU3Ed__45_System_IDisposable_Dispose_mD75C56371AA47F05E7FB0650EE4C42489562C259 (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle/<get_materials>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_materialsU3Ed__45_MoveNext_mBFD227D068C955685B02674682EB01933CD3F7C6 (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00a3;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (var i = 0; i < m_Renderers.Count; i++)
		__this->___U3CiU3E5__1_4 = 0;
		goto IL_00bb;
	}

IL_002f:
	{
		// if (!m_Renderers[i] || !m_Renderers[i].material) continue;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_4 = L_3->___m_Renderers_44;
		int32_t L_5 = __this->___U3CiU3E5__1_4;
		NullCheck(L_4);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_6;
		L_6 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_4, L_5, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_9 = L_8->___m_Renderers_44;
		int32_t L_10 = __this->___U3CiU3E5__1_4;
		NullCheck(L_9);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_11;
		L_11 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_9, L_10, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_11);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		G_B11_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 1;
	}

IL_0073:
	{
		V_1 = (bool)G_B11_0;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// if (!m_Renderers[i] || !m_Renderers[i].material) continue;
		goto IL_00ab;
	}

IL_0079:
	{
		// yield return m_Renderers[i].material;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_15 = __this->___U3CU3E4__this_3;
		NullCheck(L_15);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_16 = L_15->___m_Renderers_44;
		int32_t L_17 = __this->___U3CiU3E5__1_4;
		NullCheck(L_16);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_18;
		L_18 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_16, L_17, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_18);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ab:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_20 = __this->___U3CiU3E5__1_4;
		V_2 = L_20;
		int32_t L_21 = V_2;
		__this->___U3CiU3E5__1_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00bb:
	{
		// for (var i = 0; i < m_Renderers.Count; i++)
		int32_t L_22 = __this->___U3CiU3E5__1_4;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_23 = __this->___U3CU3E4__this_3;
		NullCheck(L_23);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_24 = L_23->___m_Renderers_44;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_24, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_22) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}
}
// UnityEngine.Material Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.Collections.Generic.IEnumerator<UnityEngine.Material>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* U3Cget_materialsU3Ed__45_System_Collections_Generic_IEnumeratorU3CUnityEngine_MaterialU3E_get_Current_m67392DDF30976D7C70A0CAA7ADCAAD4DA5E47326 (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_materialsU3Ed__45_System_Collections_IEnumerator_Reset_m6DCBD412030315589ED1112D0639DBDAE809A10B (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_materialsU3Ed__45_System_Collections_IEnumerator_Reset_m6DCBD412030315589ED1112D0639DBDAE809A10B_RuntimeMethod_var)));
	}
}
// System.Object Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_materialsU3Ed__45_System_Collections_IEnumerator_get_Current_m71441A3AC56EBDF7C2C6AB65C4107BF46BA9A125 (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.Collections.Generic.IEnumerable<UnityEngine.Material>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_materialsU3Ed__45_System_Collections_Generic_IEnumerableU3CUnityEngine_MaterialU3E_GetEnumerator_mD7C14F5B8570E3AA3EE381C07310C218AD0197D8 (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* L_3 = (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9*)il2cpp_codegen_object_new(U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_materialsU3Ed__45__ctor_m2965B2FDD5D8611C8CBA1A58D8BB8FED3B314CFF(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* L_4 = V_0;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Coffee.UIExtensions.UIParticle/<get_materials>d__45::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_materialsU3Ed__45_System_Collections_IEnumerable_GetEnumerator_m14E9A4FAF65070818F678FC7F71C53B0E189655A (U3Cget_materialsU3Ed__45_t3470B050B8BF9A5EB917EAF461E1673AF24ADDF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_materialsU3Ed__45_System_Collections_Generic_IEnumerableU3CUnityEngine_MaterialU3E_GetEnumerator_mD7C14F5B8570E3AA3EE381C07310C218AD0197D8(__this, NULL);
		return L_0;
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
// System.Void Coffee.UIExtensions.UIParticle/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7C36B3C40C824BBC3FF6E982CBC0E98189DF21A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* L_0 = (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D*)il2cpp_codegen_object_new(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE063C210F95C7D014F1B52FC55699BB7CCCFD3B7(L_0, NULL);
		((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE063C210F95C7D014F1B52FC55699BB7CCCFD3B7 (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Play>b__52_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CPlayU3Eb__52_0_m17345A73E62BEBC5AC3776503CA5206200CF554B (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, const RuntimeMethod* method) 
{
	{
		// particles.Exec(p => p.Simulate(0, false, true));
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Simulate_mE81EFF12AC1E2C08F3AE86DA7CF0D5CA4EA8F91F(L_0, (0.0f), (bool)0, (bool)1, NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Pause>b__53_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CPauseU3Eb__53_0_m40AC4E1147DCAB561C538B4DC5152E5E52FEA873 (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, const RuntimeMethod* method) 
{
	{
		// particles.Exec(p => p.Pause());
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Pause_m2A5CE9D753E6E58FB9BC62C6A548B01E9FA63009(L_0, NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Stop>b__55_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStopU3Eb__55_0_m174CF951BFE9FABCA287727A848D512C5259220A (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, const RuntimeMethod* method) 
{
	{
		// particles.Exec(p => p.Stop());
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Clear>b__56_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CClearU3Eb__56_0_m1F11054A89363CED17EBC8D2215CA9AA935990B7 (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___p0, const RuntimeMethod* method) 
{
	{
		// particles.Exec(p => p.Clear());
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732(L_0, NULL);
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle/<>c::<UpdateRenderers>b__64_0(Coffee.UIExtensions.UIParticleRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateRenderersU3Eb__64_0_mE504788E5A01C8BC851C2A8F5DCD96C32444FD70 (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Renderers.Any(x => !x))
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<OnDisable>b__68_0(Coffee.UIExtensions.UIParticleRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__68_0_m32243B552846EFF19B0208DE1E685879DC72D05E (U3CU3Ec_t599D10B9A1EBDC3D2432005A21BB423DA486C59D* __this, UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* ___r0, const RuntimeMethod* method) 
{
	{
		// m_Renderers.ForEach(r => r.Clear());
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_0 = ___r0;
		NullCheck(L_0);
		UIParticleRenderer_Clear_m412CE9A1BDE7A72B7392FE16F77FE936FB072E25(L_0, (-1), NULL);
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
// System.Single Coffee.UIExtensions.UIParticleAttractor::get_delay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIParticleAttractor_get_delay_mE3CC72C63264CE39B5D6809810EFC91E1ACBE237 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return m_DelayRate;
		float L_0 = __this->___m_DelayRate_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::set_delay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_set_delay_m66B8583D1E5DCC9508392FE7DA002BAFE11171F7 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_DelayRate = value;
		float L_0 = ___value0;
		__this->___m_DelayRate_6 = L_0;
		// }
		return;
	}
}
// System.Single Coffee.UIExtensions.UIParticleAttractor::get_maxSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIParticleAttractor_get_maxSpeed_mBA68FCAE95345085E4CB47014B1A987CE010942A (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return m_MaxSpeed;
		float L_0 = __this->___m_MaxSpeed_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::set_maxSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_set_maxSpeed_m5E737254E0C0CF626507F46BBA42E0FB05446C6C (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_MaxSpeed = value;
		float L_0 = ___value0;
		__this->___m_MaxSpeed_7 = L_0;
		// }
		return;
	}
}
// Coffee.UIExtensions.UIParticleAttractor/Movement Coffee.UIExtensions.UIParticleAttractor::get_movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticleAttractor_get_movement_mFE70F6DAC3C90B9476B49D3760C4866858E64E8D (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return m_Movement;
		int32_t L_0 = __this->___m_Movement_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::set_movement(Coffee.UIExtensions.UIParticleAttractor/Movement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_set_movement_m79D97D3C6C3A44978F37298301E87C5DAA6E796E (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// m_Movement = value;
		int32_t L_0 = ___value0;
		__this->___m_Movement_8 = L_0;
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_OnEnable_m41340D7E0909FDE06D6F2EF21B75356EACF59F80 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF79D48A0448AF36E83173EAD8719A6FB24F43FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51200D2D6F2B8D298B93BB96EDA4DDA4D2C8B9C6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (m_ParticleSystem == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___m_ParticleSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogError("No particle system attached to particle attractor script", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteral51200D2D6F2B8D298B93BB96EDA4DDA4D2C8B9C6, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_0076;
	}

IL_0028:
	{
		// _uiParticle = m_ParticleSystem.GetComponentInParent<UIParticle>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___m_ParticleSystem_4;
		NullCheck(L_3);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_4;
		L_4 = Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC(L_3, Component_GetComponentInParent_TisUIParticle_t19C570D23081B657B69AE47B522344ED2409E69A_m2539647AF6E452E4199CB43ACDEBE3B24E4B52EC_RuntimeMethod_var);
		__this->____uiParticle_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uiParticle_10), (void*)L_4);
		// if (_uiParticle && !_uiParticle.particles.Contains(m_ParticleSystem))
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_5 = __this->____uiParticle_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_7 = __this->____uiParticle_10;
		NullCheck(L_7);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_8;
		L_8 = UIParticle_get_particles_m7970FBC80360310B090EB96E9E5785D3931307FB(L_7, NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = __this->___m_ParticleSystem_4;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_mF79D48A0448AF36E83173EAD8719A6FB24F43FDF(L_8, L_9, List_1_Contains_mF79D48A0448AF36E83173EAD8719A6FB24F43FDF_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// _uiParticle = null;
		__this->____uiParticle_10 = (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uiParticle_10), (void*)(UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL);
	}

IL_006f:
	{
		// UIParticleUpdater.Register(this);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		UIParticleUpdater_Register_m9F6EF5806423AB115404590D71E4D7A3705A1323(__this, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_OnDisable_m12F0B870BECE1494D9C03FAE5D49ADBA46E70334 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uiParticle = null;
		__this->____uiParticle_10 = (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uiParticle_10), (void*)(UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL);
		// UIParticleUpdater.Unregister(this);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		UIParticleUpdater_Unregister_m2438E5AEADF8A9B98AC4E5F816BD27EFD4E12C4B(__this, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::Attract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor_Attract_m3DA836DC11630521BF08A738C8CBF5EB9FFD4110 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B8_0 = 0;
	{
		// if (m_ParticleSystem == null) return;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___m_ParticleSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// if (m_ParticleSystem == null) return;
		goto IL_0185;
	}

IL_0016:
	{
		// var count = m_ParticleSystem.particleCount;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___m_ParticleSystem_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076(L_3, NULL);
		V_0 = L_4;
		// if (count == 0) return;
		int32_t L_5 = V_0;
		V_4 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// if (count == 0) return;
		goto IL_0185;
	}

IL_0031:
	{
		// var particles = ParticleSystemExtensions.GetParticleArray(count);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_8;
		L_8 = ParticleSystemExtensions_GetParticleArray_m629E5875E57E88914BCC16C7328753B5ACB72116(L_7, NULL);
		V_1 = L_8;
		// m_ParticleSystem.GetParticles(particles, count);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = __this->___m_ParticleSystem_4;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_10 = V_1;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761(L_9, L_10, L_11, NULL);
		// var dstPos = GetDestinationPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = UIParticleAttractor_GetDestinationPosition_m3684540494FA429432B9A333A2BE8FABB02EF29A(__this, NULL);
		V_2 = L_13;
		// for (var i = 0; i < count; i++)
		V_5 = 0;
		goto IL_0169;
	}

IL_0055:
	{
		// var p = particles[i];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_14 = V_1;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		// if (0f < p.remainingLifetime && Vector3.Distance(p.position, dstPos) < m_DestinationRadius)
		float L_18;
		L_18 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		if ((!(((float)(0.0f)) < ((float)L_18))))
		{
			goto IL_0085;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		float L_21;
		L_21 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_19, L_20, NULL);
		float L_22 = __this->___m_DestinationRadius_5;
		G_B8_0 = ((((float)L_21) < ((float)L_22))? 1 : 0);
		goto IL_0086;
	}

IL_0085:
	{
		G_B8_0 = 0;
	}

IL_0086:
	{
		V_10 = (bool)G_B8_0;
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_00d8;
		}
	}
	{
		// p.remainingLifetime = 0f;
		Particle_set_remainingLifetime_m3E58D8B3599B0BA6790D43022C3DF16E6896D018((&V_6), (0.0f), NULL);
		// particles[i] = p;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_24 = V_1;
		int32_t L_25 = V_5;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_26 = V_6;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D)L_26);
		// if (m_OnAttracted != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_27 = __this->___m_OnAttracted_9;
		V_11 = (bool)((!(((RuntimeObject*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_28 = V_11;
		if (!L_28)
		{
			goto IL_00d3;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// m_OnAttracted.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_29 = __this->___m_OnAttracted_9;
		NullCheck(L_29);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_29, NULL);
		goto IL_00d2;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_00c4:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogException(e);
		Exception_t* L_30 = V_12;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	}// end catch (depth: 1)

IL_00d2:
	{
	}

IL_00d3:
	{
		// continue;
		goto IL_0163;
	}

IL_00d8:
	{
		// var delayTime = p.startLifetime * m_DelayRate;
		float L_31;
		L_31 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		float L_32 = __this->___m_DelayRate_6;
		V_7 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		// var duration = p.startLifetime - delayTime;
		float L_33;
		L_33 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		float L_34 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract(L_33, L_34));
		// var time = Mathf.Max(0, p.startLifetime - p.remainingLifetime - delayTime);
		float L_35;
		L_35 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		float L_36;
		L_36 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_37 = V_7;
		float L_38;
		L_38 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_35, L_36)), L_37)), NULL);
		V_9 = L_38;
		// if (time <= 0) continue;
		float L_39 = V_9;
		V_13 = (bool)((((int32_t)((!(((float)L_39) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_13;
		if (!L_40)
		{
			goto IL_0126;
		}
	}
	{
		// if (time <= 0) continue;
		goto IL_0163;
	}

IL_0126:
	{
		// p.position = GetAttractedPosition(p.position, dstPos, duration, time);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_2;
		float L_43 = V_8;
		float L_44 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = UIParticleAttractor_GetAttractedPosition_m6F82891983EC67846F760AF63B6B9807AD2275A0(__this, L_41, L_42, L_43, L_44, NULL);
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E((&V_6), L_45, NULL);
		// p.velocity *= 0.5f;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* L_46 = (&V_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Particle_get_velocity_m08106E29EB811B9E507BB09A60E61C4BDF68AFEB(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_47, (0.5f), NULL);
		Particle_set_velocity_mF4C1DE326CCABE480F44D3DF3873241E85A6303B(L_46, L_48, NULL);
		// particles[i] = p;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_49 = V_1;
		int32_t L_50 = V_5;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_51 = V_6;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D)L_51);
	}

IL_0163:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0169:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_53 = V_5;
		int32_t L_54 = V_0;
		V_14 = (bool)((((int32_t)L_53) < ((int32_t)L_54))? 1 : 0);
		bool L_55 = V_14;
		if (L_55)
		{
			goto IL_0055;
		}
	}
	{
		// m_ParticleSystem.SetParticles(particles, count);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_56 = __this->___m_ParticleSystem_4;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_57 = V_1;
		int32_t L_58 = V_0;
		NullCheck(L_56);
		ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592(L_56, L_57, L_58, NULL);
	}

IL_0185:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleAttractor::GetDestinationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticleAttractor_GetDestinationPosition_m3684540494FA429432B9A333A2BE8FABB02EF29A (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B3_0 = 0;
	{
		// var isUI = _uiParticle && _uiParticle.enabled;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_0 = __this->____uiParticle_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_2 = __this->____uiParticle_10;
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		// var psPos = m_ParticleSystem.transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___m_ParticleSystem_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_1 = L_6;
		// var attractorPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		V_2 = L_8;
		// var dstPos = attractorPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		V_3 = L_9;
		// if (m_ParticleSystem.main.simulationSpace == ParticleSystemSimulationSpace.Local)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->___m_ParticleSystem_4;
		NullCheck(L_10);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_11;
		L_11 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_10, NULL);
		V_5 = L_11;
		int32_t L_12;
		L_12 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC((&V_5), NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		// dstPos = m_ParticleSystem.transform.InverseTransformPoint(dstPos);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = __this->___m_ParticleSystem_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_15, L_16, NULL);
		V_3 = L_17;
		// if (isUI)
		bool L_18 = V_0;
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_009c;
		}
	}
	{
		// dstPos = dstPos.GetScaled(_uiParticle.transform.localScale, _uiParticle.scale3D.Inverse());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_21 = __this->____uiParticle_10;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_24 = __this->____uiParticle_10;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = UIParticle_get_scale3D_mCEBA095AC7965D040D06922E02276BCD6956D0D7(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3Extensions_GetScaled_m0045896A163F6848691633AB2A8AA99CB2EB4E52(L_20, L_23, L_26, NULL);
		V_3 = L_27;
	}

IL_009c:
	{
		goto IL_00da;
	}

IL_009f:
	{
		// if (isUI)
		bool L_28 = V_0;
		V_7 = L_28;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00d9;
		}
	}
	{
		// dstPos.Scale(_uiParticle.transform.localScale);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_30 = __this->____uiParticle_10;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_31, NULL);
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&V_3), L_32, NULL);
		// dstPos.Scale(_uiParticle.scale3D.Inverse());
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_33 = __this->____uiParticle_10;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = UIParticle_get_scale3D_mCEBA095AC7965D040D06922E02276BCD6956D0D7(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_34, NULL);
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&V_3), L_35, NULL);
	}

IL_00d9:
	{
	}

IL_00da:
	{
		// return dstPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		V_8 = L_36;
		goto IL_00df;
	}

IL_00df:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_8;
		return L_37;
	}
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleAttractor::GetAttractedPosition(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticleAttractor_GetAttractedPosition_m6F82891983EC67846F760AF63B6B9807AD2275A0 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___duration2, float ___time3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var speed = m_MaxSpeed;
		float L_0 = __this->___m_MaxSpeed_7;
		V_0 = L_0;
		// switch (m_Movement)
		int32_t L_1 = __this->___m_Movement_8;
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003a;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_0025:
	{
		// speed /= duration;
		float L_4 = V_0;
		float L_5 = ___duration2;
		V_0 = ((float)(L_4/L_5));
		// break;
		goto IL_0049;
	}

IL_002b:
	{
		// target = Vector3.Lerp(current, target, time / duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___target1;
		float L_8 = ___time3;
		float L_9 = ___duration2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_6, L_7, ((float)(L_8/L_9)), NULL);
		___target1 = L_10;
		// break;
		goto IL_0049;
	}

IL_003a:
	{
		// target = Vector3.Slerp(current, target, time / duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___target1;
		float L_13 = ___time3;
		float L_14 = ___duration2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Slerp_mBA32C7EAC64C56C7D68480549FA9A892FA5C1728(L_11, L_12, ((float)(L_13/L_14)), NULL);
		___target1 = L_15;
		// break;
		goto IL_0049;
	}

IL_0049:
	{
		// return Vector3.MoveTowards(current, target, speed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___target1;
		float L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_16, L_17, L_18, NULL);
		V_3 = L_19;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		return L_20;
	}
}
// System.Void Coffee.UIExtensions.UIParticleAttractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleAttractor__ctor_m79E2FC73C47D1DDC8E37DDE48EFFA097D339EED6 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* __this, const RuntimeMethod* method) 
{
	{
		// private float m_DestinationRadius = 1;
		__this->___m_DestinationRadius_5 = (1.0f);
		// private float m_DelayRate = 0;
		__this->___m_DelayRate_6 = (0.0f);
		// private float m_MaxSpeed = 1;
		__this->___m_MaxSpeed_7 = (1.0f);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture Coffee.UIExtensions.UIParticleRenderer::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* UIParticleRenderer_get_mainTexture_mC1E2E9CC72605AFD92493C86540C267F5B6594F5 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B3_0 = NULL;
	{
		// return _isTrail ? null : _particleSystem.GetTextureForSprite();
		bool L_0 = __this->____isTrail_46;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->____particleSystem_42;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = ParticleSystemExtensions_GetTextureForSprite_mA3097381DFF8AA5975E5A942E5C693E620964D6B(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)(NULL));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticleRenderer::get_raycastTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleRenderer_get_raycastTarget_m10F9C3C6481515BB51EBB7E5295F1B74FBFF3953 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Rect Coffee.UIExtensions.UIParticleRenderer::get_rootCanvasRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UIParticleRenderer_get_rootCanvasRect_mD7F1E91B01114283CB9AD8A251E59F0F79EF47CB (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// s_Corners[0] = transform.TransformPoint(_lastBounds.min.x, _lastBounds.min.y, 0);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_2, NULL);
		float L_4 = L_3.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_5, NULL);
		float L_7 = L_6.___y_3;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A(L_1, L_4, L_7, (0.0f), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		// s_Corners[1] = transform.TransformPoint(_lastBounds.min.x, _lastBounds.max.y, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_11, NULL);
		float L_13 = L_12.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_14, NULL);
		float L_16 = L_15.___y_3;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A(L_10, L_13, L_16, (0.0f), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// s_Corners[2] = transform.TransformPoint(_lastBounds.max.x, _lastBounds.max.y, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_20, NULL);
		float L_22 = L_21.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_23 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_23, NULL);
		float L_25 = L_24.___y_3;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A(L_19, L_22, L_25, (0.0f), NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_26);
		// s_Corners[3] = transform.TransformPoint(_lastBounds.max.x, _lastBounds.min.y, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_29 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_29, NULL);
		float L_31 = L_30.___x_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_32 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_32, NULL);
		float L_34 = L_33.___y_3;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_TransformPoint_m220E1BBBF9AF7A6D0EAC417FA07C820B2344FA1A(L_28, L_31, L_34, (0.0f), NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// if (canvas)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_36;
		L_36 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_36, NULL);
		V_2 = L_37;
		bool L_38 = V_2;
		if (!L_38)
		{
			goto IL_0149;
		}
	}
	{
		// var worldToLocalMatrix = canvas.rootCanvas.transform.worldToLocalMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_39;
		L_39 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		NullCheck(L_39);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_40;
		L_40 = Canvas_get_rootCanvas_m74DEA02014963B54DF651BE14284BDAFDA61DDFE(L_39, NULL);
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		NullCheck(L_41);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_42;
		L_42 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_41, NULL);
		V_3 = L_42;
		// for (var i = 0; i < 4; ++i)
		V_4 = 0;
		goto IL_013d;
	}

IL_0118:
	{
		// s_Corners[i] = worldToLocalMatrix.MultiplyPoint(s_Corners[i]);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_44 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_3), L_48, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_49);
		// for (var i = 0; i < 4; ++i)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_013d:
	{
		// for (var i = 0; i < 4; ++i)
		int32_t L_51 = V_4;
		V_5 = (bool)((((int32_t)L_51) < ((int32_t)4))? 1 : 0);
		bool L_52 = V_5;
		if (L_52)
		{
			goto IL_0118;
		}
	}
	{
	}

IL_0149:
	{
		// var corner1 = (Vector2) s_Corners[0];
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		NullCheck(L_53);
		int32_t L_54 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_55, NULL);
		V_0 = L_56;
		// var corner2 = (Vector2) s_Corners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_57 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		NullCheck(L_57);
		int32_t L_58 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_59, NULL);
		V_1 = L_60;
		// for (var i = 1; i < 4; ++i)
		V_6 = 1;
		goto IL_025b;
	}

IL_0173:
	{
		// if (s_Corners[i].x < corner1.x)
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		float L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_0;
		float L_65 = L_64.___x_0;
		V_7 = (bool)((((float)L_63) < ((float)L_65))? 1 : 0);
		bool L_66 = V_7;
		if (!L_66)
		{
			goto IL_01ad;
		}
	}
	{
		// corner1.x = s_Corners[i].x;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_68 = V_6;
		NullCheck(L_67);
		float L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___x_2;
		(&V_0)->___x_0 = L_69;
		goto IL_01e4;
	}

IL_01ad:
	{
		// else if (s_Corners[i].x > corner2.x)
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		float L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_1;
		float L_74 = L_73.___x_0;
		V_8 = (bool)((((float)L_72) > ((float)L_74))? 1 : 0);
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_01e4;
		}
	}
	{
		// corner2.x = s_Corners[i].x;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_77 = V_6;
		NullCheck(L_76);
		float L_78 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___x_2;
		(&V_1)->___x_0 = L_78;
	}

IL_01e4:
	{
		// if (s_Corners[i].y < corner1.y)
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_80 = V_6;
		NullCheck(L_79);
		float L_81 = ((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_0;
		float L_83 = L_82.___y_1;
		V_9 = (bool)((((float)L_81) < ((float)L_83))? 1 : 0);
		bool L_84 = V_9;
		if (!L_84)
		{
			goto IL_021d;
		}
	}
	{
		// corner1.y = s_Corners[i].y;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_85 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_86 = V_6;
		NullCheck(L_85);
		float L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___y_3;
		(&V_0)->___y_1 = L_87;
		goto IL_0254;
	}

IL_021d:
	{
		// else if (s_Corners[i].y > corner2.y)
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_89 = V_6;
		NullCheck(L_88);
		float L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91 = V_1;
		float L_92 = L_91.___y_1;
		V_10 = (bool)((((float)L_90) > ((float)L_92))? 1 : 0);
		bool L_93 = V_10;
		if (!L_93)
		{
			goto IL_0254;
		}
	}
	{
		// corner2.y = s_Corners[i].y;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40;
		int32_t L_95 = V_6;
		NullCheck(L_94);
		float L_96 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95)))->___y_3;
		(&V_1)->___y_1 = L_96;
	}

IL_0254:
	{
		// for (var i = 1; i < 4; ++i)
		int32_t L_97 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_025b:
	{
		// for (var i = 1; i < 4; ++i)
		int32_t L_98 = V_6;
		V_11 = (bool)((((int32_t)L_98) < ((int32_t)4))? 1 : 0);
		bool L_99 = V_11;
		if (L_99)
		{
			goto IL_0173;
		}
	}
	{
		// return new Rect(corner1, corner2 - corner1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		L_103 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_101, L_102, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_104;
		memset((&L_104), 0, sizeof(L_104));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_104), L_100, L_103, /*hidden argument*/NULL);
		V_12 = L_104;
		goto IL_027a;
	}

IL_027a:
	{
		// }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_105 = V_12;
		return L_105;
	}
}
// Coffee.UIExtensions.UIParticleRenderer Coffee.UIExtensions.UIParticleRenderer::AddRenderer(Coffee.UIExtensions.UIParticle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* UIParticleRenderer_AddRenderer_m12135FEA68000EF6F57C438CB0BBE7F5DA08CEAB (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___parent0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m34240EB3B13C9B23CB88F83D71D53AF794E9F54D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98532F85D79345857F234D135EEFF078E57A298A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* V_2 = NULL;
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* V_3 = NULL;
	{
		// var go = new GameObject("UIParticleRenderer", typeof(UIParticleRenderer))
		// {
		//     hideFlags = HideFlags.DontSave,
		//     layer = parent.gameObject.layer,
		// };
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_4, _stringLiteral98532F85D79345857F234D135EEFF078E57A298A, L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_5, ((int32_t)52), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_7 = ___parent0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		NullCheck(L_6);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_9, NULL);
		V_0 = L_6;
		// var transform = go.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		V_1 = L_11;
		// transform.SetParent(parent.transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_13 = ___parent0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_14, (bool)0, NULL);
		// transform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_15);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_15, L_16, NULL);
		// transform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_17);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_17, L_18, NULL);
		// transform.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_20, NULL);
		// var renderer = go.GetComponent<UIParticleRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_22;
		L_22 = GameObject_GetComponent_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m34240EB3B13C9B23CB88F83D71D53AF794E9F54D(L_21, GameObject_GetComponent_TisUIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_m34240EB3B13C9B23CB88F83D71D53AF794E9F54D_RuntimeMethod_var);
		V_2 = L_22;
		// renderer._parent = parent;
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_23 = V_2;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_24 = ___parent0;
		NullCheck(L_23);
		L_23->____parent_44 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____parent_44), (void*)L_24);
		// renderer._index = index;
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_25 = V_2;
		int32_t L_26 = ___index1;
		NullCheck(L_25);
		L_25->____index_45 = L_26;
		// return renderer;
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_27 = V_2;
		V_3 = L_27;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_28 = V_3;
		return L_28;
	}
}
// UnityEngine.Material Coffee.UIExtensions.UIParticleRenderer::GetModifiedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* UIParticleRenderer_GetModifiedMaterial_m52D69D2E523582E8923B54094CA3548BA5C6D7FD (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___baseMaterial0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// _currentMaterialForRendering = null;
		__this->____currentMaterialForRendering_53 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentMaterialForRendering_53), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// if (!IsActive()) return baseMaterial;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (!IsActive()) return baseMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___baseMaterial0;
		V_4 = L_2;
		goto IL_009f;
	}

IL_001d:
	{
		// var modifiedMaterial = base.GetModifiedMaterial(baseMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___baseMaterial0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = MaskableGraphic_GetModifiedMaterial_mBE4C5B18ED4221E0A6C026C750B6A04E9B35312A(__this, L_3, NULL);
		V_0 = L_4;
		// var texture = mainTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(35 /* UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture() */, __this);
		V_1 = L_5;
		// if (texture == null && _parent.m_AnimatableProperties.Length == 0)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_8 = __this->____parent_44;
		NullCheck(L_8);
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_9 = L_8->___m_AnimatableProperties_38;
		NullCheck(L_9);
		G_B5_0 = ((((int32_t)(((RuntimeArray*)L_9)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 0;
	}

IL_0047:
	{
		V_5 = (bool)G_B5_0;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// ModifiedMaterial.Remove(_modifiedMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->____modifiedMaterial_47;
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		ModifiedMaterial_Remove_m74F283D7ACB95C75BC35D69DB5C47F96A9ECA68E(L_11, NULL);
		// _modifiedMaterial = null;
		__this->____modifiedMaterial_47 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____modifiedMaterial_47), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// return modifiedMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_0;
		V_4 = L_12;
		goto IL_009f;
	}

IL_0066:
	{
		// var id = _parent.m_AnimatableProperties.Length == 0 ? 0 : GetInstanceID();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_13 = __this->____parent_44;
		NullCheck(L_13);
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_14 = L_13->___m_AnimatableProperties_38;
		NullCheck(L_14);
		if (!(((RuntimeArray*)L_14)->max_length))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_15;
		L_15 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		G_B10_0 = L_15;
		goto IL_007d;
	}

IL_007c:
	{
		G_B10_0 = 0;
	}

IL_007d:
	{
		V_2 = G_B10_0;
		// modifiedMaterial = ModifiedMaterial.Add(modifiedMaterial, texture, id);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = V_1;
		int32_t L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = ModifiedMaterial_Add_m34306D8C8473A61A072248F70B041CC6D1F602AF(L_16, L_17, L_18, NULL);
		V_0 = L_19;
		// ModifiedMaterial.Remove(_modifiedMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->____modifiedMaterial_47;
		ModifiedMaterial_Remove_m74F283D7ACB95C75BC35D69DB5C47F96A9ECA68E(L_20, NULL);
		// _modifiedMaterial = modifiedMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = V_0;
		__this->____modifiedMaterial_47 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____modifiedMaterial_47), (void*)L_21);
		// return modifiedMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_0;
		V_4 = L_22;
		goto IL_009f;
	}

IL_009f:
	{
		// }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_4;
		return L_23;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::Clear(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Clear_m412CE9A1BDE7A72B7392FE16F77FE936FB072E25 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (_renderer)
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_0 = __this->____renderer_41;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// _renderer.enabled = true;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_3 = __this->____renderer_41;
		NullCheck(L_3);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)1, NULL);
	}

IL_001f:
	{
		// _parent = null;
		__this->____parent_44 = (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_44), (void*)(UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL);
		// _particleSystem = null;
		__this->____particleSystem_42 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____particleSystem_42), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// _renderer = null;
		__this->____renderer_41 = (ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_41), (void*)(ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4*)NULL);
		// _prevParticleCount = 0;
		__this->____prevParticleCount_43 = 0;
		// if (0 <= index)
		int32_t L_4 = ___index0;
		V_1 = (bool)((((int32_t)((((int32_t)0) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// _index = index;
		int32_t L_6 = ___index0;
		__this->____index_45 = L_6;
	}

IL_004f:
	{
		// if (this && isActiveAndEnabled)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(__this, NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		bool L_8;
		L_8 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		G_B7_0 = ((int32_t)(L_8));
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		V_2 = (bool)G_B7_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_009e;
		}
	}
	{
		// material = null;
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, __this, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// workerMesh.Clear();
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10;
		L_10 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_10);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_10, NULL);
		// canvasRenderer.SetMesh(workerMesh);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_11;
		L_11 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12;
		L_12 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_11);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_11, L_12, NULL);
		// _lastBounds = new Bounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_13 = (&__this->____lastBounds_54);
		il2cpp_codegen_initobj(L_13, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::Set(Coffee.UIExtensions.UIParticle,UnityEngine.ParticleSystem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Set_mD3728320114E45DCFE7164165E86F7162A134336 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___parent0, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___particleSystem1, bool ___isTrail2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* G_B4_0 = NULL;
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* G_B4_1 = NULL;
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* G_B3_0 = NULL;
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* G_B5_1 = NULL;
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* G_B5_2 = NULL;
	int32_t G_B8_0 = 0;
	{
		// _parent = parent;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_0 = ___parent0;
		__this->____parent_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_44), (void*)L_0);
		// maskable = parent.maskable;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_1 = ___parent0;
		NullCheck(L_1);
		bool L_2;
		L_2 = MaskableGraphic_get_maskable_m34B87CD87CFF73FF4E09D892ADB316E412F22660(L_1, NULL);
		MaskableGraphic_set_maskable_mC2486FDC0636C83AC3BDBFF11E6E85CC27F15689(__this, L_2, NULL);
		// gameObject.layer = parent.gameObject.layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_4 = ___parent0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_5, NULL);
		NullCheck(L_3);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_3, L_6, NULL);
		// _particleSystem = particleSystem;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = ___particleSystem1;
		__this->____particleSystem_42 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____particleSystem_42), (void*)L_7);
		// if (_particleSystem.isPlaying)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->____particleSystem_42;
		NullCheck(L_8);
		bool L_9;
		L_9 = ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B(L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		// _particleSystem.Clear();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->____particleSystem_42;
		NullCheck(L_11);
		ParticleSystem_Clear_mE026AF9610248EB560530CD292FEED0F7571F732(L_11, NULL);
		// _particleSystem.Pause();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = __this->____particleSystem_42;
		NullCheck(L_12);
		ParticleSystem_Pause_m2A5CE9D753E6E58FB9BC62C6A548B01E9FA63009(L_12, NULL);
	}

IL_005c:
	{
		// _prewarm = _particleSystem.main.prewarm;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = __this->____particleSystem_42;
		NullCheck(L_13);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_14;
		L_14 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_13, NULL);
		V_2 = L_14;
		bool L_15;
		L_15 = MainModule_get_prewarm_m2B4B37F0B20CA2FDAB53315FC47E8FDCF3BBCD72((&V_2), NULL);
		__this->____prewarm_52 = L_15;
		// _renderer = particleSystem.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = ___particleSystem1;
		NullCheck(L_16);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_17;
		L_17 = Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023(L_16, Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		__this->____renderer_41 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_41), (void*)L_17);
		// _renderer.enabled = false;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_18 = __this->____renderer_41;
		NullCheck(L_18);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_18, (bool)0, NULL);
		// _isTrail = isTrail;
		bool L_19 = ___isTrail2;
		__this->____isTrail_46 = L_19;
		// _renderer.GetSharedMaterials(s_Materials);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_20 = __this->____renderer_41;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_21 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Materials_37;
		NullCheck(L_20);
		Renderer_GetSharedMaterials_m40B0D467465E249E770D2BD5111E21989DEF08D2(L_20, L_21, NULL);
		// material = s_Materials[isTrail ? 1 : 0];
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_22 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Materials_37;
		bool L_23 = ___isTrail2;
		G_B3_0 = L_22;
		G_B3_1 = __this;
		if (L_23)
		{
			G_B4_0 = L_22;
			G_B4_1 = __this;
			goto IL_00b2;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_00b3:
	{
		NullCheck(G_B5_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24;
		L_24 = List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456(G_B5_1, G_B5_0, List_1_get_Item_m70F5CFC2DEA9332B78C5ADC0EE1CE1B7465B1456_RuntimeMethod_var);
		NullCheck(G_B5_2);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, G_B5_2, L_24);
		// s_Materials.Clear();
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_25 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Materials_37;
		NullCheck(L_25);
		List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_inline(L_25, List_1_Clear_mB542E879C436E98D901D3068C891582A25F85711_RuntimeMethod_var);
		// var tsa = particleSystem.textureSheetAnimation;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_26 = ___particleSystem1;
		NullCheck(L_26);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_27;
		L_27 = ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B(L_26, NULL);
		V_0 = L_27;
		// if (tsa.mode == ParticleSystemAnimationMode.Sprites && tsa.uvChannelMask == 0)
		int32_t L_28;
		L_28 = TextureSheetAnimationModule_get_mode_m675B6ECB7DE53BBCDAEEA723757A8341417B2CA6((&V_0), NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_29;
		L_29 = TextureSheetAnimationModule_get_uvChannelMask_m7073447C213635C0BC84E34992D7D5E5E4CE154F((&V_0), NULL);
		G_B8_0 = ((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B8_0 = 0;
	}

IL_00e7:
	{
		V_3 = (bool)G_B8_0;
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_00f4;
		}
	}
	{
		// tsa.uvChannelMask = UVChannelFlags.UV0;
		TextureSheetAnimationModule_set_uvChannelMask_mCE517791579D9AD5D4C6FA4CC47D56C81AC540F0((&V_0), 1, NULL);
	}

IL_00f4:
	{
		// _prevScale = GetWorldScale();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = UIParticleRenderer_GetWorldScale_mB7E160C281DA6BACF121AC6DF12E573544342DAF(__this, NULL);
		__this->____prevScale_48 = L_31;
		// _prevPsPos = _particleSystem.transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_32 = __this->____particleSystem_42;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		__this->____prevPsPos_49 = L_34;
		// _prevScreenSize = new Vector2Int(Screen.width, Screen.height);
		int32_t L_35;
		L_35 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_36;
		L_36 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_37), L_35, L_36, /*hidden argument*/NULL);
		__this->____prevScreenSize_50 = L_37;
		// _delay = true;
		__this->____delay_51 = (bool)1;
		// _prevParticleCount = 0;
		__this->____prevParticleCount_43 = 0;
		// canvasRenderer.SetTexture(null);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_38;
		L_38 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		NullCheck(L_38);
		CanvasRenderer_SetTexture_m8A670DA4B435058550D64A1B16CAB8E421F45AAC(L_38, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateMesh(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateMesh_m09549AA6D13601B8F8F1C20923C6FDDF96C57DF9 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___bakeCamera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B363083EBF1FAEEE8FDA71C4E8EC36669184E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B327D2FB139F5A78A9CCC3F762C1AB38666DF68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630B475143446D51D217974B7BB3B2517DB71B94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6BCCA9F2A48510AEAFC95CFAE64E30655A89E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8911211305C4AEF7FBDE656489498B731CAAB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD2E28522BA2DE018DE067A5FE101F56C3DF88A0);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B19_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* G_B22_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* G_B21_1 = NULL;
	int32_t G_B23_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* G_B23_2 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B41_0 = 0;
	{
		//             if (
		//                 !isActiveAndEnabled || !_particleSystem || !_parent || !canvasRenderer || !canvas || !bakeCamera
		//                 || _parent.meshSharing == UIParticle.MeshSharing.Reprica
		//                 || !transform.lossyScale.GetScaled(_parent.scale3D).IsVisible()     // Scale is not visible.
		//                 || (!_particleSystem.IsAlive() && !_particleSystem.isPlaying)       // No particle.
		//                 || (_isTrail && !_particleSystem.trails.enabled)                    // Trail, but it is not enabled.
		// #if UNITY_2018_3_OR_NEWER
		//                 || canvasRenderer.GetInheritedAlpha() < 0.01f                       // #102: Do not bake particle system to mesh when the alpha is zero.
		// #endif
		//         )
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_0)
		{
			goto IL_00d0;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->____particleSystem_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_00d0;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_3 = __this->____parent_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_00d0;
		}
	}
	{
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_5;
		L_5 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (!L_6)
		{
			goto IL_00d0;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7;
		L_7 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_00d0;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = ___bakeCamera0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_9, NULL);
		if (!L_10)
		{
			goto IL_00d0;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_11 = __this->____parent_44;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UIParticle_get_meshSharing_mB5632CFE43194AD9264EFC511383CD7EAC54D5DC(L_11, NULL);
		if ((((int32_t)L_12) == ((int32_t)4)))
		{
			goto IL_00d0;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_13, NULL);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_15 = __this->____parent_44;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = UIParticle_get_scale3D_mCEBA095AC7965D040D06922E02276BCD6956D0D7(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_14, L_16, NULL);
		bool L_18;
		L_18 = Vector3Extensions_IsVisible_m6A3E8644C9CC6227597EC01AFB95A36EC9AD8A54(L_17, NULL);
		if (!L_18)
		{
			goto IL_00d0;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_19 = __this->____particleSystem_42;
		NullCheck(L_19);
		bool L_20;
		L_20 = ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56(L_19, NULL);
		if (L_20)
		{
			goto IL_009e;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_21 = __this->____particleSystem_42;
		NullCheck(L_21);
		bool L_22;
		L_22 = ParticleSystem_get_isPlaying_mC5170DA3C904670B88200C8DA1E0F8FC1BC7C42B(L_21, NULL);
		if (!L_22)
		{
			goto IL_00d0;
		}
	}

IL_009e:
	{
		bool L_23 = __this->____isTrail_46;
		if (!L_23)
		{
			goto IL_00bc;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24 = __this->____particleSystem_42;
		NullCheck(L_24);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_25;
		L_25 = ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66(L_24, NULL);
		V_4 = L_25;
		bool L_26;
		L_26 = TrailModule_get_enabled_m78262C91CD53A91AFC1472EA65B64EA0D064EE0C((&V_4), NULL);
		if (!L_26)
		{
			goto IL_00d0;
		}
	}

IL_00bc:
	{
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_27;
		L_27 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		NullCheck(L_27);
		float L_28;
		L_28 = CanvasRenderer_GetInheritedAlpha_m55E826F02D368D3510AE8B2EE42729CF167127F7(L_27, NULL);
		G_B14_0 = ((((float)L_28) < ((float)(0.00999999978f)))? 1 : 0);
		goto IL_00d1;
	}

IL_00d0:
	{
		G_B14_0 = 1;
	}

IL_00d1:
	{
		V_3 = (bool)G_B14_0;
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_0114;
		}
	}
	{
		// Profiler.BeginSample("[UIParticleRenderer] Clear Mesh");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteralAB8911211305C4AEF7FBDE656489498B731CAAB8, NULL);
		// workerMesh.Clear();
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30;
		L_30 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_30);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_30, NULL);
		// canvasRenderer.SetMesh(workerMesh);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_31;
		L_31 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_32;
		L_32 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_31);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_31, L_32, NULL);
		// _lastBounds = new Bounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_33 = (&__this->____lastBounds_54);
		il2cpp_codegen_initobj(L_33, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// return;
		goto IL_05dd;
	}

IL_0114:
	{
		// var main = _particleSystem.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_34 = __this->____particleSystem_42;
		NullCheck(L_34);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_35;
		L_35 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_34, NULL);
		V_0 = L_35;
		// var scale = GetWorldScale();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = UIParticleRenderer_GetWorldScale_mB7E160C281DA6BACF121AC6DF12E573544342DAF(__this, NULL);
		V_1 = L_36;
		// var psPos = _particleSystem.transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_37 = __this->____particleSystem_42;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		V_2 = L_39;
		// Profiler.BeginSample("[UIParticle] Bake Mesh > Simulate Particles");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteral12B363083EBF1FAEEE8FDA71C4E8EC36669184E2, NULL);
		// if (!_isTrail && _parent.canSimulate)
		bool L_40 = __this->____isTrail_46;
		if (L_40)
		{
			goto IL_0158;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_41 = __this->____parent_44;
		NullCheck(L_41);
		bool L_42;
		L_42 = UIParticle_get_canSimulate_m762C8B5EE86615A2D12E6773EBF982CDF190FB80(L_41, NULL);
		G_B19_0 = ((int32_t)(L_42));
		goto IL_0159;
	}

IL_0158:
	{
		G_B19_0 = 0;
	}

IL_0159:
	{
		V_5 = (bool)G_B19_0;
		bool L_43 = V_5;
		if (!L_43)
		{
			goto IL_0229;
		}
	}
	{
		// ResolveResolutionChange(psPos, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_1;
		UIParticleRenderer_ResolveResolutionChange_m89A907B894F8AE4B66BE19D4595973B54E90D7DF(__this, L_44, L_45, NULL);
		// Simulate(scale, _parent.isPaused || _delay);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_47 = __this->____parent_44;
		NullCheck(L_47);
		bool L_48;
		L_48 = UIParticle_get_isPaused_m690FE640B6BFAA5FA947F3D1C06557769ADBC7A3_inline(L_47, NULL);
		G_B21_0 = L_46;
		G_B21_1 = __this;
		if (L_48)
		{
			G_B22_0 = L_46;
			G_B22_1 = __this;
			goto IL_0184;
		}
	}
	{
		bool L_49 = __this->____delay_51;
		G_B23_0 = ((int32_t)(L_49));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		goto IL_0185;
	}

IL_0184:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_0185:
	{
		NullCheck(G_B23_2);
		UIParticleRenderer_Simulate_m19DD2EE8731FFFD69BF43ADA71AE538C922B69CA(G_B23_2, G_B23_1, (bool)G_B23_0, NULL);
		// if (_delay && !_parent.isPaused)
		bool L_50 = __this->____delay_51;
		if (!L_50)
		{
			goto IL_01a3;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_51 = __this->____parent_44;
		NullCheck(L_51);
		bool L_52;
		L_52 = UIParticle_get_isPaused_m690FE640B6BFAA5FA947F3D1C06557769ADBC7A3_inline(L_51, NULL);
		G_B26_0 = ((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B26_0 = 0;
	}

IL_01a4:
	{
		V_6 = (bool)G_B26_0;
		bool L_53 = V_6;
		if (!L_53)
		{
			goto IL_01bf;
		}
	}
	{
		// Simulate(scale, _parent.isPaused);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_55 = __this->____parent_44;
		NullCheck(L_55);
		bool L_56;
		L_56 = UIParticle_get_isPaused_m690FE640B6BFAA5FA947F3D1C06557769ADBC7A3_inline(L_55, NULL);
		UIParticleRenderer_Simulate_m19DD2EE8731FFFD69BF43ADA71AE538C922B69CA(__this, L_54, L_56, NULL);
	}

IL_01bf:
	{
		// if (!main.loop && main.duration <= _particleSystem.time && (_particleSystem.IsAlive() || _particleSystem.particleCount == 0))
		bool L_57;
		L_57 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_0), NULL);
		if (L_57)
		{
			goto IL_01fc;
		}
	}
	{
		float L_58;
		L_58 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_0), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_59 = __this->____particleSystem_42;
		NullCheck(L_59);
		float L_60;
		L_60 = ParticleSystem_get_time_mDB612DCED4B4345E40BE98597A5895F48BC0ECDC(L_59, NULL);
		if ((!(((float)L_58) <= ((float)L_60))))
		{
			goto IL_01fc;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_61 = __this->____particleSystem_42;
		NullCheck(L_61);
		bool L_62;
		L_62 = ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56(L_61, NULL);
		if (L_62)
		{
			goto IL_01f9;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_63 = __this->____particleSystem_42;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076(L_63, NULL);
		G_B33_0 = ((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
		goto IL_01fa;
	}

IL_01f9:
	{
		G_B33_0 = 1;
	}

IL_01fa:
	{
		G_B35_0 = G_B33_0;
		goto IL_01fd;
	}

IL_01fc:
	{
		G_B35_0 = 0;
	}

IL_01fd:
	{
		V_7 = (bool)G_B35_0;
		bool L_65 = V_7;
		if (!L_65)
		{
			goto IL_0212;
		}
	}
	{
		// _particleSystem.Stop(false);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_66 = __this->____particleSystem_42;
		NullCheck(L_66);
		ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF(L_66, (bool)0, NULL);
	}

IL_0212:
	{
		// _prevScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_1;
		__this->____prevScale_48 = L_67;
		// _prevPsPos = psPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_2;
		__this->____prevPsPos_49 = L_68;
		// _delay = false;
		__this->____delay_51 = (bool)0;
	}

IL_0229:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// Profiler.BeginSample("[UIParticleRenderer] Bake Mesh");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteral2B327D2FB139F5A78A9CCC3F762C1AB38666DF68, NULL);
		// if (_isTrail && _parent.canSimulate)
		bool L_69 = __this->____isTrail_46;
		if (!L_69)
		{
			goto IL_024f;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_70 = __this->____parent_44;
		NullCheck(L_70);
		bool L_71;
		L_71 = UIParticle_get_canSimulate_m762C8B5EE86615A2D12E6773EBF982CDF190FB80(L_70, NULL);
		G_B41_0 = ((int32_t)(L_71));
		goto IL_0250;
	}

IL_024f:
	{
		G_B41_0 = 0;
	}

IL_0250:
	{
		V_8 = (bool)G_B41_0;
		bool L_72 = V_8;
		if (!L_72)
		{
			goto IL_0278;
		}
	}
	{
		// _renderer.BakeTrailsMesh(s_CombineInstances[0].mesh, bakeCamera, true);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_73 = __this->____renderer_41;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_74 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_74);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_75;
		L_75 = CombineInstance_get_mesh_m85416E24709E1C5314B8FAD8B8F2D155B9C2481C(((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_76 = ___bakeCamera0;
		NullCheck(L_73);
		ParticleSystemRenderer_BakeTrailsMesh_mDAD9AB8BD85A68CC7BD0B4DF02A7558F1845AC34(L_73, L_75, L_76, (bool)1, NULL);
		goto IL_02c4;
	}

IL_0278:
	{
		// else if (_renderer.CanBakeMesh())
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_77 = __this->____renderer_41;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = ParticleSystemExtensions_CanBakeMesh_m511867228B928821D0860A599BFA89601B07C03E(L_77, NULL);
		V_9 = L_78;
		bool L_79 = V_9;
		if (!L_79)
		{
			goto IL_02ab;
		}
	}
	{
		// _renderer.BakeMesh(s_CombineInstances[0].mesh, bakeCamera, true);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_80 = __this->____renderer_41;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_81 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_81);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_82;
		L_82 = CombineInstance_get_mesh_m85416E24709E1C5314B8FAD8B8F2D155B9C2481C(((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_83 = ___bakeCamera0;
		NullCheck(L_80);
		ParticleSystemRenderer_BakeMesh_m9CC200A5574186FB88AA904ABF70FBDA957E5141(L_80, L_82, L_83, (bool)1, NULL);
		goto IL_02c4;
	}

IL_02ab:
	{
		// s_CombineInstances[0].mesh.Clear(false);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_84 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_84);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_85;
		L_85 = CombineInstance_get_mesh_m85416E24709E1C5314B8FAD8B8F2D155B9C2481C(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_85);
		Mesh_Clear_m46EF7B8B9E01367724B1783F4CBE032CE2CC810E(L_85, (bool)0, NULL);
	}

IL_02c4:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// Profiler.BeginSample("[UIParticleRenderer] Combine Mesh");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteral7A6BCCA9F2A48510AEAFC95CFAE64E30655A89E0, NULL);
		// if (_parent.canSimulate)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_86 = __this->____parent_44;
		NullCheck(L_86);
		bool L_87;
		L_87 = UIParticle_get_canSimulate_m762C8B5EE86615A2D12E6773EBF982CDF190FB80(L_86, NULL);
		V_10 = L_87;
		bool L_88 = V_10;
		if (!L_88)
		{
			goto IL_041d;
		}
	}
	{
		// if (_parent.absoluteMode)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_89 = __this->____parent_44;
		NullCheck(L_89);
		bool L_90;
		L_90 = UIParticle_get_absoluteMode_m8BA7DE6C5FBFF684D12AFE4DB69AC994180A5EDF(L_89, NULL);
		V_14 = L_90;
		bool L_91 = V_14;
		if (!L_91)
		{
			goto IL_032d;
		}
	}
	{
		// s_CombineInstances[0].transform = canvasRenderer.transform.worldToLocalMatrix * GetWorldMatrix(psPos, scale);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_92 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_92);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_93;
		L_93 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_93, NULL);
		NullCheck(L_94);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_95;
		L_95 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_98;
		L_98 = UIParticleRenderer_GetWorldMatrix_m546BA0052D188C023838E498956E08116098BDB0(__this, L_96, L_97, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_99;
		L_99 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_95, L_98, NULL);
		CombineInstance_set_transform_m9C9911DE1F613A1B949DF89CD46B0E8F742F3BEE(((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_99, NULL);
		goto IL_03a0;
	}

IL_032d:
	{
		// var diff = _particleSystem.transform.position - _parent.transform.position;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_100 = __this->____particleSystem_42;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_100, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_103 = __this->____parent_44;
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_103, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_102, L_105, NULL);
		V_15 = L_106;
		// s_CombineInstances[0].transform = canvasRenderer.transform.worldToLocalMatrix * Matrix4x4.Translate(diff.GetScaled(scale - Vector3.one)) * GetWorldMatrix(psPos, scale);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_107 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_107);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_108;
		L_108 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_108, NULL);
		NullCheck(L_109);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_110;
		L_110 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_109, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_112, L_113, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_111, L_114, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_116;
		L_116 = Matrix4x4_Translate_m95D44EDD1A9856DD11C639692E47B7A35EF745E2(L_115, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_117;
		L_117 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_110, L_116, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_120;
		L_120 = UIParticleRenderer_GetWorldMatrix_m546BA0052D188C023838E498956E08116098BDB0(__this, L_118, L_119, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_121;
		L_121 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_117, L_120, NULL);
		CombineInstance_set_transform_m9C9911DE1F613A1B949DF89CD46B0E8F742F3BEE(((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_121, NULL);
	}

IL_03a0:
	{
		// workerMesh.CombineMeshes(s_CombineInstances, true, true);
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_122;
		L_122 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_123 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_122);
		Mesh_CombineMeshes_m23172B6FF99A4464AA5F4A497209121978A165D5(L_122, L_123, (bool)1, (bool)1, NULL);
		// workerMesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_124;
		L_124 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_124);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_124, NULL);
		// var bounds = workerMesh.bounds;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_125;
		L_125 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_125);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_126;
		L_126 = Mesh_get_bounds_m9E3A46226824676703990270A722A89A4860A100(L_125, NULL);
		V_11 = L_126;
		// var center = bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_11), NULL);
		V_12 = L_127;
		// center.z = 0;
		(&V_12)->___z_4 = (0.0f);
		// bounds.center = center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_12;
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_11), L_128, NULL);
		// var extents = bounds.extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_11), NULL);
		V_13 = L_129;
		// extents.z = 0;
		(&V_13)->___z_4 = (0.0f);
		// bounds.extents = extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_13;
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F((&V_11), L_130, NULL);
		// workerMesh.bounds = bounds;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_131;
		L_131 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_132 = V_11;
		NullCheck(L_131);
		Mesh_set_bounds_m2E526E9B61ACA77D644C22A9D8EB49583012B54E(L_131, L_132, NULL);
		// _lastBounds = bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_133 = V_11;
		__this->____lastBounds_54 = L_133;
	}

IL_041d:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// s_Renderers.Clear();
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_134 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		NullCheck(L_134);
		List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_inline(L_134, List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_RuntimeMethod_var);
		// if (_parent.useMeshSharing)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_135 = __this->____parent_44;
		NullCheck(L_135);
		bool L_136;
		L_136 = UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F(L_135, NULL);
		V_16 = L_136;
		bool L_137 = V_16;
		if (!L_137)
		{
			goto IL_045d;
		}
	}
	{
		// UIParticleUpdater.GetGroupedRenderers(_parent.groupId, _index, s_Renderers);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_138 = __this->____parent_44;
		NullCheck(L_138);
		int32_t L_139;
		L_139 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_138, NULL);
		int32_t L_140 = __this->____index_45;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_141 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		UIParticleUpdater_GetGroupedRenderers_mE1760E1B821C42F09868C22784BBEB48AE794961(L_139, L_140, L_141, NULL);
	}

IL_045d:
	{
		// Profiler.BeginSample("[UIParticleRenderer] Set Mesh");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteralDD2E28522BA2DE018DE067A5FE101F56C3DF88A0, NULL);
		// for (int i = 0; i < s_Renderers.Count; i++)
		V_17 = 0;
		goto IL_04c2;
	}

IL_046d:
	{
		// if (s_Renderers[i] == this) continue;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_142 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		int32_t L_143 = V_17;
		NullCheck(L_142);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_144;
		L_144 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_142, L_143, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_145;
		L_145 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_144, __this, NULL);
		V_18 = L_145;
		bool L_146 = V_18;
		if (!L_146)
		{
			goto IL_0488;
		}
	}
	{
		// if (s_Renderers[i] == this) continue;
		goto IL_04bc;
	}

IL_0488:
	{
		// s_Renderers[i].canvasRenderer.SetMesh(workerMesh);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_147 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		int32_t L_148 = V_17;
		NullCheck(L_147);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_149;
		L_149 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_147, L_148, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_149);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_150;
		L_150 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(L_149, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_151;
		L_151 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_150);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_150, L_151, NULL);
		// s_Renderers[i]._lastBounds = _lastBounds;
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_152 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		int32_t L_153 = V_17;
		NullCheck(L_152);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_154;
		L_154 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_152, L_153, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_155 = __this->____lastBounds_54;
		NullCheck(L_154);
		L_154->____lastBounds_54 = L_155;
	}

IL_04bc:
	{
		// for (int i = 0; i < s_Renderers.Count; i++)
		int32_t L_156 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_04c2:
	{
		// for (int i = 0; i < s_Renderers.Count; i++)
		int32_t L_157 = V_17;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_158 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		NullCheck(L_158);
		int32_t L_159;
		L_159 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_158, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_19 = (bool)((((int32_t)L_157) < ((int32_t)L_159))? 1 : 0);
		bool L_160 = V_19;
		if (L_160)
		{
			goto IL_046d;
		}
	}
	{
		// if (!_parent.canRender)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_161 = __this->____parent_44;
		NullCheck(L_161);
		bool L_162;
		L_162 = UIParticle_get_canRender_mA306605C69B343C33FEF48259D65F3262C040032(L_161, NULL);
		V_20 = (bool)((((int32_t)L_162) == ((int32_t)0))? 1 : 0);
		bool L_163 = V_20;
		if (!L_163)
		{
			goto IL_04f7;
		}
	}
	{
		// workerMesh.Clear();
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_164;
		L_164 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_164);
		Mesh_Clear_m0F95397EA143D31AD0B4D332E8C6FA25A7957BC0(L_164, NULL);
	}

IL_04f7:
	{
		// canvasRenderer.SetMesh(workerMesh);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_165;
		L_165 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_166;
		L_166 = Graphic_get_workerMesh_m7855FC1DAEA5D7C7FAC51707252CE6B5476D588A(NULL);
		NullCheck(L_165);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_165, L_166, NULL);
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// Profiler.BeginSample("[UIParticleRenderer] Update Animatable Material Properties");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteral630B475143446D51D217974B7BB3B2517DB71B94, NULL);
		// UpdateMaterialProperties();
		UIParticleRenderer_UpdateMaterialProperties_mB35AAB7D145EE27C29A63A483E9DC3A60822ECB9(__this, NULL);
		// if (!_parent.useMeshSharing)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_167 = __this->____parent_44;
		NullCheck(L_167);
		bool L_168;
		L_168 = UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F(L_167, NULL);
		V_21 = (bool)((((int32_t)L_168) == ((int32_t)0))? 1 : 0);
		bool L_169 = V_21;
		if (!L_169)
		{
			goto IL_05cc;
		}
	}
	{
		// if (!_currentMaterialForRendering)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_170 = __this->____currentMaterialForRendering_53;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_171;
		L_171 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_170, NULL);
		V_22 = (bool)((((int32_t)L_171) == ((int32_t)0))? 1 : 0);
		bool L_172 = V_22;
		if (!L_172)
		{
			goto IL_055a;
		}
	}
	{
		// _currentMaterialForRendering = materialForRendering;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_173;
		L_173 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(34 /* UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering() */, __this);
		__this->____currentMaterialForRendering_53 = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentMaterialForRendering_53), (void*)L_173);
	}

IL_055a:
	{
		// for (int i = 0; i < s_Renderers.Count; i++)
		V_23 = 0;
		goto IL_05b7;
	}

IL_055f:
	{
		// if (s_Renderers[i] == this) continue;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_174 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		int32_t L_175 = V_23;
		NullCheck(L_174);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_176;
		L_176 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_174, L_175, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_177;
		L_177 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_176, __this, NULL);
		V_24 = L_177;
		bool L_178 = V_24;
		if (!L_178)
		{
			goto IL_057a;
		}
	}
	{
		// if (s_Renderers[i] == this) continue;
		goto IL_05b1;
	}

IL_057a:
	{
		// s_Renderers[i].canvasRenderer.materialCount = 1;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_179 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		int32_t L_180 = V_23;
		NullCheck(L_179);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_181;
		L_181 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_179, L_180, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_181);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_182;
		L_182 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(L_181, NULL);
		NullCheck(L_182);
		CanvasRenderer_set_materialCount_m333926C78CD98557B86A8EAC66F47BD4DD4554C3(L_182, 1, NULL);
		// s_Renderers[i].canvasRenderer.SetMaterial(_currentMaterialForRendering, 0);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_183 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		int32_t L_184 = V_23;
		NullCheck(L_183);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_185;
		L_185 = List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329(L_183, L_184, List_1_get_Item_m68EDDD5704720F04F8634EC2F886CC361D119329_RuntimeMethod_var);
		NullCheck(L_185);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_186;
		L_186 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(L_185, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_187 = __this->____currentMaterialForRendering_53;
		NullCheck(L_186);
		CanvasRenderer_SetMaterial_mBB733E272FB6A5B30C3B24F557AF5ED9EAC5DBD7(L_186, L_187, 0, NULL);
	}

IL_05b1:
	{
		// for (int i = 0; i < s_Renderers.Count; i++)
		int32_t L_188 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_188, 1));
	}

IL_05b7:
	{
		// for (int i = 0; i < s_Renderers.Count; i++)
		int32_t L_189 = V_23;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_190 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		NullCheck(L_190);
		int32_t L_191;
		L_191 = List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_inline(L_190, List_1_get_Count_m1D43A7F80BC658047228C3F4576664D520E196FA_RuntimeMethod_var);
		V_25 = (bool)((((int32_t)L_189) < ((int32_t)L_191))? 1 : 0);
		bool L_192 = V_25;
		if (L_192)
		{
			goto IL_055f;
		}
	}
	{
	}

IL_05cc:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// s_Renderers.Clear();
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_193 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39;
		NullCheck(L_193);
		List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_inline(L_193, List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_RuntimeMethod_var);
	}

IL_05dd:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateParticleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateParticleCount_mFD2CF7B625D4F7F434FF80A4B35052682E58789A (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_particleSystem) return;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____particleSystem_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (!_particleSystem) return;
		goto IL_0026;
	}

IL_0015:
	{
		// _prevParticleCount = _particleSystem.particleCount;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____particleSystem_42;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076(L_3, NULL);
		__this->____prevParticleCount_43 = L_4;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_OnEnable_m8C0D58DA995E366792AF0174FF31DAB4830D563E (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAB08698F1F2BBEE077B8989495CC738010AE11);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// base.OnEnable();
		MaskableGraphic_OnEnable_m4BF46ECE5E57E2EE11ED4CE41AD50DADF141C9BC(__this, NULL);
		// if (!s_CombineInstances[0].mesh)
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_0 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = CombineInstance_get_mesh_m85416E24709E1C5314B8FAD8B8F2D155B9C2481C(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// s_CombineInstances[0].mesh = new Mesh()
		// {
		//     name = "[UIParticleRenderer] Combine Instance Mesh",
		//     hideFlags = HideFlags.HideAndDontSave,
		// };
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_4 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36;
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_5, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = L_5;
		NullCheck(L_6);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, _stringLiteralECAB08698F1F2BBEE077B8989495CC738010AE11, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = L_6;
		NullCheck(L_7);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, ((int32_t)61), NULL);
		CombineInstance_set_mesh_mB74AB585ED11B0D8B619F7ADC8B55286DD50A1B5(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_7, NULL);
	}

IL_0051:
	{
		// _currentMaterialForRendering = null;
		__this->____currentMaterialForRendering_53 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentMaterialForRendering_53), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_OnDisable_m9FD3984C286136810C27F0E7844DB0F9E51EF4CC (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		MaskableGraphic_OnDisable_m9123E729FA7BE001037CDE14E8A75B69AD68E16C(__this, NULL);
		// ModifiedMaterial.Remove(_modifiedMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____modifiedMaterial_47;
		il2cpp_codegen_runtime_class_init_inline(ModifiedMaterial_tFF50F10803982D99FE22F4D1D230B38723A635ED_il2cpp_TypeInfo_var);
		ModifiedMaterial_Remove_m74F283D7ACB95C75BC35D69DB5C47F96A9ECA68E(L_0, NULL);
		// _modifiedMaterial = null;
		__this->____modifiedMaterial_47 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____modifiedMaterial_47), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// _currentMaterialForRendering = null;
		__this->____currentMaterialForRendering_53 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentMaterialForRendering_53), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateGeometry_mF835CCCA47ED74974B250E618CCDCA8C228F98C8 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::Cull(UnityEngine.Rect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Cull_mCB2FA236B2243B5DAE75BCACD039FBBB79824BD9 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___clipRect0, bool ___validRect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BB6A54C48827D7DFD66BED24353A0F8912C3BFE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// var cull = _lastBounds.extents == Vector3.zero || !validRect || !clipRect.Overlaps(rootCanvasRect, true);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = (&__this->____lastBounds_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4 = ___validRect1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = UIParticleRenderer_get_rootCanvasRect_mD7F1E91B01114283CB9AD8A251E59F0F79EF47CB(__this, NULL);
		bool L_6;
		L_6 = Rect_Overlaps_m3F0BA2C8BB81491978B21EB21C8A6D3BBED02E41((&___clipRect0), L_5, (bool)1, NULL);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 1;
	}

IL_002f:
	{
		V_0 = (bool)G_B4_0;
		// if (canvasRenderer.cull == cull) return;
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_7;
		L_7 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = CanvasRenderer_get_cull_m48007D7CB40B3C0EC29F0CB316AFAC88748EF3D7(L_7, NULL);
		bool L_9 = V_0;
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		// if (canvasRenderer.cull == cull) return;
		goto IL_0071;
	}

IL_0044:
	{
		// canvasRenderer.cull = cull;
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_11;
		L_11 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(__this, NULL);
		bool L_12 = V_0;
		NullCheck(L_11);
		CanvasRenderer_set_cull_mA2A521F41185511CCFF6E2BFCD7B68B1DE3C0D9D(L_11, L_12, NULL);
		// UISystemProfilerApi.AddMarker("MaskableGraphic.cullingChanged", this);
		UISystemProfilerApi_AddMarker_m86FB0AD20A17D79720E18D726307D16280920FBA(_stringLiteral0BB6A54C48827D7DFD66BED24353A0F8912C3BFE, __this, NULL);
		// onCullStateChanged.Invoke(cull);
		CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* L_13;
		L_13 = MaskableGraphic_get_onCullStateChanged_m8452945E93AF20B975D85E61999B51039CAF6538(__this, NULL);
		bool L_14 = V_0;
		NullCheck(L_13);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_13, L_14, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// OnCullingChanged();
		VirtualActionInvoker0::Invoke(36 /* System.Void UnityEngine.UI.Graphic::OnCullingChanged() */, __this);
	}

IL_0071:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticleRenderer::GetWorldScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UIParticleRenderer_GetWorldScale_mB7E160C281DA6BACF121AC6DF12E573544342DAF (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB855CC0C5ABDEB3EE77330A8D7ADA86CDA6975C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Profiler.BeginSample("[UIParticleRenderer] GetWorldScale");
		Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline(_stringLiteralCB855CC0C5ABDEB3EE77330A8D7ADA86CDA6975C, NULL);
		// var scale = _parent.scale3D;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_0 = __this->____parent_44;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = UIParticle_get_scale3D_mCEBA095AC7965D040D06922E02276BCD6956D0D7(L_0, NULL);
		V_0 = L_1;
		// scale.Scale(_parent.transform.localScale.Inverse());
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_2 = __this->____parent_44;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_4, NULL);
		Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline((&V_0), L_5, NULL);
		// Profiler.EndSample();
		Profiler_EndSample_m450653E4210CC1B4E1210C29F62FC48F8F250437(NULL);
		// return scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		V_1 = L_6;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Matrix4x4 Coffee.UIExtensions.UIParticleRenderer::GetWorldMatrix(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UIParticleRenderer_GetWorldMatrix_m546BA0052D188C023838E498956E08116098BDB0 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___psPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		// var space = _particleSystem.GetActualSimulationSpace();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____particleSystem_42;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = ParticleSystemExtensions_GetActualSimulationSpace_mED1F78247B56DAF453A7D3C15E2C3C6FE5FFD362(L_0, NULL);
		V_0 = L_1;
		// if (_isTrail && _particleSystem.trails.worldSpace)
		bool L_2 = __this->____isTrail_46;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->____particleSystem_42;
		NullCheck(L_3);
		TrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D L_4;
		L_4 = ParticleSystem_get_trails_mDDDD23F6C3540ECD10E42BB0A4F9ECBADC294C66(L_3, NULL);
		V_2 = L_4;
		bool L_5;
		L_5 = TrailModule_get_worldSpace_mB5628233374EF9380309BAC8D3BE98CFAD755EB0((&V_2), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// space = ParticleSystemSimulationSpace.World;
		V_0 = 1;
	}

IL_0033:
	{
		// switch (space)
		int32_t L_7 = V_0;
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (L_9)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_004d:
	{
		// return Matrix4x4.Translate(psPos)
		//     * Matrix4x4.Scale(scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___psPos0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_Translate_m95D44EDD1A9856DD11C639692E47B7A35EF745E2(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___scale1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_12, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14;
		L_14 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_11, L_13, NULL);
		V_5 = L_14;
		goto IL_00a5;
	}

IL_0062:
	{
		// return Matrix4x4.Scale(scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___scale1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16;
		L_16 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_15, NULL);
		V_5 = L_16;
		goto IL_00a5;
	}

IL_006c:
	{
		// return Matrix4x4.Translate(_particleSystem.main.customSimulationSpace.position.GetScaled(scale))
		//     //* Matrix4x4.Translate(wpos)
		//     * Matrix4x4.Scale(scale)
		//     //* Matrix4x4.Translate(-wpos)
		//     ;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_17 = __this->____particleSystem_42;
		NullCheck(L_17);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_18;
		L_18 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_17, NULL);
		V_6 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = MainModule_get_customSimulationSpace_mCCB54D66ACBD9DFDC0A8DF80EB569658C1F6FAEF((&V_6), NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___scale1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_20, L_21, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23;
		L_23 = Matrix4x4_Translate_m95D44EDD1A9856DD11C639692E47B7A35EF745E2(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___scale1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25;
		L_25 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_24, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_23, L_25, NULL);
		V_5 = L_26;
		goto IL_00a5;
	}

IL_009f:
	{
		// throw new System.NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_27 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UIParticleRenderer_GetWorldMatrix_m546BA0052D188C023838E498956E08116098BDB0_RuntimeMethod_var)));
	}

IL_00a5:
	{
		// }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28 = V_5;
		return L_28;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::ResolveResolutionChange(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_ResolveResolutionChange_m89A907B894F8AE4B66BE19D4595973B54E90D7DF (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___psPos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		// var screenSize = new Vector2Int(Screen.width, Screen.height);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_0), L_0, L_1, NULL);
		// if ((_prevScreenSize != screenSize || _prevScale != scale) && _particleSystem.main.simulationSpace == ParticleSystemSimulationSpace.World)
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2 = __this->____prevScreenSize_50;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = V_0;
		bool L_4;
		L_4 = Vector2Int_op_Inequality_mA2A179D6CB186661DF13284FC4BB6B4838DF8B54_inline(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____prevScale_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___scale1;
		bool L_7;
		L_7 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_002e:
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->____particleSystem_42;
		NullCheck(L_8);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_9;
		L_9 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_8, NULL);
		V_2 = L_9;
		int32_t L_10;
		L_10 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC((&V_2), NULL);
		G_B4_0 = ((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		goto IL_0047;
	}

IL_0046:
	{
		G_B4_0 = 0;
	}

IL_0047:
	{
		V_1 = (bool)G_B4_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00fa;
		}
	}
	{
		// var size = _particleSystem.particleCount;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = __this->____particleSystem_42;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076(L_12, NULL);
		V_3 = L_13;
		// var particles = ParticleSystemExtensions.GetParticleArray(size);
		int32_t L_14 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_15;
		L_15 = ParticleSystemExtensions_GetParticleArray_m629E5875E57E88914BCC16C7328753B5ACB72116(L_14, NULL);
		V_4 = L_15;
		// _particleSystem.GetParticles(particles, size);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = __this->____particleSystem_42;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_17 = V_4;
		int32_t L_18 = V_3;
		NullCheck(L_16);
		int32_t L_19;
		L_19 = ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761(L_16, L_17, L_18, NULL);
		// var modifier = psPos.GetScaled(scale.Inverse(), _prevPsPos.Inverse(), _prevScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___psPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___scale1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->____prevPsPos_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->____prevScale_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3Extensions_GetScaled_mF8F549E879A837A29471C2391A8A09A048064D71(L_20, L_22, L_24, L_25, NULL);
		V_5 = L_26;
		// for (var i = 0; i < size; i++)
		V_6 = 0;
		goto IL_00ca;
	}

IL_0096:
	{
		// var particle = particles[i];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_27 = V_4;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = L_30;
		// particle.position = particle.position.GetScaled(modifier);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_31, L_32, NULL);
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E((&V_7), L_33, NULL);
		// particles[i] = particle;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_34 = V_4;
		int32_t L_35 = V_6;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_36 = V_7;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D)L_36);
		// for (var i = 0; i < size; i++)
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ca:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_38 = V_6;
		int32_t L_39 = V_3;
		V_8 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_8;
		if (L_40)
		{
			goto IL_0096;
		}
	}
	{
		// _particleSystem.SetParticles(particles, size);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_41 = __this->____particleSystem_42;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_42 = V_4;
		int32_t L_43 = V_3;
		NullCheck(L_41);
		ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592(L_41, L_42, L_43, NULL);
		// _delay = true;
		__this->____delay_51 = (bool)1;
		// _prevScale = scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___scale1;
		__this->____prevScale_48 = L_44;
		// _prevPsPos = psPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___psPos0;
		__this->____prevPsPos_49 = L_45;
	}

IL_00fa:
	{
		// _prevScreenSize = screenSize;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_46 = V_0;
		__this->____prevScreenSize_50 = L_46;
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::Simulate(UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_Simulate_m19DD2EE8731FFFD69BF43ADA71AE538C922B69CA (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, bool ___paused1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* V_11 = NULL;
	int32_t V_12 = 0;
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B9_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// var main = _particleSystem.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->____particleSystem_42;
		NullCheck(L_0);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_1;
		L_1 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_0, NULL);
		V_0 = L_1;
		// var deltaTime = paused
		//     ? 0
		//     : main.useUnscaledTime
		//         ? Time.unscaledDeltaTime
		//         : Time.deltaTime;
		bool L_2 = ___paused1;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3;
		L_3 = MainModule_get_useUnscaledTime_m06B0F3A0207D09044C0A1A0DE306EB82E6ADCD12((&V_0), NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B4_0 = L_4;
		goto IL_0025;
	}

IL_0020:
	{
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B4_0 = L_5;
	}

IL_0025:
	{
		G_B6_0 = G_B4_0;
		goto IL_002c;
	}

IL_0027:
	{
		G_B6_0 = (0.0f);
	}

IL_002c:
	{
		V_1 = G_B6_0;
		// if (0 < deltaTime && _prewarm)
		float L_6 = V_1;
		if ((!(((float)(0.0f)) < ((float)L_6))))
		{
			goto IL_003d;
		}
	}
	{
		bool L_7 = __this->____prewarm_52;
		G_B9_0 = ((int32_t)(L_7));
		goto IL_003e;
	}

IL_003d:
	{
		G_B9_0 = 0;
	}

IL_003e:
	{
		V_8 = (bool)G_B9_0;
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// deltaTime += main.duration;
		float L_9 = V_1;
		float L_10;
		L_10 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_0), NULL);
		V_1 = ((float)il2cpp_codegen_add(L_9, L_10));
		// _prewarm = false;
		__this->____prewarm_52 = (bool)0;
	}

IL_0057:
	{
		// if (_prevParticleCount != _particleSystem.particleCount)
		int32_t L_11 = __this->____prevParticleCount_43;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = __this->____particleSystem_42;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076(L_12, NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_9;
		if (!L_14)
		{
			goto IL_00fc;
		}
	}
	{
		// var size = _particleSystem.particleCount;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->____particleSystem_42;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ParticleSystem_get_particleCount_mC85541B2FA2DE2DF6824BE9423250CDC07C06076(L_15, NULL);
		V_10 = L_16;
		// var particles = ParticleSystemExtensions.GetParticleArray(size);
		int32_t L_17 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ParticleSystemExtensions_t6BC1BE665483597FA691EB459A56D61D61D26218_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_18;
		L_18 = ParticleSystemExtensions_GetParticleArray_m629E5875E57E88914BCC16C7328753B5ACB72116(L_17, NULL);
		V_11 = L_18;
		// _particleSystem.GetParticles(particles, size);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_19 = __this->____particleSystem_42;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_20 = V_11;
		int32_t L_21 = V_10;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = ParticleSystem_GetParticles_mFC9EA6E092E60A76445F36A5EC611E9D2B5A1761(L_19, L_20, L_21, NULL);
		// for (var i = _prevParticleCount; i < size; i++)
		int32_t L_23 = __this->____prevParticleCount_43;
		V_12 = L_23;
		goto IL_00df;
	}

IL_00a7:
	{
		// var p = particles[i];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_24 = V_11;
		int32_t L_25 = V_12;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_13 = L_27;
		// p.position = p.position.GetScaled(scale.Inverse());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_13), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___scale0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_28, L_30, NULL);
		Particle_set_position_mE9103000DB4EA6CE09D25650F5A2915731F7A63E((&V_13), L_31, NULL);
		// particles[i] = p;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_32 = V_11;
		int32_t L_33 = V_12;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_34 = V_13;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D)L_34);
		// for (var i = _prevParticleCount; i < size; i++)
		int32_t L_35 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00df:
	{
		// for (var i = _prevParticleCount; i < size; i++)
		int32_t L_36 = V_12;
		int32_t L_37 = V_10;
		V_14 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_14;
		if (L_38)
		{
			goto IL_00a7;
		}
	}
	{
		// _particleSystem.SetParticles(particles, size);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_39 = __this->____particleSystem_42;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_40 = V_11;
		int32_t L_41 = V_10;
		NullCheck(L_39);
		ParticleSystem_SetParticles_m4EDBF9B885CD31D8F491636C49F4F1235FE66592(L_39, L_40, L_41, NULL);
	}

IL_00fc:
	{
		// var psTransform = _particleSystem.transform;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_42 = __this->____particleSystem_42;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		V_2 = L_43;
		// var originWorldPosition = psTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_2;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		V_3 = L_45;
		// var originWorldRotation = psTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_2;
		NullCheck(L_46);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_46, NULL);
		V_4 = L_47;
		// var emission = _particleSystem.emission;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_48 = __this->____particleSystem_42;
		NullCheck(L_48);
		EmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678 L_49;
		L_49 = ParticleSystem_get_emission_mD9402CE632A3607DA0B0486F9F58F7FB2B44CF08(L_48, NULL);
		V_5 = L_49;
		// var rateOverDistance = emission.enabled && 0 < emission.rateOverDistance.constant && 0 < emission.rateOverDistanceMultiplier;
		bool L_50;
		L_50 = EmissionModule_get_enabled_mD58661B08716E8841806F1C8E0D52AF7FCB39768((&V_5), NULL);
		if (!L_50)
		{
			goto IL_0154;
		}
	}
	{
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_51;
		L_51 = EmissionModule_get_rateOverDistance_m667AC2FE9C65E7D1B3F97FBB15A1F4C69296AF30((&V_5), NULL);
		V_15 = L_51;
		float L_52;
		L_52 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_15), NULL);
		if ((!(((float)(0.0f)) < ((float)L_52))))
		{
			goto IL_0154;
		}
	}
	{
		float L_53;
		L_53 = EmissionModule_get_rateOverDistanceMultiplier_m781D7F7A779335C1D6979A1446DE019E6A58AFF1((&V_5), NULL);
		G_B20_0 = ((((float)(0.0f)) < ((float)L_53))? 1 : 0);
		goto IL_0155;
	}

IL_0154:
	{
		G_B20_0 = 0;
	}

IL_0155:
	{
		V_6 = (bool)G_B20_0;
		// if (rateOverDistance)
		bool L_54 = V_6;
		V_16 = L_54;
		bool L_55 = V_16;
		if (!L_55)
		{
			goto IL_0198;
		}
	}
	{
		// Vector3 prevScaledPos = _prevPsPos.GetScaled(_prevScale.Inverse());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = __this->____prevPsPos_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->____prevScale_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_56, L_58, NULL);
		V_17 = L_59;
		// psTransform.SetPositionAndRotation(prevScaledPos, originWorldRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = V_4;
		NullCheck(L_60);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_60, L_61, L_62, NULL);
		// _particleSystem.Simulate(0, false, false, false);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_63 = __this->____particleSystem_42;
		NullCheck(L_63);
		ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643(L_63, (0.0f), (bool)0, (bool)0, (bool)0, NULL);
	}

IL_0198:
	{
		// var scaledPos = originWorldPosition.GetScaled(scale.Inverse());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = ___scale0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3Extensions_Inverse_mA1F275DB2DB98ADDB08C17F31D154944A6D2D32D(L_65, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3Extensions_GetScaled_m709574BEBE9DB9B4CCE1B622BC08FEAF98A21434(L_64, L_66, NULL);
		V_7 = L_67;
		// psTransform.SetPositionAndRotation(scaledPos, originWorldRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70 = V_4;
		NullCheck(L_68);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_68, L_69, L_70, NULL);
		// _particleSystem.Simulate(deltaTime, false, false, false);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_71 = __this->____particleSystem_42;
		float L_72 = V_1;
		NullCheck(L_71);
		ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643(L_71, L_72, (bool)0, (bool)0, (bool)0, NULL);
		// psTransform.SetPositionAndRotation(originWorldPosition, originWorldRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75 = V_4;
		NullCheck(L_73);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_73, L_74, L_75, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer_UpdateMaterialProperties_mB35AAB7D145EE27C29A63A483E9DC3A60822ECB9 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* V_4 = NULL;
	int32_t V_5 = 0;
	AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* V_6 = NULL;
	{
		// if (_parent.m_AnimatableProperties.Length == 0) return;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_0 = __this->____parent_44;
		NullCheck(L_0);
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_1 = L_0->___m_AnimatableProperties_38;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (_parent.m_AnimatableProperties.Length == 0) return;
		goto IL_00ac;
	}

IL_0019:
	{
		// if (s_Mpb == null)
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_3 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38;
		V_1 = (bool)((((RuntimeObject*)(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// s_Mpb = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_5 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38), (void*)L_5);
	}

IL_002f:
	{
		// _renderer.GetPropertyBlock(s_Mpb);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_6 = __this->____renderer_41;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_7 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38;
		NullCheck(L_6);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_6, L_7, NULL);
		// if (s_Mpb.isEmpty) return;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_8 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38;
		NullCheck(L_8);
		bool L_9;
		L_9 = MaterialPropertyBlock_get_isEmpty_mB74C027D1A62295F7D182B86EBC5F173489A7E38(L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// if (s_Mpb.isEmpty) return;
		goto IL_00ac;
	}

IL_0050:
	{
		// if (!_modifiedMaterial) return;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->____modifiedMaterial_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// if (!_modifiedMaterial) return;
		goto IL_00ac;
	}

IL_0064:
	{
		// foreach (var ap in _parent.m_AnimatableProperties)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_14 = __this->____parent_44;
		NullCheck(L_14);
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_15 = L_14->___m_AnimatableProperties_38;
		V_4 = L_15;
		V_5 = 0;
		goto IL_0099;
	}

IL_0077:
	{
		// foreach (var ap in _parent.m_AnimatableProperties)
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		// ap.UpdateMaterialProperties(_modifiedMaterial, s_Mpb);
		AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* L_20 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->____modifiedMaterial_47;
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_22 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38;
		NullCheck(L_20);
		AnimatableProperty_UpdateMaterialProperties_mCBB1CDEC2003A0D97793B4AF7A097141E000BDEA(L_20, L_21, L_22, NULL);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0099:
	{
		// foreach (var ap in _parent.m_AnimatableProperties)
		int32_t L_24 = V_5;
		AnimatablePropertyU5BU5D_t49940885418B8052CDD9CD252BE883A32EB67BAD* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0077;
		}
	}
	{
		// s_Mpb.Clear();
		il2cpp_codegen_runtime_class_init_inline(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_26 = ((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Mpb_38;
		NullCheck(L_26);
		MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253(L_26, NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer__ctor_mEA355F5332621040757F209A9B20E80C3F42C8B3 (UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* __this, const RuntimeMethod* method) 
{
	{
		// private int _prevParticleCount = 0;
		__this->____prevParticleCount_43 = 0;
		// private bool _delay = false;
		__this->____delay_51 = (bool)0;
		// private bool _prewarm = false;
		__this->____prewarm_52 = (bool)0;
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleRenderer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleRenderer__cctor_m49DD9DB3B5F361CE804873F24431DDEE87A65CDE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m05332107DA4D8C8D747D79BDFC45DBE8FCEF8C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly CombineInstance[] s_CombineInstances = new CombineInstance[] { new CombineInstance() };
		CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093* L_0 = (CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093*)(CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093*)SZArrayNew(CombineInstanceU5BU5D_tF7855763C164A0775855FF142E891E7BE0ABE093_il2cpp_TypeInfo_var, (uint32_t)1);
		((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_CombineInstances_36), (void*)L_0);
		// private static readonly List<Material> s_Materials = new List<Material>(2);
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_1 = (List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*)il2cpp_codegen_object_new(List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m05332107DA4D8C8D747D79BDFC45DBE8FCEF8C23(L_1, 2, List_1__ctor_m05332107DA4D8C8D747D79BDFC45DBE8FCEF8C23_RuntimeMethod_var);
		((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Materials_37 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Materials_37), (void*)L_1);
		// private static readonly List<UIParticleRenderer> s_Renderers = new List<UIParticleRenderer>();
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_2 = (List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E*)il2cpp_codegen_object_new(List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D(L_2, List_1__ctor_mB82D6135B85A805D9165148D5449ADD18D0B3E1D_RuntimeMethod_var);
		((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Renderers_39), (void*)L_2);
		// private static readonly Vector3[] s_Corners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00_il2cpp_TypeInfo_var))->___s_Corners_40), (void*)L_3);
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
// System.Int32 Coffee.UIExtensions.UIParticleUpdater::get_uiParticleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIParticleUpdater_get_uiParticleCount_m150C91185C67D2154B651F0CE68DBFCEC0A93885 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return s_ActiveParticles.Count;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_0 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline(L_0, List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Register(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Register_m2FF1ECC9511A96C705F1047A08BEFBE3BE662789 (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___particle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m087023F074BAB34B154AE9CACC43CE3E7579BDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!particle) return;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_0 = ___particle0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (!particle) return;
		goto IL_001c;
	}

IL_0010:
	{
		// s_ActiveParticles.Add(particle);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_3 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_4 = ___particle0;
		NullCheck(L_3);
		List_1_Add_m087023F074BAB34B154AE9CACC43CE3E7579BDF1_inline(L_3, L_4, List_1_Add_m087023F074BAB34B154AE9CACC43CE3E7579BDF1_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Unregister(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Unregister_mDABD8EE790906552608D0A2114985A83C4EECECD (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* ___particle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m91639C4C7269B75500B1B55E2090DFCF51510705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!particle) return;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_0 = ___particle0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (!particle) return;
		goto IL_001c;
	}

IL_0010:
	{
		// s_ActiveParticles.Remove(particle);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_3 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_4 = ___particle0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m91639C4C7269B75500B1B55E2090DFCF51510705(L_3, L_4, List_1_Remove_m91639C4C7269B75500B1B55E2090DFCF51510705_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Register(Coffee.UIExtensions.UIParticleAttractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Register_m9F6EF5806423AB115404590D71E4D7A3705A1323 (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* ___attractor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA2E7504F687771C6C8E4A510A91CB4283173B70B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!attractor) return;
		UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* L_0 = ___attractor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (!attractor) return;
		goto IL_001c;
	}

IL_0010:
	{
		// s_ActiveAttractors.Add(attractor);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* L_3 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveAttractors_1;
		UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* L_4 = ___attractor0;
		NullCheck(L_3);
		List_1_Add_mA2E7504F687771C6C8E4A510A91CB4283173B70B_inline(L_3, L_4, List_1_Add_mA2E7504F687771C6C8E4A510A91CB4283173B70B_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Unregister(Coffee.UIExtensions.UIParticleAttractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Unregister_m2438E5AEADF8A9B98AC4E5F816BD27EFD4E12C4B (UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* ___attractor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA47B55289C88E5CE1FC27D2950DD30049B942E79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!attractor) return;
		UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* L_0 = ___attractor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (!attractor) return;
		goto IL_001c;
	}

IL_0010:
	{
		// s_ActiveAttractors.Remove(attractor);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* L_3 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveAttractors_1;
		UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* L_4 = ___attractor0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mA47B55289C88E5CE1FC27D2950DD30049B942E79(L_3, L_4, List_1_Remove_mA47B55289C88E5CE1FC27D2950DD30049B942E79_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::InitializeOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_InitializeOnLoad_m84D2CBD1917E07555688E8AA43989CF392BE76B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_Refresh_m2EC9D6D83153A41D82601FA4967E4ACA1A5594C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Canvas.willRenderCanvases -= Refresh;
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* L_0 = (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC*)il2cpp_codegen_object_new(WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WillRenderCanvases__ctor_mD8174C0964F8864D65270FFCAF275BD0BAC8DCF3(L_0, NULL, (intptr_t)((void*)UIParticleUpdater_Refresh_m2EC9D6D83153A41D82601FA4967E4ACA1A5594C7_RuntimeMethod_var), NULL);
		Canvas_remove_willRenderCanvases_m50B55BBCEC98C23AF7E09A7F5F513939CEE0F652(L_0, NULL);
		// Canvas.willRenderCanvases += Refresh;
		WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* L_1 = (WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC*)il2cpp_codegen_object_new(WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WillRenderCanvases__ctor_mD8174C0964F8864D65270FFCAF275BD0BAC8DCF3(L_1, NULL, (intptr_t)((void*)UIParticleUpdater_Refresh_m2EC9D6D83153A41D82601FA4967E4ACA1A5594C7_RuntimeMethod_var), NULL);
		Canvas_add_willRenderCanvases_mC422627A81F9E101686192E587FC42C20718265A(L_1, NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Refresh_m2EC9D6D83153A41D82601FA4967E4ACA1A5594C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33FA04333721E227C186DC2CD72C1543BDF7FCA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAF0BCCFD1DA4D8E82368288A6C2B6DB3E985AA1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B33_0 = 0;
	{
		// if (frameCount == Time.frameCount) return;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___frameCount_3;
		int32_t L_1;
		L_1 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// if (frameCount == Time.frameCount) return;
		goto IL_01e8;
	}

IL_0016:
	{
		// frameCount = Time.frameCount;
		int32_t L_3;
		L_3 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___frameCount_3 = L_3;
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		V_1 = 0;
		goto IL_008b;
	}

IL_0024:
	{
		// var uip = s_ActiveParticles[i];
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_4 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_6;
		L_6 = List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9(L_4, L_5, List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		V_2 = L_6;
		// if (!uip || !uip.canvas || !uip.isPrimary || s_UpdatedGroupIds.Contains(uip.groupId)) continue;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_9 = V_2;
		NullCheck(L_9);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10;
		L_10 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_12 = V_2;
		NullCheck(L_12);
		bool L_13;
		L_13 = UIParticle_get_isPrimary_mE05CB06D3F9B5B1CD5A6D1CFEB9CC4FF8174A0CA(L_12, NULL);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_14 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_15, NULL);
		NullCheck(L_14);
		bool L_17;
		L_17 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_14, L_16, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_0061;
	}

IL_0060:
	{
		G_B8_0 = 1;
	}

IL_0061:
	{
		V_3 = (bool)G_B8_0;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0067;
		}
	}
	{
		// if (!uip || !uip.canvas || !uip.isPrimary || s_UpdatedGroupIds.Contains(uip.groupId)) continue;
		goto IL_0087;
	}

IL_0067:
	{
		// s_UpdatedGroupIds.Add(uip.groupId);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_19 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_20, NULL);
		NullCheck(L_19);
		bool L_22;
		L_22 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_19, L_21, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		// uip.UpdateTransformScale();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_23 = V_2;
		NullCheck(L_23);
		UIParticle_UpdateTransformScale_mE7A5792C1B0144A22D229B0C3172830E84F8B94F(L_23, NULL);
		// uip.UpdateRenderers();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_24 = V_2;
		NullCheck(L_24);
		UIParticle_UpdateRenderers_m139A9B2E7386C382A69D668E78374D6BEDC5FB65(L_24, NULL);
	}

IL_0087:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_008b:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_27 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline(L_27, List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_4;
		if (L_29)
		{
			goto IL_0024;
		}
	}
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		V_5 = 0;
		goto IL_0139;
	}

IL_00a6:
	{
		// var uip = s_ActiveParticles[i];
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_30 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_32;
		L_32 = List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9(L_30, L_31, List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		V_6 = L_32;
		// if (!uip || !uip.canvas) continue;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_33 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_33, NULL);
		if (!L_34)
		{
			goto IL_00cf;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_35 = V_6;
		NullCheck(L_35);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_36;
		L_36 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_36, NULL);
		G_B17_0 = ((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		goto IL_00d0;
	}

IL_00cf:
	{
		G_B17_0 = 1;
	}

IL_00d0:
	{
		V_7 = (bool)G_B17_0;
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00d8;
		}
	}
	{
		// if (!uip || !uip.canvas) continue;
		goto IL_0133;
	}

IL_00d8:
	{
		// uip.UpdateTransformScale();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_39 = V_6;
		NullCheck(L_39);
		UIParticle_UpdateTransformScale_mE7A5792C1B0144A22D229B0C3172830E84F8B94F(L_39, NULL);
		// if (!uip.useMeshSharing)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_40 = V_6;
		NullCheck(L_40);
		bool L_41;
		L_41 = UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F(L_40, NULL);
		V_8 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_8;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		// uip.UpdateRenderers();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_43 = V_6;
		NullCheck(L_43);
		UIParticle_UpdateRenderers_m139A9B2E7386C382A69D668E78374D6BEDC5FB65(L_43, NULL);
		goto IL_0132;
	}

IL_00fc:
	{
		// else if (!s_UpdatedGroupIds.Contains(uip.groupId))
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_44 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_45 = V_6;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_45, NULL);
		NullCheck(L_44);
		bool L_47;
		L_47 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_44, L_46, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_9;
		if (!L_48)
		{
			goto IL_0132;
		}
	}
	{
		// s_UpdatedGroupIds.Add(uip.groupId);
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_49 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_50 = V_6;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_50, NULL);
		NullCheck(L_49);
		bool L_52;
		L_52 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_49, L_51, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		// uip.UpdateRenderers();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_53 = V_6;
		NullCheck(L_53);
		UIParticle_UpdateRenderers_m139A9B2E7386C382A69D668E78374D6BEDC5FB65(L_53, NULL);
	}

IL_0132:
	{
	}

IL_0133:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0139:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_55 = V_5;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_56 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline(L_56, List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_55) < ((int32_t)L_57))? 1 : 0);
		bool L_58 = V_10;
		if (L_58)
		{
			goto IL_00a6;
		}
	}
	{
		// s_UpdatedGroupIds.Clear();
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_59 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2;
		NullCheck(L_59);
		HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92(L_59, HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		// for (var i = 0; i < s_ActiveAttractors.Count; i++)
		V_11 = 0;
		goto IL_017a;
	}

IL_0160:
	{
		// s_ActiveAttractors[i].Attract();
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* L_60 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveAttractors_1;
		int32_t L_61 = V_11;
		NullCheck(L_60);
		UIParticleAttractor_t58AC675F8346D0684A632BA6342EA87F540D0207* L_62;
		L_62 = List_1_get_Item_mAF0BCCFD1DA4D8E82368288A6C2B6DB3E985AA1B(L_60, L_61, List_1_get_Item_mAF0BCCFD1DA4D8E82368288A6C2B6DB3E985AA1B_RuntimeMethod_var);
		NullCheck(L_62);
		UIParticleAttractor_Attract_m3DA836DC11630521BF08A738C8CBF5EB9FFD4110(L_62, NULL);
		// for (var i = 0; i < s_ActiveAttractors.Count; i++)
		int32_t L_63 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_017a:
	{
		// for (var i = 0; i < s_ActiveAttractors.Count; i++)
		int32_t L_64 = V_11;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* L_65 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveAttractors_1;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_m33FA04333721E227C186DC2CD72C1543BDF7FCA0_inline(L_65, List_1_get_Count_m33FA04333721E227C186DC2CD72C1543BDF7FCA0_RuntimeMethod_var);
		V_12 = (bool)((((int32_t)L_64) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_12;
		if (L_67)
		{
			goto IL_0160;
		}
	}
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		V_13 = 0;
		goto IL_01d4;
	}

IL_0193:
	{
		// var uip = s_ActiveParticles[i];
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_68 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		int32_t L_69 = V_13;
		NullCheck(L_68);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_70;
		L_70 = List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9(L_68, L_69, List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		V_14 = L_70;
		// if (!uip || !uip.canvas) continue;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_71 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_71, NULL);
		if (!L_72)
		{
			goto IL_01bc;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_73 = V_14;
		NullCheck(L_73);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_74;
		L_74 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(L_73, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_74, NULL);
		G_B33_0 = ((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B33_0 = 1;
	}

IL_01bd:
	{
		V_15 = (bool)G_B33_0;
		bool L_76 = V_15;
		if (!L_76)
		{
			goto IL_01c5;
		}
	}
	{
		// if (!uip || !uip.canvas) continue;
		goto IL_01ce;
	}

IL_01c5:
	{
		// uip.UpdateParticleCount();
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_77 = V_14;
		NullCheck(L_77);
		UIParticle_UpdateParticleCount_mBE0114F49AA989090CD8AA48190C2B2D8F975600(L_77, NULL);
	}

IL_01ce:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_78 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d4:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_79 = V_13;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_80 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline(L_80, List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_79) < ((int32_t)L_81))? 1 : 0);
		bool L_82 = V_16;
		if (L_82)
		{
			goto IL_0193;
		}
	}

IL_01e8:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::GetGroupedRenderers(System.Int32,System.Int32,System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticleRenderer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_GetGroupedRenderers_mE1760E1B821C42F09868C22784BBEB48AE794961 (int32_t ___groupId0, int32_t ___index1, List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* ___results2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// results.Clear();
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_0 = ___results2;
		NullCheck(L_0);
		List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_inline(L_0, List_1_Clear_mCEBC147CE468F2F2F6C84D056C45BE9C3E3A0F06_RuntimeMethod_var);
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_000c:
	{
		// var uip = s_ActiveParticles[i];
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_1 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_3;
		L_3 = List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9(L_1, L_2, List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		V_1 = L_3;
		// if (uip.useMeshSharing && uip.groupId == groupId)
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F(L_4, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_6, NULL);
		int32_t L_8 = ___groupId0;
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B4_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		// results.Add(uip.GetRenderer(index));
		List_1_t816A3AD54861DC16B1DF048A2EC4A2F91D4A7F9E* L_10 = ___results2;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_11 = V_1;
		int32_t L_12 = ___index1;
		NullCheck(L_11);
		UIParticleRenderer_t5F924C8DEC32AAE42B54B4DF6ED6F39CEF328D00* L_13;
		L_13 = UIParticle_GetRenderer_m0653C955C59F6ECA76C88DEC42059F3FB1480551(L_11, L_12, NULL);
		NullCheck(L_10);
		List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_inline(L_10, L_13, List_1_Add_m0459608BE54E47D6A98CE1A920A3E964E396C525_RuntimeMethod_var);
	}

IL_0041:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_16 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline(L_16, List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// Coffee.UIExtensions.UIParticle Coffee.UIExtensions.UIParticleUpdater::GetPrimary(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* UIParticleUpdater_GetPrimary_mB5370F3BDECBC475E2BF90F8E2382AFDA53F2C44 (int32_t ___groupId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_0 = NULL;
	int32_t V_1 = 0;
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// UIParticle primary = null;
		V_0 = (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A*)NULL;
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		V_1 = 0;
		goto IL_0060;
	}

IL_0007:
	{
		// var uip = s_ActiveParticles[i];
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_0 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_2;
		L_2 = List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9(L_0, L_1, List_1_get_Item_m955F4F253983CCA4BEE13952F8DF5227702AC0D9_RuntimeMethod_var);
		V_2 = L_2;
		// if (!uip.useMeshSharing || uip.groupId != groupId) continue;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_3 = V_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = UIParticle_get_useMeshSharing_m80617E1FE8254F43566F1A4342B60E300670FE9F(L_3, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = UIParticle_get_groupId_m31D9A81228CA1E8394FD8F2A5942C7F6464FE59A(L_5, NULL);
		int32_t L_7 = ___groupId0;
		G_B4_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// if (!uip.useMeshSharing || uip.groupId != groupId) continue;
		goto IL_005c;
	}

IL_0031:
	{
		// if (uip.isPrimary) return uip;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = UIParticle_get_isPrimary_mE05CB06D3F9B5B1CD5A6D1CFEB9CC4FF8174A0CA(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// if (uip.isPrimary) return uip;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_12 = V_2;
		V_5 = L_12;
		goto IL_0078;
	}

IL_0042:
	{
		// if (!primary && uip.canSimulate) primary = uip;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (L_14)
		{
			goto IL_0052;
		}
	}
	{
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_15 = V_2;
		NullCheck(L_15);
		bool L_16;
		L_16 = UIParticle_get_canSimulate_m762C8B5EE86615A2D12E6773EBF982CDF190FB80(L_15, NULL);
		G_B11_0 = ((int32_t)(L_16));
		goto IL_0053;
	}

IL_0052:
	{
		G_B11_0 = 0;
	}

IL_0053:
	{
		V_6 = (bool)G_B11_0;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_005b;
		}
	}
	{
		// if (!primary && uip.canSimulate) primary = uip;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_18 = V_2;
		V_0 = L_18;
	}

IL_005b:
	{
	}

IL_005c:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0060:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_21 = ((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_inline(L_21, List_1_get_Count_m81562438A72EE18DD0DE281A6A675D11AE4EA6D8_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_7;
		if (L_23)
		{
			goto IL_0007;
		}
	}
	{
		// return primary;
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_24 = V_0;
		V_5 = L_24;
		goto IL_0078;
	}

IL_0078:
	{
		// }
		UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* L_25 = V_5;
		return L_25;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater__cctor_m4FED3A6965920A2EEB653ADBCD7949F878105F06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF6E2ABAB2C2CE2DB28EBEAF3DD0B6D83ABF22C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFA2A7B866E3D26CB85200669A7E7191996BB1ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<UIParticle> s_ActiveParticles = new List<UIParticle>();
		List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560* L_0 = (List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560*)il2cpp_codegen_object_new(List_1_t082DEAA9AAD6C200DF9EBC986E4471F6AFFB0560_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFA2A7B866E3D26CB85200669A7E7191996BB1ADB(L_0, List_1__ctor_mFA2A7B866E3D26CB85200669A7E7191996BB1ADB_RuntimeMethod_var);
		((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveParticles_0), (void*)L_0);
		// static readonly List<UIParticleAttractor> s_ActiveAttractors = new List<UIParticleAttractor>();
		List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A* L_1 = (List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A*)il2cpp_codegen_object_new(List_1_tDCD1555AA45C335C8B5B3A2203D892F8DDF3AF1A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF6E2ABAB2C2CE2DB28EBEAF3DD0B6D83ABF22C5F(L_1, List_1__ctor_mF6E2ABAB2C2CE2DB28EBEAF3DD0B6D83ABF22C5F_RuntimeMethod_var);
		((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveAttractors_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_ActiveAttractors_1), (void*)L_1);
		// static readonly HashSet<int> s_UpdatedGroupIds = new HashSet<int>();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_2 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_2, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___s_UpdatedGroupIds_2), (void*)L_2);
		// private static int frameCount = 0;
		((UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t8E16360027A6348DD41A1B22AF3686165AE5EBFC_il2cpp_TypeInfo_var))->___frameCount_3 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Scale_mE0DC2C1B7902271788591F17DBE7F7F72EC37283_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___scale0;
		float L_2 = L_1.___x_2;
		__this->___x_2 = ((float)il2cpp_codegen_multiply(L_0, L_2));
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale0;
		float L_5 = L_4.___y_3;
		__this->___y_3 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___scale0;
		float L_8 = L_7.___z_4;
		__this->___z_4 = ((float)il2cpp_codegen_multiply(L_6, L_8));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_id_m40A3D65336E7E322EE683F6A18B623F7CDCEBF1C_inline (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, const RuntimeMethod* method) 
{
	{
		// public int id { get; private set; }
		int32_t L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatableProperty_set_id_mD7944AD0E42E0557BB99B36C3C2F13734D2981B3_inline (AnimatableProperty_tCB4D4FEFC91B071C06898BCDEBE72E2ED4DF000B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int id { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIParticle_set_isPaused_mA8C6AD21D527FBFA446588646DA40F70E3759E3F_inline (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isPaused { get; internal set; }
		bool L_0 = ___value0;
		__this->___U3CisPausedU3Ek__BackingField_48 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
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
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_mA836D6E554511CBEAD80F55EE41AAA5D1B26B3DE_inline (String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		Profiler_ValidateArguments_m732E71FF4C28CBEDD8D4CD51DA409198224ED395_inline(L_0, NULL);
		String_t* L_1 = ___name0;
		Profiler_BeginSampleImpl_m11DCED1F062EEB6A07FE36224080BAEDC65D5A87(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIParticle_get_isPaused_m690FE640B6BFAA5FA947F3D1C06557769ADBC7A3_inline (UIParticle_t19C570D23081B657B69AE47B522344ED2409E69A* __this, const RuntimeMethod* method) 
{
	{
		// public bool isPaused { get; internal set; }
		bool L_0 = __this->___U3CisPausedU3Ek__BackingField_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Inequality_mA2A179D6CB186661DF13284FC4BB6B4838DF8B54_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___lhs0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___lhs0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2Int_op_Equality_m0BACF220C29A50100740A626E2A928F9F96E6759_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m732E71FF4C28CBEDD8D4CD51DA409198224ED395_inline (String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31D159E683556C06B3B3963D92483B6867EB3233)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Profiler_ValidateArguments_m732E71FF4C28CBEDD8D4CD51DA409198224ED395_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_op_Equality_m0BACF220C29A50100740A626E2A928F9F96E6759_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___lhs0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___lhs0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___rhs1), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___lhs0), NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___rhs1), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
