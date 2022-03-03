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
	 * BlueprintGeneratedClass SecurityOffice_Daycare.SecurityOffice_Daycare_C
	 * Size -> 0x02FB (FullSize[0x065B] - InheritedSize[0x0360])
	 */
	class ASecurityOffice_Daycare_C : public ASecurityOfficeManager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       DeskArea;                                                // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       DeskArea1;                                               // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPlayerInteractHoldComponent_C*                      PlayerInteractHoldComponent;                             // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 SunmanDropLocation;                                      // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         WorldStateHandler;                                       // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         DaycareEndState;                                         // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         SunmanSpawnedHandler;                                    // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInventoryConditionalComponent*                      InventoryConditional;                                    // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Wander_Point_5;                                          // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Wander_Point_4;                                          // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Wander_Point_3;                                          // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Wander_Point_2;                                          // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Wander_Point_1;                                          // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Wander_Points;                                           // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Pace_Point_2;                                            // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Pace_Point_1;                                            // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pace_Points;                                             // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Moonman_Exit;                                            // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Moonman_Spawn;                                           // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Sunman_Spawn;                                            // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     End_Points;                                              // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UItemCollectListenerComponent*                       FlashlightCollectListener;                               // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerBlocker_2;                                         // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerBlocker_1;                                         // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TEMP_Text;                                               // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAlwaysFaceCameraComponent_C*                        AlwaysFaceCameraComponent;                               // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FlashlightRechargeStation[0x28];                         // 0x0450(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ASunman_C*                                           Moonman;                                                 // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Player_Sequence_Trigger[0x28];                           // 0x0480(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                PhaseBB;                                                 // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Sequence[0x28];                                          // 0x04B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                SplineManagerBB;                                         // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Spline_Pathway_Manager[0x28];                            // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                Movement_Speed_BB;                                       // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASunmanPhase1Trigger_C*                              Sunman_Phase_1_Trigger;                                  // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MultiInputActivator[0x28];                               // 0x0518(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                PlayerBB;                                                // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InsidePlayPen;                                           // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8NX7[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Generator_Count;                                         // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SlideIntoFunMissionName;                                 // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LetThereBeLightMissionName;                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CineCamera[0x28];                                        // 0x0560(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AActor*                                              PlayerCam;                                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendInTime;                                             // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendOutTime;                                            // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InsideDeskArea;                                          // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZD2W[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InvestigationLocationBB;                                 // 0x059C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NoiseMakingTowerBB;                                      // 0x05A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                InvestigationRoomBB;                                     // 0x05AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GregoryVOPlayed;                                         // 0x05B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85ZL[0x3];                                   // 0x05B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LineSkipper[0x28];                                       // 0x05B5(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       skiplines;                                               // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WIN2[0xF];                                   // 0x05E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SplineSpawnLocation;                                     // 0x05F0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VOTriggered;                                             // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VOPlaying;                                               // 0x0621(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q0C1[0x6];                                   // 0x0622(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TensionSystem[0x28];                                     // 0x0622(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ABasicButton_C*                                      Button;                                                  // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartupSetup;                                            // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanSkipSequence;                                         // 0x0659(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SequenceActive;                                          // 0x065A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetInstructionOverride(class FText* Instruction);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void UpdateUIOnTick(bool* Output);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void IsInPhase(const class FString& Phase, bool* Is_In_Phase);
		void GetFirstOverlappingLight(bool* Found, class ABP_GeneratorIndicator_C** Light);
		void CheckGeneratorStage(bool* Stage_2);
		void GetClosestActiveNoiseMaker(bool* Found, class ABP_NoiseMakingTowerDaycareInteractible_C** Noise_Maker);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void SetDeskBlockers(Engine_ECollisionEnabled NewType);
		//void Moonman(bool Sunman, class UBehaviorTree* Behavior_Tree, const struct FVector& Location, const struct FRotator& Roation);
		void On_Office_Game_Activated();
		void On_Scenario_Changed();
		void Spawn_Sunman();
		void Spawn_Moonman_Phase_1();
		void Spawn_Moonman_Phase_2(const struct FVector& Location, const struct FRotator& Rotation);
		void ReceiveBeginPlay();
		void Spawn_Moonman_Phase_2_Spline_Follower(const struct FVector& Location, const struct FRotator& Rotation);
		void Generator_Activated(int32_t Count, class AActor* Activator);
		void BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void Player_Leaving_Desk_Area_no_flashlight(class AActor* OtherActor);
		void BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature();
		void BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void EnterPhase1Chase();
		void EnterPhase5PlayerInLight(const struct FVector& InvestigationLocation);
		void EnterPhase4End();
		void EnterPhase3DeskPace();
		void EnterPhase2Noisemaker(class ABP_NoiseMakingTowerDaycareInteractible_C* NoiseMaker);
		void EnterPhase1Wait();
		void EnterPhase1Carry();
		void EnterPhase1Dance();
		void ExitPhase5PlayerInLight();
		void ExitPhase3DeskPace();
		void On_Doors_Opened();
		void BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void SequenceOnStop();
		void SetMazeState(bool InsideMaze, const struct FVector& Location, const struct FRotator& Rotation);
		void Phase3Maze();
		void EnterSplinePathToExit();
		void EnterPhase2PathToEntrance();
		void CompleteFlashlightTask();
		void EnterMazeTransition();
		void Sunman_setup();
		void DaycareEndCleanup();
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void OnPlayerInteractCancel();
		void BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature();
		void ExecuteUbergraph_SecurityOffice_Daycare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
