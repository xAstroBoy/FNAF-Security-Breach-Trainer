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
	 * 		Name   -> Function RestoreFreddyMovementComponent.RestoreFreddyMovementComponent_C.RestoreFreddyMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseFreddyAI                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URestoreFreddyMovementComponent_C::RestoreFreddyMovement(bool UseFreddyAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RestoreFreddyMovementComponent.RestoreFreddyMovementComponent_C.RestoreFreddyMovement");
		
		URestoreFreddyMovementComponent_C_RestoreFreddyMovement_Params params {};
		params.UseFreddyAI = UseFreddyAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URestoreFreddyMovementComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URestoreFreddyMovementComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RestoreFreddyMovementComponent.RestoreFreddyMovementComponent_C");
		return ptr;
	}

}


