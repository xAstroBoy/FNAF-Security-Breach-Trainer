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
	 * 		Name   -> Function ButtonRemapping_BPI.ButtonRemapping_BPI_C.ToggleIsRemapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CurrentlyRemappingButton                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UButtonRemapping_BPI_C::ToggleIsRemapping(bool CurrentlyRemappingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ButtonRemapping_BPI.ButtonRemapping_BPI_C.ToggleIsRemapping");
		
		UButtonRemapping_BPI_C_ToggleIsRemapping_Params params {};
		params.CurrentlyRemappingButton = CurrentlyRemappingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UButtonRemapping_BPI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonRemapping_BPI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ButtonRemapping_BPI.ButtonRemapping_BPI_C");
		return ptr;
	}

}


