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
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.RoundToHundredths
	 */
	struct UBackstage_VannyUI_C_RoundToHundredths_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rounded_Value;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.Get_TimeAsText
	 */
	struct UBackstage_VannyUI_C_Get_TimeAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.Get_VannyTimer
	 */
	struct UBackstage_VannyUI_C_Get_VannyTimer_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.Finished_562BAB0D49372E0ADBB1BAB559C7136E
	 */
	struct UBackstage_VannyUI_C_Finished_562BAB0D49372E0ADBB1BAB559C7136E_Params
	{
	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerNotVisible
	 */
	struct UBackstage_VannyUI_C_MakeTimerNotVisible_Params
	{
	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.Construct
	 */
	struct UBackstage_VannyUI_C_Construct_Params
	{
	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.MakeTimerVisible
	 */
	struct UBackstage_VannyUI_C_MakeTimerVisible_Params
	{
	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.PreConstruct
	 */
	struct UBackstage_VannyUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.ShowEmergencyText
	 */
	struct UBackstage_VannyUI_C_ShowEmergencyText_Params
	{
	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.AdjustPowerLevelRoom
	 */
	struct UBackstage_VannyUI_C_AdjustPowerLevelRoom_Params
	{
	public:
		float                                                      New_Power;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Backstage_VannyUI.Backstage_VannyUI_C.ExecuteUbergraph_Backstage_VannyUI
	 */
	struct UBackstage_VannyUI_C_ExecuteUbergraph_Backstage_VannyUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
