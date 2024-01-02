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
	 * BlueprintGeneratedClass Vanessa.Vanessa_C
	 * Size -> 0x007B (FullSize[0x0894] - InheritedSize[0x0819])
	 */
	class AVanessa_C : public AAISeeker_C
	{
	public:
		unsigned char                                              UnknownData_KMHY[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0820(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                flashlightsource;                                        // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GodRay;                                                  // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 Flashlight_Light;                                        // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        BlockedByAITimer;                                        // 0x0840(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                CaughtMissionName;                                       // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LostAndFoundSpawnLocation[0x28];                         // 0x0850(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       SendingToLostAndFound;                                   // 0x0878(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerLooking;                                           // 0x0879(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EYGD[0x6];                                   // 0x087A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EFNAFAISpawnType>                                   TypesToSpawn;                                            // 0x0880(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    NumToSpawn;                                              // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo);
		void GetAlertInfoComplex(TArray<struct FAnimatronicTypeData>* TypesToAlert, int32_t* NumberOfAlerts);
		void GetAlertInfo(TArray<EFNAFAISpawnType>* TypesToAlert, int32_t* NumberOfAlerts);
		void IsWarningFinished(bool* Finished);
		EAlertType GetAlertType();
		void GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations);
		void GetRoomSeekMode(ERoomSeekMode* SeekMode);
		void OnNotifyEnd_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName);
		void OnNotifyBegin_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName);
		void OnInterrupted_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName);
		void OnBlendOut_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName);
		void OnCompleted_FA4713CB499BFC26786D6E8E8597FB63(const class FName& NotifyName);
		void OnLeaveAI(class AAISeeker_C* ActorLeaving);
		void OnEncounterAI(class AAISeeker_C* ActorEncountered);
		void OnJumpscare(class AGregory_C* Gregory);
		void OnNonLethalComplete();
		void OnCaptureOverlap(class AActor* OtherActor, class UPrimitiveComponent* CurrentCaptureTrigger);
		void PlayerTeleportedToLostAndFound();
		void StartAlert(const class FName& Alert);
		void StopAlert(const class FName& Alert);
		void ReceiveTick(float DeltaSeconds);
		void BlockedByAITimeUp();
		void ReceiveBeginPlay();
		void SetAlertInfoComplex(TArray<struct FAnimatronicTypeData> TypesToAlert, int32_t NumberOfAlerts);
		void StopWarning();
		void StartWarning(int32_t WarningCount);
		void PlayVoiceType(EAIVoiceOverType VoiceTag);
		void SetAlertInfo(TArray<EFNAFAISpawnType> TypesToAlert, int32_t NumberOfAlerts);
		void ExecuteUbergraph_Vanessa(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
