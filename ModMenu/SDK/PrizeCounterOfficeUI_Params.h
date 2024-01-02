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
	 * Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.Get_TimeAsText
	 */
	struct UPrizeCounterOfficeUI_C_Get_TimeAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.Get_DownloadProgress_Percent_1
	 */
	struct UPrizeCounterOfficeUI_C_Get_DownloadProgress_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.PreConstruct
	 */
	struct UPrizeCounterOfficeUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.MakeTimerVisible
	 */
	struct UPrizeCounterOfficeUI_C_MakeTimerVisible_Params
	{	};

	/**
	 * Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.MakeTimerNotVisible
	 */
	struct UPrizeCounterOfficeUI_C_MakeTimerNotVisible_Params
	{	};

	/**
	 * Function PrizeCounterOfficeUI.PrizeCounterOfficeUI_C.ExecuteUbergraph_PrizeCounterOfficeUI
	 */
	struct UPrizeCounterOfficeUI_C_ExecuteUbergraph_PrizeCounterOfficeUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
