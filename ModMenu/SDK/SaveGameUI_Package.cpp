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
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.NewGameSlot_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Keys                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void USaveGameUI_C::NewGameSlot_Visibility(TArray<class FString>* Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.NewGameSlot_Visibility");
		
		USaveGameUI_C_NewGameSlot_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keys != nullptr)
			*Keys = params.Keys;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.SetupButtonStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USaveGameUI_C::SetupButtonStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.SetupButtonStyle");
		
		USaveGameUI_C_SetupButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USaveGameUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.PreConstruct");
		
		USaveGameUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void USaveGameUI_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.OnFocusLost");
		
		USaveGameUI_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USaveGameUI_C_BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USaveGameUI_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		USaveGameUI_C_BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__CurrentSlotButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__CurrentSlotButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__CurrentSlotButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		USaveGameUI_C_BndEvt__CurrentSlotButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		USaveGameUI_C_BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		USaveGameUI_C_BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		USaveGameUI_C_BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		USaveGameUI_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USaveGameUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.Construct");
		
		USaveGameUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BeginSave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USaveGameUI_C::BeginSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BeginSave");
		
		USaveGameUI_C_BeginSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.EndSave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USaveGameUI_C::EndSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.EndSave");
		
		USaveGameUI_C_EndSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		USaveGameUI_C_BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USaveGameUI_C::BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		USaveGameUI_C_BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.ShowConfirmationOverwriteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USaveGameUI_C::ShowConfirmationOverwriteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.ShowConfirmationOverwriteMenu");
		
		USaveGameUI_C_ShowConfirmationOverwriteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.BackButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USaveGameUI_C::BackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.BackButton");
		
		USaveGameUI_C_BackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.ExecuteUbergraph_SaveGameUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USaveGameUI_C::ExecuteUbergraph_SaveGameUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.ExecuteUbergraph_SaveGameUI");
		
		USaveGameUI_C_ExecuteUbergraph_SaveGameUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameUI.SaveGameUI_C.OnSaveGame__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USaveGameUI_C::OnSaveGame__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameUI.SaveGameUI_C.OnSaveGame__DelegateSignature");
		
		USaveGameUI_C_OnSaveGame__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USaveGameUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaveGameUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SaveGameUI.SaveGameUI_C");
		return ptr;
	}

}


