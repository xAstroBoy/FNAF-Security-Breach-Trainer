#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass CameraIcon.CameraIcon_C
	 * Size -> 0x1190 (FullSize[0x13F0] - InheritedSize[0x0260])
	 */
	class UCameraIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DistractionAnim;                                         // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Cam_Name;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CameraButton;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HackButton;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CameraClicked;                                           // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ASecurityCamera*                                     CurrentCam;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FButtonStyle                                        defaultButtonStyle;                                      // 0x02A0(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        alertButtonStyle;                                        // 0x0518(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        SelectedButtonStyle;                                     // 0x0790(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        DistractionButtonStyle;                                  // 0x0A08(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Inaccessible;                                            // 0x0C80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AMR5[0x7];                                   // 0x0C81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        ChowdaSelectedButtonStyle;                               // 0x0C88(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        ChowdaDefaultButtonStyle;                                // 0x0F00(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        ChowdaAlertButtonStyle;                                  // 0x1178(0x0278) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetCameraDirection();
		void ChowdaMode(bool* ChowdaMode);
		void EndAlert();
		void AdjustButton();
		void BndEvt__HackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void DistractionStyle();
		void BndEvt__CameraButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void AlertEvent();
		void PreConstruct(bool IsDesignTime);
		void InitCamera(class ASecurityCamera* Camera);
		void ExecuteUbergraph_CameraIcon(int32_t EntryPoint);
		void CameraClicked__DelegateSignature(class UCameraIcon_C* Sender);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
