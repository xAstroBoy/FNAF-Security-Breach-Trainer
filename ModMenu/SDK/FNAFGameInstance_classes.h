#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FNAFGameInstance.FNAFGameInstance_C
// 0x0240 (FullSize[0x03F0] - InheritedSize[0x01B0])
class UFNAFGameInstance_C : public UFNAFGameInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     SaveSlotName;                                              // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FName                                       MainLevel;                                                 // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RaytracingEnabled;                                         // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VKO3[0x3];                                     // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VisualQualityLevel;                                        // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasRtx;                                                    // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EKMY[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGregory_C*                                  Gregory;                                                   // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Has2080;                                                   // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LALW[0x3];                                     // 0x01E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AreaToLoad;                                                // 0x01EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseAISpawns;                                               // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4EEF[0x3];                                     // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FName>                   LoadLevelMap;                                              // 0x01F8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InGamePlayTrailerMode;                                     // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NFKG[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    TrailerModeChanged;                                        // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      WorldEntranceToUse[0x28];                                  // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               StartupNewGame;                                            // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DLSSEnabled;                                               // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CLIO[0x2];                                     // 0x028A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AntiAliasLevel;                                            // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowSurvivalPackages;                                      // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpawnAllSurvivalLocations;                                 // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SFYB[0x2];                                     // 0x0292(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MiniGolfCourseIndex;                                       // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoadSavedGameOnNextWorldLoad;                              // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RedReticle;                                                // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AG91[0x2];                                     // 0x029A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HapticFeedbackIntensityMultiplier;                         // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SubtitlesOn;                                               // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SubtitlesLarge;                                            // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CTCO[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FText>                   Msgs_TimesReceived;                                        // 0x02A8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             InstructionCardsSeen;                                      // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ShowInstructionCards;                                      // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ANVV[0x7];                                     // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFNAFSaveData*                               FNAFSaveData;                                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> RuntimeVisualQualitySetting;                               // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel> RuntimeRaytraceQualitySettings;                            // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RuntimeMinSpecDetectedSetting;                             // 0x031A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RuntimeHasRunBenchmark;                                    // 0x031B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HO8E[0x4];                                     // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USaveGameSettings_C*                         SavedSettings;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasAchievementCheckBroken;                                 // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J4HV[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel>, float> GPUIndexQualityMap;                                        // 0x0330(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SprintToggle;                                              // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1AIV[0x7];                                     // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      EndGameCinematicPlayerUI;                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ActivityIDs;                                               // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FName, struct FKeyBinding_Struct>      ButtonMappings;                                            // 0x03A0(0x0050) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGameInstance.FNAFGameInstance_C");
		return ptr;
	}



	void GetGameType(fnaf9_EFNAFGameType* GameType);
	void GetDefaultMappings(TMap<struct FName, struct FKeyBinding_Struct>* Output_Get);
	void ApplyDLSS(TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> Quality);
	void ToggleSprint(bool SprintToggle);
	void GetProperControllerIcon(const struct FName& ActionName, struct FText* Keyboard_Key1, struct FText* Keyboard_Key2, class URichTextBlock** Gamepad_Key1, class URichTextBlock** Gamepad_Key2);
	void FindDeviceSpecicQualitySetting(struct FFNAFDeviceSpecificQualityConfig* Settings, bool* Found);
	void GetIsMinSpecPC(bool* IsMinSpec);
	void GetDefaultVisualQualityLevels(SWGPlatformUtil_ESWGPlatform Platform, TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel>* Visual, TEnumAsByte<FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel>* RayTrace);
	void GetIsRTXGPU(bool* IsRTX);
	void GetIsRayTracingSupported(SWGPlatformUtil_ESWGPlatform Platform, bool* Supported);
	void ToggleInstructionCards(bool ShowInstructions);
	void SetMessageAndTime(const struct FName& MessageName);
	void GetMessageTimeReceived(const struct FName& MessageName, struct FText* MsgTime);
	void InstructionCardViewed(TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Instruction_Enum, bool* ViewedAlready);
	void SetupNewGame();
	void IsInGameplayTrailerMode(bool* InGamePlayTrailerMode);
	void LoadCardsAndMessages();
	void HasSaveGame(bool* Exists);
	void OnFailure_347016F346FF261F1C1C92ADBA6D6462();
	void OnSuccess_347016F346FF261F1C1C92ADBA6D6462();
	void OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6();
	void OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6();
	void OnFailure_C4FD1B5F4537DF8B128F3D916037CA11(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void LoadMiniGameLevel(const struct FName& LevelName);
	void Start_New_Game();
	void Load_From_Save();
	void Load_Title();
	void Retry_Game();
	void Quit_To_Title();
	void ReceiveInit();
	void Unpause_Game();
	void Load_To_Area(const struct FName& Area);
	void Set_Trailer_Mode(bool InGamePlayTrailerMode);
	void Finish_Load_To_Area();
	void Start_Survival_Mode();
	void Load_Level(const struct FName& LevelName);
	void SetLoadSavedGameOnNextWorldStart(bool InLoadSavedGameOnNextWorldLoad);
	void CheckLoadSavedGameOnNextWorldLoad();
	void ApplyQualitySettings(TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> QualityLevel, TEnumAsByte<FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel> RayTraceLevel, SWGPlatformUtil_ESWGPlatform Platform);
	void RunHardwareBenchmark(bool Force);
	void CheckForTrophyTimeAchievement();
	void EndGame();
	void ChangeHourlyActivity(int HourIndex);
	void CheckForHideAndSeekMasterAchievement();
	void SetCurrentKeyMappings(TMap<struct FName, struct FKeyBinding_Struct> CurrentMappings);
	void UpdateSavedMappings();
	void ExecuteUbergraph_FNAFGameInstance(int EntryPoint);
	void TrailerModeChanged__DelegateSignature(bool TrailerEnabled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
