/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "ExitPrizeCounterGame_Trigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AExitPrizeCounterGame_Trigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C.ReceiveBeginPlay");
		
		AExitPrizeCounterGame_Trigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AExitPrizeCounterGame_Trigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C.OnTriggered");
		
		AExitPrizeCounterGame_Trigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C.ExecuteUbergraph_ExitPrizeCounterGame_Trigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExitPrizeCounterGame_Trigger_C::ExecuteUbergraph_ExitPrizeCounterGame_Trigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C.ExecuteUbergraph_ExitPrizeCounterGame_Trigger");
		
		AExitPrizeCounterGame_Trigger_C_ExecuteUbergraph_ExitPrizeCounterGame_Trigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AExitPrizeCounterGame_Trigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExitPrizeCounterGame_Trigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExitPrizeCounterGame_Trigger.ExitPrizeCounterGame_Trigger_C");
		return ptr;
	}

}


