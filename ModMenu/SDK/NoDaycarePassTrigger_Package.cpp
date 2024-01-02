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
	 * 		Name   -> Function NoDaycarePassTrigger.NoDaycarePassTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void ANoDaycarePassTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoDaycarePassTrigger.NoDaycarePassTrigger_C.OnTriggered");
		
		ANoDaycarePassTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NoDaycarePassTrigger.NoDaycarePassTrigger_C.ExecuteUbergraph_NoDaycarePassTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANoDaycarePassTrigger_C::ExecuteUbergraph_NoDaycarePassTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NoDaycarePassTrigger.NoDaycarePassTrigger_C.ExecuteUbergraph_NoDaycarePassTrigger");
		
		ANoDaycarePassTrigger_C_ExecuteUbergraph_NoDaycarePassTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANoDaycarePassTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANoDaycarePassTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NoDaycarePassTrigger.NoDaycarePassTrigger_C");
		return ptr;
	}

}


