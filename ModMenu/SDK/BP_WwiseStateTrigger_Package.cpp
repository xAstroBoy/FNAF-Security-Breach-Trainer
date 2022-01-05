/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BP_WwiseStateTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_WwiseStateTrigger.BP_WwiseStateTrigger_C.ExecuteUbergraph_BP_WwiseStateTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WwiseStateTrigger_C::ExecuteUbergraph_BP_WwiseStateTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_WwiseStateTrigger_C.StaticClass
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


