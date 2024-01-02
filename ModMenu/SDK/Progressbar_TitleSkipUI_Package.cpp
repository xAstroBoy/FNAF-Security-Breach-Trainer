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
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.ResetProgress
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::ResetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.ResetProgress");
		
		UProgressbar_TitleSkipUI_C_ResetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Finished_5F0582474578FD27DE69FFBB7FD288BD
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::Finished_5F0582474578FD27DE69FFBB7FD288BD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Finished_5F0582474578FD27DE69FFBB7FD288BD");
		
		UProgressbar_TitleSkipUI_C_Finished_5F0582474578FD27DE69FFBB7FD288BD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Finished_F03FC89C402E55C17B8ECF868B8FD07B
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::Finished_F03FC89C402E55C17B8ECF868B8FD07B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Finished_F03FC89C402E55C17B8ECF868B8FD07B");
		
		UProgressbar_TitleSkipUI_C_Finished_F03FC89C402E55C17B8ECF868B8FD07B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Construct");
		
		UProgressbar_TitleSkipUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.SetHoldProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressbar_TitleSkipUI_C::SetHoldProgress(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.SetHoldProgress");
		
		UProgressbar_TitleSkipUI_C_SetHoldProgress_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.CancelHold
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::CancelHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.CancelHold");
		
		UProgressbar_TitleSkipUI_C_CancelHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Begin Hold
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::BeginHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Begin Hold");
		
		UProgressbar_TitleSkipUI_C_BeginHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.CompleteHoldProgress
	 * 		Flags  -> ()
	 */
	void UProgressbar_TitleSkipUI_C::CompleteHoldProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.CompleteHoldProgress");
		
		UProgressbar_TitleSkipUI_C_CompleteHoldProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.ExecuteUbergraph_Progressbar_TitleSkipUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressbar_TitleSkipUI_C::ExecuteUbergraph_Progressbar_TitleSkipUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.ExecuteUbergraph_Progressbar_TitleSkipUI");
		
		UProgressbar_TitleSkipUI_C_ExecuteUbergraph_Progressbar_TitleSkipUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgressbar_TitleSkipUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressbar_TitleSkipUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C");
		return ptr;
	}

}


