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
	 * BlueprintGeneratedClass MainGamePC.MainGamePC_C
	 * Size -> 0x016F (FullSize[0x0768] - InheritedSize[0x05F9])
	 */
	class AMainGamePC_C : public AFBPC_SharedController_C
	{
	public:
		unsigned char                                              UnknownData_XBNS[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInventoryConditionalComponent*                      FazwatchCheck;                                           // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCinematicSequenceHandler_C*                         CinematicSequenceHandler;                                // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMasterUI_C*                                         FazWatchMenu;                                            // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentUITab;                                            // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FazwatchUp;                                              // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WPGK[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseTurnRate;                                            // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseLookUpRate;                                          // 0x062C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGameOverUI_C*                                       GameOverUI;                                              // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWatchUp;                                              // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Engine_ECollisionEnabled                                   FlyingCollisionMode;                                     // 0x0639(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D3S7[0x6];                                   // 0x063A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDebugOverlay_C*                                     DebugOverlay;                                            // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlyingSpeed;                                             // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KBU3[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPossessedPawnChanged;                                  // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ForwardInput;                                            // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightInput;                                              // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerCheckpointLocation;                                // 0x0668(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K50E[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               ReturnPawn;                                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Can_Use_Fazwatch;                                        // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L7GF[0x7];                                   // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSkip;                                                  // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    cur_item;                                                // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JVJL[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMoonManDistortionActor1_C*                          DistortionActor;                                         // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NextDistortionLevel;                                     // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EnabledInputFlags;                                       // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFirstPersonCharacter_C*                             FirstPersonCharacter;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MouseSensitivity;                                        // 0x06C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T00I[0x4];                                   // 0x06C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              VOSkipper[0x28];                                         // 0x06C4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USaveGameSettings_C*                                 PlayerSettingsSaveObject;                                // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TetherViewRotation;                                      // 0x06F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TetherOffset;                                            // 0x0704(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TetherViewEnabled;                                       // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3UDO[0x3];                                   // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherMaxAngle;                                          // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TetherMinAngle;                                          // 0x0718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentGateState;                                        // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PlayerSettingsSlotReal;                                  // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ListenerOverrideEnabled;                                 // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DQZR[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ListenerAttachTo;                                        // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasAchivementCheckBroken;                                // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGYH[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVannyIntroCinematicPlayerUI_C*                      VannyIntroPlayer;                                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEndGameCinematicPlayerUI_C*                         EndPlayer;                                               // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSettingsSaved;                                         // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetListenerOverridePosition(class USceneComponent* AttachToComponent, const struct FVector& Position, const struct FRotator& Rotation, bool* Result);
		void EnableListenerOverride(bool enable, bool* Result);
		void GetListenerPosition(struct FVector* Position);
		void SaveGameCallbackForSettings();
		void SaveGameSettings();
		void UpdateLastGameHourPlayed();
		void ResetViewTetheringOffsets();
		void UpdateControlRotation(float Pitch, float Yaw);
		void SetViewTethering(bool enable, const struct FRotator& TetherRotation, bool ModifyControlState);
		void LoadPlayerSettings();
		void EnableAllInputs();
		void RestoreFreddyMovement(bool UseFreddyAI);
		void ForceFreddyMovement(class APlayerAIController_C** OutPlayerAIController, class AFreddy_C** OutFreddyPawn);
		void AfterUnpause();
		void AfterPause();
		float GetLatestDistortionLevel();
		void SetupDebugHUD();
		void SetupPlayerHUD();
		void Lower_Watch();
		void Raise_Watch();
		void InpActEvt_Jump_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_SecondaryAction_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_Switch__Item_1_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_Switch__Item_2_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_Switch__Item_3_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_Change_UI_Tab_Left_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Change_UI_Tab_Right_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_L_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Skip_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Skip_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Touch1_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Touch1_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_CallFreddy_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_PrimaryAction_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_PrimaryAction_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Throw_Object_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_G_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnFailure_6EE19B10415A6B32590DEAA77ED60D09(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_6EE19B10415A6B32590DEAA77ED60D09(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5();
		void OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5();
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void PostSaveGame();
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
		void Enter_Flying_Mode();
		void Set_Flying_Collision(Engine_ECollisionEnabled FlyingCollisionMode);
		void OnSaveGameSelected();
		void Set_Flying_Speed(float FlyingSpeed);
		void OnToggleCinemaMode();
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void ReceivePossess(class APawn* PossessedPawn);
		void OnTriggerVannyScare();
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void On_Possessed_Pawn_Destroyed(class AActor* DestroyedActor);
		void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
		void InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6(float AxisValue);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void Distortion(int32_t Hour, int32_t Minute);
		void Stop_Distortion();
		void DebugCloseUI();
		void GiveVIPAchievement();
		void InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1(float AxisValue);
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
