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
	 * Function BPI_SaveGameSettingsListener.BPI_SaveGameSettingsListener_C.OnSaveGameSettingsSaved
	 */
	struct UBPI_SaveGameSettingsListener_C_OnSaveGameSettingsSaved_Params
	{
	public:
		class USaveGameSettings_C*                                 Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
