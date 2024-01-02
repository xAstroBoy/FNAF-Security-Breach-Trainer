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
	 * 		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.CanTrigger
	 * 		Flags  -> ()
	 */
	bool AMainExitMissionTrigger_C::CanTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.CanTrigger");
		
		AMainExitMissionTrigger_C_CanTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainExitMissionTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.ReceiveBeginPlay");
		
		AMainExitMissionTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AMainExitMissionTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.OnTriggered");
		
		AMainExitMissionTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainExitMissionTrigger.MainExitMissionTrigger_C.ExecuteUbergraph_MainExitMissionTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainExitMissionTrigger_C::ExecuteUbergraph_MainExitMissionTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainExitMissionTrigger.MainExitMissionTrigger_C.ExecuteUbergraph_MainExitMissionTrigger");
		
		AMainExitMissionTrigger_C_ExecuteUbergraph_MainExitMissionTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainExitMissionTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainExitMissionTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainExitMissionTrigger.MainExitMissionTrigger_C");
		return ptr;
	}

}


