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
	 * BlueprintGeneratedClass StaffBotBase.StaffBotBase_C
	 * Size -> 0x0198 (FullSize[0x0658] - InheritedSize[0x04C0])
	 */
	class AStaffBotBase_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     JumpscareTransform;                                      // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    AutoAlertRadius;                                         // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       EyeTarget;                                               // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceComponent*                              VisualSource;                                            // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USightComponent*                                     Sight;                                                   // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Prop_01;                                              // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPhysicalAnimationComponent*                         PhysicalAnimation;                                       // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasJumpscared;                                           // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E1UG[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       StaffbotAnimInstance;                                    // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isJumpscaring;                                           // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_592C[0x3];                                   // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      deltaTime;                                               // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasProp;                                                 // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5G3T[0x3];                                   // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                HitByLaserKey;                                           // 0x0524(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PlayerLocationKey;                                       // 0x052C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Stunned;                                                 // 0x0534(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P5JU[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HeadAimTargetActor;                                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadAim;                                                 // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LYZC[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       MovementAudioLoop;                                       // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MovementAudioStop;                                       // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanEnterDoors;                                           // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsWarning;                                               // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		StaffbotJob_Enum_EStaffbotJob_Enum                         StaffbotJobEnum;                                         // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		StaffbotRig_EStaffbotRig                                   StaffbotRigEnum;                                         // 0x055B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideDefaultMaterials;                                // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_9Z1U[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<StaffbotMaterial_Enum_EStaffbotMaterial_Enum, struct FStaffbotMaterials_DS> MaterialDictionary;                                      // 0x0560(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		StaffbotMaterial_Enum_EStaffbotMaterial_Enum               StaffbotMaterialOverride;                                // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_5G6C[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InteractionPointWaitTimeKey;                             // 0x05B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InteractionPointHitKey;                                  // 0x05BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TriggerAutoAlertKey;                                     // 0x05C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WarningCountKey;                                         // 0x05CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ILJ9[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OcclusionTrace[0x28];                                    // 0x05D4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                StaffbotEnabledKey;                                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                StaffbotPatrollingKey;                                   // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0610(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    NumberOfBotsToAlert;                                     // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_SWYH[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TensionSystem[0x28];                                     // 0x0624(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       EmitterPlaying;                                          // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InAudibleRange;                                          // 0x0651(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WatchUp;                                                 // 0x0652(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ATSG[0x1];                                   // 0x0653(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StunTime;                                                // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetStartTurnTowardsEvent(class UAkAudioEvent** StartTurnTowards);
		void GetEndTurnTowardsEvent(class UAkAudioEvent** EndTurnTowards);
		bool DoorEntryNotAllowed(class UDoorComponent* DoorComponent);
		void GetHeadAimTargetActor(class AActor** AimActor);
		void GetHeadAimTargetLocation(struct FVector* HeadAimLocation);
		bool CanBeStunned();
		void IsStunned(bool* IsStunned);
		void RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo);
		void GetSightComponent(class USightComponent** Sight);
		void GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int32_t* NumberOfAlerts);
		void IsWarningFinished(bool* Finished);
		void GetStaffBotVO();
		void AttemptHeadAim();
		void PlayVoice(class USoundBase* NewSound, bool CutPreviousSound);
		void GetMovementDirection(struct FVector* Direction);
		void UserConstructionScript();
		void OnFailure_E9830418481AAAC2670CCB8882EF32B0();
		void OnSuccess_E9830418481AAAC2670CCB8882EF32B0();
		void OnFailure_371B42EB46E3E0D10174CD8948725F67(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_371B42EB46E3E0D10174CD8948725F67(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void StopEmitter();
		void PlayEmitter();
		void OnEndOverlapDoor();
		void OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent);
		void Unstun();
		void ForceKill(bool Animate_);
		void GameStart();
		void GameEnd();
		void GameExit();
		void PlayerHit(const struct FHitResult& Hit);
		void SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberOfAlerts);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void NonLethalJumpscare(class AActor* Actor, bool HasJumpscared);
		void ResetJumpscare();
		void TaskDoneEvent();
		void ModelSwapEvent();
		void Send_Alert(bool IsAlerting);
		void Start_Alert(const class FName& Alert);
		void Stop_Alert(const class FName& Alert);
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void Stun();
		void SetHeadAimTarget(class AActor* TargetActor, const struct FVector& TargetLocation, bool OffsetByViewHeight);
		void SetHeadAimEnabled(bool enable);
		void Start_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type);
		void End_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type);
		void Start_Head_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type);
		void End_Head_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type);
		void Start_Arm_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type);
		void End_Arm_Movement(StaffbotJob_Anim_EStaffbotJob_Anim Bot_Type);
		void Start_Warning(int32_t WarningCount);
		void Stop_Warning();
		void Trigger_Interaction_Point(class AStaffbotInteractionPoint_C* InteractionPoint);
		void BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void DisableStaffbot();
		void EnableStaffbot();
		void EnablePatrol();
		void DisablePatrol();
		void ToggleInRange(bool InRange);
		void ExecuteUbergraph_StaffBotBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
