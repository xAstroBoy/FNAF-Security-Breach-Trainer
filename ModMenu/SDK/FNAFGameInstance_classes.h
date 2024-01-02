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
	 * BlueprintGeneratedClass FNAFGameInstance.FNAFGameInstance_C
	 * Size -> 0x0399 (FullSize[0x05B1] - InheritedSize[0x0218])
	 */
	class UFNAFGameInstance_C : public UFNAFGameInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              SaveSlotName;                                            // 0x0220(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                MainLevel;                                               // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RaytracingEnabled;                                       // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I0K7[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VisualQualityLevel;                                      // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasRtx;                                                  // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NTN8[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGregory_C*                                          Gregory;                                                 // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Has2080;                                                 // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JEX1[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AreaToLoad;                                              // 0x0254(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAISpawns;                                             // 0x025C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6C0D[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FName>                             LoadLevelMap;                                            // 0x0260(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       InGamePlayTrailerMode;                                   // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U774[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TrailerModeChanged;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              WorldEntranceToUse[0x28];                                // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       StartupNewGame;                                          // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DLSSEnabled;                                             // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IZ4R[0x2];                                   // 0x02F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AntiAliasLevel;                                          // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowSurvivalPackages;                                    // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnAllSurvivalLocations;                               // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XF8T[0x2];                                   // 0x02FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MiniGolfCourseIndex;                                     // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoadSavedGameOnNextWorldLoad;                            // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RedReticle;                                              // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QR15[0x2];                                   // 0x0302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HapticFeedbackIntensityMultiplier;                       // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SubtitlesOn;                                             // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SubtitlesLarge;                                          // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTWX[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FText>                             Msgs_TimesReceived;                                      // 0x0310(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      InstructionCardsSeen;                                    // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ShowInstructionCards;                                    // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_93YU[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFNAFSaveData*                                       FNAFSaveData;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFNAFDLSSLevel                                             RuntimeDLSSQualitySettings;                              // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFNAFVisualQualityLevel                                    RuntimeVisualQualitySetting;                             // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFNAFRayTraceQualityLevel                                  RuntimeRaytraceQualitySettings;                          // 0x0382(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RuntimeMinSpecDetectedSetting;                           // 0x0383(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RuntimeHasRunBenchmark;                                  // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IZOZ[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USaveGameSettings_C*                                 SavedSettings;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasAchievementCheckBroken;                               // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZM5T[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EFNAFVisualQualityLevel, float>                       GPUIndexQualityMap;                                      // 0x0398(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SprintToggle_Keyboard;                                   // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZLRZ[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EndGameCinematicPlayerUI;                                // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ActivityIDs;                                             // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, struct FKeyBinding_Struct>               ButtonMappings;                                          // 0x0408(0x0050) Edit, BlueprintVisible
		bool                                                       AllCollected;                                            // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2W2U[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TrophyTimeName;                                          // 0x045C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SprintToggle_Gamepad;                                    // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CrouchToggle;                                            // 0x0465(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StealthIndicatorToggle;                                  // 0x0466(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8LVK[0x1];                                   // 0x0467(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FirstTime_Brightness;                                    // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstTime_Gamma;                                         // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstTime_Contrast;                                      // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrincessQuest1Completed;                                 // 0x0474(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PrincessQuest2Completed;                                 // 0x0475(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZC30[0x2];                                   // 0x0476(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TempHapticFeedbackIntensityMultiplier;                   // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isChowdaANewGame;                                        // 0x047C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isARetry;                                                // 0x047D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JPYN[0x2];                                   // 0x047E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HelpiBlurbTime;                                          // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DDGO[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLoadingScreenBegin;                                    // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLoadingScreenRemoved;                                  // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         XboxControllerDisconnectWidget;                          // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FChapter_Struct                                     Chapter;                                                 // 0x04B0(0x00D0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UDataTable*                                          ChapterData;                                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsChowdaSelected;                                        // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SkipSystemUsed;                                          // 0x0589(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VolumetricFogEnabled;                                    // 0x058A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F18S[0x5];                                   // 0x058B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSettingsApplied;                                       // 0x0590(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsAWorldTransitLoad;                                     // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OE20[0x7];                                   // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         LoadingScreenDLC;                                        // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TempGameIsPaused;                                        // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetCrouchToggle(bool* CrouchToggle);
		void GetHelpiBlurbTime(float* Time);
		void GetShowInstructionCards(bool* ShowInstructionCards);
		void GetStealthToggle(bool* ShowStealthIcon);
		void GetSprintToggles(bool* KeyboardSprintToggle, bool* GamepadSprintToggle);
		void UpdateSprintAndStealthToggles(bool Keyboard_Sprint, bool Gamepad_Sprint, bool CrouchIcon, bool CrouchToggle);
		void GetIfSkipSystemUsed(bool* outUsed);
		float GetTempHapticFeedbackIntensityMultiplier();
		float GetHapticFeedbackIntensityMultiplier();
		void GetSpawnAllSurvivalPackages(bool* SpawnAll);
		void GetShowSurvivalPackages(bool* Show);
		void GetGameType(EFNAFGameType* GameType);
		void ApplyRuinGlobalVideoSettingsOverrides();
		void ApplyRuinRTXOverrides();
		void IsVolumetricFogAllowed(const struct FFNAFVisualQualitySettings& FNAFVisualQualitySettings, EFNAFVisualQualityLevel VisualQuality, ESWGXboxPlatform XboxSpecific, ESWGPlatform Platform);
		void ToggleStealthIndicator(bool StealthIndicatorToggle);
		void ToggleGamepadSprint(bool SprintToggle);
		void ToggleKeyboardSprint(bool SprintToggle);
		void GetDefaultMappings(TMap<class FName, struct FKeyBinding_Struct>* Output_Get);
		void ApplyDLSSQuality(EFNAFDLSSLevel DLSSLevel);
		void ApplyDLSS(EFNAFVisualQualityLevel Quality);
		void GetProperControllerIcon(const class FName& ActionName, class FText* Keyboard_Key1, class FText* Keyboard_Key2, class URichTextBlock** Gamepad_Key1, class URichTextBlock** Gamepad_Key2);
		void FindDeviceSpecicQualitySetting(struct FFNAFDeviceSpecificQualityConfig* Settings, bool* Found);
		void GetIsMinSpecPC(bool* IsMinSpec);
		void GetDefaultVisualQualityLevels(ESWGPlatform Platform, EFNAFVisualQualityLevel* Visual, EFNAFRayTraceQualityLevel* RayTrace);
		void GetIsRTXGPU(bool* IsRTX);
		void GetIsRayTracingSupported(ESWGPlatform Platform, bool* Supported);
		void ToggleInstructionCards(bool ShowInstructions);
		void SetMessageAndTime(const class FName& MessageName);
		void GetMessageTimeReceived(const class FName& MessageName, class FText* MsgTime);
		void InstructionCardViewed(E_InstructionCard_Type InstructionEnum, bool* ViewedAlready);
		void SetupNewGame();
		void IsInGameplayTrailerMode(bool* InGamePlayTrailerMode);
		void LoadCardsAndMessages();
		void HasSaveGame(bool* Exists);
		void OnFailure_347016F346FF261F1C1C92ADBA6D6462();
		void OnSuccess_347016F346FF261F1C1C92ADBA6D6462();
		void OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6();
		void OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6();
		void OnFailure_C4FD1B5F4537DF8B128F3D916037CA11(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_E76021A145A37BC709C55BBACDEFFBF4();
		void OnSuccess_E76021A145A37BC709C55BBACDEFFBF4();
		void OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_2139E3F145F43A454CDBE3A76C9037C4();
		void OnSuccess_2139E3F145F43A454CDBE3A76C9037C4();
		void OnFailure_AC5026394EF21AF1261C85BD63C2D5E9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void UpdateSensitivitySettings();
		void LoadMiniGameLevel(const class FName& LevelName);
		void StartNewGame();
		void LoadFromSave();
		void LoadTitle();
		void RetryGame();
		void QuitToTitle();
		void ReceiveInit();
		void UnpauseGame();
		void LoadToArea(const class FName& Area);
		void SetTrailerMode(bool InGamePlayTrailerMode);
		void FinishLoadToArea();
		void LoadLevel(const class FName& LevelName);
		void SetLoadSavedGameOnNextWorldStart(bool InLoadSavedGameOnNextWorldLoad);
		void CheckLoadSavedGameOnNextWorldLoad();
		void RunHardwareBenchmark(bool Force);
		void EndGame();
		void ChangeHourlyActivity(int32_t HourIndex);
		void CheckForHideAndSeekMasterAchievement();
		void CheckForLostAndFoundAchievement();
		void CheckForShatteredDreamsAchievement(E_ShatteredBotTypes ShatteredBotType);
		void SetIsRetry(bool IsRetry);
		void CheckForTrophyTimeAchievement();
		void SetTempHapticFeedback(float Value);
		void SetHapticFeedback(float Value);
		void CheckLoadSavedGameOnNextWorldLoadForChowda();
		void UpdateSavedMappings();
		void SetMappingsFromSaved(TMap<class FName, struct FKeyBinding_Struct> SavedMappings);
		void UpdateHelpiBlurbTime(float Time);
		void PlayEndCredits(EChowdaEndings ChowdaEndGameType);
		void ApplyQualitySettings(EFNAFVisualQualityLevel QualityLevel, EFNAFRayTraceQualityLevel RayTraceLevel, EFNAFDLSSLevel DLSSLevel, ESWGPlatform Platform, ESWGXboxPlatform XboxSpecificPlatform);
		void OnLoadingScreenStart();
		void OnLoadingScreenEnd();
		void OnPlayerLoginChanged(bool bLoggedIn, int32_t UserId);
		void OnPlayerControllerPairingChanged();
		void OnControllerConnectionChanged();
		void StartChowdaMode(bool NewGame, int32_t profileIndex);
		void LoadChapter(const class FName& Chapter, int32_t profileIndex);
		void SetSkipSystemUsed(bool isUsed);
		void DisplayLoadingScreenDLC();
		void HideLoadingScreenDLC();
		void OnSaveGameComplete();
		void ExecuteUbergraph_FNAFGameInstance(int32_t EntryPoint);
		void OnSettingsApplied__DelegateSignature(EFNAFVisualQualityLevel VisualQuality, ESWGPlatform Platform, ESWGXboxPlatform SpecificXboxPlatform, bool IsRayTraceEnabled, bool IsDLSSEnabled, bool IsVolumetricFogEnabled);
		void OnLoadingScreenRemoved__DelegateSignature();
		void OnLoadingScreenBegin__DelegateSignature();
		void TrailerModeChanged__DelegateSignature(bool TrailerEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
