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
	 * BlueprintGeneratedClass Freddy.Freddy_C
	 * Size -> 0x020E (FullSize[0x0920] - InheritedSize[0x0712])
	 */
	class AFreddy_C : public AFirstPersonCharacter_C
	{
	public:
		unsigned char                                              UnknownData_Y1HV[0x6];                                   // 0x0712(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0718(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       HeadShotDetector;                                        // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     JumpscareLocation;                                       // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm1;                                              // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCharacterHourlyMaterialComponent_C*                 CharacterHourlyMaterialComponent;                        // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SightCone;                                               // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RIG_Glamrock_Freddy_FirstPerson;                         // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateHandlerComponent*                         CannotEnterFreddyInstruction;                            // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     EnterExitArrow;                                          // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDebugVisComponent_C*                                DebugVisComponent;                                       // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceComponent*                              VisualSource;                                            // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 EyesLight;                                               // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ULevelStreamViewpoint*                               LevelStreamViewpoint;                                    // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavigationInvokerComponent*                         NavigationInvoker;                                       // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   EnterTrigger;                                            // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_Pitch_4982063C48B0BDB7171874A857DF95EB;     // 0x0790(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_Roll_4982063C48B0BDB7171874A857DF95EB;      // 0x0794(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_TranslateY_4982063C48B0BDB7171874A857DF95EB; // 0x0798(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_Headbob_ZTranslate_4982063C48B0BDB7171874A857DF95EB; // 0x079C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0_0__Direction_4982063C48B0BDB7171874A857DF95EB; // 0x07A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DIZE[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_0_1;                                            // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGregory_C*                                          GregoryPawn;                                             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFreddyAIController_C*                               FreddyAIController;                                      // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFreddyOverlay_C*                                    FreddyOverlayWidget;                                     // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadBobScale;                                            // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalTime;                                               // 0x07CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FootsetVolumeFalloffCurve;                               // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAtGregMaxRange;                                       // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraCurrentOffsetZ;                                    // 0x07DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       footstep_sound;                                          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ExitedSuit;                                              // 0x07E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EnteredSuit;                                             // 0x07F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       MenuOpen;                                                // 0x0808(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I9UL[0x3];                                   // 0x0809(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            AIRotationRate;                                          // 0x080C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PlayerRotationRate;                                      // 0x0818(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       KeepVisualsOnUnposses;                                   // 0x0824(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GregoryEntering;                                         // 0x0825(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanEjectMedScan;                                         // 0x0826(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JSCL[0x1];                                   // 0x0827(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      MedScanSequenceVar;                                      // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceLookAtEnabled;                                      // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GregoryExiting;                                          // 0x0831(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_015L[0x6];                                   // 0x0832(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMasterUI_C*                                         FazwatchUI;                                              // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGreg_FirstPerson_ABP_C*                             GregFirstPersonABP;                                      // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VOPlaying;                                               // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IS59[0x7];                                   // 0x0849(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OcclusionTrace[0x28];                                    // 0x0849(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       EnteringSound;                                           // 0x0878(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G9Y5[0x7];                                   // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       SmashAnimAsset;                                          // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPossessed;                                             // 0x0888(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NoPlaceForFreddy;                                        // 0x0889(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2BD[0x2];                                   // 0x088A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GregoryEjectLocation;                                    // 0x088C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            FreddyEjectRotation;                                     // 0x0898(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36RP[0x4];                                   // 0x08A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ChicaVoiceListener[0x10];                                // 0x08A4(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      RoxyEyesRadius;                                          // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SPAN[0x4];                                   // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PostProcessVolumeRef[0x28];                              // 0x08BC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ChicaVoiceCooldownOn_;                                   // 0x08E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8H4E[0x3];                                   // 0x08E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChicaVoiceCooldownTime;                                  // 0x08EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BypassEjectAnim;                                         // 0x08F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Can_Eject;                                               // 0x08F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KD6I[0x6];                                   // 0x08F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpscareCamShake;                                       // 0x0900(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q8X4[0x4];                                   // 0x0904(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkAudioEvent*>                               StunVO;                                                  // 0x0908(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class AEquippable_C*                                       GregoryEquipmentOnEnter;                                 // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanBeStunned();
		void IsStunned(bool* IsStunned);
		bool IsSwitchingItems();
		void IsInAir(bool* InAir);
		void PlayerEnteringExitingFreddy(bool* Value);
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetHUDInstruction(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetInstructionOverride(class FText* Instruction);
		void UpdateUIOnTick(bool* Output);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void Enable_Switch_Item(class AMainGamePC_C* Controller, bool enable);
		void CheckForBlockingVolumes(class AActor* PlayerPawn, bool* IsBlocked);
		void GetLevelStreamViewpoint(class ULevelStreamViewpoint** LevelStreamViewpoint);
		void CloseFreddyFazwatch();
		void Set_Freddy_Light_Enable(bool enable);
		void SetForceChestOpen(bool ForceOpen);
		void SetAnimationSettings(bool bOrientRotationToMovement, float MaxWalkSpeed, const struct FRotator& RotationRateMax, const struct FRotator& RotationRateMin);
		void Push_Freddy_Away_from_Gregory();
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
		void ForceKill(bool Animate_);
		void GameStart();
		void GameEnd();
		void GameExit();
		void PlayerHit(const struct FHitResult& Hit);
		void Unstun();
		void VisualChangeItem();
		void OnPlayerInteractCancel();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ReceivePossessed(class AController* NewController);
		void ReceiveUnpossessed(class AController* OldController);
		void Attempt_Interact(const struct FKey& Key);
		void On_Interact_Release();
		void Eject_Gregory(bool BypassAnim);
		void PlayFootstepSound();
		void OnDebugVis(bool enable);
		void Hide_Gregory(class AGregory_C* Gregory, class APlayerController* PlayerController, bool UseAnim, bool PlaySound);
		void Handle_No_Interactable(const struct FKey& Key);
		void FreddyBroken();
		void CloseFazwatch_Esc();
		void SmashAnim();
		void EQS_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, AIModule_EEnvQueryStatus QueryStatus);
		void Stop_Freddy_Exit_Rotation();
		void Use_Chica_Beak();
		void ResetChicaBeakTimer();
		void Jumpscare();
		void Stun();
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void On_Med_Scan_Finished();
		void ExecuteUbergraph_Freddy(int32_t EntryPoint);
		void EnteredSuit__DelegateSignature();
		void ExitedSuit__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
