﻿#pragma once

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
	 * BlueprintGeneratedClass FNAFGameInstance.FNAFGameInstance_C
	 * Size -> 0x0241 (FullSize[0x03F1] - InheritedSize[0x01B0])
	 */
	class UFNAFGameInstance_C : public UFNAFGameInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              SaveSlotName;                                            // 0x01B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                MainLevel;                                               // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RaytracingEnabled;                                       // 0x01D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5FV5[0x3];                                   // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VisualQualityLevel;                                      // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasRtx;                                                  // 0x01D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G5O3[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGregory_C*                                          Gregory;                                                 // 0x01E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Has2080;                                                 // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHNK[0x3];                                   // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AreaToLoad;                                              // 0x01EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAISpawns;                                             // 0x01F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6VWA[0x3];                                   // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FName>                             LoadLevelMap;                                            // 0x01F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       InGamePlayTrailerMode;                                   // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S15R[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TrailerModeChanged;                                      // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              WorldEntranceToUse[0x28];                                // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       StartupNewGame;                                          // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DLSSEnabled;                                             // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HVHR[0x2];                                   // 0x028A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AntiAliasLevel;                                          // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowSurvivalPackages;                                    // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SpawnAllSurvivalLocations;                               // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DKWU[0x2];                                   // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MiniGolfCourseIndex;                                     // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoadSavedGameOnNextWorldLoad;                            // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RedReticle;                                              // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4WHS[0x2];                                   // 0x029A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HapticFeedbackIntensityMultiplier;                       // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SubtitlesOn;                                             // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SubtitlesLarge;                                          // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JXS0[0x6];                                   // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FText>                             Msgs_TimesReceived;                                      // 0x02A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      InstructionCardsSeen;                                    // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ShowInstructionCards;                                    // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJBV[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFNAFSaveData*                                       FNAFSaveData;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		FNAFVisualQualityLevel_EFNAFVisualQualityLevel             RuntimeVisualQualitySetting;                             // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel         RuntimeRaytraceQualitySettings;                          // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RuntimeMinSpecDetectedSetting;                           // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RuntimeHasRunBenchmark;                                  // 0x031B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FA9Z[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USaveGameSettings_C*                                 SavedSettings;                                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasAchievementCheckBroken;                               // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_89FY[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<FNAFVisualQualityLevel_EFNAFVisualQualityLevel, float> GPUIndexQualityMap;                                      // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SprintToggle;                                            // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GD95[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EndGameCinematicPlayerUI;                                // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ActivityIDs;                                             // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FName, struct FKeyBinding_Struct>               ButtonMappings;                                          // 0x03A0(0x0050) Edit, BlueprintVisible
		bool                                                       AllCollected;                                            // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetGameType(fnaf9_EFNAFGameType* GameType);
		void GetDefaultMappings(TMap<class FName, struct FKeyBinding_Struct>* Output_Get);
		void ApplyDLSS(FNAFVisualQualityLevel_EFNAFVisualQualityLevel Quality);
		void ToggleSprint(bool SprintToggle);
		void GetProperControllerIcon(const class FName& ActionName, class FText* Keyboard_Key1, class FText* Keyboard_Key2, class URichTextBlock** Gamepad_Key1, class URichTextBlock** Gamepad_Key2);
		void FindDeviceSpecicQualitySetting(struct FFNAFDeviceSpecificQualityConfig* Settings, bool* Found);
		void GetIsMinSpecPC(bool* IsMinSpec);
		void GetDefaultVisualQualityLevels(SWGPlatformUtil_ESWGPlatform Platform, FNAFVisualQualityLevel_EFNAFVisualQualityLevel* Visual, FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel* RayTrace);
		void GetIsRTXGPU(bool* IsRTX);
		void GetIsRayTracingSupported(SWGPlatformUtil_ESWGPlatform Platform, bool* Supported);
		void ToggleInstructionCards(bool ShowInstructions);
		void SetMessageAndTime(const class FName& MessageName);
		void GetMessageTimeReceived(const class FName& MessageName, class FText* MsgTime);
		void InstructionCardViewed(E_InstructionCard_Type_E_InstructionCard_Type Instruction_Enum, bool* ViewedAlready);
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
		void LoadMiniGameLevel(const class FName& LevelName);
		void Start_New_Game();
		void Load_From_Save();
		void Load_Title();
		void Retry_Game();
		void Quit_To_Title();
		void ReceiveInit();
		void Unpause_Game();
		void Load_To_Area(const class FName& Area);
		void Set_Trailer_Mode(bool InGamePlayTrailerMode);
		void Finish_Load_To_Area();
		void Start_Survival_Mode();
		void Load_Level(const class FName& LevelName);
		void SetLoadSavedGameOnNextWorldStart(bool InLoadSavedGameOnNextWorldLoad);
		void CheckLoadSavedGameOnNextWorldLoad();
		void ApplyQualitySettings(FNAFVisualQualityLevel_EFNAFVisualQualityLevel QualityLevel, FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel RayTraceLevel, SWGPlatformUtil_ESWGPlatform Platform);
		void RunHardwareBenchmark(bool Force);
		void CheckForTrophyTimeAchievement();
		void EndGame();
		void ChangeHourlyActivity(int32_t HourIndex);
		void CheckForHideAndSeekMasterAchievement();
		void SetCurrentKeyMappings(TMap<class FName, struct FKeyBinding_Struct> CurrentMappings);
		void UpdateSavedMappings();
		void CheckForLostAndFoundAchievement();
		void ExecuteUbergraph_FNAFGameInstance(int32_t EntryPoint);
		void TrailerModeChanged__DelegateSignature(bool TrailerEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
