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
	 * Function WI_PowerLevel.WI_PowerLevel_C.SetBatteryBarVisibility
	 */
	struct UWI_PowerLevel_C_SetBatteryBarVisibility_Params
	{	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.SetNumberofBatteryBars
	 */
	struct UWI_PowerLevel_C_SetNumberofBatteryBars_Params
	{	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.ColorUpdate
	 */
	struct UWI_PowerLevel_C_ColorUpdate_Params
	{
	public:
		bool                                                       LowOnPower;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CIQT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.PowerLevelUpdate
	 */
	struct UWI_PowerLevel_C_PowerLevelUpdate_Params
	{
	public:
		int32_t                                                    PowerLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.Get Flash Value
	 */
	struct UWI_PowerLevel_C_GetFlashValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.Tick
	 */
	struct UWI_PowerLevel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.FlashUsed
	 */
	struct UWI_PowerLevel_C_FlashUsed_Params
	{	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.UpdateMaxPowerLevel
	 */
	struct UWI_PowerLevel_C_UpdateMaxPowerLevel_Params
	{	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.PreConstruct
	 */
	struct UWI_PowerLevel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.Construct
	 */
	struct UWI_PowerLevel_C_Construct_Params
	{	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.ExecuteUbergraph_WI_PowerLevel
	 */
	struct UWI_PowerLevel_C_ExecuteUbergraph_WI_PowerLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E5XF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WI_PowerLevel.WI_PowerLevel_C.LowPowerAlert__DelegateSignature
	 */
	struct UWI_PowerLevel_C_LowPowerAlert__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
