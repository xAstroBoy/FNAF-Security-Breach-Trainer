/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FreddyNotAbleToEnterTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FreddyNotAbleToEnterTrigger.FreddyNotAbleToEnterTrigger_C.ExecuteUbergraph_FreddyNotAbleToEnterTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyNotAbleToEnterTrigger_C::ExecuteUbergraph_FreddyNotAbleToEnterTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddyNotAbleToEnterTrigger_C.StaticClass
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


