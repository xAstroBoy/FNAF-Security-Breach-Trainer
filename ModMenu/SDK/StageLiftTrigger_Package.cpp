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
	 * 		Name   -> Function StageLiftTrigger.StageLiftTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AStageLiftTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageLiftTrigger.StageLiftTrigger_C.OnTriggered");
		
		AStageLiftTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StageLiftTrigger.StageLiftTrigger_C.ExecuteUbergraph_StageLiftTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageLiftTrigger_C::ExecuteUbergraph_StageLiftTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageLiftTrigger.StageLiftTrigger_C.ExecuteUbergraph_StageLiftTrigger");
		
		AStageLiftTrigger_C_ExecuteUbergraph_StageLiftTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStageLiftTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStageLiftTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StageLiftTrigger.StageLiftTrigger_C");
		return ptr;
	}

}


