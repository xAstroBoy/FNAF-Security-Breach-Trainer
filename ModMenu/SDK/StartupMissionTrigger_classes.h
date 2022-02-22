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
	 * BlueprintGeneratedClass StartupMissionTrigger.StartupMissionTrigger_C
	 * Size -> 0x03C8 (FullSize[0x05F0] - InheritedSize[0x0228])
	 */
	class AStartupMissionTrigger_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWorldStateHandlerComponent*                         FreddyWayToGoDoneState;                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         FreddyDoorJustOpenedState;                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         FreddyPositionerWorldState;                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         AtriumGateState1;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         MaintDoorSaveState;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URotationThreshold_C*                                RotationThreshold;                                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     FreddyLookDirection;                                     // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URotationThresholdGeneral_C*                         UpRotationThreshold;                                     // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URotationThresholdGeneral_C*                         DownRotationThreshold;                                   // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URotationThresholdGeneral_C*                         RightRotationThreshold;                                  // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URotationThresholdGeneral_C*                         LeftRotationThreshold;                                   // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       GreenroomVolume;                                         // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       LookOutWindowTrigger;                                    // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       VanessaRemoveBox;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USetupSplineMovement_C*                              SetupSplineMovement;                                     // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PHS1[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GregorySpawnTransform;                                   // 0x02C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                MissionToComplete;                                       // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NextMissionToStart;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VanessaSpawnLocation[0x28];                              // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                ExitFreddyInstruction;                                   // 0x0328(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LookAroundInstruction;                                   // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LookAtWindowInstruction;                                 // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TakeFazwatchInstruction;                                 // 0x0370(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OpenFazwatchInstruction;                                 // 0x0388(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              FreddyDoor[0x28];                                        // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BackDoorButton[0x28];                                    // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CanLookOutWindow;                                        // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       skip_all;                                                // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36QW[0x2];                                   // 0x03F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MissionToStart;                                          // 0x03F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlayDoorLockedSequence;                               // 0x03FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_06TB[0x3];                                   // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APre_Speaker_C*                                      Speaker;                                                 // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AFirstPersonCharacter_C*>                     Characters;                                              // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              ExitDoor[0x28];                                          // 0x0418(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       play_wrong_door;                                         // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugSkip;                                               // 0x0441(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WrongDoorPlaying;                                        // 0x0442(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P8H7[0x5];                                   // 0x0443(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LineSkipper[0x28];                                       // 0x0443(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MedScanSequence[0x28];                                   // 0x0470(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTemplateSequenceBindingOverrideData                NewVar_1;                                                // 0x0498(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_92LH[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMainGamePC_C*                                       PlayerController;                                        // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FreddyLocation[0x28];                                    // 0x04B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class FName>                                        MissionsWithoutFreddy;                                   // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                LookRightInstruction;                                    // 0x04E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LookLeftInstruction;                                     // 0x0500(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LookDownInstruction;                                     // 0x0518(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LookUpInstruction;                                       // 0x0530(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              MaintanenceDoor[0x28];                                   // 0x0548(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FreddyPowerProximityActor[0x28];                         // 0x0570(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       PausedMixState;                                          // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TZB0[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PlanarReflection[0x28];                                  // 0x0599(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Freddy[0x28];                                            // 0x05C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void CanDeactivate(bool* CanDeactivate);
		void GetActivatableState(class AActor* Activator, ActivatableState_EActivatableState* CurrentState);
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void Check_Destroy_Intro(bool* Destroyed);
		void SetReflection(bool UseCapture);
		void OnActivatorDone(class AActor* Activator);
		void SetActivated();
		void DeactivateObject(class AActor* Deactivator);
		void SetDeactivated();
		void ActivateObject(class AActor* Activator);
		void On_Possess(class APawn* PossessedPawn);
		void Start_New_Game_Mission();
		void ReceiveBeginPlay();
		void BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void On_Fazwatch_Collected();
		void Back_Door_Open();
		void On_Side_Door_Entered(class UDoorComponent* DoorComponent, class APawn* Pawn, bool bPassedDoorCheck, fnaf9_EConditionFailReason FailReason);
		void Enable_Door_Trigger();
		void Wrong_Door(class AActor* OverlappedActor, class AActor* OtherActor);
		void Vanessa_Spawn();
		void On_Debug_Skipped(TArray<class FName> SkippedTasks);
		void GregoryScared();
		void Return_Rotation();
		void BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature();
		void BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature();
		void BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature();
		void BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature();
		void BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature();
		void On_Freddy_Exited();
		void On_Player_Possessed_Gregory(class APawn* PossessedPawn);
		void Skip_All();
		void Continue_from_save_after_door();
		void Bind_Posses_for_Finish();
		void ExecuteUbergraph_StartupMissionTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
