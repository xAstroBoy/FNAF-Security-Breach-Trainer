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
// Parameters
//---------------------------------------------------------------------------

// Function FNAFGameInstance.FNAFGameInstance_C.GetGameType
struct UFNAFGameInstance_C_GetGameType_Params
{
	fnaf9_EFNAFGameType                                GameType;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultMappings
struct UFNAFGameInstance_C_GetDefaultMappings_Params
{
	TMap<struct FName, struct FKeyBinding_Struct>      Output_Get;                                                // 0x0000(0x0050)  (Parm, OutParm)
};

// Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSS
struct UFNAFGameInstance_C_ApplyDLSS_Params
{
	TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> Quality;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.ToggleSprint
struct UFNAFGameInstance_C_ToggleSprint_Params
{
	bool                                               SprintToggle;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetProperControllerIcon
struct UFNAFGameInstance_C_GetProperControllerIcon_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Keyboard_Key1;                                             // 0x0008(0x0018)  (Parm, OutParm)
	struct FText                                       Keyboard_Key2;                                             // 0x0020(0x0018)  (Parm, OutParm)
	class URichTextBlock*                              Gamepad_Key1;                                              // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                              Gamepad_Key2;                                              // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.FindDeviceSpecicQualitySetting
struct UFNAFGameInstance_C_FindDeviceSpecicQualitySetting_Params
{
	struct FFNAFDeviceSpecificQualityConfig            Settings;                                                  // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Found;                                                     // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetIsMinSpecPC
struct UFNAFGameInstance_C_GetIsMinSpecPC_Params
{
	bool                                               IsMinSpec;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultVisualQualityLevels
struct UFNAFGameInstance_C_GetDefaultVisualQualityLevels_Params
{
	SWGPlatformUtil_ESWGPlatform                       Platform;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> Visual;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel> RayTrace;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetIsRTXGPU
struct UFNAFGameInstance_C_GetIsRTXGPU_Params
{
	bool                                               IsRTX;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetIsRayTracingSupported
struct UFNAFGameInstance_C_GetIsRayTracingSupported_Params
{
	SWGPlatformUtil_ESWGPlatform                       Platform;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Supported;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.ToggleInstructionCards
struct UFNAFGameInstance_C_ToggleInstructionCards_Params
{
	bool                                               ShowInstructions;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.SetMessageAndTime
struct UFNAFGameInstance_C_SetMessageAndTime_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.GetMessageTimeReceived
struct UFNAFGameInstance_C_GetMessageTimeReceived_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       MsgTime;                                                   // 0x0008(0x0018)  (Parm, OutParm)
};

// Function FNAFGameInstance.FNAFGameInstance_C.InstructionCardViewed
struct UFNAFGameInstance_C_InstructionCardViewed_Params
{
	TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Instruction_Enum;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ViewedAlready;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.SetupNewGame
struct UFNAFGameInstance_C_SetupNewGame_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.IsInGameplayTrailerMode
struct UFNAFGameInstance_C_IsInGameplayTrailerMode_Params
{
	bool                                               InGamePlayTrailerMode;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.LoadCardsAndMessages
struct UFNAFGameInstance_C_LoadCardsAndMessages_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.HasSaveGame
struct UFNAFGameInstance_C_HasSaveGame_Params
{
	bool                                               Exists;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_347016F346FF261F1C1C92ADBA6D6462
struct UFNAFGameInstance_C_OnFailure_347016F346FF261F1C1C92ADBA6D6462_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_347016F346FF261F1C1C92ADBA6D6462
struct UFNAFGameInstance_C_OnSuccess_347016F346FF261F1C1C92ADBA6D6462_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D
struct UFNAFGameInstance_C_OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D
struct UFNAFGameInstance_C_OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6
struct UFNAFGameInstance_C_OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6
struct UFNAFGameInstance_C_OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_C4FD1B5F4537DF8B128F3D916037CA11
struct UFNAFGameInstance_C_OnFailure_C4FD1B5F4537DF8B128F3D916037CA11_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11
struct UFNAFGameInstance_C_OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.LoadMiniGameLevel
struct UFNAFGameInstance_C_LoadMiniGameLevel_Params
{
	struct FName                                       LevelName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.Start New Game
struct UFNAFGameInstance_C_Start_New_Game_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Load From Save
struct UFNAFGameInstance_C_Load_From_Save_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Load Title
struct UFNAFGameInstance_C_Load_Title_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Retry Game
struct UFNAFGameInstance_C_Retry_Game_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Quit To Title
struct UFNAFGameInstance_C_Quit_To_Title_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.ReceiveInit
struct UFNAFGameInstance_C_ReceiveInit_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Unpause Game
struct UFNAFGameInstance_C_Unpause_Game_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Load To Area
struct UFNAFGameInstance_C_Load_To_Area_Params
{
	struct FName                                       Area;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.Set Trailer Mode
struct UFNAFGameInstance_C_Set_Trailer_Mode_Params
{
	bool                                               InGamePlayTrailerMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.Finish Load To Area
struct UFNAFGameInstance_C_Finish_Load_To_Area_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Start Survival Mode
struct UFNAFGameInstance_C_Start_Survival_Mode_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.Load Level
struct UFNAFGameInstance_C_Load_Level_Params
{
	struct FName                                       LevelName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.SetLoadSavedGameOnNextWorldStart
struct UFNAFGameInstance_C_SetLoadSavedGameOnNextWorldStart_Params
{
	bool                                               InLoadSavedGameOnNextWorldLoad;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoad
struct UFNAFGameInstance_C_CheckLoadSavedGameOnNextWorldLoad_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.ApplyQualitySettings
struct UFNAFGameInstance_C_ApplyQualitySettings_Params
{
	TEnumAsByte<FNAFVisualQualityLevel_EFNAFVisualQualityLevel> QualityLevel;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel> RayTraceLevel;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SWGPlatformUtil_ESWGPlatform                       Platform;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.RunHardwareBenchmark
struct UFNAFGameInstance_C_RunHardwareBenchmark_Params
{
	bool                                               Force;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FNAFGameInstance.FNAFGameInstance_C.CheckForTrophyTimeAchievement
struct UFNAFGameInstance_C_CheckForTrophyTimeAchievement_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.EndGame
struct UFNAFGameInstance_C_EndGame_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.ChangeHourlyActivity
struct UFNAFGameInstance_C_ChangeHourlyActivity_Params
{
	int                                                HourIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.CheckForHideAndSeekMasterAchievement
struct UFNAFGameInstance_C_CheckForHideAndSeekMasterAchievement_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.SetCurrentKeyMappings
struct UFNAFGameInstance_C_SetCurrentKeyMappings_Params
{
	TMap<struct FName, struct FKeyBinding_Struct>      CurrentMappings;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FNAFGameInstance.FNAFGameInstance_C.UpdateSavedMappings
struct UFNAFGameInstance_C_UpdateSavedMappings_Params
{
};

// Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance
struct UFNAFGameInstance_C_ExecuteUbergraph_FNAFGameInstance_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FNAFGameInstance.FNAFGameInstance_C.TrailerModeChanged__DelegateSignature
struct UFNAFGameInstance_C_TrailerModeChanged__DelegateSignature_Params
{
	bool                                               TrailerEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
