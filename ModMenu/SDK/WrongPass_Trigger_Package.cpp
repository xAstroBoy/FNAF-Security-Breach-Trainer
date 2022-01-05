/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "WrongPass_Trigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WrongPass_Trigger.WrongPass_Trigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWrongPass_Trigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WrongPass_Trigger.WrongPass_Trigger_C.OnTriggered");
		
		AWrongPass_Trigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WrongPass_Trigger.WrongPass_Trigger_C.ExecuteUbergraph_WrongPass_Trigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWrongPass_Trigger_C::ExecuteUbergraph_WrongPass_Trigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WrongPass_Trigger.WrongPass_Trigger_C.ExecuteUbergraph_WrongPass_Trigger");
		
		AWrongPass_Trigger_C_ExecuteUbergraph_WrongPass_Trigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AWrongPass_Trigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWrongPass_Trigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WrongPass_Trigger.WrongPass_Trigger_C");
		return ptr;
	}

}


