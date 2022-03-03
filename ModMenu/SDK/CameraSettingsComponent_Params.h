#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	{
	};

	/**
	 * Function CameraSettingsComponent.CameraSettingsComponent_C.On Settings Updated
	 */
	struct UCameraSettingsComponent_C_On_Settings_Updated_Params
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

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
