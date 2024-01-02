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
	 * 		Name   -> Function AutosaveTrigger.AutosaveTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AAutosaveTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutosaveTrigger.AutosaveTrigger_C.OnTriggered");
		
		AAutosaveTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutosaveTrigger.AutosaveTrigger_C.ExecuteUbergraph_AutosaveTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAutosaveTrigger_C::ExecuteUbergraph_AutosaveTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutosaveTrigger.AutosaveTrigger_C.ExecuteUbergraph_AutosaveTrigger");
		
		AAutosaveTrigger_C_ExecuteUbergraph_AutosaveTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAutosaveTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAutosaveTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AutosaveTrigger.AutosaveTrigger_C");
		return ptr;
	}

}


