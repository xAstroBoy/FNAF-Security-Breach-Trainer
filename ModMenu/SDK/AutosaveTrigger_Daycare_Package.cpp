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
	 * 		Name   -> Function AutosaveTrigger_Daycare.AutosaveTrigger_Daycare_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AAutosaveTrigger_Daycare_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutosaveTrigger_Daycare.AutosaveTrigger_Daycare_C.OnTriggered");
		
		AAutosaveTrigger_Daycare_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AutosaveTrigger_Daycare.AutosaveTrigger_Daycare_C.ExecuteUbergraph_AutosaveTrigger_Daycare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAutosaveTrigger_Daycare_C::ExecuteUbergraph_AutosaveTrigger_Daycare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutosaveTrigger_Daycare.AutosaveTrigger_Daycare_C.ExecuteUbergraph_AutosaveTrigger_Daycare");
		
		AAutosaveTrigger_Daycare_C_ExecuteUbergraph_AutosaveTrigger_Daycare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAutosaveTrigger_Daycare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAutosaveTrigger_Daycare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AutosaveTrigger_Daycare.AutosaveTrigger_Daycare_C");
		return ptr;
	}

}


