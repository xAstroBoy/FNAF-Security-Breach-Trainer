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
	 * BlueprintGeneratedClass CautionBot.CautionBot_C
	 * Size -> 0x0070 (FullSize[0x02F8] - InheritedSize[0x0288])
	 */
	class ACautionBot_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFloatingPawnMovement*                               FloatingPawnMovement;                                    // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                StunKey;                                                 // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InitialYawKey;                                           // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MovementAudioLoop;                                       // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MovementAudioStop;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              OcclusionTrace[0x28];                                    // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		bool DoorEntryNotAllowed(class UDoorComponent* DoorComponent);
		void GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards);
		void GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards);
		void GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int32_t* NumberOfAlerts);
		void IsWarningFinished(bool* Finished);
		void SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberOfAlerts);
		void ForceKill(bool Animate_);
		void GameStart();
		void GameEnd();
		void GameExit();
		void PlayerHit(const struct FHitResult& Hit);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason);
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void Start_Alert(const class FName& Alert);
		void Start_Movement();
		void Stop_Warning();
		void End_Movement();
		void Start_Head_Movement();
		void Start_Warning(int32_t WarningCount);
		void End_Head_Movement();
		void Stop_Alert(const class FName& Alert);
		void Start_Arm_Movement();
		void End_Arm_Movement();
		void ReceiveTick(float DeltaSeconds);
		void OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent);
		void OnEndOverlapDoor();
		void ExecuteUbergraph_CautionBot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
