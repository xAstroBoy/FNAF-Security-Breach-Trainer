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
	 * BlueprintGeneratedClass PRE_Elevator_General.PRE_Elevator_General_C
	 * Size -> 0x0280 (FullSize[0x04A8] - InheritedSize[0x0228])
	 */
	class APRE_Elevator_General_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Freddy_Spawn;                                            // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Play_mus_FreddysFanfare_80sSynth_elevator;               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak;                                                      // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDoorComponent*                                      Door;                                                    // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       InsideOverlap;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene_PawnInsideOverlaps;                                // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                A_Elevator_StreamViewpoint_B;                            // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                A_Elevator_StreamViewpoint_A;                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene_WakeupOverlaps;                                    // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_ArrowIndicator_B;                                     // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_ArrowIndicator_A;                                     // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene_ArrowIndicators;                                   // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene_Audio;                                             // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Door_B_Outer;                                            // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Door_B_Inner;                                            // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene_Door_B;                                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Door_A_Outer;                                            // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Door_A_Inner;                                            // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene_Door_A;                                            // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Button_B;                                                // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Button_A;                                                // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       P_Setup;                                                 // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       P_IsTeleport;                                            // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RFP9[0x6];                                   // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AButtonBase_C*>                               P_Buttons;                                               // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		struct FS_Elevator_Doors                                   P_Doors;                                                 // 0x0300(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ABP_ArrowIndicator_C*>                        P_ArrowIndicators;                                       // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Debug;                                                   // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FE4W[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_Elevator_Levels                                  LevelsUpper;                                             // 0x0338(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash
		class APRE_Elevator_General_C*                             P_TeleportDestination;                                   // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Elevator_Side_E_Elevator_Side                            P_EnteredSide;                                           // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Elevator_Side_E_Elevator_Side                            P_TargetSide;                                            // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Elevator_MovementMode_E_Elevator_MovementMode            P_MovementMode;                                          // 0x0362(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XH1Y[0x1];                                   // 0x0363(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      P_MovementMagnitude;                                     // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       P_HadCameraLag;                                          // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_33EH[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Shake_MovementChange;                                    // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      P_StartSeconds;                                          // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NX37[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_Elevator_Levels                                  LevelsLower;                                             // 0x0380(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash
		float                                                      P_NextShake;                                             // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      P_LastShakeDelay;                                        // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Shake_Movement;                                          // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Shake_MovementScale;                                     // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorLockDuration;                                        // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TeleportDestination[0x28];                               // 0x03B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ShouldBlockOnSwap;                                       // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_YXRZ[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      P_DeltaSeconds;                                          // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    P_Index;                                                 // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAccelerateScale;                                 // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      MovementDecelerateScale;                                 // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		E_Elevator_Side_E_Elevator_Side                            TargetA;                                                 // 0x03F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5IOI[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWakeupOverlapEntered;                                  // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnWakeupOverlapLeave;                                    // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              PawnsInElevator[0x50];                                   // 0x0418(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       ChangeLighting;                                          // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J1QP[0x3];                                   // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightingLocationA;                                       // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightingLocationB;                                       // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ELDS[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonPressed;                                         // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       PlayElevatorMusic;                                       // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       FreddyShouldAppearBehindDoorOnTeleportFail;              // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7PM[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       StopEvent;                                               // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       RunLoopEvent;                                            // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StopLoopEvent;                                           // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool HasDoorInitialized();
		bool IsDoorLockedForAI();
		bool IsDoorLockedForPlayer();
		bool IsDoorOpen();
		void TeleportFreddy();
		void UpdateCanUseState();
		void CloseOrOpenDoors(E_Elevator_Side_E_Elevator_Side Side, bool Open);
		void PrintDebugVariable(const class FString& Description, const class FString& Variable, E_Elevator_Side_E_Elevator_Side Side, bool Remote, bool ShowSide, bool ShowRemote);
		void GetTarget_StreamViewpoint(E_Elevator_Side_E_Elevator_Side Side, bool Remote, class AA_Elevator_StreamViewpoint_C** StreamViewpoint);
		void GetTarget_Levels(E_Elevator_Side_E_Elevator_Side Side, bool Remote, struct FS_Elevator_Levels* Levels);
		void GetTarget_ArrowIndicators(bool Remote, TArray<class ABP_ArrowIndicator_C*>* ArrowIndicators);
		void GetTarget_Doors(E_Elevator_Side_E_Elevator_Side Side, bool Remote, TArray<class APRE_ElevatorDoor_Master_C*>* Doors);
		void GetTarget_Buttons(bool Remote, TArray<class AButtonBase_C*>* Buttons);
		void PrintDebug(const class FString& inString, E_Elevator_Side_E_Elevator_Side Side, bool ShowSide);
		void SetStreamViewpoint(E_Elevator_Side_E_Elevator_Side Side, bool Remote, bool bEnable);
		void GetArrowIndicators(TArray<class ABP_ArrowIndicator_C*>* Array);
		void GetDoors(struct FS_Elevator_Doors* Doors);
		void GetButtons(TArray<class AButtonBase_C*>* Array);
		void SetArrowIndicators(bool Remote, E_Elevator_ArrowIndicator_Type_E_Elevator_ArrowIndicator_Type Type);
		void TeleportPlayer();
		void ToggleLockButtons(bool Remote, bool Lock);
		void ToggleLockDoors(E_Elevator_Side_E_Elevator_Side Side, bool Remote, bool Lock, bool Force);
		void ToggleLockDoor(class UObject* Door, bool Lock, bool Force);
		void TickShake();
		void Setup();
		void UpdateVariables();
		void ReceiveBeginPlay();
		void SetSecurityLevel(int32_t NewSecurityLevel);
		void SetDoorRequiredItem(const class FName& ItemName);
		void SetDoorLockAI(bool Lock);
		void ForceDoorOpen();
		void WakeupOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void SetLocked(E_Elevator_Side_E_Elevator_Side Side, bool Remote, bool Lock);
		void SetLockedAll(bool Remote, bool Lock);
		void ForceDoorClose();
		void ToggleMovement(bool bEnabled);
		void WakeupOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnPawnEntered(E_Elevator_Side_E_Elevator_Side Side, class APawn* Pawn);
		void OnButtonInteract();
		void OnPawnExited(E_Elevator_Side_E_Elevator_Side Side, class APawn* Pawn);
		void ElevatorSequenceEnd();
		void SwapLevels();
		void OnMovementReachedTargetValue(E_Elevator_MovementMode_E_Elevator_MovementMode Selection);
		void OnLevelsSwapped();
		void OverlapWake(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OverlapSleep(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ElevatorSequenceBegin();
		void ReceiveTick(float DeltaSeconds);
		void OnPawnEnteredDoorA(class UDoorComponent* DoorComponent, class APawn* Pawn, bool bPassedDoorCheck, fnaf9_EConditionFailReason FailReason);
		void OnPawnExitedDoorA(class UDoorComponent* DoorComponent, class APawn* Pawn);
		void BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__InsideOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnPawnExitedDoorB(class UDoorComponent* DoorComponent, class APawn* Pawn);
		void OnPawnEnteredDoorB(class UDoorComponent* DoorComponent, class APawn* Pawn, bool bPassedDoorCheck, fnaf9_EConditionFailReason FailReason);
		void SetDoorLockPlayer(bool Lock);
		void OnLevelsLoaded_Event_1();
		void PlayMusic();
		void StopMusic();
		void On_Fail_To_Teleport_Freddy();
		void ExecuteUbergraph_PRE_Elevator_General(int32_t EntryPoint);
		void OnButtonPressed__DelegateSignature();
		void OnWakeupOverlapEntered__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnWakeupOverlapLeave__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
