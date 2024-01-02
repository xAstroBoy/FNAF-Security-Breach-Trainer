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
	 * 		Name   -> Function FreddyBackstageMoveTrigger.FreddyBackstageMoveTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AFreddyBackstageMoveTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyBackstageMoveTrigger.FreddyBackstageMoveTrigger_C.OnTriggered");
		
		AFreddyBackstageMoveTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyBackstageMoveTrigger.FreddyBackstageMoveTrigger_C.ExecuteUbergraph_FreddyBackstageMoveTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyBackstageMoveTrigger_C::ExecuteUbergraph_FreddyBackstageMoveTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyBackstageMoveTrigger.FreddyBackstageMoveTrigger_C.ExecuteUbergraph_FreddyBackstageMoveTrigger");
		
		AFreddyBackstageMoveTrigger_C_ExecuteUbergraph_FreddyBackstageMoveTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyBackstageMoveTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyBackstageMoveTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyBackstageMoveTrigger.FreddyBackstageMoveTrigger_C");
		return ptr;
	}

}


