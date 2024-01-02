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
	 * BlueprintGeneratedClass MainGamePC.MainGamePC_C
	 * Size -> 0x023B (FullSize[0x0860] - InheritedSize[0x0625])
	 */
	class AMainGamePC_C : public AFBPC_SharedController_C
	{
	public:
		unsigned char                                              UnknownData_IPJZ[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInventoryConditionalComponent*                      FazwatchCheck;                                           // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCinematicSequenceHandler_C*                         CinematicSequenceHandler;                                // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_ResetPitch_60C9E8C24643BA2B53C9AA931674D72B;  // 0x0640(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_60C9E8C24643BA2B53C9AA931674D72B;  // 0x0644(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G42O[0x3];                                   // 0x0645(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMasterUI_C*                                         FazWatchMenu;                                            // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentUITab;                                            // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FazwatchUp;                                              // 0x065C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9LOR[0x3];                                   // 0x065D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnRateMutliplier;                                      // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookUpRateMultiplier;                                    // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGameOverUI_C*                                       GameOverUI;                                              // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWatchUp;                                              // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECollisionEnabled                                          FlyingCollisionMode;                                     // 0x0671(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PIBS[0x6];                                   // 0x0672(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDebugOverlay_C*                                     DebugOverlay;                                            // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlyingSpeed;                                             // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_208A[0x4];                                   // 0x0684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPossessedPawnChanged;                                  // 0x0688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ForwardInput;                                            // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightInput;                                              // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerCheckpointLocation;                                // 0x06A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RFQ5[0x4];                                   // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               ReturnPawn;                                              // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanUseFazwatch;                                          // 0x06C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PTJM[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSkip;                                                  // 0x06C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    cur_item;                                                // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YNXP[0x4];                                   // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMoonManDistortionActor1_C*                          DistortionActor;                                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NextDistortionLevel;                                     // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EnabledInputFlags;                                       // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFirstPersonCharacter_C*                             FirstPersonCharacter;                                    // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MouseSensitivity;                                        // 0x06F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MPG4[0x4];                                   // 0x06FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              VOSkipper[0x28];                                         // 0x0700(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USaveGameSettings_C*                                 PlayerSettingsSaveObject;                                // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TetherViewRotation;                                      // 0x0730(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TetherOffset;                                            // 0x073C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TetherViewEnabled;                                       // 0x0748(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T0M1[0x3];                                   // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherMaxAngle;                                          // 0x074C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TetherMinAngle;                                          // 0x0750(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentGateState;                                        // 0x0754(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PlayerSettingsSlotReal;                                  // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ListenerOverrideEnabled;                                 // 0x0768(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F81K[0x7];                                   // 0x0769(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ListenerAttachTo;                                        // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasAchivementCheckBroken;                                // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3J5O[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVannyIntroCinematicPlayerUI_C*                      VannyIntroPlayer;                                        // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEndGameCinematicPlayerUI_C*                         EndPlayer;                                               // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSettingsSaved;                                         // 0x0790(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       WasFlashlightActive;                                     // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseOverriddenTetherValues;                               // 0x07A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9U4Y[0x2];                                   // 0x07A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherOverrideMaxAngle;                                  // 0x07A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TetherOverrideMinAngle;                                  // 0x07A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VZ4K[0x4];                                   // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Listener[0x50];                                          // 0x07B0(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       SaveLocationInNormalWorld;                               // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7XN8[0x3];                                   // 0x0801(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KeyboardSensitivity;                                     // 0x0804(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlaySequenceRunning;                                   // 0x0808(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8ZM6[0x3];                                   // 0x0809(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherOverrideMaxAngleYaw;                               // 0x080C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TetherOverrideMinAngleYaw;                               // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseTurnRate;                                            // 0x0814(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseLookUpRate;                                          // 0x0818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VC1B[0x4];                                   // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFNAFGameInstance_C*                                 AsFNAFGameInstance;                                      // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverrideLocation;                                     // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z7J0[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OverrideLocation;                                        // 0x0830(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsPlayerCurrentlyMoving(bool* IsPlayerMoving);
		void GetFlashlightActor(class AActor** FlashlightActor);
		void PlayerEnteringExitingFreddy(bool* Value);
		void IsInAir(bool* InAir);
		bool IsSwitchingItems();
		void IsPlayerFlashlightActive(bool* IsActive);
		void LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo);
		void IsPlayerUsingFazwatch(bool* IsUsingFazwatch);
		void GetCrouchToggle(bool* CrouchToggle);
		void GetHelpiBlurbTime(float* Time);
		void GetShowInstructionCards(bool* ShowInstructionCards);
		void GetStealthToggle(bool* ShowStealthIcon);
		void GetSprintToggles(bool* KeyboardSprintToggle, bool* GamepadSprintToggle);
		class USaveGameSettings_C* GetSaveGameSettings();
		void GetIsPlaySequenceRunning(bool* IsSequenceRunning);
		void SetListenerOverridePosition(class USceneComponent* AttachToComponent, const struct FVector& Position, const struct FRotator& Rotation, bool* Result);
		void EnableListenerOverride(bool enable, bool* Result);
		void GetListenerPosition(struct FVector* Position);
		void SetOverrideSaveLocationForNextSave(const struct FTransform& locationTransform);
		void UpdateControllerInvert();
		void GregoryCrouch(bool Release);
		void UpdateSensitivityValues();
		void CallSettingsSavedListeners();
		void EndViewTethering();
		void SaveGameCallbackForSettings();
		void SaveGameSettings();
		void UpdateLastGameHourPlayed();
		void ResetViewTetheringOffsets();
		void UpdateControlRotation(float Pitch, float Yaw);
		void SetViewTetheringFunc(bool enable, const struct FRotator& TetherRotation, bool ModifyControlState);
		void LoadPlayerSettings();
		void RestoreFreddyMovement(bool UseFreddyAI);
		void ForceFreddyMovement(class APlayerAIController_C** OutPlayerAIController, class AFreddy_C** OutFreddyPawn);
		void AfterUnpause();
		void AfterPause();
		float GetLatestDistortionLevel();
		void SetupDebugHUD();
		void SetupPlayerHUD();
		void LowerWatch();
		void RaiseWatch();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_Jump_K2Node_InputActionEvent_24(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_23(const struct FKey& Key);
		void InpActEvt_SecondaryAction_K2Node_InputActionEvent_22(const struct FKey& Key);
		void InpActEvt_SwitchItem1_K2Node_InputActionEvent_21(const struct FKey& Key);
		void InpActEvt_SwitchItem2_K2Node_InputActionEvent_20(const struct FKey& Key);
		void InpActEvt_SwitchItem3_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_ChangeUITabLeft_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_ChangeUITabRight_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_L_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Skip_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_Skip_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Touch1_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Touch1_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_CallFreddy_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_PrimaryAction_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_PrimaryAction_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_ThrowObject_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_G_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void OnFailure_6EE19B10415A6B32590DEAA77ED60D09(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_6EE19B10415A6B32590DEAA77ED60D09(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5();
		void OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5();
		void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Teleport_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void VisualChangeItem();
		void DisableJumpLandAudio(bool Disable);
		void LowerArms();
		void RaiseArms();
		void ForceFlashlightState(bool On, bool AllowPlayerToggle);
		void ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle);
		void NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare);
		void LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare);
		void UpdateIcons();
		void UpdateSprintAndStealthToggles(bool Keyboard_Sprint, bool Gamepad_Sprint, bool CrouchIcon, bool CrouchToggle);
		void UpdateSavedMappings();
		void SetMappingsFromSaved(TMap<class FName, struct FKeyBinding_Struct> SavedMappings);
		void UpdateHelpiBlurbTime(float Time);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue);
		void OnPlayerKilled();
		void ReceiveBeginPlay();
		void OnPlayerWin();
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue);
		void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
		void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
		void OnRetry();
		void LowerWatch();
		void OnToggleFlightMode();
		void OnEnter_SaveGameTrigger();
		void OnToggleDevUI();
		void EnterFlyingMode();
		void SetFlyingCollision(ECollisionEnabled FlyingCollisionMode);
		void OnSaveGameSelected();
		void SetFlyingSpeed(float FlyingSpeed);
		void OnToggleCinemaMode();
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void ReceivePossess(class APawn* PossessedPawn);
		void OnTriggerVannyScare();
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void OnPossessedPawnDestroyed(class AActor* DestroyedActor);
		void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
		void InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6(float AxisValue);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void Distortion(int32_t Hour, int32_t Minute);
		void StopDistortion();
		void DebugCloseUI();
		void GiveVIPAchievement();
		void InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1(float AxisValue);
		void HideHUD(bool bHideProgressWheel);
		void ShowHUD();
		void EnableAllInputs();
		void SetEnabledInputFlags(int32_t InputFlags);
		void AddSaveGameSettingsListener();
		void RemoveSaveGameSettingsListener();
		void SetViewTethering(bool enable, const struct FRotator& TetherRotation, bool ModifyControlState);
		void OnUnlockEverything();
		void InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5(float AxisValue);
		void InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7(float AxisValue);
		void UpdateSensitivitySettings();
		void SetIsPlaySequenceRunning(bool IsRunning);
		void ShowCinimaticSkip();
		void BeginCinimaticSkipFade(float DelayDuration);
		void PostSaveGame();
		void ExecuteUbergraph_MainGamePC(int32_t EntryPoint);
		void OnSettingsSaved__DelegateSignature(class USaveGameSettings_C* Settings);
		void OnSkip__DelegateSignature();
		void OnPossessedPawnChanged__DelegateSignature(class APawn* PossessedPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
