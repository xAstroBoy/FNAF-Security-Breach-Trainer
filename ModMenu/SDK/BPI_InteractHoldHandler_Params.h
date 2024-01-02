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
	 * Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.ClearHoldMeter
	 */
	struct UBPI_InteractHoldHandler_C_ClearHoldMeter_Params
	{	};

	/**
	 * Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.UpdateCustomProgressMeter
	 */
	struct UBPI_InteractHoldHandler_C_UpdateCustomProgressMeter_Params
	{
	public:
		class FText                                                TextOnLeft;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                TextOnRight;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.CompleteInteractHold
	 */
	struct UBPI_InteractHoldHandler_C_CompleteInteractHold_Params
	{	};

	/**
	 * Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.SetInteractHoldProgress
	 */
	struct UBPI_InteractHoldHandler_C_SetInteractHoldProgress_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.CancelInteractHold
	 */
	struct UBPI_InteractHoldHandler_C_CancelInteractHold_Params
	{	};

	/**
	 * Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.BeginInteractHold
	 */
	struct UBPI_InteractHoldHandler_C_BeginInteractHold_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
