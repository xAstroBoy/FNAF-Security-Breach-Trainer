/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.ClearHoldMeter
	 * 		Flags  -> ()
	 */
	void UBPI_InteractHoldHandler_C::ClearHoldMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.ClearHoldMeter");
		
		UBPI_InteractHoldHandler_C_ClearHoldMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.UpdateCustomProgressMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TextOnLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        TextOnRight                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_InteractHoldHandler_C::UpdateCustomProgressMeter(const class FText& TextOnLeft, const class FText& TextOnRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.UpdateCustomProgressMeter");
		
		UBPI_InteractHoldHandler_C_UpdateCustomProgressMeter_Params params {};
		params.TextOnLeft = TextOnLeft;
		params.TextOnRight = TextOnRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.CompleteInteractHold
	 * 		Flags  -> ()
	 */
	void UBPI_InteractHoldHandler_C::CompleteInteractHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.CompleteInteractHold");
		
		UBPI_InteractHoldHandler_C_CompleteInteractHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.SetInteractHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InteractHoldHandler_C::SetInteractHoldProgress(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.SetInteractHoldProgress");
		
		UBPI_InteractHoldHandler_C_SetInteractHoldProgress_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.CancelInteractHold
	 * 		Flags  -> ()
	 */
	void UBPI_InteractHoldHandler_C::CancelInteractHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.CancelInteractHold");
		
		UBPI_InteractHoldHandler_C_CancelInteractHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.BeginInteractHold
	 * 		Flags  -> ()
	 */
	void UBPI_InteractHoldHandler_C::BeginInteractHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InteractHoldHandler.BPI_InteractHoldHandler_C.BeginInteractHold");
		
		UBPI_InteractHoldHandler_C_BeginInteractHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_InteractHoldHandler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_InteractHoldHandler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InteractHoldHandler.BPI_InteractHoldHandler_C");
		return ptr;
	}

}


