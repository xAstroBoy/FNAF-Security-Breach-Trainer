/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "StageLiftTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StageLiftTrigger.StageLiftTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function StageLiftTrigger.StageLiftTrigger_C.ExecuteUbergraph_StageLiftTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStageLiftTrigger_C::ExecuteUbergraph_StageLiftTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStageLiftTrigger_C.StaticClass
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


