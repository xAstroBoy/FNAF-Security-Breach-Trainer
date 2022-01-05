/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Progressbar_TitleSkipUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.ResetProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Finished_5F0582474578FD27DE69FFBB7FD288BD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Finished_F03FC89C402E55C17B8ECF868B8FD07B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.SetHoldProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.CancelHold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Begin Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UProgressbar_TitleSkipUI_C::Begin_Hold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.Begin Hold");
		
		UProgressbar_TitleSkipUI_C_Begin_Hold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.CompleteHoldProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Progressbar_TitleSkipUI.Progressbar_TitleSkipUI_C.ExecuteUbergraph_Progressbar_TitleSkipUI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressbar_TitleSkipUI_C::ExecuteUbergraph_Progressbar_TitleSkipUI(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProgressbar_TitleSkipUI_C.StaticClass
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


