/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEnableFreddyCallTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.OnTriggered");
		
		AEnableFreddyCallTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEnableFreddyCallTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.ReceiveBeginPlay");
		
		AEnableFreddyCallTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.ExecuteUbergraph_EnableFreddyCallTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnableFreddyCallTrigger_C::ExecuteUbergraph_EnableFreddyCallTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnableFreddyCallTrigger.EnableFreddyCallTrigger_C.ExecuteUbergraph_EnableFreddyCallTrigger");
		
		AEnableFreddyCallTrigger_C_ExecuteUbergraph_EnableFreddyCallTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEnableFreddyCallTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnableFreddyCallTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnableFreddyCallTrigger.EnableFreddyCallTrigger_C");
		return ptr;
	}

}


