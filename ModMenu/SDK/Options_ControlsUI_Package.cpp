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
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptions_ControlsUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.OnPreviewKeyDown");
		
		UOptions_ControlsUI_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.GetAllKeys
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::GetAllKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.GetAllKeys");
		
		UOptions_ControlsUI_C_GetAllKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Set References
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USaveGameSettings_C*                         SaveGameObjext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SettingsName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::Set_References(class USaveGameSettings_C* SaveGameObjext, const class FString& SettingsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.Set References");
		
		UOptions_ControlsUI_C_Set_References_Params params {};
		params.SaveGameObjext = SaveGameObjext;
		params.SettingsName = SettingsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Get_VerticalInvert
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::Get_VerticalInvert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.Get_VerticalInvert");
		
		UOptions_ControlsUI_C_Get_VerticalInvert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Invert_Y_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__Invert_Y_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Invert_Y_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Invert_Y_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.Construct");
		
		UOptions_ControlsUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_ControlsUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.PreConstruct");
		
		UOptions_ControlsUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__SprintToggle_ComboBox_1_K2Node_ComponentBoundEvent_4_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__SprintToggle_ComboBox_1_K2Node_ComponentBoundEvent_4_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__SprintToggle_ComboBox_1_K2Node_ComponentBoundEvent_4_ArrowKeyPressed__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__SprintToggle_ComboBox_1_K2Node_ComponentBoundEvent_4_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.SetSavedValues
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::SetSavedValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.SetSavedValues");
		
		UOptions_ControlsUI_C_SetSavedValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.RevertChangedValues
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::RevertChangedValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.RevertChangedValues");
		
		UOptions_ControlsUI_C_RevertChangedValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::BndEvt__ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Updateicons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptions_ControlsUI_C::Updateicons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.Updateicons");
		
		UOptions_ControlsUI_C_Updateicons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ExecuteUbergraph_Options_ControlsUI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::ExecuteUbergraph_Options_ControlsUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.ExecuteUbergraph_Options_ControlsUI");
		
		UOptions_ControlsUI_C_ExecuteUbergraph_Options_ControlsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOptions_ControlsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptions_ControlsUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Options_ControlsUI.Options_ControlsUI_C");
		return ptr;
	}

}


