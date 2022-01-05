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
	 * BlueprintGeneratedClass TitlePC.TitlePC_C
	 * Size -> 0x0029 (FullSize[0x05E9] - InheritedSize[0x05C0])
	 */
	class ATitlePC_C : public AFNAFBasePlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTitleUI_C*                                          TitleUI_var;                                             // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HoldProgressTime;                                        // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Percentage;                                              // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeNeededToSkip;                                        // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsIntroVideoPlaying;                                     // 0x05DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSkipButtonHeld;                                        // 0x05DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6X6S[0x2];                                   // 0x05DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWI_SplashScreen_C*                                  SplashScreen;                                            // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableDebugFullMenu;                                     // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnToggleLocalizationQA();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void OnDebugSequenceEntered();
		void ExecuteUbergraph_TitlePC(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
