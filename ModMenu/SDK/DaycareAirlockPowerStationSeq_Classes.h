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
	 * BlueprintGeneratedClass DaycareAirlockPowerStationSeq.DaycareAirlockPowerStationSeq_C
	 * Size -> 0x0104 (FullSize[0x032C] - InheritedSize[0x0228])
	 */
	class ADaycareAirlockPowerStationSeq_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URestoreFreddyMovementComponent_C*                   RestoreFreddyMovementComponent;                          // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 VannyDestination;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 FreddyDestination;                                       // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     VannySpawn;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionComponent*                             UpdateEscapeDaycareMission;                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateHandler_C*                              FlashlightMissionStateHandler;                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateHandler_C*                              EscapeDaycareMissionStateHandler;                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerTrigger;                                           // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DoorToLock[0x28];                                        // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PowerStation[0x28];                                      // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorToLockRemainLocked[0x28];                            // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ForceMoonmanKill;                                        // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OriginalTimeAdvance;                                     // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SequenceIsDone;                                          // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FQ5R[0x2];                                   // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TwoPlans;                                                // 0x0324(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMoveFinished_ADAEA3AA43CD098548720D871D890F3E(EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_ADAEA3AA43CD098548720D871D890F3E();
		void OnMoveFinished_0C354B3F46DED28124A80F9E337E4B7E(EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_0C354B3F46DED28124A80F9E337E4B7E();
		void OnFailure_451CE232403880FFA81F49AA267FA4CB();
		void OnSuccess_451CE232403880FFA81F49AA267FA4CB();
		void OnFailure_CDE8D49B43B4D845B1FD3CA083581638(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_CDE8D49B43B4D845B1FD3CA083581638(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveBeginPlay();
		void StartPowerStationEvent(class APowerStation_Actor_C* PowerStation, class APowerStationPlayerInteractible_C* PowerStationInteract);
		void OnDebugSkip(TArray<class FName>* SkippedTasks);
		void DialogSkipTo();
		void ExecuteUbergraph_DaycareAirlockPowerStationSeq(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
