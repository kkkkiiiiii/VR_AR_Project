#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct ARTrackableManager_5_t909CD904167EAD233803A6A9DB279E94219E1A0C;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackable_2_tADB370031FB959281901DE6F1A8E95A7E25E6740;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct ARTrackable_2_tFCB13EC50392ED10D2F8688F2944CB9946518866;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs>
struct Action_1_t30DB722576CDAD6BB3F09BD60358BF49AA947548;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>
struct Action_1_t0A16CC637B74FE43A20D2784BCA3172E7D13789C;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARFace>
struct Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>
struct List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct List_1_t0C2BEA4603C8A892F136360A713FE07EBC51A010;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreFaceSubsystem
struct ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841;
// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t73C068C9C8422F79A858EC41C322D399305B8453;
// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F;
// ARFaceMaterialSwitcher
struct ARFaceMaterialSwitcher_t74FCA19FC7526A25C8D3C02CC753D34FDAF7E990;
// ARFaceRegionManager
struct ARFaceRegionManager_tDDDD672899348832E08BA05E6E1D6C9CC8CF8D3A;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CarController
struct CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5;
// CarManager
struct CarManager_t0D317F63D7063875A11CEE484332D47D211547E9;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// ImageRecognitionExample
struct ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LightController
struct LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5;
// LightEstimationText
struct LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor
struct XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct Provider_t7030F6D06C0B37E868033A148F7C8615413D5322;

IL2CPP_EXTERN_C RuntimeClass* ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral153034DFC3EC30D694E3C1156052E9C23E8E1F2A;
IL2CPP_EXTERN_C String_t* _stringLiteral20EF645DC9F08AEC643D03847EC4F493A7C5E7D7;
IL2CPP_EXTERN_C String_t* _stringLiteral245E745BA1650B972F7602BE3001EF153E7C5B46;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackableId_m8920E1DCFFC3855EAF61317450548F7AE1D2B1BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageRecognitionExample_OnImageChanged_m5CA35296A4A38472046CF36E840DE13C5B399FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LightController_FrameChanged_mAE25DDBFAE9EBB3DAF018474745B66218E4CB02F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LightEstimationText_FrameUpdate_mE4D3A69709601CE18C80255B5BF3B4DA68BC4168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m9CA48A439B89A0A18E080890C7A3D16F488A4232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;

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

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ____current_3;
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

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>
struct NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemWithProvider_3_tA1749F0C228B01A69561A8CB18B26398D30CAD16  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRFaceSubsystemDescriptor_t44596C9878EB76583452C5F5BF6FA78FA9EB171F* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t7030F6D06C0B37E868033A148F7C8615413D5322* ___U3CproviderU3Ek__BackingField_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARFace>
struct TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>
struct Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9 
{
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARFace>
struct KeyValuePair_2_tD7E059BFBE1BF83B12A8CD28EEAF96FF90E92B13 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct KeyValuePair_2_t53ED52B6CCF9EE67874B20217661A725F4B0AC33 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct TrackingSubsystem_4_tEA0279A96F3287722503588C643D03B2C206613A  : public SubsystemWithProvider_3_tA1749F0C228B01A69561A8CB18B26398D30CAD16
{
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_UVs_3;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARFace>
struct Enumerator_t729A87578CD108565542CB75A96B83DCA60E418B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD7E059BFBE1BF83B12A8CD28EEAF96FF90E92B13 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Enumerator_tBB025BB555B121BA20A6CE8CD9BE4A484E91D80B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t53ED52B6CCF9EE67874B20217661A725F4B0AC33 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARCore.ARCoreFaceRegionData
struct ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11 
{
	// UnityEngine.XR.ARCore.ARCoreFaceRegion UnityEngine.XR.ARCore.ARCoreFaceRegionData::m_Region
	int32_t ___m_Region_0;
	// UnityEngine.Pose UnityEngine.XR.ARCore.ARCoreFaceRegionData::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
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

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint_6;
};

// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3  : public TrackingSubsystem_4_tEA0279A96F3287722503588C643D03B2C206613A
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARFace>
struct Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_t729A87578CD108565542CB75A96B83DCA60E418B ___m_Enumerator_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>
struct Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D 
{
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator::m_Enumerator
	Enumerator_tBB025BB555B121BA20A6CE8CD9BE4A484E91D80B ___m_Enumerator_0;
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// UnityEngine.XR.ARCore.ARCoreFaceSubsystem
struct ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841  : public XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARFaceMaterialSwitcher
struct ARFaceMaterialSwitcher_t74FCA19FC7526A25C8D3C02CC753D34FDAF7E990  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] ARFaceMaterialSwitcher::_materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____materials_4;
	// UnityEngine.XR.ARFoundation.ARFaceManager ARFaceMaterialSwitcher::_faceManager
	ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* ____faceManager_5;
	// System.Int32 ARFaceMaterialSwitcher::index
	int32_t ___index_6;
};

// ARFaceRegionManager
struct ARFaceRegionManager_tDDDD672899348832E08BA05E6E1D6C9CC8CF8D3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ARFaceRegionManager::regionPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___regionPrefabs_4;
	// UnityEngine.XR.ARFoundation.ARFaceManager ARFaceRegionManager::_faceManager
	ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* ____faceManager_5;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin ARFaceRegionManager::_sessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ____sessionOrigin_6;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData> ARFaceRegionManager::_faceRegions
	NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A ____faceRegions_7;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CarController
struct CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] CarController::bodyObject
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bodyObject_4;
	// UnityEngine.Color32[] CarController::colors
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors_5;
	// System.Single CarController::rotSpeed
	float ___rotSpeed_6;
	// UnityEngine.Material[] CarController::_carMats
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____carMats_7;
};

// CarManager
struct CarManager_t0D317F63D7063875A11CEE484332D47D211547E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CarManager::indicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___indicator_4;
	// UnityEngine.GameObject CarManager::car
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___car_5;
	// System.Single CarManager::relocationDistance
	float ___relocationDistance_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager CarManager::_arManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ____arManager_7;
	// UnityEngine.GameObject CarManager::_placedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____placedGameObject_8;
};

// ImageRecognitionExample
struct ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager ImageRecognitionExample::_arTrackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ____arTrackedImageManager_4;
};

// LightController
struct LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARCameraManager LightController::_arCameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ____arCameraManager_4;
	// UnityEngine.Light LightController::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_5;
};

// LightEstimationText
struct LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARCameraManager LightEstimationText::_arCameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ____arCameraManager_4;
	// TMPro.TextMeshProUGUI LightEstimationText::BrightnessValueTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___BrightnessValueTMP_5;
	// TMPro.TextMeshProUGUI LightEstimationText::ColorCorrectionValueTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___ColorCorrectionValueTMP_6;
	// UnityEngine.Light LightEstimationText::currentLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___currentLight_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4  : public SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackable_2_tADB370031FB959281901DE6F1A8E95A7E25E6740  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t73C068C9C8422F79A858EC41C322D399305B8453  : public ARTrackable_2_tADB370031FB959281901DE6F1A8E95A7E25E6740
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARFace::updated
	Action_1_t30DB722576CDAD6BB3F09BD60358BF49AA947548* ___updated_7;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<leftEye>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeU3Ek__BackingField_8;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<rightEye>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeU3Ek__BackingField_9;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<fixationPoint>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CfixationPointU3Ek__BackingField_10;
	// UnityEngine.XR.ARSubsystems.XRFaceMesh UnityEngine.XR.ARFoundation.ARFace::m_FaceMesh
	XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 ___m_FaceMesh_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARFace::m_Updated
	bool ___m_Updated_12;
};

// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F  : public ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARFaceManager::m_FacePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FacePrefab_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARFaceManager::m_MaximumFaceCount
	int32_t ___m_MaximumFaceCount_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs> UnityEngine.XR.ARFoundation.ARFaceManager::facesChanged
	Action_1_t0A16CC637B74FE43A20D2784BCA3172E7D13789C* ___facesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2  : public ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___U3CreferenceImageU3Ek__BackingField_7;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>

// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>

// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Vector3>

// System.Nullable`1<UnityEngine.Vector3>

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.XR.ARCore.ARCoreFaceRegionData

// UnityEngine.XR.ARCore.ARCoreFaceRegionData

// UnityEngine.XR.ARFoundation.ARLightEstimationData

// UnityEngine.XR.ARFoundation.ARLightEstimationData

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.XR.ARSubsystems.XRFaceSubsystem

// UnityEngine.XR.ARSubsystems.XRFaceSubsystem

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>

// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs

// UnityEngine.XR.ARCore.ARCoreFaceSubsystem

// UnityEngine.XR.ARCore.ARCoreFaceSubsystem

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t0C2BEA4603C8A892F136360A713FE07EBC51A010* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>

// ARFaceMaterialSwitcher

// ARFaceMaterialSwitcher

// ARFaceRegionManager

// ARFaceRegionManager

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// CarController

// CarController

// CarManager

// CarManager

// ImageRecognitionExample

// ImageRecognitionExample

// LightController

// LightController

// LightEstimationText

// LightEstimationText

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARCameraManager

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.XR.ARFoundation.ARFace

// UnityEngine.XR.ARFoundation.ARFace

// UnityEngine.XR.ARFoundation.ARFaceManager

// UnityEngine.XR.ARFoundation.ARFaceManager

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.XR.ARFoundation.ARTrackedImage

// UnityEngine.XR.ARFoundation.ARTrackedImage

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m7AFA6F8E1DD9C80CB06BE955E8F797A8B086D96D_gshared (ARTrackableManager_5_t909CD904167EAD233803A6A9DB279E94219E1A0C* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D TrackableCollection_1_GetEnumerator_m40FC0BACB788B33217B7B2C3221C7D9967F2B836_gshared (TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB* __this, const RuntimeMethod* method) ;
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m0C78B1A685CCC36524577967CE1620CB889FDC0A_gshared (Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2DFDA23C7884D9A93FF21291F1DF5DDA2C0DA27C_gshared (Enumerator_tB1F784FAF2FFA20550ACDB9773EA94D5D741808D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARTrackable_2_get_trackableId_m66C94911C574BADADB06367E12E273D803273927_gshared (ARTrackable_2_tFCB13EC50392ED10D2F8688F2944CB9946518866* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9 NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB_gshared (NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C_gshared (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11 Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28_gshared (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25_gshared (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_gshared_inline (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6_gshared (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARFaceManager>()
inline ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>::get_trackables()
inline TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7 (ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 (*) (ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m7AFA6F8E1DD9C80CB06BE955E8F797A8B086D96D_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARFace>::GetEnumerator()
inline Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F (TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC (*) (TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305*, const RuntimeMethod*))TrackableCollection_1_GetEnumerator_m40FC0BACB788B33217B7B2C3221C7D9967F2B836_gshared)(__this, method);
}
// TTrackable UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARFace>::get_Current()
inline ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19 (Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC* __this, const RuntimeMethod* method)
{
	return ((  ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* (*) (Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC*, const RuntimeMethod*))Enumerator_get_Current_m0C78B1A685CCC36524577967CE1620CB889FDC0A_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.TrackableCollection`1/Enumerator<UnityEngine.XR.ARFoundation.ARFace>::MoveNext()
inline bool Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04 (Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC*, const RuntimeMethod*))Enumerator_MoveNext_m2DFDA23C7884D9A93FF21291F1DF5DDA2C0DA27C_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>::get_subsystem()
inline XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3* SubsystemLifecycleManager_3_get_subsystem_m9CA48A439B89A0A18E080890C7A3D16F488A4232_inline (SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1* __this, const RuntimeMethod* method)
{
	return ((  XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3* (*) (SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>::get_trackableId()
inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARTrackable_2_get_trackableId_m8920E1DCFFC3855EAF61317450548F7AE1D2B1BD (ARTrackable_2_tADB370031FB959281901DE6F1A8E95A7E25E6740* __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 (*) (ARTrackable_2_tADB370031FB959281901DE6F1A8E95A7E25E6740*, const RuntimeMethod*))ARTrackable_2_get_trackableId_m66C94911C574BADADB06367E12E273D803273927_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARCore.ARCoreFaceSubsystem::GetRegionPoses(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreFaceSubsystem_GetRegionPoses_m86783D41F79D1D4E8811CABE414E1F12437F21C5 (ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A* ___2_regions, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::GetEnumerator()
inline Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9 NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB (NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9 (*) (NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A*, const RuntimeMethod*))NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::Dispose()
inline void Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9*, const RuntimeMethod*))Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C_gshared)(__this, method);
}
// T Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::get_Current()
inline ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11 Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28 (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9* __this, const RuntimeMethod* method)
{
	return ((  ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11 (*) (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9*, const RuntimeMethod*))Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28_gshared)(__this, method);
}
// UnityEngine.XR.ARCore.ARCoreFaceRegion UnityEngine.XR.ARCore.ARCoreFaceRegionData::get_region()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARCoreFaceRegionData_get_region_m7CD0AB1C423FD7A964F41C4CCCD14857C08177FE_inline (ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARCore.ARCoreFaceRegionData::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCoreFaceRegionData_get_pose_m8B0A57A837D75EC314AE73F2931075A0F10A3775_inline (ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARCore.ARCoreFaceRegionData>::MoveNext()
inline bool Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25 (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9*, const RuntimeMethod*))Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CarManager::DetectGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarManager_DetectGround_m366C5C4DFACF71CE70D7984BAC9A346F5AC89191 (CarManager_t0D317F63D7063875A11CEE484332D47D211547E9* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957 (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B (*) (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::get_lightEstimation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline (ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageBrightness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ARLightEstimationData_get_averageBrightness_mCDE95FB42D807C168E187942BD9DDAB65439AE19 (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageColorTemperature()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ARLightEstimationData_get_averageColorTemperature_m688BB1F18E15D7058FDEFC012451A72CD6D193DC_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_colorTemperature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_colorTemperature_m566435E6BA75779C19F6B0BACDC37192D9CC4C43 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_colorCorrection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared)(__this, method);
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_mainLightDirection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ARLightEstimationData_get_mainLightDirection_m49A1B8B5DB38EAE356A22C1AD0A4FD671C6C1427_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_mainLightIntensityLumens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ARLightEstimationData_get_mainLightIntensityLumens_m618D7C8A4FA8FFC3AB370DFC00596DDFA592288F_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_averageIntensityInLumens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ARLightEstimationData_get_averageIntensityInLumens_m3D74CD050CDA61A97595AF8854E97C3239F159D1 (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::get_ambientSphericalHarmonics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ARLightEstimationData_get_ambientSphericalHarmonics_m34C8C4BB5EFDD7E2DAEDF983F11031ABFCA16C41_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_inline (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798*, const RuntimeMethod*))Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.RenderSettings::set_ambientMode(UnityEngine.Rendering.AmbientMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientMode_mDC8C4F62B1BCDDBFA69E9398213B926E39D512FC (int32_t ___0_value, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>::get_Value()
inline SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6 (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method)
{
	return ((  SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 (*) (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798*, const RuntimeMethod*))Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6_gshared)(__this, method);
}
// System.Void UnityEngine.RenderSettings::set_ambientProbe(UnityEngine.Rendering.SphericalHarmonicsL2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientProbe_mEAF33216C2CE56107382ED6E12F69F01B3E04FDF (SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void ARFaceMaterialSwitcher::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceMaterialSwitcher_Start_mF15095ED483FC5795ACD2B8C11B14E868F3D37AC (ARFaceMaterialSwitcher_t74FCA19FC7526A25C8D3C02CC753D34FDAF7E990* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _faceManager = GetComponent<ARFaceManager>();
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_0;
		L_0 = Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4(__this, Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4_RuntimeMethod_var);
		__this->____faceManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____faceManager_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ARFaceMaterialSwitcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceMaterialSwitcher_Update_mDC47C9D705AA6DCEFB3931138BCC9895D12DCB83 (ARFaceMaterialSwitcher_t74FCA19FC7526A25C8D3C02CC753D34FDAF7E990* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount>0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_006c;
		}
	}
	{
		// index = (index + 1) % _materials.Length; // ??? ??
		int32_t L_3 = __this->___index_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = __this->____materials_4;
		NullCheck(L_4);
		__this->___index_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 1))%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		// foreach (ARFace face in _faceManager.trackables)
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_5 = __this->____faceManager_5;
		NullCheck(L_5);
		TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 L_6;
		L_6 = ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7(L_5, ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var);
		V_2 = L_6;
		Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC L_7;
		L_7 = TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F((&V_2), TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_0063;
	}

IL_0045:
	{
		// foreach (ARFace face in _faceManager.trackables)
		ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* L_8;
		L_8 = Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19((&V_1), Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19_RuntimeMethod_var);
		// face.GetComponent<MeshRenderer>().material = _materials[index];
		NullCheck(L_8);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9;
		L_9 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_8, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_10 = __this->____materials_4;
		int32_t L_11 = __this->___index_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_13, NULL);
	}

IL_0063:
	{
		// foreach (ARFace face in _faceManager.trackables)
		bool L_14;
		L_14 = Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04((&V_1), Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0045;
		}
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void ARFaceMaterialSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceMaterialSwitcher__ctor_mF2CA943E742E524D21DA78D90CB0843E30A5B7DF (ARFaceMaterialSwitcher_t74FCA19FC7526A25C8D3C02CC753D34FDAF7E990* __this, const RuntimeMethod* method) 
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
// System.Void ARFaceRegionManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceRegionManager_Awake_mD51C4879659D8BB6DE837F04B48A74327146E3B1 (ARFaceRegionManager_tDDDD672899348832E08BA05E6E1D6C9CC8CF8D3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _faceManager = GetComponent<ARFaceManager>();
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_0;
		L_0 = Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4(__this, Component_GetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m2F26D7A0B2638C2ECCE89300D5C5825BD34F6EB4_RuntimeMethod_var);
		__this->____faceManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____faceManager_5), (void*)L_0);
		// _sessionOrigin = GetComponent<ARSessionOrigin>();
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1;
		L_1 = Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684(__this, Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684_RuntimeMethod_var);
		__this->____sessionOrigin_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sessionOrigin_6), (void*)L_1);
		// for (int i = 0; i < regionPrefabs.Length; i++)
		V_0 = 0;
		goto IL_0040;
	}

IL_001c:
	{
		// regionPrefabs[i] = Instantiate(regionPrefabs[i], _sessionOrigin.trackablesParent);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___regionPrefabs_4;
		int32_t L_3 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___regionPrefabs_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_8 = __this->____sessionOrigin_6;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_7, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_10);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_10);
		// for (int i = 0; i < regionPrefabs.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < regionPrefabs.Length; i++)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___regionPrefabs_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ARFaceRegionManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceRegionManager_Update_m7CF3EA90E6B9C67AA9A66DA2761333AB4E968A42 (ARFaceRegionManager_tDDDD672899348832E08BA05E6E1D6C9CC8CF8D3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m8920E1DCFFC3855EAF61317450548F7AE1D2B1BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m9CA48A439B89A0A18E080890C7A3D16F488A4232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841* V_0 = NULL;
	Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* V_3 = NULL;
	Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// ARCoreFaceSubsystem subsystem = (ARCoreFaceSubsystem)_faceManager.subsystem;
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_0 = __this->____faceManager_5;
		NullCheck(L_0);
		XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m9CA48A439B89A0A18E080890C7A3D16F488A4232_inline(L_0, SubsystemLifecycleManager_3_get_subsystem_m9CA48A439B89A0A18E080890C7A3D16F488A4232_RuntimeMethod_var);
		V_0 = ((ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841*)CastclassClass((RuntimeObject*)L_1, ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841_il2cpp_TypeInfo_var));
		// foreach (ARFace face in _faceManager.trackables)
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_2 = __this->____faceManager_5;
		NullCheck(L_2);
		TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 L_3;
		L_3 = ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7(L_2, ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var);
		V_2 = L_3;
		Enumerator_t2743D5A35F15690DAB1B61F0480A44C6AFE6C2DC L_4;
		L_4 = TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F((&V_2), TrackableCollection_1_GetEnumerator_m3CD3F46003D1DE39B7C8FFD1490E59DD23BEBA3F_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_00bd;
	}

IL_002a:
	{
		// foreach (ARFace face in _faceManager.trackables)
		ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* L_5;
		L_5 = Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19((&V_1), Enumerator_get_Current_mB4CF0F77C9B33C52C2A790C2E568FAF17AB70F19_RuntimeMethod_var);
		V_3 = L_5;
		// subsystem.GetRegionPoses(face.trackableId, Allocator.Persistent, ref _faceRegions);    // ?? ???? ? Face Region? ??? ??? ?? faceRegions NativeArray? ??
		ARCoreFaceSubsystem_tF4F2ADEB42EF501D168B4F54F0A2422628620841* L_6 = V_0;
		ARFace_t73C068C9C8422F79A858EC41C322D399305B8453* L_7 = V_3;
		NullCheck(L_7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_8;
		L_8 = ARTrackable_2_get_trackableId_m8920E1DCFFC3855EAF61317450548F7AE1D2B1BD(L_7, ARTrackable_2_get_trackableId_m8920E1DCFFC3855EAF61317450548F7AE1D2B1BD_RuntimeMethod_var);
		NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A* L_9 = (&__this->____faceRegions_7);
		NullCheck(L_6);
		ARCoreFaceSubsystem_GetRegionPoses_m86783D41F79D1D4E8811CABE414E1F12437F21C5(L_6, L_8, 4, L_9, NULL);
		// foreach (ARCoreFaceRegionData faceRegion in _faceRegions)
		NativeArray_1_t8F554B7FBEC1AE0DCD60C82E58AD883E0182777A* L_10 = (&__this->____faceRegions_7);
		Enumerator_tE61DC9F23B13B05AF08123EB768FA2853AFAADD9 L_11;
		L_11 = NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB(L_10, NativeArray_1_GetEnumerator_mD1A85B3B7C8E29C76CCBFDEAE055E34EBB1734EB_RuntimeMethod_var);
		V_4 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C((&V_4), Enumerator_Dispose_mACB96009A37D8492C6EFE4CF4A7B269F472C9F6C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a4_1;
			}

IL_0054_1:
			{
				// foreach (ARCoreFaceRegionData faceRegion in _faceRegions)
				ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11 L_12;
				L_12 = Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28((&V_4), Enumerator_get_Current_mEB29909D8A4B4933CADB28DF6F3C2C8E9D92DD28_RuntimeMethod_var);
				V_5 = L_12;
				// ARCoreFaceRegion regionType = faceRegion.region;
				int32_t L_13;
				L_13 = ARCoreFaceRegionData_get_region_m7CD0AB1C423FD7A964F41C4CCCD14857C08177FE_inline((&V_5), NULL);
				V_6 = L_13;
				// regionPrefabs[(int)regionType].transform.localPosition = faceRegion.pose.position;    // Face Region ???? ?? ??
				GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___regionPrefabs_4;
				int32_t L_15 = V_6;
				NullCheck(L_14);
				int32_t L_16 = L_15;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				NullCheck(L_17);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
				L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
				L_19 = ARCoreFaceRegionData_get_pose_m8B0A57A837D75EC314AE73F2931075A0F10A3775_inline((&V_5), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19.___position_0;
				NullCheck(L_18);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_20, NULL);
				// regionPrefabs[(int)regionType].transform.localRotation = faceRegion.pose.rotation;    // Face Region ???? ?? ??
				GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___regionPrefabs_4;
				int32_t L_22 = V_6;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				NullCheck(L_24);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
				L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26;
				L_26 = ARCoreFaceRegionData_get_pose_m8B0A57A837D75EC314AE73F2931075A0F10A3775_inline((&V_5), NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = L_26.___rotation_1;
				NullCheck(L_25);
				Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_25, L_27, NULL);
			}

IL_00a4_1:
			{
				// foreach (ARCoreFaceRegionData faceRegion in _faceRegions)
				bool L_28;
				L_28 = Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25((&V_4), Enumerator_MoveNext_m4F432D6ADFE993100BDACC6DE04DAF7F144C5B25_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_00bd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		// foreach (ARFace face in _faceManager.trackables)
		bool L_29;
		L_29 = Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04((&V_1), Enumerator_MoveNext_mBE785620F02FA4C9BFF31CC4A56D796BCA196F04_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ARFaceRegionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceRegionManager__ctor_m2D24B92F9DCE6F3BCB9DCCB7A9325A58C6EC1A38 (ARFaceRegionManager_tDDDD672899348832E08BA05E6E1D6C9CC8CF8D3A* __this, const RuntimeMethod* method) 
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
// System.Void CarController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_Start_m15C0896D5EB70572BF27815FE41FF8E52DA22145 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _carMats = new Material[bodyObject.Length];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___bodyObject_4;
		NullCheck(L_0);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->____carMats_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____carMats_7), (void*)L_1);
		// for (int i = 0; i < _carMats.Length; i++)
		V_0 = 0;
		goto IL_0035;
	}

IL_0017:
	{
		// _carMats[i] = bodyObject[i].GetComponent<MeshRenderer>().material;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2 = __this->____carMats_7;
		int32_t L_3 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___bodyObject_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8;
		L_8 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_7, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_8, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_9);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_9);
		// for (int i = 0; i < _carMats.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < _carMats.Length; i++)
		int32_t L_11 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_12 = __this->____carMats_7;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// colors[0] = _carMats[0].color;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_13 = __this->___colors_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_14 = __this->____carMats_7;
		NullCheck(L_14);
		int32_t L_15 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_16, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18;
		L_18 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_17, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_18);
		// }
		return;
	}
}
// System.Void CarController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_Update_mA0FE1C8A651320D6A50CC5BF05D0D2BEE984AB67 (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Moved)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// Ray ray = new Ray(Camera.main.transform.position,
		//     Camera.main.transform.forward);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_9), L_5, L_8, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity, 1<<6))
		bool L_10;
		L_10 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_9, (&V_1), (std::numeric_limits<float>::infinity()), ((int32_t)64), NULL);
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		// Vector3 deltaPos = touch.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		V_2 = L_12;
		// transform.Rotate(transform.up, deltaPos.x * -1.0f * rotSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = L_16.___x_2;
		float L_18 = __this->___rotSpeed_6;
		NullCheck(L_13);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_13, L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, (-1.0f))), L_18)), NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void CarController::ChangeColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_ChangeColor_m7CEADAC4A890F8975D979A5786B255D83284816E (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, int32_t ___0_num, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _carMats.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// _carMats[i].color = colors[num];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->____carMats_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = __this->___colors_5;
		int32_t L_5 = ___0_num;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		NullCheck(L_3);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_3, L_8, NULL);
		// for (int i = 0; i < _carMats.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < _carMats.Length; i++)
		int32_t L_10 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_11 = __this->____carMats_7;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CarController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController__ctor_mED29536AC2B7697D76B32073704A86307FDCA1FF (CarController_t040DDF82A09770A77B8C41CDB423E13FE6F68CD5* __this, const RuntimeMethod* method) 
{
	{
		// public float rotSpeed = 0.1f;
		__this->___rotSpeed_6 = (0.100000001f);
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
// System.Void CarManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarManager_Start_m427BBCAD5966F4D81AFB166A9BA8A11F813E3873 (CarManager_t0D317F63D7063875A11CEE484332D47D211547E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___indicator_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _arManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_1;
		L_1 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->____arManager_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arManager_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void CarManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarManager_Update_mA9352BCED72028603AD58436612CD9FD4142268F (CarManager_t0D317F63D7063875A11CEE484332D47D211547E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// DetectGround();
		CarManager_DetectGround_m366C5C4DFACF71CE70D7984BAC9A346F5AC89191(__this, NULL);
		// if (EventSystem.current.currentSelectedGameObject)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// if (indicator.activeInHierarchy && Input.touchCount > 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___indicator_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (!L_4)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_5;
		L_5 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00e3;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6;
		L_6 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_6;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_7;
		L_7 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_7)
		{
			goto IL_00e3;
		}
	}
	{
		// if (_placedGameObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->____placedGameObject_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		// _placedGameObject = Instantiate(car, indicator.transform.position, indicator.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___car_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___indicator_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___indicator_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_13, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->____placedGameObject_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____placedGameObject_8), (void*)L_17);
		return;
	}

IL_0086:
	{
		// if (Vector3.Distance(_placedGameObject.transform.position, indicator.transform.position) > relocationDistance)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->____placedGameObject_8;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___indicator_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24;
		L_24 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_20, L_23, NULL);
		float L_25 = __this->___relocationDistance_6;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_00e3;
		}
	}
	{
		// _placedGameObject.transform.SetPositionAndRotation(indicator.transform.position,
		//     indicator.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->____placedGameObject_8;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___indicator_4;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___indicator_4;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		NullCheck(L_27);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_27, L_30, L_33, NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void CarManager::DetectGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarManager_DetectGround_m366C5C4DFACF71CE70D7984BAC9A346F5AC89191 (CarManager_t0D317F63D7063875A11CEE484332D47D211547E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(((float)L_0), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_1), (0.5f))), NULL);
		// List<ARRaycastHit> hitInfos = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_2 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_2, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_2;
		// if (_arManager.Raycast(screenSize, hitInfos, TrackableType.Planes))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->____arManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = V_1;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, ((int32_t)15), NULL);
		if (!L_6)
		{
			goto IL_00c3;
		}
	}
	{
		// indicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___indicator_4;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// indicator.transform.position = hitInfos[0].pose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___indicator_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = V_1;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___position_0;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_13, NULL);
		// indicator.transform.rotation = hitInfos[0].pose.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___indicator_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_16 = V_1;
		NullCheck(L_16);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_17;
		L_17 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_16, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_17;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
		L_18 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = L_18.___rotation_1;
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_19, NULL);
		// indicator.transform.position += indicator.transform.up * 0.1f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___indicator_4;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___indicator_4;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_27, NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_28, NULL);
		return;
	}

IL_00c3:
	{
		// indicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___indicator_4;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CarManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarManager__ctor_mDD4D293C5198DF4335D27D73B538F6A03E51B6B0 (CarManager_t0D317F63D7063875A11CEE484332D47D211547E9* __this, const RuntimeMethod* method) 
{
	{
		// public float relocationDistance = 1.0f;
		__this->___relocationDistance_6 = (1.0f);
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
// System.Void ImageRecognitionExample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognitionExample_Awake_m098805C0FBC8AAE9F86192B3F1CF49BF0253CA71 (ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arTrackedImageManager = GetComponent<ARTrackedImageManager>();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0;
		L_0 = Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683(__this, Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		__this->____arTrackedImageManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arTrackedImageManager_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ImageRecognitionExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognitionExample_OnEnable_mA728FFA557B53DC56CFB2CC03C2E01831397BB68 (ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageRecognitionExample_OnImageChanged_m5CA35296A4A38472046CF36E840DE13C5B399FA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arTrackedImageManager.trackedImagesChanged += OnImageChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->____arTrackedImageManager_4;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)ImageRecognitionExample_OnImageChanged_m5CA35296A4A38472046CF36E840DE13C5B399FA4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ImageRecognitionExample::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognitionExample_OnDisable_mB20FC61485EC28F9CA8D41BEA8A0865738895255 (ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageRecognitionExample_OnImageChanged_m5CA35296A4A38472046CF36E840DE13C5B399FA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arTrackedImageManager.trackedImagesChanged -= OnImageChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->____arTrackedImageManager_4;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)ImageRecognitionExample_OnImageChanged_m5CA35296A4A38472046CF36E840DE13C5B399FA4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ImageRecognitionExample::OnImageChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognitionExample_OnImageChanged_m5CA35296A4A38472046CF36E840DE13C5B399FA4 (ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var trackedImage in args.added)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___0_args), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_000f_1:
			{
				// foreach (var trackedImage in args.added)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				// Debug.Log(trackedImage.name);
				NullCheck(L_2);
				String_t* L_3;
				L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
			}

IL_0020_1:
			{
				// foreach (var trackedImage in args.added)
				bool L_4;
				L_4 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void ImageRecognitionExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageRecognitionExample__ctor_m554AC2A9863E34528E9DF2DB307E87C611ECAA34 (ImageRecognitionExample_tEFC46736618613314D4A5B561A233C9B9D8339F7* __this, const RuntimeMethod* method) 
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
// System.Void LightController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightController_Awake_mE13C17269AD13F60E698908EC47D846085D0DDC7 (LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20EF645DC9F08AEC643D03847EC4F493A7C5E7D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arCameraManager == null)
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____arCameraManager_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("ARCameraManager not found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral20EF645DC9F08AEC643D03847EC4F493A7C5E7D7, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_001e:
	{
		// light = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___light_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___light_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void LightController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightController_OnEnable_mA6FF44991065FF84317B6F0736D61D02EC2F8110 (LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightController_FrameChanged_mAE25DDBFAE9EBB3DAF018474745B66218E4CB02F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arCameraManager.frameReceived += FrameChanged;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____arCameraManager_4;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)LightController_FrameChanged_mAE25DDBFAE9EBB3DAF018474745B66218E4CB02F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LightController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightController_OnDisable_mE86EF046A0372DD76CE7DF8A506A79B7EBEABA1C (LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightController_FrameChanged_mAE25DDBFAE9EBB3DAF018474745B66218E4CB02F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arCameraManager.frameReceived -= FrameChanged;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____arCameraManager_4;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)LightController_FrameChanged_mAE25DDBFAE9EBB3DAF018474745B66218E4CB02F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LightController::FrameChanged(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightController_FrameChanged_mAE25DDBFAE9EBB3DAF018474745B66218E4CB02F (LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (args.lightEstimation.averageBrightness.HasValue) // ??? ?? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_0;
		L_0 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_1;
		L_1 = ARLightEstimationData_get_averageBrightness_mCDE95FB42D807C168E187942BD9DDAB65439AE19((&V_0), NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// light.intensity = args.lightEstimation.averageBrightness.Value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = __this->___light_5;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_4;
		L_4 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_4;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_5;
		L_5 = ARLightEstimationData_get_averageBrightness_mCDE95FB42D807C168E187942BD9DDAB65439AE19((&V_0), NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_3);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_3, L_6, NULL);
	}

IL_003b:
	{
		// if (args.lightEstimation.averageColorTemperature.HasValue) // .?? ? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_7;
		L_7 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_7;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_8;
		L_8 = ARLightEstimationData_get_averageColorTemperature_m688BB1F18E15D7058FDEFC012451A72CD6D193DC_inline((&V_0), NULL);
		V_1 = L_8;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		// light.colorTemperature = args.lightEstimation.averageColorTemperature.Value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = __this->___light_5;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_11;
		L_11 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_11;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_12;
		L_12 = ARLightEstimationData_get_averageColorTemperature_m688BB1F18E15D7058FDEFC012451A72CD6D193DC_inline((&V_0), NULL);
		V_1 = L_12;
		float L_13;
		L_13 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_10);
		Light_set_colorTemperature_m566435E6BA75779C19F6B0BACDC37192D9CC4C43(L_10, L_13, NULL);
	}

IL_0076:
	{
		// if (args.lightEstimation.colorCorrection.HasValue) // ?? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_14;
		L_14 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_14;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_15;
		L_15 = ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline((&V_0), NULL);
		V_2 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&V_2), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00b1;
		}
	}
	{
		// light.color = args.lightEstimation.colorCorrection.Value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = __this->___light_5;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_18;
		L_18 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_18;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_19;
		L_19 = ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline((&V_0), NULL);
		V_2 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&V_2), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		NullCheck(L_17);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_17, L_20, NULL);
	}

IL_00b1:
	{
		// if (args.lightEstimation.mainLightDirection.HasValue) // ??? ?? ?? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_21;
		L_21 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_21;
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_22;
		L_22 = ARLightEstimationData_get_mainLightDirection_m49A1B8B5DB38EAE356A22C1AD0A4FD671C6C1427_inline((&V_0), NULL);
		V_3 = L_22;
		bool L_23;
		L_23 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_3), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_00fb;
		}
	}
	{
		// light.transform.rotation = Quaternion.LookRotation(-args.lightEstimation.mainLightDirection.Value);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_24 = __this->___light_5;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_26;
		L_26 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_26;
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_27;
		L_27 = ARLightEstimationData_get_mainLightDirection_m49A1B8B5DB38EAE356A22C1AD0A4FD671C6C1427_inline((&V_0), NULL);
		V_3 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&V_3), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_28, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_29, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_30, NULL);
	}

IL_00fb:
	{
		// if (args.lightEstimation.mainLightIntensityLumens.HasValue) // ?? ??? ? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_31;
		L_31 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_31;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_32;
		L_32 = ARLightEstimationData_get_mainLightIntensityLumens_m618D7C8A4FA8FFC3AB370DFC00596DDFA592288F_inline((&V_0), NULL);
		V_1 = L_32;
		bool L_33;
		L_33 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_0136;
		}
	}
	{
		// light.intensity = args.lightEstimation.averageIntensityInLumens.Value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_34 = __this->___light_5;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_35;
		L_35 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_35;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_36;
		L_36 = ARLightEstimationData_get_averageIntensityInLumens_m3D74CD050CDA61A97595AF8854E97C3239F159D1((&V_0), NULL);
		V_1 = L_36;
		float L_37;
		L_37 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_34);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_34, L_37, NULL);
	}

IL_0136:
	{
		// if (args.lightEstimation.ambientSphericalHarmonics.HasValue) // ?? 2?? ?? ???? ??? ?? ?? ?? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_38;
		L_38 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_38;
		Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 L_39;
		L_39 = ARLightEstimationData_get_ambientSphericalHarmonics_m34C8C4BB5EFDD7E2DAEDF983F11031ABFCA16C41_inline((&V_0), NULL);
		V_4 = L_39;
		bool L_40;
		L_40 = Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_inline((&V_4), Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_RuntimeMethod_var);
		if (!L_40)
		{
			goto IL_0173;
		}
	}
	{
		// RenderSettings.ambientMode = AmbientMode.Skybox;
		RenderSettings_set_ambientMode_mDC8C4F62B1BCDDBFA69E9398213B926E39D512FC(0, NULL);
		// RenderSettings.ambientProbe = args.lightEstimation.ambientSphericalHarmonics.Value;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_41;
		L_41 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_41;
		Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 L_42;
		L_42 = ARLightEstimationData_get_ambientSphericalHarmonics_m34C8C4BB5EFDD7E2DAEDF983F11031ABFCA16C41_inline((&V_0), NULL);
		V_4 = L_42;
		SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 L_43;
		L_43 = Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6((&V_4), Nullable_1_get_Value_mCA595B70EE9DFE26339AAE8F71541A1707A8FDC6_RuntimeMethod_var);
		RenderSettings_set_ambientProbe_mEAF33216C2CE56107382ED6E12F69F01B3E04FDF(L_43, NULL);
	}

IL_0173:
	{
		// }
		return;
	}
}
// System.Void LightController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightController__ctor_mC845B5E91DAD3743B81270298BFBB1F57AE7A6F9 (LightController_t9D3AC7755C85071248D78D767F218EB7CB153FE5* __this, const RuntimeMethod* method) 
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
// System.Void LightEstimationText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimationText_Awake_mB277DE42B9AE92E00D3A7668D7F05BC46FBC3287 (LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLight = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___currentLight_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLight_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void LightEstimationText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimationText_OnEnable_m8FD1B436F9D1B74DA570D931CB5AD69211D249FD (LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightEstimationText_FrameUpdate_mE4D3A69709601CE18C80255B5BF3B4DA68BC4168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arCameraManager.frameReceived += FrameUpdate;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____arCameraManager_4;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)LightEstimationText_FrameUpdate_mE4D3A69709601CE18C80255B5BF3B4DA68BC4168_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LightEstimationText::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimationText_OnDisable_mFCD7E3172A812707ED83F7CAC03A4DA8C5D9622C (LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightEstimationText_FrameUpdate_mE4D3A69709601CE18C80255B5BF3B4DA68BC4168_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arCameraManager.frameReceived -= FrameUpdate;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->____arCameraManager_4;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)LightEstimationText_FrameUpdate_mE4D3A69709601CE18C80255B5BF3B4DA68BC4168_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LightEstimationText::FrameUpdate(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimationText_FrameUpdate_mE4D3A69709601CE18C80255B5BF3B4DA68BC4168 (LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral153034DFC3EC30D694E3C1156052E9C23E8E1F2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral245E745BA1650B972F7602BE3001EF153E7C5B46);
		s_Il2CppMethodInitialized = true;
	}
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (args.lightEstimation.averageBrightness.HasValue) // ??? ?? ??
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_0;
		L_0 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_1;
		L_1 = ARLightEstimationData_get_averageBrightness_mCDE95FB42D807C168E187942BD9DDAB65439AE19((&V_0), NULL);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		// BrightnessValueTMP.text = $"Brightness : {args.lightEstimation.averageBrightness.Value}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___BrightnessValueTMP_5;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_4;
		L_4 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_4;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_5;
		L_5 = ARLightEstimationData_get_averageBrightness_mCDE95FB42D807C168E187942BD9DDAB65439AE19((&V_0), NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral153034DFC3EC30D694E3C1156052E9C23E8E1F2A, L_8, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_9);
		// currentLight.intensity = args.lightEstimation.averageBrightness.Value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = __this->___currentLight_7;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_11;
		L_11 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_11;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_12;
		L_12 = ARLightEstimationData_get_averageBrightness_mCDE95FB42D807C168E187942BD9DDAB65439AE19((&V_0), NULL);
		V_1 = L_12;
		float L_13;
		L_13 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_10);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_10, L_13, NULL);
	}

IL_006c:
	{
		// if (args.lightEstimation.colorCorrection.HasValue) // ?? ??(RGBA)
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_14;
		L_14 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_14;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_15;
		L_15 = ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline((&V_0), NULL);
		V_2 = L_15;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&V_2), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00d8;
		}
	}
	{
		// ColorCorrectionValueTMP.text = $"Color : {args.lightEstimation.colorCorrection.Value}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___ColorCorrectionValueTMP_6;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_18;
		L_18 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_18;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_19;
		L_19 = ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline((&V_0), NULL);
		V_2 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&V_2), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20;
		RuntimeObject* L_22 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral245E745BA1650B972F7602BE3001EF153E7C5B46, L_22, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_23);
		// currentLight.color = args.lightEstimation.colorCorrection.Value;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_24 = __this->___currentLight_7;
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_25;
		L_25 = ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline((&___0_args), NULL);
		V_0 = L_25;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_26;
		L_26 = ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline((&V_0), NULL);
		V_2 = L_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&V_2), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		NullCheck(L_24);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_24, L_27, NULL);
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void LightEstimationText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightEstimationText__ctor_m2FF409675D14999D59065F1FFB267B5BE9E6C99D (LightEstimationText_t66A0DCC3394260E33D2D3E8A8416BE1B87C1BD9B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARCoreFaceRegionData_get_region_m7CD0AB1C423FD7A964F41C4CCCD14857C08177FE_inline (ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11* __this, const RuntimeMethod* method) 
{
	{
		// public ARCoreFaceRegion region { get { return m_Region; } }
		int32_t L_0 = __this->___m_Region_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARCoreFaceRegionData_get_pose_m8B0A57A837D75EC314AE73F2931075A0F10A3775_inline (ARCoreFaceRegionData_tC5ABC889AB00A0DB777FFB44FD943E772F8A4F11* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get { return m_Pose; } }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ARCameraFrameEventArgs_get_lightEstimation_mDAD20A000D180FB372E8214B37A8A4EB4F0F312C_inline (ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC* __this, const RuntimeMethod* method) 
{
	{
		// public ARLightEstimationData lightEstimation { get; set; }
		ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 L_0 = __this->___U3ClightEstimationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ARLightEstimationData_get_averageColorTemperature_m688BB1F18E15D7058FDEFC012451A72CD6D193DC_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) 
{
	{
		// public float? averageColorTemperature { get; set; }
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = __this->___U3CaverageColorTemperatureU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ARLightEstimationData_get_colorCorrection_mF7D9D83F249587E6A1E18D845C0D521C907DF496_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) 
{
	{
		// public Color? colorCorrection { get; set; }
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_0 = __this->___U3CcolorCorrectionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ARLightEstimationData_get_mainLightDirection_m49A1B8B5DB38EAE356A22C1AD0A4FD671C6C1427_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3? mainLightDirection { get; set; }
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_0 = __this->___U3CmainLightDirectionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ARLightEstimationData_get_mainLightIntensityLumens_m618D7C8A4FA8FFC3AB370DFC00596DDFA592288F_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) 
{
	{
		// public float? mainLightIntensityLumens { get; set; }
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_0 = __this->___U3CmainLightIntensityLumensU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ARLightEstimationData_get_ambientSphericalHarmonics_m34C8C4BB5EFDD7E2DAEDF983F11031ABFCA16C41_inline (ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7* __this, const RuntimeMethod* method) 
{
	{
		// public SphericalHarmonicsL2? ambientSphericalHarmonics { get; set; }
		Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 L_0 = __this->___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m151570AF3DE2439EAA05BD98A6D78936B9BF03F2_gshared_inline (Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
