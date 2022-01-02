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

// BlueprintGeneratedClass Vanessa.Vanessa_C
// 0x0073 (FullSize[0x0864] - InheritedSize[0x07F1])
class AVanessa_C : public AAISeeker_C
{
public:
	unsigned char                                      UnknownData_SG9L[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        GodRay;                                                    // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Flashlight_Light;                                          // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                BlockedByAITimer;                                          // 0x0810(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CaughtMissionName;                                         // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LostAndFoundSpawnLocation[0x28];                           // 0x0820(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               SendingToLostAndFound;                                     // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlayerLooking;                                             // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DBCT[0x6];                                     // 0x084A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToSpawn;                                              // 0x0850(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                NumToSpawn;                                                // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Vanessa.Vanessa_C");
		return ptr;
	}



	void RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo);
	void GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int* NumberOfAlerts);
	void IsWarningFinished(bool* Finished);
	fnaf9_EAlertType GetAlertType();
	void GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations);
	void GetRoomSeekMode(TEnumAsByte<RoomSeekMode_ERoomSeekMode>* SeekMode);
	void OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName);
	void OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName);
	void OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName);
	void OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName);
	void OnCompleted_FA4713CB499BFC26786D6E8E8597FB63(const struct FName& NotifyName);
	void On_Leave_AI(class AAISeeker_C* ActorLeaving);
	void On_Encounter_AI(class AAISeeker_C* ActorEncountered);
	void On_Jumpscare(class AGregory_C* Gregory);
	void On_Non_Lethal_Complete();
	void OnCaptureOverlap(class AActor* OtherActor, class UBoxComponent* CurrentCaptureTrigger);
	void PlayerTeleportedToLostAndFound();
	void Start_Alert(const struct FName& Alert);
	void Stop_Alert(const struct FName& Alert);
	void ReceiveTick(float DeltaSeconds);
	void Stop_Warning();
	void Start_Warning(int WarningCount);
	void Blocked_By_AI_Time_Up();
	void PlayVoiceType(TEnumAsByte<AIVoiceOverType_EAIVoiceOverType> VoiceTag);
	void SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberOfAlerts);
	void ExecuteUbergraph_Vanessa(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
