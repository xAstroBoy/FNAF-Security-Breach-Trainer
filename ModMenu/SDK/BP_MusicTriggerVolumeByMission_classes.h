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

// BlueprintGeneratedClass BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C
// 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
class ABP_MusicTriggerVolumeByMission_C : public APlayerTriggerWithConditionComps
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FFNAFMissionState>                   MissionsToPlayMusic;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               MusicActive;                                               // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DD65[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               PlayEvent;                                                 // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               StopEvent;                                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MusicTriggerVolumeByMission.BP_MusicTriggerVolumeByMission_C");
		return ptr;
	}



	void CheckForActiveMissions(bool* MissionActive);
	void OnTriggered();
	void ActivateMusic();
	void DeactivateMusic();
	void OnActiveMissionUpdated(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo);
	void BndEvt__TriggerComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ResetTrigger();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MusicTriggerVolumeByMission(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
