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
	 * BlueprintGeneratedClass SecurityOfficeManager.SecurityOfficeManager_C
	 * Size -> 0x0138 (FullSize[0x0360] - InheritedSize[0x0228])
	 */
	class ASecurityOfficeManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       EscapeBounds;                                            // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    PlayerOverlap;                                           // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DoorTest[0x28];                                          // 0x0248(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    AllowedEnemyDistance;                                    // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OR6V[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Cameras[0x10];                                           // 0x0274(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              DisplayPanels[0x10];                                     // 0x0288(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    RenderCameraIndex;                                       // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ItemAward;                                               // 0x029C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldDestroyAllAI;                                      // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverlapCanEnd;                                           // 0x02A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L276[0x2];                                   // 0x02A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BBReached;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBPlayer;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRunning;                                               // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OW1J[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OfficePower;                                             // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OfficeStartPower;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GI9U[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CurrentPowerDrainers;                                    // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPowerDrained;                                          // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      DownloadTimeRemaining;                                   // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DownloadTotalTime;                                       // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PowerMeter[0x28];                                        // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FScriptMulticastDelegate                             OnOfficeGameStarted;                                     // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOfficeGameEnded;                                       // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllCamerasReady;                                         // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N4HF[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAISeeker_C*                                         PawnAtOffice;                                            // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BadgeAward;                                              // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<fnaf9_EFNAFGameType>                                AllowedGameTypes;                                        // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void UpdateUIOnTick(bool* Output);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void TickCameras();
		void CheckAllCamerasReady();
		void GetCurrentPowerDrain(float* PowerDrain);
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void PostSaveGame();
		void OnPlayerInteractCancel();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void ReceiveTick(float DeltaSeconds);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ReceiveBeginPlay();
		void BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void On_Victory();
		void End_Office_Game();
		void On_Office_Game_Activated();
		void Already_Awarded();
		void BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void Exit_Office_Pawn_Mode();
		void Enter_Office_Pawn_Mode();
		void Add_Power_Drain(class AActor* PowerDrainer);
		void Remove_Power_Drain(class AActor* PowerDrainer);
		void Process_Power_Drain(float DrainMultiplier);
		void Drain_Power(float AmountToDrain);
		void Bind_Activatable_to_Screen(int32_t PanelIndex, class AActor* Activatable, float PowerDrain);
		void On_Camera_Levels_Loaded(class ACamera_C* Camera);
		void On_All_Cameras_Ready();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void ExecuteUbergraph_SecurityOfficeManager(int32_t EntryPoint);
		void OnOfficeGameEnded__DelegateSignature();
		void OnOfficeGameStarted__DelegateSignature();
		void OnPowerDrained__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
