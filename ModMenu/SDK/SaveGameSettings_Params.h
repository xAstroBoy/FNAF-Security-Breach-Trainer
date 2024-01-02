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
	 * Function SaveGameSettings.SaveGameSettings_C.GetDefaultCrouchToggleValue
	 */
	struct USaveGameSettings_C_GetDefaultCrouchToggleValue_Params
	{
	public:
		bool                                                       Output_Get;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SaveGameSettings.SaveGameSettings_C.ResetControlsSettingsToDefault
	 */
	struct USaveGameSettings_C_ResetControlsSettingsToDefault_Params
	{	};

	/**
	 * Function SaveGameSettings.SaveGameSettings_C.ResetVideoSettingsToDefault
	 */
	struct USaveGameSettings_C_ResetVideoSettingsToDefault_Params
	{	};

	/**
	 * Function SaveGameSettings.SaveGameSettings_C.ResetAudioSettingsToDefault
	 */
	struct USaveGameSettings_C_ResetAudioSettingsToDefault_Params
	{	};

	/**
	 * Function SaveGameSettings.SaveGameSettings_C.GetMediaForCurrentHour
	 */
	struct USaveGameSettings_C_GetMediaForCurrentHour_Params
	{
	public:
		int32_t                                                    LastedPlayedHour;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9VTX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaSource*                                        GameHourVideo;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameSettings.SaveGameSettings_C.LoadSettings
	 */
	struct USaveGameSettings_C_LoadSettings_Params
	{
	public:
		float                                                      GamePadTurnRate;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GamePadLookUpRate;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Brightness;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Contrast;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Gamma;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ForceFeedbackIntensityMultiplier;                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELocalizationCulture                                       Localization;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
