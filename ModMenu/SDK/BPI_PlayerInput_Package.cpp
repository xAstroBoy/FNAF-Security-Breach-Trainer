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
	 * 		Name   -> Function BPI_PlayerInput.BPI_PlayerInput_C.GetIsPlaySequenceRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSequenceRunning                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerInput_C::GetIsPlaySequenceRunning(bool* IsSequenceRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerInput.BPI_PlayerInput_C.GetIsPlaySequenceRunning");
		
		UBPI_PlayerInput_C_GetIsPlaySequenceRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSequenceRunning != nullptr)
			*IsSequenceRunning = params.IsSequenceRunning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerInput.BPI_PlayerInput_C.SetIsPlaySequenceRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerInput_C::SetIsPlaySequenceRunning(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerInput.BPI_PlayerInput_C.SetIsPlaySequenceRunning");
		
		UBPI_PlayerInput_C_SetIsPlaySequenceRunning_Params params {};
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerInput.BPI_PlayerInput_C.SetEnabledInputFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputFlags                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerInput_C::SetEnabledInputFlags(int32_t InputFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerInput.BPI_PlayerInput_C.SetEnabledInputFlags");
		
		UBPI_PlayerInput_C_SetEnabledInputFlags_Params params {};
		params.InputFlags = InputFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerInput.BPI_PlayerInput_C.EnableAllInputs
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerInput_C::EnableAllInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerInput.BPI_PlayerInput_C.EnableAllInputs");
		
		UBPI_PlayerInput_C_EnableAllInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerInput_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerInput.BPI_PlayerInput_C");
		return ptr;
	}

}


