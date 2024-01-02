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
	 * 		Name   -> Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AInsideStageLiftTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.OnTriggered");
		
		AInsideStageLiftTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.ExecuteUbergraph_InsideStageLiftTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInsideStageLiftTrigger_C::ExecuteUbergraph_InsideStageLiftTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InsideStageLiftTrigger.InsideStageLiftTrigger_C.ExecuteUbergraph_InsideStageLiftTrigger");
		
		AInsideStageLiftTrigger_C_ExecuteUbergraph_InsideStageLiftTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInsideStageLiftTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInsideStageLiftTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InsideStageLiftTrigger.InsideStageLiftTrigger_C");
		return ptr;
	}

}


