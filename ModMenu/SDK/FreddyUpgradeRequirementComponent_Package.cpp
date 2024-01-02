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
	 * 		Name   -> Function FreddyUpgradeRequirementComponent.FreddyUpgradeRequirementComponent_C.HasMetConditions
	 * 		Flags  -> ()
	 */
	bool UFreddyUpgradeRequirementComponent_C::HasMetConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyUpgradeRequirementComponent.FreddyUpgradeRequirementComponent_C.HasMetConditions");
		
		UFreddyUpgradeRequirementComponent_C_HasMetConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFreddyUpgradeRequirementComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFreddyUpgradeRequirementComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyUpgradeRequirementComponent.FreddyUpgradeRequirementComponent_C");
		return ptr;
	}

}


