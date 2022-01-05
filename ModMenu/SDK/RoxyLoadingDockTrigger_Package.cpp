/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "RoxyLoadingDockTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARoxyLoadingDockTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C.OnTriggered");
		
		ARoxyLoadingDockTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C.ExecuteUbergraph_RoxyLoadingDockTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARoxyLoadingDockTrigger_C::ExecuteUbergraph_RoxyLoadingDockTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C.ExecuteUbergraph_RoxyLoadingDockTrigger");
		
		ARoxyLoadingDockTrigger_C_ExecuteUbergraph_RoxyLoadingDockTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ARoxyLoadingDockTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARoxyLoadingDockTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C");
		return ptr;
	}

}


