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
	 * BlueprintGeneratedClass Freddy.Freddy_C
	 * Size -> 0x0221 (FullSize[0x093D] - InheritedSize[0x071C])
	 */
	class AFreddy_C : public AFirstPersonCharacter_C
	{
	public:
		unsigned char                                              UnknownData_2NCL[0x4];                                   // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       HeadShotDetector;                                        // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     JumpscareLocation;                                       // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm1;                                              // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCharacterHourlyMaterialComponent_C*                 CharacterHourlyMaterialComponent;                        // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SightCone;                                               // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RIG_Glamrock_Freddy_FirstPerson;                         // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         CannotEnterFreddyInstruction;                            // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     EnterExitArrow;                                          // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDebugVisComponent_C*                                DebugVisComponent;                                       // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceComponent*                              VisualSource;                                            // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 EyesLight;                                               // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULevelStreamViewpoint*                               LevelStreamViewpoint;                                    // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavigationInvokerComponent*                         NavigationInvoker;                                       // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   EnterTrigger;                                            // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_Pitch_4982063C48B0BDB7171874A857DF95EB;     // 0x0798(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_Roll_4982063C48B0BDB7171874A857DF95EB;      // 0x079C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_TranslateY_4982063C48B0BDB7171874A857DF95EB; // 0x07A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_Headbob_ZTranslate_4982063C48B0BDB7171874A857DF95EB; // 0x07A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0_0__Direction_4982063C48B0BDB7171874A857DF95EB; // 0x07A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EJ58[0x7];                                   // 0x07A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_0_1;                                            // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGregory_C*                                          GregoryPawn;                                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFreddyAIController_C*                               FreddyAIController;                                      // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFreddyOverlay_C*                                    FreddyOverlayWidget;                                     // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBobScale;                                            // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTime;                                               // 0x07D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FootsetVolumeFalloffCurve;                               // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAtGregMaxRange;                                       // 0x07E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraCurrentOffsetZ;                                    // 0x07E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       footstep_sound;                                          // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ExitedSuit;                                              // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EnteredSuit;                                             // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       MenuOpen;                                                // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6YG[0x3];                                   // 0x0811(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AIRotationRate;                                          // 0x0814(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PlayerRotationRate;                                      // 0x0820(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       KeepVisualsOnUnposses;                                   // 0x082C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GregoryEntering;                                         // 0x082D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanEjectMedScan;                                         // 0x082E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_060E[0x1];                                   // 0x082F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      MedScanSequenceVar;                                      // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceLookAtEnabled;                                      // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GregoryExiting;                                          // 0x0839(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DAFW[0x6];                                   // 0x083A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMasterUI_C*                                         FazwatchUI;                                              // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGreg_FirstPerson_ABP_C*                             GregFirstPersonABP;                                      // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VOPlaying;                                               // 0x0850(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ZCX[0x7];                                   // 0x0851(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OcclusionTrace[0x28];                                    // 0x0858(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       EnteringSound;                                           // 0x0880(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0L7K[0x7];                                   // 0x0881(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       SmashAnimAsset;                                          // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPossessed;                                             // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NoPlaceForFreddy;                                        // 0x0891(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6A1W[0x2];                                   // 0x0892(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GregoryEjectLocation;                                    // 0x0894(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            FreddyEjectRotation;                                     // 0x08A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DXBZ[0x4];                                   // 0x08AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ChicaVoiceListener[0x10];                                // 0x08B0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      RoxyEyesRadius;                                          // 0x08C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ENCO[0x4];                                   // 0x08C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PostProcessVolumeRef[0x28];                              // 0x08C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ChicaVoiceCooldownOn;                                    // 0x08F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_32JB[0x3];                                   // 0x08F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChicaVoiceCooldownTime;                                  // 0x08F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BypassEjectAnim;                                         // 0x08F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanEject;                                                // 0x08F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SWPG[0x6];                                   // 0x08FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpscareCamShake;                                       // 0x0908(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UBQJ[0x4];                                   // 0x090C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkAudioEvent*>                               StunVO;                                                  // 0x0910(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AEquippable_C*                                       GregoryEquipmentOnEnter;                                 // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              PreviousMoveMode;                                        // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CYCR[0x3];                                   // 0x0929(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreddyFacePitch;                                         // 0x092C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PreviousCanCallFreddy;                                   // 0x0930(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_97DW[0x3];                                   // 0x0931(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreddyRotX;                                              // 0x0934(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreddyRotZ;                                              // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCurrentlyStunned;                                      // 0x093C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool CanBeStunned();
		void IsStunned(bool* IsStunned);
		void IsPlayerCurrentlyMoving(bool* IsPlayerMoving);
		void GetFlashlightActor(class AActor** FlashlightActor);
		void IsPlayerUsingFazwatch(bool* IsUsingFazwatch);
		void LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo);
		void IsPlayerFlashlightActive(bool* IsActive);
		bool IsSwitchingItems();
		void IsInAir(bool* InAir);
		void PlayerEnteringExitingFreddy(bool* Value);
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void UpdateUIOnTick(bool* Output);
		void CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason);
		void GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType);
		class ULevelStreamViewpoint* GetLevelStreamViewpoint();
		void EnableSwitchItem(class AMainGamePC_C* Controller, bool enable);
		void CheckForBlockingVolumes(class AActor* PlayerPawn, bool* IsBlocked);
		void CloseFreddyFazwatch();
		void SetFreddyLightEnable(bool enable);
		void SetForceChestOpen(bool ForceOpen);
		void SetAnimationSettings(bool bOrientRotationToMovement, float MaxWalkSpeed, const struct FRotator& RotationRateMax, const struct FRotator& RotationRateMin);
		void PushFreddyAwayfromGregory();
		void LookAtGregory();
		bool CanJumpInternal();
		void Timeline_0_0__FinishedFunc();
		void Timeline_0_0__UpdateFunc();
		void Timeline_0_0__FootstepTrigger__EventFunc();
		void OnNotifyEnd_6D69D7084A234DF6107D8FB1519D5613(const class FName& NotifyName);
		void OnNotifyBegin_6D69D7084A234DF6107D8FB1519D5613(const class FName& NotifyName);
		void OnInterrupted_6D69D7084A234DF6107D8FB1519D5613(const class FName& NotifyName);
		void OnBlendOut_6D69D7084A234DF6107D8FB1519D5613(const class FName& NotifyName);
		void OnCompleted_6D69D7084A234DF6107D8FB1519D5613(const class FName& NotifyName);
		void OnNotifyEnd_61E4237F499C97F015561A8B21782BE8(const class FName& NotifyName);
		void OnNotifyBegin_61E4237F499C97F015561A8B21782BE8(const class FName& NotifyName);
		void OnInterrupted_61E4237F499C97F015561A8B21782BE8(const class FName& NotifyName);
		void OnBlendOut_61E4237F499C97F015561A8B21782BE8(const class FName& NotifyName);
		void OnCompleted_61E4237F499C97F015561A8B21782BE8(const class FName& NotifyName);
		void UpdateCustomProgressMeter(const class FText& TextOnLeft, const class FText& TextOnRight);
		void ClearHoldMeter();
		void BeginCinimaticSkipFade(float DelayDuration);
		void ShowCinimaticSkip();
		void ForceKill(bool Animate);
		void GameStart();
		void GameEnd();
		void GameExit();
		void PlayerHit(const struct FHitResult& Hit);
		void Unstun();
		void VisualChangeItem();
		void DisableJumpLandAudio(bool Disable);
		void LowerArms();
		void RaiseArms();
		void ForceFlashlightState(bool On, bool AllowPlayerToggle);
		void ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle);
		void NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare);
		void LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare);
		void DLCRabbitDisplayAlertText(bool Display);
		void OnPlayerInteractCancel();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ReceivePossessed(class AController* NewController);
		void ReceiveUnpossessed(class AController* OldController);
		void AttemptInteract(const struct FKey& Key);
		void OnInteractRelease();
		void EjectGregory(bool BypassAnim);
		void PlayFootstepSound();
		void OnDebugVis(bool enable);
		void HideGregory(class AGregory_C* Gregory, class APlayerController* PlayerController, bool UseAnim, bool PlaySound);
		void HandleNoInteractable(const struct FKey& Key);
		void FreddyBroken();
		void CloseFazwatch_Esc();
		void SmashAnim();
		void EQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void StopFreddyExitRotation();
		void UseChicaBeak();
		void ResetChicaBeakTimer();
		void Jumpscare();
		void Stun();
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void HideHUD(bool bHideProgressWheel);
		void ShowHUD();
		void BeginInteractHold();
		void CancelInteractHold();
		void SetInteractHoldProgress(float Percentage);
		void CompleteInteractHold();
		void UpdateIcons();
		void OnMedScanFinished();
		void ExecuteUbergraph_Freddy(int32_t EntryPoint);
		void EnteredSuit__DelegateSignature();
		void ExitedSuit__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
