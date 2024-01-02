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
	 * 		Name   -> Function BrokenFreddy_Trigger.BrokenFreddy_Trigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void ABrokenFreddy_Trigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrokenFreddy_Trigger.BrokenFreddy_Trigger_C.OnTriggered");
		
		ABrokenFreddy_Trigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BrokenFreddy_Trigger.BrokenFreddy_Trigger_C.ExecuteUbergraph_BrokenFreddy_Trigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABrokenFreddy_Trigger_C::ExecuteUbergraph_BrokenFreddy_Trigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrokenFreddy_Trigger.BrokenFreddy_Trigger_C.ExecuteUbergraph_BrokenFreddy_Trigger");
		
		ABrokenFreddy_Trigger_C_ExecuteUbergraph_BrokenFreddy_Trigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABrokenFreddy_Trigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABrokenFreddy_Trigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrokenFreddy_Trigger.BrokenFreddy_Trigger_C");
		return ptr;
	}

}


