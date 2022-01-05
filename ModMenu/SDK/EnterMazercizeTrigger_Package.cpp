/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EnterMazercizeTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEnterMazercizeTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.OnTriggered");
		
		AEnterMazercizeTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.ExecuteUbergraph_EnterMazercizeTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnterMazercizeTrigger_C::ExecuteUbergraph_EnterMazercizeTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnterMazercizeTrigger.EnterMazercizeTrigger_C.ExecuteUbergraph_EnterMazercizeTrigger");
		
		AEnterMazercizeTrigger_C_ExecuteUbergraph_EnterMazercizeTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEnterMazercizeTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnterMazercizeTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnterMazercizeTrigger.EnterMazercizeTrigger_C");
		return ptr;
	}

}


