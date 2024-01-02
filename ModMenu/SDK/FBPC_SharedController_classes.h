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
	 * BlueprintGeneratedClass FBPC_SharedController.FBPC_SharedController_C
	 * Size -> 0x0065 (FullSize[0x0625] - InheritedSize[0x05C0])
	 */
	class AFBPC_SharedController_C : public AFNAFBasePlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                      P_VoiceOverLines;                                        // 0x05C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UWI_Subtitles_C*                                     P_Subtitles;                                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       P_SubtitlesStandalone;                                   // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       P_ShiftDown;                                             // 0x05E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceStandaloneSubtitles;                                // 0x05E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Debug;                                                   // 0x05E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Debug_Subtitles;                                         // 0x05E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMV0[0x3];                                   // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PauseUIClass;                                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         PauseWidget;                                             // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPause;                                                // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayingPartsAndServiceGame;                              // 0x05F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsGamePaused;                                            // 0x05FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MTMY[0x5];                                   // 0x05FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWI_SubtitlesManager_C*                              SubtitlesWidget;                                         // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingCamStation;                                         // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7W4M[0x7];                                   // 0x0609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EscapePressed;                                           // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       PossessingPawn;                                          // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InventoryOpen;                                           // 0x0621(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InventoryPressed;                                        // 0x0622(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowItemDescriptionPreview;                             // 0x0623(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OnLoadingScreen;                                         // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsOnPauseMenu(bool* IsOnPauseMenu);
		void UsingGamepad(bool* UsingGamepad);
		void GetRobotArmsAnimInstance(class UAnimInstance** AnimInstance);
		void GetFreddyChairAnimInstance(class UAnimInstance** AnimInstance);
		int32_t PostEventWithSubtitles(class UAkAudioEvent* AkEvent, class AActor* Actor);
		void AttemptToExitPawns(const struct FKey& A);
		void PrintDebugSubtitles(const class FString& inString, bool Force);
		void PrintDebug(const class FString& inString, bool Force);
		void UpdateSubtitles();
		void ShowFazwatch();
		void HideFazwatch();
		void EndPostEventWithSubtitles(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		int32_t PostEventWithSubtitlesFunc(class UAkAudioEvent* AkEvent, class AActor* Actor);
		void EndSubtitleDisplayFunc();
		void BeginSubtitleDisplayFunc(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float Duration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority);
		void EnsureSubtitles(bool* IsValid);
		void AfterUnpause();
		void AfterPause();
		void InpActEvt_Pause_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_LeftShift_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_LeftShift_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Inventory_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ClickToUnpause();
		void OnToggleLocalizationQA();
		void EndSubtitleDisplay();
		void BeginSubtitleDisplay(const class FString& Key, class AActor* Actor, const class FString& FallbackSourceString, float Duration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority);
		void SkipSubtitles();
		void SetPlayingPartsAndServiceGame(bool IsPlaying);
		void OverridePause();
		void RemoveOverride();
		void AllowNewItemPreview(bool Allow);
		void PauseGame(const struct FKey& Key);
		void UsingCameraStation(bool UsingCamStation);
		void CloseInventoryMenu();
		void IsOnLoadingScreen(bool _TRUE__);
		void ToggleCanPause(bool AllowPausing);
		void ExecuteUbergraph_FBPC_SharedController(int32_t EntryPoint);
		void EscapePressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
