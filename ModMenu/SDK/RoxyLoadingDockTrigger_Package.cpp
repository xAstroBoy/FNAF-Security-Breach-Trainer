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
	 * 		Name   -> Function RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C.OnTriggered
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RoxyLoadingDockTrigger.RoxyLoadingDockTrigger_C.ExecuteUbergraph_RoxyLoadingDockTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARoxyLoadingDockTrigger_C::ExecuteUbergraph_RoxyLoadingDockTrigger(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARoxyLoadingDockTrigger_C.StaticClass
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


