﻿/**
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
	 * 		Name   -> Function InvertControlsUI.InvertControlsUI_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInvertControlsUI_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UInvertControlsUI_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InvertControlsUI.InvertControlsUI_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInvertControlsUI_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UInvertControlsUI_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InvertControlsUI.InvertControlsUI_C.ExecuteUbergraph_InvertControlsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInvertControlsUI_C::ExecuteUbergraph_InvertControlsUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.ExecuteUbergraph_InvertControlsUI");
		
		UInvertControlsUI_C_ExecuteUbergraph_InvertControlsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InvertControlsUI.InvertControlsUI_C.OnOptionSelected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInvertControlsUI_C::OnOptionSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InvertControlsUI.InvertControlsUI_C.OnOptionSelected__DelegateSignature");
		
		UInvertControlsUI_C_OnOptionSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInvertControlsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInvertControlsUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InvertControlsUI.InvertControlsUI_C");
		return ptr;
	}

}


