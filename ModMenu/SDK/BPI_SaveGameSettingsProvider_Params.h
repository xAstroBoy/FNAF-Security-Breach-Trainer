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
	 * Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.RemoveSaveGameSettingsListener
	 */
	struct UBPI_SaveGameSettingsProvider_C_RemoveSaveGameSettingsListener_Params
	{	};

	/**
	 * Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.AddSaveGameSettingsListener
	 */
	struct UBPI_SaveGameSettingsProvider_C_AddSaveGameSettingsListener_Params
	{	};

	/**
	 * Function BPI_SaveGameSettingsProvider.BPI_SaveGameSettingsProvider_C.GetSaveGameSettings
	 */
	struct UBPI_SaveGameSettingsProvider_C_GetSaveGameSettings_Params
	{
	public:
		class USaveGameSettings_C*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
