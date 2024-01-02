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
	 * 		Name   -> Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void ABP_WwiseStateTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.OnTriggered");
		
		ABP_WwiseStateTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.ExecuteUbergraph_BP_WwiseStateTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WwiseStateTrigger_C::ExecuteUbergraph_BP_WwiseStateTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.ExecuteUbergraph_BP_WwiseStateTrigger");
		
		ABP_WwiseStateTrigger_C_ExecuteUbergraph_BP_WwiseStateTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WwiseStateTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WwiseStateTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WwiseStateTrigger.BP_WwiseStateTrigger_C");
		return ptr;
	}

}


