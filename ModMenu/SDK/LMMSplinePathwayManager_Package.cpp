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
	 * 		Name   -> Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.OnTriggerPointHit
	 * 		Flags  -> ()
	 */
	void ALMMSplinePathwayManager_C::OnTriggerPointHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.OnTriggerPointHit");
		
		ALMMSplinePathwayManager_C_OnTriggerPointHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.Event_OnSplineEndReached
	 * 		Flags  -> ()
	 */
	void ALMMSplinePathwayManager_C::Event_OnSplineEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.Event_OnSplineEndReached");
		
		ALMMSplinePathwayManager_C_Event_OnSplineEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.ExecuteUbergraph_LMMSplinePathwayManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMMSplinePathwayManager_C::ExecuteUbergraph_LMMSplinePathwayManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMMSplinePathwayManager.LMMSplinePathwayManager_C.ExecuteUbergraph_LMMSplinePathwayManager");
		
		ALMMSplinePathwayManager_C_ExecuteUbergraph_LMMSplinePathwayManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALMMSplinePathwayManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALMMSplinePathwayManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LMMSplinePathwayManager.LMMSplinePathwayManager_C");
		return ptr;
	}

}


