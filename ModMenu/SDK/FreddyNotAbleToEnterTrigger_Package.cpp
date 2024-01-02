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
	 * 		Name   -> Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AFreddyNotAbleToEnterTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.OnTriggered");
		
		AFreddyNotAbleToEnterTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.ExecuteUbergraph_FreddyNotAbleToEnterTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyNotAbleToEnterTrigger_C::ExecuteUbergraph_FreddyNotAbleToEnterTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.ExecuteUbergraph_FreddyNotAbleToEnterTrigger");
		
		AFreddyNotAbleToEnterTrigger_C_ExecuteUbergraph_FreddyNotAbleToEnterTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyNotAbleToEnterTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyNotAbleToEnterTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C");
		return ptr;
	}

}


