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
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.ResetProgressWheel
	 */
	struct UWI_Cassie_Interact_C_ResetProgressWheel_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.UpdateInstructions
	 */
	struct UWI_Cassie_Interact_C_UpdateInstructions_Params
	{
	public:
		class FText                                                Textonleft;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Textonright;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.ResetProgress
	 */
	struct UWI_Cassie_Interact_C_ResetProgress_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.Finished_546B18CF4B1E2CE316BAF1A35B183B5C
	 */
	struct UWI_Cassie_Interact_C_Finished_546B18CF4B1E2CE316BAF1A35B183B5C_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.Construct
	 */
	struct UWI_Cassie_Interact_C_Construct_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.SetHoldProgress
	 */
	struct UWI_Cassie_Interact_C_SetHoldProgress_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.CancelHold
	 */
	struct UWI_Cassie_Interact_C_CancelHold_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.Begin Hold
	 */
	struct UWI_Cassie_Interact_C_BeginHold_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.CompleteHoldProgress
	 */
	struct UWI_Cassie_Interact_C_CompleteHoldProgress_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.StopFeedback
	 */
	struct UWI_Cassie_Interact_C_StopFeedback_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.ClearHoldUI
	 */
	struct UWI_Cassie_Interact_C_ClearHoldUI_Params
	{	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.ExecuteUbergraph_WI_Cassie_Interact
	 */
	struct UWI_Cassie_Interact_C_ExecuteUbergraph_WI_Cassie_Interact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Cassie_Interact.WI_Cassie_Interact_C.PowerLevelDispatch__DelegateSignature
	 */
	struct UWI_Cassie_Interact_C_PowerLevelDispatch__DelegateSignature_Params
	{
	public:
		int32_t                                                    PowerLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
