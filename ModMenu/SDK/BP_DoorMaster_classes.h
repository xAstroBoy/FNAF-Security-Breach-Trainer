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
	 * BlueprintGeneratedClass BP_DoorMaster.BP_DoorMaster_C
	 * Size -> 0x0154 (FullSize[0x03BD] - InheritedSize[0x0269])
	 */
	class ABP_DoorMaster_C : public AActivatableBase_C
	{
	public:
		unsigned char                                              UnknownData_C2DV[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     Decal1;                                                  // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     Decal;                                                   // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDoorComponent*                                      Door;                                                    // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerCollision_SecurityDouble;                          // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerCollision_Double;                                  // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerCollision_LaserTag;                                // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerCollision_Single;                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Rotator2;                                                // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Rotator1;                                                // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SecurityDoorRotator2;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SecurityDoorRotator1;                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Star_Plaque;                                         // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Mesh;                                                    // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorMesh_3;                                              // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorMesh_2;                                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DoorMesh_1;                                              // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Door_Collision;                                          // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Open_Door__Close_Door_Move_Door_EC8CD7C648A27AEAA7307CB9A6CE4381; // 0x0300(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Open_Door__Close_Door__Direction_EC8CD7C648A27AEAA7307CB9A6CE4381; // 0x0304(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A63M[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  _Close_Door;                                             // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		MasterDoorType_EMasterDoorType                             DoorType;                                                // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PALQ[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedMULT;                                               // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      CharactersInDoor;                                        // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFailedSecurityCheck;                                   // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		MasterDoorSide_EMasterDoorSide                             DoorBlockedDirection;                                    // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MT9X[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDoorLockStateChanged;                                  // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        EmmisiveColor;                                           // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DoorColor;                                               // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DoorMat;                                                 // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StarOff_;                                                // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2IGZ[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            StarMat;                                                 // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Character_Select;                                        // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HCBZ[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Door_Open;                                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       Door_Closed;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorOpen_;                                               // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InvertDirection;                                         // 0x03A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Is_Player;                                               // 0x03A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y1V0[0x2];                                   // 0x03A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Loudness;                                                // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5PP7[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  GreenRoomMaterial;                                       // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoorNeeds;                                               // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IgnoreLineTraceInteract;                                 // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DoorCanPlayErrorSound;                                   // 0x03BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowLockDecalWhenLocked;                                 // 0x03BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseDoorTypeForAudio;                                     // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void UpdateUIOnTick(bool* Output);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		bool HasDoorInitialized();
		bool IsDoorLockedForPlayer();
		bool IsDoorOpen();
		bool IsDoorLockedForAI();
		void SetPawnDetectEnable(bool Enabled);
		void SetupMaterial(class UMaterialInterface* DefaultMaterial);
		void LogCharactersInDoor(const class FString& Prefix);
		void ClearPlayerBlocker();
		void SetupPlayerBlocker();
		void SetupDoor();
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void UserConstructionScript();
		void _Close_Door__FinishedFunc();
		void _Close_Door__UpdateFunc();
		void ReceiveBeginPlay();
		void On_Deactivate();
		void Set_State(ActivatableState_EActivatableState NewState);
		void Set_Door_Timeline_Time(float NewTime);
		void Close(bool Close);
		void ForceDoorOpen();
		void ForceDoorClose();
		void OnActivatorDone(class AActor* Activator);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void UpdateSecurityDisplay();
		void SetDoorLockPlayer(bool Lock);
		void SetDoorLockAI(bool Lock);
		void BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer);
		void BndEvt__Door_K2Node_ComponentBoundEvent_3_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer);
		void BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void SetDoorRequiredItem(const class FName& ItemName);
		void Setup_Survival_Door();
		void BndEvt__Door_K2Node_ComponentBoundEvent_4_OnInitialOpen__DelegateSignature();
		void SwitchColorForScenario();
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void SetActivated();
		void On_Activate();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void SetSecurityLevel(int32_t NewSecurityLevel);
		void OnPlayerInteractCancel();
		void ExecuteUbergraph_BP_DoorMaster(int32_t EntryPoint);
		void OnDoorLockStateChanged__DelegateSignature(class ABP_DoorMaster_C* Door, bool Locked);
		void OnFailedSecurityCheck__DelegateSignature(class ABP_DoorMaster_C* Door);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
