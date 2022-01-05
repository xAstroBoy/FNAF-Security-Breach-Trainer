/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "NoDaycarePassTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function NoDaycarePassTrigger.NoDaycarePassTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function NoDaycarePassTrigger.NoDaycarePassTrigger_C.ExecuteUbergraph_NoDaycarePassTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANoDaycarePassTrigger_C::ExecuteUbergraph_NoDaycarePassTrigger(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANoDaycarePassTrigger_C.StaticClass
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


