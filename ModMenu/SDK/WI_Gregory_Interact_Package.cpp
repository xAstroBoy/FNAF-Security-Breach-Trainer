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
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.ResetProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::ResetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.ResetProgress");
		
		UWI_Gregory_Interact_C_ResetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.Finished_14C2955D47EE629A29DEA3AFFD3B0A65
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::Finished_14C2955D47EE629A29DEA3AFFD3B0A65()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.Finished_14C2955D47EE629A29DEA3AFFD3B0A65");
		
		UWI_Gregory_Interact_C_Finished_14C2955D47EE629A29DEA3AFFD3B0A65_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.Finished_E114602A44520B0855F0399A350581ED
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::Finished_E114602A44520B0855F0399A350581ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.Finished_E114602A44520B0855F0399A350581ED");
		
		UWI_Gregory_Interact_C_Finished_E114602A44520B0855F0399A350581ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.CancelHold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::CancelHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.CancelHold");
		
		UWI_Gregory_Interact_C_CancelHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.Begin Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::Begin_Hold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.Begin Hold");
		
		UWI_Gregory_Interact_C_Begin_Hold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.CompleteHoldProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::CompleteHoldProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.CompleteHoldProgress");
		
		UWI_Gregory_Interact_C_CompleteHoldProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.SetHoldProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Interact_C::SetHoldProgress(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.SetHoldProgress");
		
		UWI_Gregory_Interact_C_SetHoldProgress_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWI_Gregory_Interact_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.Construct");
		
		UWI_Gregory_Interact_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.ExecuteUbergraph_WI_Gregory_Interact
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Interact_C::ExecuteUbergraph_WI_Gregory_Interact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.ExecuteUbergraph_WI_Gregory_Interact");
		
		UWI_Gregory_Interact_C_ExecuteUbergraph_WI_Gregory_Interact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_Gregory_Interact.WI_Gregory_Interact_C.PowerLevelDispatch__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PowerLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_Interact_C::PowerLevelDispatch__DelegateSignature(int32_t PowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_Interact.WI_Gregory_Interact_C.PowerLevelDispatch__DelegateSignature");
		
		UWI_Gregory_Interact_C_PowerLevelDispatch__DelegateSignature_Params params {};
		params.PowerLevel = PowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Gregory_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Gregory_Interact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Gregory_Interact.WI_Gregory_Interact_C");
		return ptr;
	}

}


