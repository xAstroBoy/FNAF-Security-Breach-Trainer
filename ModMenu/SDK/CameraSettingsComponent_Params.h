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
	 * Function CameraSettingsComponent.CameraSettingsComponent_C.ReceiveBeginPlay
	 */
	struct UCameraSettingsComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CameraSettingsComponent.CameraSettingsComponent_C.OnSaveGameSettingsSaved
	 */
	struct UCameraSettingsComponent_C_OnSaveGameSettingsSaved_Params
	{
	public:
		class USaveGameSettings_C*                                 Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraSettingsComponent.CameraSettingsComponent_C.ExecuteUbergraph_CameraSettingsComponent
	 */
	struct UCameraSettingsComponent_C_ExecuteUbergraph_CameraSettingsComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7FT2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
