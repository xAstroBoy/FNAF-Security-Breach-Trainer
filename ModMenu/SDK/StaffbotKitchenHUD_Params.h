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
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.UpdatePizzaStep
	 */
	struct UStaffbotKitchenHUD_C_UpdatePizzaStep_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.PizzaCompleted
	 */
	struct UStaffbotKitchenHUD_C_PizzaCompleted_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Complete Current Pizza Step
	 */
	struct UStaffbotKitchenHUD_C_Complete_Current_Pizza_Step_Params
	{
	public:
		PizzaStep_EPizzaStep                                       PizzaStep;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.InstructionsInit
	 */
	struct UStaffbotKitchenHUD_C_InstructionsInit_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Get_DoorPower_Percent_1
	 */
	struct UStaffbotKitchenHUD_C_Get_DoorPower_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Get_DownloadTimeRemaining_Text_1
	 */
	struct UStaffbotKitchenHUD_C_Get_DownloadTimeRemaining_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Finished_B1D5CA6A4C016BD6EB600E858C3CE633
	 */
	struct UStaffbotKitchenHUD_C_Finished_B1D5CA6A4C016BD6EB600E858C3CE633_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.PreConstruct
	 */
	struct UStaffbotKitchenHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.Construct
	 */
	struct UStaffbotKitchenHUD_C_Construct_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ShowErrorMessage
	 */
	struct UStaffbotKitchenHUD_C_ShowErrorMessage_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.TakePizzaInstructions
	 */
	struct UStaffbotKitchenHUD_C_TakePizzaInstructions_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ClearInstructions
	 */
	struct UStaffbotKitchenHUD_C_ClearInstructions_Params
	{
	};

	/**
	 * Function StaffbotKitchenHUD.StaffbotKitchenHUD_C.ExecuteUbergraph_StaffbotKitchenHUD
	 */
	struct UStaffbotKitchenHUD_C_ExecuteUbergraph_StaffbotKitchenHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
