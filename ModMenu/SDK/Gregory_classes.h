﻿#pragma once

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
	 * BlueprintGeneratedClass Gregory.Gregory_C
	 * Size -> 0x0320 (FullSize[0x0A3C] - InheritedSize[0x071C])
	 */
	class AGregory_C : public AFirstPersonCharacter_C
	{
	public:
		unsigned char                                              UnknownData_WOT5[0x4];                                   // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                FlashlightActor;                                         // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              LostAndFound;                                            // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 GregoryLight;                                            // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FlashlightRotator;                                       // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LookAt;                                                  // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Plane;                                                   // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FlashLightMesh;                                          // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                LaserGun;                                                // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                FlashBeacon;                                             // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RIG_FazWatchHand;                                        // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaminaComponent_C*                                 SprintStamina;                                           // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_GregFlashlight_00;                                   // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULevelStreamViewpoint*                               LevelStreamViewpoint;                                    // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    EjectCameraSpline;                                       // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USightComponent*                                     Sight;                                                   // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   BallpitCollider;                                         // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceComponent*                              VisualSource;                                            // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ThrowableInHand;                                         // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ThrowableSpawn;                                          // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasThrowable;                                            // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T1PU[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HideLocation;                                            // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanHide;                                                 // 0x07D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M50Y[0x7];                                   // 0x07D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ClosestHideLocation;                                     // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHiding;                                                // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0SJF[0x3];                                   // 0x07E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationBeforeHide;                                      // 0x07E4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CameraOriginalRelativeLocation;                          // 0x07F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLeaning;                                               // 0x07FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7Q5N[0x3];                                   // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaSeconds;                                            // 0x0800(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemActive;                                              // 0x0804(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEquippable_C*                                       EquippedItem;                                            // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPeeking;                                               // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanToggleFlashlight;                                     // 0x0811(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LGV[0x6];                                   // 0x0812(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            LightFunctionMaterial;                                   // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGettingJumpScare;                                      // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LN0U[0x3];                                   // 0x0821(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlashStunRadius;                                         // 0x0824(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftArmRotateTarget;                                     // 0x0828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftArmRotateInterpSpeed;                                // 0x082C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasFlashlight;                                           // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GZ8J[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMatineeCameraShake*                                 WalkBobRef;                                              // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBobVelocity;                                         // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_48JB[0x4];                                   // 0x0844(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        IdleHeadBobCurve;                                        // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        WalkHeadBobCurve;                                        // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        RunHeadBobCurve;                                         // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTime;                                               // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadBobTarget;                                           // 0x0864(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentHeadBob;                                          // 0x0870(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBobBlendTime;                                        // 0x087C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBobRunMult;                                          // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBobVelocityScale;                                    // 0x0884(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsJumping;                                               // 0x0888(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isEjectPawnActive;                                       // 0x0889(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SSCV[0x6];                                   // 0x088A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNonLethalScareComplete;                                // 0x0890(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       CanSwitchItem;                                           // 0x08A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9HPU[0x7];                                   // 0x08A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEquippable_C*                                       PreHideEquipment;                                        // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunningFOV;                                              // 0x08B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HidingFOV;                                               // 0x08B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StoredPriority_1;                                        // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BORK[0x4];                                   // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        CrouchHeadBobCurve;                                      // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGregoryOverlay_C*                                   GregoryOverlayWidget;                                    // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnKill;                                                  // 0x08D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FInstructionCardRow                                 InstructionRow;                                          // 0x08E0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       TakeOverPosses;                                          // 0x0940(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_33FT[0x7];                                   // 0x0941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLethalJumpScare;                                       // 0x0948(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      DefaultCrouchSpeed;                                      // 0x0958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_87EW[0x4];                                   // 0x095C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMasterUI_C*                                         WatchUI;                                                 // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGreg_FirstPerson_ABP_C*                             FirstPersonABP;                                          // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PickedUpFlashlight;                                      // 0x0970(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ExitingFreddy;                                           // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1WLO[0x3];                                   // 0x0981(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FlashlightInventoryName;                                 // 0x0984(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootStepTriggerThreshold;                                // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewVar_0_1;                                              // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootStepTriggerThreshold_Target;                         // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMoving;                                                // 0x0998(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Respawning;                                              // 0x0999(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Unpossess;                                               // 0x099A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J2TD[0x1];                                   // 0x099B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlashlightBrightness;                                    // 0x099C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AEQ_Flashlight_C*                                    RefTOFlashlightActor;                                    // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       lineplaying;                                             // 0x09A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EW8W[0x7];                                   // 0x09A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APurpleMan_Tape_Actor_C*                             CurrentTapeActor;                                        // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLookingAtHiddenDoor;                                   // 0x09B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLookingAtTape;                                         // 0x09B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VB66[0x6];                                   // 0x09BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HiddenDoorActor;                                         // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAkAudioEvent*>                               RandomVannyVO;                                           // 0x09C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FazerBlasterRechargeTime;                                // 0x09D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FazCamCooldownTime;                                      // 0x09DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RelativeFlashlightTransform;                             // 0x09E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SwitchingItems;                                          // 0x0A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7DNK[0x3];                                   // 0x0A11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      posthidedelaytime;                                       // 0x0A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UnhideTransitionActive;                                  // 0x0A18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Doingwatchanim;                                          // 0x0A19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NTE8[0x6];                                   // 0x0A1A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEquippable_C*                                       ItemSwitchingTo;                                         // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeJumpScared;                                         // 0x0A28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8D9D[0x7];                                   // 0x0A29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEquippable_C*                                       LastEquippedItem;                                        // 0x0A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GregFootStepTime;                                        // 0x0A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsPlayerCurrentlyMoving(bool* IsPlayerMoving);
		void GetFlashlightActor(class AActor** FlashlightActor);
		void IsPlayerUsingFazwatch(bool* IsUsingFazwatch);
		void LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo);
		void IsPlayerFlashlightActive(bool* IsActive);
		bool IsSwitchingItems();
		void IsInAir(bool* InAir);
		void PlayerEnteringExitingFreddy(bool* Value);
		void GetSightComponent(class USightComponent** Sight);
		void SpawnJumpscarePawn(const struct FTransform& SpawnTransform, bool CanEscape, bool IsLethal, float CamShakeScale, class AActor* ActorPerformingScare, class AJumpscarePawn_C** JumpscarePawnOut);
		class ULevelStreamViewpoint* GetLevelStreamViewpoint();
		void ForceHideBatteryLevelWidget();
		void GetCurrentInteract(class UWI_Gregory_Interact_C** WI_Gregory_Interact);
		void OnFlashlightPowerOut();
		void IsChowdaMode_1(bool* ChowdaMode);
		void ToggleRunIcon(bool Running);
		bool CanJumpInternal();
		void ForceWatchLower();
		void ToggleRedReticle();
		void UpdateVisualSource();
		void GetHideSearchLocation(struct FVector* Location, struct FRotator* Rotation);
		void SetupMovementSpeed();
		void SetupWalkSpeed();
		void SetupRunSpeed();
		void ShowInstructions(E_InstructionCard_Type Type);
		void IsFazWatchUp(bool* IsFazWatchUp);
		void LethalJumpscare(class USceneComponent* AttachComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerformingScare);
		void NonLethalJumpscare(class USceneComponent* AttachmentComponent, float CamShakeScale, class AActor* ActorPerformingScare);
		void OnItemRemoved(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		float GetRunSpeed();
		void OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void AttemptSwitchItem3();
		void SwitchItem(class AEquippable_C* NewItem);
		void AttemptSwitchItem2();
		void AttemptSwitchItem1();
		void SetInUse(bool InUse);
		void EndLazerTag();
		void StartLazerTag();
		void ShouldDoLazerTag(bool* LazerTag);
		bool IsFlashlightActive();
		void StuninRange();
		void GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection);
		void ToggleFlashlight();
		void InpActEvt_Run_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnFailure_7DE12DBC48FB7B17F57E7D93C24D4EB7();
		void OnSuccess_7DE12DBC48FB7B17F57E7D93C24D4EB7();
		void OnFailure_D277383849041D09D51CF2BB341D6125(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_D277383849041D09D51CF2BB341D6125(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_7326E6ED4D8708615D3D6F94085DAB1A();
		void OnSuccess_7326E6ED4D8708615D3D6F94085DAB1A();
		void OnFailure_DCAEB8064AAF100FF80986844E21FAAA(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_DCAEB8064AAF100FF80986844E21FAAA(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void UpdateCustomProgressMeter(const class FText& TextOnLeft, const class FText& TextOnRight);
		void ClearHoldMeter();
		void BeginCinimaticSkipFade(float DelayDuration);
		void ShowCinimaticSkip();
		void DisableJumpLandAudio(bool Disable);
		void LowerArms();
		void RaiseArms();
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void PostSaveGame();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveTick(float DeltaSeconds);
		void AttemptHide(class AActor* HideActor, const struct FVector& HideLocation, bool IsLow);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void AttemptInteract(const struct FKey& Key);
		void Kill();
		void AttemptPrimaryAction(const class FName& ItemToUse);
		void AttemptSecondaryAction(const class FName& ItemToUse);
		void AttemptThrow();
		void ReceiveBeginPlay();
		void LeaveHidingSpace();
		void ForceFlashlightState(bool On, bool AllowPlayerToggle);
		void OnInteractRelease();
		void ReceivePossessed(class AController* NewController);
		void AttemptFreddyCall();
		void GregoryHeadBob();
		void GregoryCrouch();
		void GregoryUnCrouch();
		void ForceCrouchMode(bool Crouch, bool AllowCrouchToggle);
		void StopSprinting();
		void EjectSequence();
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void BndEvt__SprintStamina_K2Node_ComponentBoundEvent_0_OnStaminaDepleted__DelegateSignature();
		void BndEvt__SprintStamina_K2Node_ComponentBoundEvent_1_OnStaminaReplenished__DelegateSignature();
		void ReceiveUnpossessed(class AController* OldController);
		void CallFreddy();
		void OnJumped();
		void OnLanded(const struct FHitResult& Hit);
		void ItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		void HeldItemInstructions(const class FName& Name);
		void EventCallFreddyInstructions();
		void ReturnToGregory();
		void TriggerSurpriseAchievement();
		void ArmRoll__FinishedFunc();
		void RollForLower(bool WatchUp);
		void RollForRaise(bool WatchUp);
		void SwitchItemWithAnim(class AEquippable_C* NewItem);
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void AwardSayCheese();
		void VisualChangeItem();
		void ShowHUD();
		void HideHUD(bool bHideProgressWheel);
		void BeginInteractHold();
		void CancelInteractHold();
		void SetInteractHoldProgress(float Percentage);
		void ForceFlashlightState(bool On, bool AllowPlayerToggle);
		void CompleteInteractHold();
		void TriggerJump();
		void NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare);
		void LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare);
		void ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle);
		void UpdateIcons();
		void ExecuteUbergraph_Gregory(int32_t EntryPoint);
		void PickedUpFlashlight__DelegateSignature();
		void OnLethalJumpScare__DelegateSignature();
		void OnKill__DelegateSignature();
		void OnNonLethalScareComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
