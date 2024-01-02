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
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.HideLoadingScreenDLC
	 */
	struct UFNAFGameInstanceInterface_C_HideLoadingScreenDLC_Params
	{	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.DisplayLoadingScreenDLC
	 */
	struct UFNAFGameInstanceInterface_C_DisplayLoadingScreenDLC_Params
	{	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetSkipSystemUsed
	 */
	struct UFNAFGameInstanceInterface_C_SetSkipSystemUsed_Params
	{
	public:
		bool                                                       isUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetIfSkipSystemUsed
	 */
	struct UFNAFGameInstanceInterface_C_GetIfSkipSystemUsed_Params
	{
	public:
		bool                                                       outUsed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetTempHapticFeedback
	 */
	struct UFNAFGameInstanceInterface_C_SetTempHapticFeedback_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetHapticFeedback
	 */
	struct UFNAFGameInstanceInterface_C_SetHapticFeedback_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetTempHapticFeedbackIntensityMultiplier
	 */
	struct UFNAFGameInstanceInterface_C_GetTempHapticFeedbackIntensityMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetHapticFeedbackIntensityMultiplier
	 */
	struct UFNAFGameInstanceInterface_C_GetHapticFeedbackIntensityMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.CheckForTrophyTimeAchievement
	 */
	struct UFNAFGameInstanceInterface_C_CheckForTrophyTimeAchievement_Params
	{	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetSpawnAllSurvivalPackages
	 */
	struct UFNAFGameInstanceInterface_C_GetSpawnAllSurvivalPackages_Params
	{
	public:
		bool                                                       SpawnAll;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetShowSurvivalPackages
	 */
	struct UFNAFGameInstanceInterface_C_GetShowSurvivalPackages_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType
	 */
	struct UFNAFGameInstanceInterface_C_GetGameType_Params
	{
	public:
		EFNAFGameType                                              GameType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity
	 */
	struct UFNAFGameInstanceInterface_C_ChangeHourlyActivity_Params
	{
	public:
		int32_t                                                    HourIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
