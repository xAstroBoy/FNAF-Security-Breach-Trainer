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
	 * 		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.SetupWorldCue
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIHideWorldCue_C::SetupWorldCue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.SetupWorldCue");
		
		AAIHideWorldCue_C_SetupWorldCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.ResetWorldCue
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIHideWorldCue_C::ResetWorldCue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.ResetWorldCue");
		
		AAIHideWorldCue_C_ResetWorldCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAIHideWorldCue_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.ReceiveBeginPlay");
		
		AAIHideWorldCue_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function AIHideWorldCue.AIHideWorldCue_C.ExecuteUbergraph_AIHideWorldCue
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIHideWorldCue_C::ExecuteUbergraph_AIHideWorldCue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIHideWorldCue.AIHideWorldCue_C.ExecuteUbergraph_AIHideWorldCue");
		
		AAIHideWorldCue_C_ExecuteUbergraph_AIHideWorldCue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAIHideWorldCue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIHideWorldCue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIHideWorldCue.AIHideWorldCue_C");
		return ptr;
	}

}


