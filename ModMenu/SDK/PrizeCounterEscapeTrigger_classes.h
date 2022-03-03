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
	 * BlueprintGeneratedClass PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C
	 * Size -> 0x0110 (FullSize[0x0380] - InheritedSize[0x0270])
	 */
	class APrizeCounterEscapeTrigger_C : public APlayerTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPlayerInteractHoldComponent_C*                      PlayerInteractHoldComponent;                             // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTimeCheckComponent_C*                               TimeCheckComponent;                                      // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionComponent*                             UsePrizeCounterElevatorUpdateMission;                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     TetherTransform;                                         // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     SpawnTransform;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUpdateMissionComponent*                             FindFreddyPrizeCounterUpdateMission;                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PatrolPath[0x28];                                        // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Sequence[0x28];                                          // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              End_Sequence[0x28];                                      // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CanSkipSequence;                                         // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ViewTetherStarted;                                       // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SequenceStarted;                                         // 0x0352(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LRMY[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HideSpot[0x28];                                          // 0x0353(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void UpdateUIOnTick(bool* Output);
		void GetInstructionOverride(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetHUDInstruction(class FText* Instruction);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void ReceiveBeginPlay();
		void OnTriggered();
		void On_Sequence_Done();
		void On_Debug_Skip(TArray<class FName>* SkippedTasks);
		void BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature();
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void OnPlayerInteractCancel();
		void ExecuteUbergraph_PrizeCounterEscapeTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
