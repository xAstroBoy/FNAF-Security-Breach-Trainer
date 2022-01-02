#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CameraIcon.CameraIcon_C
// 0x07A0 (FullSize[0x09D0] - InheritedSize[0x0230])
class UCameraIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Cam_Name;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CameraButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     HackButton;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    CameraClicked;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASecurityCamera*                             CurrentCam;                                                // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                                defaultButtonStyle;                                        // 0x0268(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                alertButtonStyle;                                          // 0x04E0(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                                selectedButtonStyle;                                       // 0x0758(0x0278) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CameraIcon.CameraIcon_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void InitCamera(class ASecurityCamera* Camera);
	void BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void End_Alert();
	void AlertEvent();
	void AdjustButton();
	void BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CameraIcon(int EntryPoint);
	void CameraClicked__DelegateSignature(class UCameraIcon_C* Sender);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
