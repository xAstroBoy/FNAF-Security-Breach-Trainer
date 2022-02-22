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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.HighlightDownButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USeedSelectionUI_C::HighlightDownButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.HighlightDownButton");
		
		USeedSelectionUI_C_HighlightDownButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.HighlightUpButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USeedSelectionUI_C::HighlightUpButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.HighlightUpButton");
		
		USeedSelectionUI_C_HighlightUpButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.GetSeedInteger
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            SeedSingleInt                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeedSelectionUI_C::GetSeedInteger(int32_t* SeedSingleInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.GetSeedInteger");
		
		USeedSelectionUI_C_GetSeedInteger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeedSingleInt != nullptr)
			*SeedSingleInt = params.SeedSingleInt;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeedSelectionUI_C::BndEvt__Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USeedSelectionUI_C_BndEvt__Up_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeedSelectionUI_C::BndEvt__Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USeedSelectionUI_C_BndEvt__Down_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USeedSelectionUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.Construct");
		
		USeedSelectionUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.Randomize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USeedSelectionUI_C::Randomize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.Randomize");
		
		USeedSelectionUI_C_Randomize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Up_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeedSelectionUI_C::BndEvt__Up_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Up_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USeedSelectionUI_C_BndEvt__Up_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Down_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeedSelectionUI_C::BndEvt__Down_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Down_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		USeedSelectionUI_C_BndEvt__Down_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.Focus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USeedSelectionUI_C::Focus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.Focus");
		
		USeedSelectionUI_C_Focus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Down_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeedSelectionUI_C::BndEvt__Down_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Down_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		USeedSelectionUI_C_BndEvt__Down_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Up_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USeedSelectionUI_C::BndEvt__Up_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.BndEvt__Up_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		USeedSelectionUI_C_BndEvt__Up_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SeedSelectionUI.SeedSelectionUI_C.ExecuteUbergraph_SeedSelectionUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USeedSelectionUI_C::ExecuteUbergraph_SeedSelectionUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SeedSelectionUI.SeedSelectionUI_C.ExecuteUbergraph_SeedSelectionUI");
		
		USeedSelectionUI_C_ExecuteUbergraph_SeedSelectionUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USeedSelectionUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeedSelectionUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SeedSelectionUI.SeedSelectionUI_C");
		return ptr;
	}

}


