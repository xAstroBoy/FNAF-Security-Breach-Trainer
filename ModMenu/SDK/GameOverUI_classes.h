#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * WidgetBlueprintGeneratedClass GameOverUI.GameOverUI_C
	 * Size -> 0x05E2 (FullSize[0x0812] - InheritedSize[0x0230])
	 */
	class UGameOverUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    TrailerSequence;                                         // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    MainSequence;                                            // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Blackness;                                               // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_2;                                           // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LivesRemaining;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      QuitButton;                                              // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RetryButton;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Static;                                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USurvivalScoreUI_C*                                  SurvivalScoreUI;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKey                                                UpKey;                                                   // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                DownKey;                                                 // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                GamepadUp;                                               // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                GamepadDown;                                             // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FButtonStyle                                        ButtonStyle;                                             // 0x02E0(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTextBlockStyle                                     TextBlockStyle;                                          // 0x0558(0x0268) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              GlobalAmbience[0x28];                                    // 0x07C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FScriptMulticastDelegate                             AnimationDelay;                                          // 0x07E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      AnimationLengthSeconds;                                  // 0x07F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_09J7[0x4];                                   // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AnimationDelayFinished;                                  // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AnimationFinished;                                       // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		UMG_ESlateVisibility                                       Original_VisibilityStateForRetry;                        // 0x0811(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTGameOverUI_1();
		void Finished_5F4680854A7842BE2B96888229038873();
		void Fade_Out_Audio();
		void BndEvt__RetryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__QuitButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void WaitForAnimationDelay();
		void AnimationDelayHasFinished();
		void BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void FocusOnWidgetButton();
		void ExecuteUbergraph_GameOverUI(int32_t EntryPoint);
		void AnimationDelayFinished__DelegateSignature();
		void AnimationDelay__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
