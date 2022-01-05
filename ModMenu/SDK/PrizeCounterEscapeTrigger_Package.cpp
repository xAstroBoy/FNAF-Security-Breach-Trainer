/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PrizeCounterEscapeTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APrizeCounterEscapeTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ReceiveBeginPlay");
		
		APrizeCounterEscapeTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APrizeCounterEscapeTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnTriggered");
		
		APrizeCounterEscapeTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Sequence Done
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APrizeCounterEscapeTrigger_C::On_Sequence_Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Sequence Done");
		
		APrizeCounterEscapeTrigger_C_On_Sequence_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Debug Skip
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void APrizeCounterEscapeTrigger_C::On_Debug_Skip(TArray<class FName>* SkippedTasks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Debug Skip");
		
		APrizeCounterEscapeTrigger_C_On_Debug_Skip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkippedTasks != nullptr)
			*SkippedTasks = params.SkippedTasks;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ExecuteUbergraph_PrizeCounterEscapeTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrizeCounterEscapeTrigger_C::ExecuteUbergraph_PrizeCounterEscapeTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ExecuteUbergraph_PrizeCounterEscapeTrigger");
		
		APrizeCounterEscapeTrigger_C_ExecuteUbergraph_PrizeCounterEscapeTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrizeCounterEscapeTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeCounterEscapeTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C");
		return ptr;
	}

}


