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
	 * 		Name   -> Function TurnWorldStatesActiveTrigger.TurnWorldStatesActiveTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void ATurnWorldStatesActiveTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnWorldStatesActiveTrigger.TurnWorldStatesActiveTrigger_C.OnTriggered");
		
		ATurnWorldStatesActiveTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TurnWorldStatesActiveTrigger.TurnWorldStatesActiveTrigger_C.ExecuteUbergraph_TurnWorldStatesActiveTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATurnWorldStatesActiveTrigger_C::ExecuteUbergraph_TurnWorldStatesActiveTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TurnWorldStatesActiveTrigger.TurnWorldStatesActiveTrigger_C.ExecuteUbergraph_TurnWorldStatesActiveTrigger");
		
		ATurnWorldStatesActiveTrigger_C_ExecuteUbergraph_TurnWorldStatesActiveTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATurnWorldStatesActiveTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATurnWorldStatesActiveTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TurnWorldStatesActiveTrigger.TurnWorldStatesActiveTrigger_C");
		return ptr;
	}

}


