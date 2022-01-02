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

// Function SaveGameSettings.SaveGameSettings_C.ResetControlsSettingsToDefault
struct USaveGameSettings_C_ResetControlsSettingsToDefault_Params
{
};

// Function SaveGameSettings.SaveGameSettings_C.ResetVideoSettingsToDefault
struct USaveGameSettings_C_ResetVideoSettingsToDefault_Params
{
};

// Function SaveGameSettings.SaveGameSettings_C.ResetAudioSettingsToDefault
struct USaveGameSettings_C_ResetAudioSettingsToDefault_Params
{
};

// Function SaveGameSettings.SaveGameSettings_C.GetMediaForCurrentHour
struct USaveGameSettings_C_GetMediaForCurrentHour_Params
{
	int                                                Lasted_Played_Hour;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                                Game_Hour_Video;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SaveGameSettings.SaveGameSettings_C.LoadSettings
struct USaveGameSettings_C_LoadSettings_Params
{
	float                                              GamePadTurnRate;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GamePadLookUpRate;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Brightness;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Contrast;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Gamma;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceFeedbackIntensityMultiplier;                          // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
