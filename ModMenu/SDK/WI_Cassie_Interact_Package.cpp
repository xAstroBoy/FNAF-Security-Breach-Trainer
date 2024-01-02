/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.ResetProgressWheel
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::ResetProgressWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.ResetProgressWheel");
		
		UWI_Cassie_Interact_C_ResetProgressWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.UpdateInstructions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Textonleft                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Textonright                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWI_Cassie_Interact_C::UpdateInstructions(const class FText& Textonleft, const class FText& Textonright)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.UpdateInstructions");
		
		UWI_Cassie_Interact_C_UpdateInstructions_Params params {};
		params.Textonleft = Textonleft;
		params.Textonright = Textonright;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.ResetProgress
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::ResetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.ResetProgress");
		
		UWI_Cassie_Interact_C_ResetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.Finished_546B18CF4B1E2CE316BAF1A35B183B5C
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::Finished_546B18CF4B1E2CE316BAF1A35B183B5C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.Finished_546B18CF4B1E2CE316BAF1A35B183B5C");
		
		UWI_Cassie_Interact_C_Finished_546B18CF4B1E2CE316BAF1A35B183B5C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.Construct
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.Construct");
		
		UWI_Cassie_Interact_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.SetHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Cassie_Interact_C::SetHoldProgress(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.SetHoldProgress");
		
		UWI_Cassie_Interact_C_SetHoldProgress_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.CancelHold
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::CancelHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.CancelHold");
		
		UWI_Cassie_Interact_C_CancelHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.Begin Hold
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::BeginHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.Begin Hold");
		
		UWI_Cassie_Interact_C_BeginHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.CompleteHoldProgress
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::CompleteHoldProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.CompleteHoldProgress");
		
		UWI_Cassie_Interact_C_CompleteHoldProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.StopFeedback
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::StopFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.StopFeedback");
		
		UWI_Cassie_Interact_C_StopFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.ClearHoldUI
	 * 		Flags  -> ()
	 */
	void UWI_Cassie_Interact_C::ClearHoldUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.ClearHoldUI");
		
		UWI_Cassie_Interact_C_ClearHoldUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.ExecuteUbergraph_WI_Cassie_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Cassie_Interact_C::ExecuteUbergraph_WI_Cassie_Interact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.ExecuteUbergraph_WI_Cassie_Interact");
		
		UWI_Cassie_Interact_C_ExecuteUbergraph_WI_Cassie_Interact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Cassie_Interact.WI_Cassie_Interact_C.PowerLevelDispatch__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PowerLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Cassie_Interact_C::PowerLevelDispatch__DelegateSignature(int32_t PowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Cassie_Interact.WI_Cassie_Interact_C.PowerLevelDispatch__DelegateSignature");
		
		UWI_Cassie_Interact_C_PowerLevelDispatch__DelegateSignature_Params params {};
		params.PowerLevel = PowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_Cassie_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Cassie_Interact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Cassie_Interact.WI_Cassie_Interact_C");
		return ptr;
	}

}


