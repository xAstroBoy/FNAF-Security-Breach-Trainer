/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C.TriggerJump
	 * 		Flags  -> ()
	 */
	void UBPI_FirstPersonCharacter_C::TriggerJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C.TriggerJump");
		
		UBPI_FirstPersonCharacter_C_TriggerJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C.GetWalkingFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FOV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_FirstPersonCharacter_C::GetWalkingFOV(float* FOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C.GetWalkingFOV");
		
		UBPI_FirstPersonCharacter_C_GetWalkingFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FOV != nullptr)
			*FOV = params.FOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_FirstPersonCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_FirstPersonCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_FirstPersonCharacter.BPI_FirstPersonCharacter_C");
		return ptr;
	}

}


