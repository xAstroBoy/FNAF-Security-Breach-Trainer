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
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetCrouchToggle
	 */
	struct UBPI_SettingsUpdates_C_GetCrouchToggle_Params
	{
	public:
		bool                                                       CrouchToggle;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetHelpiBlurbTime
	 */
	struct UBPI_SettingsUpdates_C_GetHelpiBlurbTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateHelpiBlurbTime
	 */
	struct UBPI_SettingsUpdates_C_UpdateHelpiBlurbTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetShowInstructionCards
	 */
	struct UBPI_SettingsUpdates_C_GetShowInstructionCards_Params
	{
	public:
		bool                                                       ShowInstructionCards;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.SetMappingsFromSaved
	 */
	struct UBPI_SettingsUpdates_C_SetMappingsFromSaved_Params
	{
	public:
		TMap<class FName, struct FKeyBinding_Struct>               SavedMappings;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSavedMappings
	 */
	struct UBPI_SettingsUpdates_C_UpdateSavedMappings_Params
	{	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetStealthToggle
	 */
	struct UBPI_SettingsUpdates_C_GetStealthToggle_Params
	{
	public:
		bool                                                       ShowStealthIcon;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetSprintToggles
	 */
	struct UBPI_SettingsUpdates_C_GetSprintToggles_Params
	{
	public:
		bool                                                       KeyboardSprintToggle;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       GamepadSprintToggle;                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSprintAndStealthToggles
	 */
	struct UBPI_SettingsUpdates_C_UpdateSprintAndStealthToggles_Params
	{
	public:
		bool                                                       Keyboard_Sprint;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Gamepad_Sprint;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CrouchIcon;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CrouchToggle;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSensitivitySettings
	 */
	struct UBPI_SettingsUpdates_C_UpdateSensitivitySettings_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
