/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "TwoPlansTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATwoPlansTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.ReceiveBeginPlay");
		
		ATwoPlansTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATwoPlansTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.OnTriggered");
		
		ATwoPlansTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.On Skip
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ATwoPlansTrigger_C::On_Skip(TArray<class FName>* SkippedTasks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.On Skip");
		
		ATwoPlansTrigger_C_On_Skip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkippedTasks != nullptr)
			*SkippedTasks = params.SkippedTasks;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.ManualTrigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATwoPlansTrigger_C::ManualTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.ManualTrigger");
		
		ATwoPlansTrigger_C_ManualTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function TwoPlansTrigger.TwoPlansTrigger_C.ExecuteUbergraph_TwoPlansTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATwoPlansTrigger_C::ExecuteUbergraph_TwoPlansTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwoPlansTrigger.TwoPlansTrigger_C.ExecuteUbergraph_TwoPlansTrigger");
		
		ATwoPlansTrigger_C_ExecuteUbergraph_TwoPlansTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwoPlansTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwoPlansTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TwoPlansTrigger.TwoPlansTrigger_C");
		return ptr;
	}

}


