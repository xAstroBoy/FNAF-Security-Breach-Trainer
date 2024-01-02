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
	 * Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.Construct
	 */
	struct UWI_Gregory_Flashlight_C_Construct_Params
	{	};

	/**
	 * Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ShowPowerLevel
	 */
	struct UWI_Gregory_Flashlight_C_ShowPowerLevel_Params
	{	};

	/**
	 * Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.FadeOutBatteryImage
	 */
	struct UWI_Gregory_Flashlight_C_FadeOutBatteryImage_Params
	{	};

	/**
	 * Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.ExecuteUbergraph_WI_Gregory_Flashlight
	 */
	struct UWI_Gregory_Flashlight_C_ExecuteUbergraph_WI_Gregory_Flashlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Gregory_Flashlight.WI_Gregory_Flashlight_C.PowerLevelDispatch__DelegateSignature
	 */
	struct UWI_Gregory_Flashlight_C_PowerLevelDispatch__DelegateSignature_Params
	{
	public:
		int32_t                                                    PowerLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
