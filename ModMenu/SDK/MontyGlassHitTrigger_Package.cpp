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
	 * 		Name   -> Function MontyGlassHitTrigger.MontyGlassHitTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AMontyGlassHitTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MontyGlassHitTrigger.MontyGlassHitTrigger_C.OnTriggered");
		
		AMontyGlassHitTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MontyGlassHitTrigger.MontyGlassHitTrigger_C.ExecuteUbergraph_MontyGlassHitTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMontyGlassHitTrigger_C::ExecuteUbergraph_MontyGlassHitTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MontyGlassHitTrigger.MontyGlassHitTrigger_C.ExecuteUbergraph_MontyGlassHitTrigger");
		
		AMontyGlassHitTrigger_C_ExecuteUbergraph_MontyGlassHitTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMontyGlassHitTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMontyGlassHitTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MontyGlassHitTrigger.MontyGlassHitTrigger_C");
		return ptr;
	}

}


