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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetCrouchToggle
	 */
	struct UFNAFGameInstance_C_GetCrouchToggle_Params
	{
	public:
		bool                                                       CrouchToggle;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetHelpiBlurbTime
	 */
	struct UFNAFGameInstance_C_GetHelpiBlurbTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetShowInstructionCards
	 */
	struct UFNAFGameInstance_C_GetShowInstructionCards_Params
	{
	public:
		bool                                                       ShowInstructionCards;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetStealthToggle
	 */
	struct UFNAFGameInstance_C_GetStealthToggle_Params
	{
	public:
		bool                                                       ShowStealthIcon;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetSprintToggles
	 */
	struct UFNAFGameInstance_C_GetSprintToggles_Params
	{
	public:
		bool                                                       KeyboardSprintToggle;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       GamepadSprintToggle;                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.UpdateSprintAndStealthToggles
	 */
	struct UFNAFGameInstance_C_UpdateSprintAndStealthToggles_Params
	{
	public:
		bool                                                       Keyboard_Sprint;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Gamepad_Sprint;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CrouchIcon;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CrouchToggle;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetIfSkipSystemUsed
	 */
	struct UFNAFGameInstance_C_GetIfSkipSystemUsed_Params
	{
	public:
		bool                                                       outUsed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetTempHapticFeedbackIntensityMultiplier
	 */
	struct UFNAFGameInstance_C_GetTempHapticFeedbackIntensityMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetHapticFeedbackIntensityMultiplier
	 */
	struct UFNAFGameInstance_C_GetHapticFeedbackIntensityMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetSpawnAllSurvivalPackages
	 */
	struct UFNAFGameInstance_C_GetSpawnAllSurvivalPackages_Params
	{
	public:
		bool                                                       SpawnAll;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetShowSurvivalPackages
	 */
	struct UFNAFGameInstance_C_GetShowSurvivalPackages_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetGameType
	 */
	struct UFNAFGameInstance_C_GetGameType_Params
	{
	public:
		EFNAFGameType                                              GameType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ApplyRuinGlobalVideoSettingsOverrides
	 */
	struct UFNAFGameInstance_C_ApplyRuinGlobalVideoSettingsOverrides_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ApplyRuinRTXOverrides
	 */
	struct UFNAFGameInstance_C_ApplyRuinRTXOverrides_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.IsVolumetricFogAllowed
	 */
	struct UFNAFGameInstance_C_IsVolumetricFogAllowed_Params
	{
	public:
		struct FFNAFVisualQualitySettings                          FNAFVisualQualitySettings;                               // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		EFNAFVisualQualityLevel                                    VisualQuality;                                           // 0x00E8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGXboxPlatform                                           XboxSpecific;                                            // 0x00E9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGPlatform                                               Platform;                                                // 0x00EA(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ToggleStealthIndicator
	 */
	struct UFNAFGameInstance_C_ToggleStealthIndicator_Params
	{
	public:
		bool                                                       StealthIndicatorToggle;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ToggleGamepadSprint
	 */
	struct UFNAFGameInstance_C_ToggleGamepadSprint_Params
	{
	public:
		bool                                                       SprintToggle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ToggleKeyboardSprint
	 */
	struct UFNAFGameInstance_C_ToggleKeyboardSprint_Params
	{
	public:
		bool                                                       SprintToggle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultMappings
	 */
	struct UFNAFGameInstance_C_GetDefaultMappings_Params
	{
	public:
		TMap<class FName, struct FKeyBinding_Struct>               Output_Get;                                              // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSSQuality
	 */
	struct UFNAFGameInstance_C_ApplyDLSSQuality_Params
	{
	public:
		EFNAFDLSSLevel                                             DLSSLevel;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSS
	 */
	struct UFNAFGameInstance_C_ApplyDLSS_Params
	{
	public:
		EFNAFVisualQualityLevel                                    Quality;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_933N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetProperControllerIcon
	 */
	struct UFNAFGameInstance_C_GetProperControllerIcon_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Keyboard_Key1;                                           // 0x0008(0x0018)  (Parm, OutParm)
		class FText                                                Keyboard_Key2;                                           // 0x0020(0x0018)  (Parm, OutParm)
		class URichTextBlock*                                      Gamepad_Key1;                                            // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URichTextBlock*                                      Gamepad_Key2;                                            // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.FindDeviceSpecicQualitySetting
	 */
	struct UFNAFGameInstance_C_FindDeviceSpecicQualitySetting_Params
	{
	public:
		struct FFNAFDeviceSpecificQualityConfig                    Settings;                                                // 0x0000(0x0018)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C44Q[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetIsMinSpecPC
	 */
	struct UFNAFGameInstance_C_GetIsMinSpecPC_Params
	{
	public:
		bool                                                       IsMinSpec;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GH0I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultVisualQualityLevels
	 */
	struct UFNAFGameInstance_C_GetDefaultVisualQualityLevels_Params
	{
	public:
		ESWGPlatform                                               Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFVisualQualityLevel                                    Visual;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFRayTraceQualityLevel                                  RayTrace;                                                // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetIsRTXGPU
	 */
	struct UFNAFGameInstance_C_GetIsRTXGPU_Params
	{
	public:
		bool                                                       IsRTX;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQD1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetIsRayTracingSupported
	 */
	struct UFNAFGameInstance_C_GetIsRayTracingSupported_Params
	{
	public:
		ESWGPlatform                                               Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Supported;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ToggleInstructionCards
	 */
	struct UFNAFGameInstance_C_ToggleInstructionCards_Params
	{
	public:
		bool                                                       ShowInstructions;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetMessageAndTime
	 */
	struct UFNAFGameInstance_C_SetMessageAndTime_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.GetMessageTimeReceived
	 */
	struct UFNAFGameInstance_C_GetMessageTimeReceived_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                MsgTime;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.InstructionCardViewed
	 */
	struct UFNAFGameInstance_C_InstructionCardViewed_Params
	{
	public:
		E_InstructionCard_Type                                     InstructionEnum;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ViewedAlready;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H6NB[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetupNewGame
	 */
	struct UFNAFGameInstance_C_SetupNewGame_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.IsInGameplayTrailerMode
	 */
	struct UFNAFGameInstance_C_IsInGameplayTrailerMode_Params
	{
	public:
		bool                                                       InGamePlayTrailerMode;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.LoadCardsAndMessages
	 */
	struct UFNAFGameInstance_C_LoadCardsAndMessages_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.HasSaveGame
	 */
	struct UFNAFGameInstance_C_HasSaveGame_Params
	{
	public:
		bool                                                       Exists;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_347016F346FF261F1C1C92ADBA6D6462
	 */
	struct UFNAFGameInstance_C_OnFailure_347016F346FF261F1C1C92ADBA6D6462_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_347016F346FF261F1C1C92ADBA6D6462
	 */
	struct UFNAFGameInstance_C_OnSuccess_347016F346FF261F1C1C92ADBA6D6462_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D
	 */
	struct UFNAFGameInstance_C_OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D
	 */
	struct UFNAFGameInstance_C_OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6
	 */
	struct UFNAFGameInstance_C_OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6
	 */
	struct UFNAFGameInstance_C_OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_C4FD1B5F4537DF8B128F3D916037CA11
	 */
	struct UFNAFGameInstance_C_OnFailure_C4FD1B5F4537DF8B128F3D916037CA11_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11
	 */
	struct UFNAFGameInstance_C_OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_E76021A145A37BC709C55BBACDEFFBF4
	 */
	struct UFNAFGameInstance_C_OnFailure_E76021A145A37BC709C55BBACDEFFBF4_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_E76021A145A37BC709C55BBACDEFFBF4
	 */
	struct UFNAFGameInstance_C_OnSuccess_E76021A145A37BC709C55BBACDEFFBF4_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49
	 */
	struct UFNAFGameInstance_C_OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49
	 */
	struct UFNAFGameInstance_C_OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2139E3F145F43A454CDBE3A76C9037C4
	 */
	struct UFNAFGameInstance_C_OnFailure_2139E3F145F43A454CDBE3A76C9037C4_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2139E3F145F43A454CDBE3A76C9037C4
	 */
	struct UFNAFGameInstance_C_OnSuccess_2139E3F145F43A454CDBE3A76C9037C4_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_AC5026394EF21AF1261C85BD63C2D5E9
	 */
	struct UFNAFGameInstance_C_OnFailure_AC5026394EF21AF1261C85BD63C2D5E9_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9
	 */
	struct UFNAFGameInstance_C_OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.UpdateSensitivitySettings
	 */
	struct UFNAFGameInstance_C_UpdateSensitivitySettings_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.LoadMiniGameLevel
	 */
	struct UFNAFGameInstance_C_LoadMiniGameLevel_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Start New Game
	 */
	struct UFNAFGameInstance_C_StartNewGame_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Load From Save
	 */
	struct UFNAFGameInstance_C_LoadFromSave_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Load Title
	 */
	struct UFNAFGameInstance_C_LoadTitle_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Retry Game
	 */
	struct UFNAFGameInstance_C_RetryGame_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Quit To Title
	 */
	struct UFNAFGameInstance_C_QuitToTitle_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ReceiveInit
	 */
	struct UFNAFGameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Unpause Game
	 */
	struct UFNAFGameInstance_C_UnpauseGame_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Load To Area
	 */
	struct UFNAFGameInstance_C_LoadToArea_Params
	{
	public:
		class FName                                                Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Set Trailer Mode
	 */
	struct UFNAFGameInstance_C_SetTrailerMode_Params
	{
	public:
		bool                                                       InGamePlayTrailerMode;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Finish Load To Area
	 */
	struct UFNAFGameInstance_C_FinishLoadToArea_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Load Level
	 */
	struct UFNAFGameInstance_C_LoadLevel_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetLoadSavedGameOnNextWorldStart
	 */
	struct UFNAFGameInstance_C_SetLoadSavedGameOnNextWorldStart_Params
	{
	public:
		bool                                                       InLoadSavedGameOnNextWorldLoad;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoad
	 */
	struct UFNAFGameInstance_C_CheckLoadSavedGameOnNextWorldLoad_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.RunHardwareBenchmark
	 */
	struct UFNAFGameInstance_C_RunHardwareBenchmark_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.EndGame
	 */
	struct UFNAFGameInstance_C_EndGame_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ChangeHourlyActivity
	 */
	struct UFNAFGameInstance_C_ChangeHourlyActivity_Params
	{
	public:
		int32_t                                                    HourIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.CheckForHideAndSeekMasterAchievement
	 */
	struct UFNAFGameInstance_C_CheckForHideAndSeekMasterAchievement_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.CheckForLostAndFoundAchievement
	 */
	struct UFNAFGameInstance_C_CheckForLostAndFoundAchievement_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Check For ShatteredDreams Achievement
	 */
	struct UFNAFGameInstance_C_CheckForShatteredDreamsAchievement_Params
	{
	public:
		E_ShatteredBotTypes                                        ShatteredBotType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetIsRetry
	 */
	struct UFNAFGameInstance_C_SetIsRetry_Params
	{
	public:
		bool                                                       IsRetry;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.CheckForTrophyTimeAchievement
	 */
	struct UFNAFGameInstance_C_CheckForTrophyTimeAchievement_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetTempHapticFeedback
	 */
	struct UFNAFGameInstance_C_SetTempHapticFeedback_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetHapticFeedback
	 */
	struct UFNAFGameInstance_C_SetHapticFeedback_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoadForChowda
	 */
	struct UFNAFGameInstance_C_CheckLoadSavedGameOnNextWorldLoadForChowda_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.UpdateSavedMappings
	 */
	struct UFNAFGameInstance_C_UpdateSavedMappings_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetMappingsFromSaved
	 */
	struct UFNAFGameInstance_C_SetMappingsFromSaved_Params
	{
	public:
		TMap<class FName, struct FKeyBinding_Struct>               SavedMappings;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.UpdateHelpiBlurbTime
	 */
	struct UFNAFGameInstance_C_UpdateHelpiBlurbTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.PlayEndCredits
	 */
	struct UFNAFGameInstance_C_PlayEndCredits_Params
	{
	public:
		EChowdaEndings                                             ChowdaEndGameType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ApplyQualitySettings
	 */
	struct UFNAFGameInstance_C_ApplyQualitySettings_Params
	{
	public:
		EFNAFVisualQualityLevel                                    QualityLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFRayTraceQualityLevel                                  RayTraceLevel;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFDLSSLevel                                             DLSSLevel;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGPlatform                                               Platform;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGXboxPlatform                                           XboxSpecificPlatform;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenStart
	 */
	struct UFNAFGameInstance_C_OnLoadingScreenStart_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenEnd
	 */
	struct UFNAFGameInstance_C_OnLoadingScreenEnd_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnPlayerLoginChanged
	 */
	struct UFNAFGameInstance_C_OnPlayerLoginChanged_Params
	{
	public:
		bool                                                       bLoggedIn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYKP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UserId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnPlayerControllerPairingChanged
	 */
	struct UFNAFGameInstance_C_OnPlayerControllerPairingChanged_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnControllerConnectionChanged
	 */
	struct UFNAFGameInstance_C_OnControllerConnectionChanged_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.Start Chowda Mode
	 */
	struct UFNAFGameInstance_C_StartChowdaMode_Params
	{
	public:
		bool                                                       NewGame;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PVEQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    profileIndex;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.LoadChapter
	 */
	struct UFNAFGameInstance_C_LoadChapter_Params
	{
	public:
		class FName                                                Chapter;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    profileIndex;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.SetSkipSystemUsed
	 */
	struct UFNAFGameInstance_C_SetSkipSystemUsed_Params
	{
	public:
		bool                                                       isUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.DisplayLoadingScreenDLC
	 */
	struct UFNAFGameInstance_C_DisplayLoadingScreenDLC_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.HideLoadingScreenDLC
	 */
	struct UFNAFGameInstance_C_HideLoadingScreenDLC_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSaveGameComplete
	 */
	struct UFNAFGameInstance_C_OnSaveGameComplete_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance
	 */
	struct UFNAFGameInstance_C_ExecuteUbergraph_FNAFGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NF8J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnSettingsApplied__DelegateSignature
	 */
	struct UFNAFGameInstance_C_OnSettingsApplied__DelegateSignature_Params
	{
	public:
		EFNAFVisualQualityLevel                                    VisualQuality;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGPlatform                                               Platform;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGXboxPlatform                                           SpecificXboxPlatform;                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRayTraceEnabled;                                       // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDLSSEnabled;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVolumetricFogEnabled;                                  // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenRemoved__DelegateSignature
	 */
	struct UFNAFGameInstance_C_OnLoadingScreenRemoved__DelegateSignature_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenBegin__DelegateSignature
	 */
	struct UFNAFGameInstance_C_OnLoadingScreenBegin__DelegateSignature_Params
	{	};

	/**
	 * Function FNAFGameInstance.FNAFGameInstance_C.TrailerModeChanged__DelegateSignature
	 */
	struct UFNAFGameInstance_C_TrailerModeChanged__DelegateSignature_Params
	{
	public:
		bool                                                       TrailerEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
