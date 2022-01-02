﻿#pragma once

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

// BlueprintGeneratedClass FBPC_SharedController.FBPC_SharedController_C
// 0x0038 (FullSize[0x05F8] - InheritedSize[0x05C0])
class AFBPC_SharedController_C : public AFNAFBasePlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FString>                             P_VoiceOverLines;                                          // 0x05C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWI_Subtitles_C*                             P_Subtitles;                                               // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               P_SubtitlesStandalone;                                     // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               P_ShiftDown;                                               // 0x05E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceStandaloneSubtitles;                                  // 0x05E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Debug;                                                     // 0x05E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Debug_Subtitles;                                           // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D3ZV[0x3];                                     // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PauseUIClass;                                              // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 PauseWidget;                                               // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FBPC_SharedController.FBPC_SharedController_C");
		return ptr;
	}



	void PrintDebugSubtitles(const struct FString& inString, bool Force);
	void PrintDebug(const struct FString& inString, bool Force);
	void UpdateSubtitles();
	void ShowFazwatch();
	void HideFazwatch();
	void EndPostEventWithSubtitles(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	int PostEventWithSubtitles(class UAkAudioEvent* AkEvent, class AActor* Actor);
	void EndSubtitleDisplay();
	void BeginSubtitleDisplay(const struct FString& Key, class AActor* Actor, const struct FString& FallbackSourceString, float Duration, float MaxRadiusPercent, bool SanitizeKey, bool HighPriority);
	void EnsureSubtitles(bool* IsValid);
	void AfterUnpause();
	void AfterPause();
	void InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void Click_To_Unpause();
	void OnToggleLocalizationQA();
	void ExecuteUbergraph_FBPC_SharedController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif