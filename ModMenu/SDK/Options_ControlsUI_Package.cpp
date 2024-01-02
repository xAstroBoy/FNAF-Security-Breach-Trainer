/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.AccessibilityMappingsVisibility
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::AccessibilityMappingsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.AccessibilityMappingsVisibility");
		
		UOptions_ControlsUI_C_AccessibilityMappingsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.AssignOptionsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOptionsUI_C*                                MainOptionsMenu                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::AssignOptionsMenu(class UOptionsUI_C* MainOptionsMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.AssignOptionsMenu");
		
		UOptions_ControlsUI_C_AssignOptionsMenu_Params params {};
		params.MainOptionsMenu = MainOptionsMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.RemoveSpecificBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWI_ButtonRemapping_C*>               Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UOptions_ControlsUI_C::RemoveSpecificBinding(TArray<class UWI_ButtonRemapping_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.RemoveSpecificBinding");
		
		UOptions_ControlsUI_C_RemoveSpecificBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.GetAllMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EKeyBindingsEnum                                   KeyBindingType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UWI_ButtonRemapping_C*>               Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UOptions_ControlsUI_C::GetAllMappings(EKeyBindingsEnum KeyBindingType, TArray<class UWI_ButtonRemapping_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.GetAllMappings");
		
		UOptions_ControlsUI_C_GetAllMappings_Params params {};
		params.KeyBindingType = KeyBindingType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.GetConflictingActionMappingName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (Parm, OutParm)
	 */
	void UOptions_ControlsUI_C::GetConflictingActionMappingName(class FText* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.GetConflictingActionMappingName");
		
		UOptions_ControlsUI_C_GetConflictingActionMappingName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.OnPreviewKeyDown
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.GetAllKeys
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Set References
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USaveGameSettings_C*                         SaveGameObjext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SettingsName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::SetReferences(class USaveGameSettings_C* SaveGameObjext, const class FString& SettingsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.Set References");
		
		UOptions_ControlsUI_C_SetReferences_Params params {};
		params.SaveGameObjext = SaveGameObjext;
		params.SettingsName = SettingsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Get_VerticalInvert
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.SetSavedValues
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.Construct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.PreConstruct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.RevertChangedValues
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.UpdateIcons
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::UpdateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.UpdateIcons");
		
		UOptions_ControlsUI_C_UpdateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ReapplySavedMappings
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::ReapplySavedMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.ReapplySavedMappings");
		
		UOptions_ControlsUI_C_ReapplySavedMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ConfirmKeyRebindingPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionToRemoveBindingFrom                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInputChord                                 KeyToRebind                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UOptions_ControlsUI_C::ConfirmKeyRebindingPrompt(const class FName& ActionToRemoveBindingFrom, const struct FInputChord& KeyToRebind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.ConfirmKeyRebindingPrompt");
		
		UOptions_ControlsUI_C_ConfirmKeyRebindingPrompt_Params params {};
		params.ActionToRemoveBindingFrom = ActionToRemoveBindingFrom;
		params.KeyToRebind = KeyToRebind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ApplyChanges_Controls
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::ApplyChanges_Controls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.ApplyChanges_Controls");
		
		UOptions_ControlsUI_C_ApplyChanges_Controls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.RestoreDefaults_Controls
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::RestoreDefaults_Controls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.RestoreDefaults_Controls");
		
		UOptions_ControlsUI_C_RestoreDefaults_Controls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature");
		
		UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ConfirmRebinding
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::ConfirmRebinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.ConfirmRebinding");
		
		UOptions_ControlsUI_C_ConfirmRebinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.CancelRebinding
	 * 		Flags  -> ()
	 */
	void UOptions_ControlsUI_C::CancelRebinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.CancelRebinding");
		
		UOptions_ControlsUI_C_CancelRebinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ToggleIsRemapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CurrentlyRemappingButton                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptions_ControlsUI_C::ToggleIsRemapping(bool CurrentlyRemappingButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.ToggleIsRemapping");
		
		UOptions_ControlsUI_C_ToggleIsRemapping_Params params {};
		params.CurrentlyRemappingButton = CurrentlyRemappingButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.ExecuteUbergraph_Options_ControlsUI
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.PassKeyBindingInfo__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ConflictingActionMappingName                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptions_ControlsUI_C::PassKeyBindingInfo__DelegateSignature(const class FText& ConflictingActionMappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.PassKeyBindingInfo__DelegateSignature");
		
		UOptions_ControlsUI_C_PassKeyBindingInfo__DelegateSignature_Params params {};
		params.ConflictingActionMappingName = ConflictingActionMappingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Options_ControlsUI.Options_ControlsUI_C.PassDescriptionsOver__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ShortDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        LongDescription                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptions_ControlsUI_C::PassDescriptionsOver__DelegateSignature(const class FText& Title, const class FText& ShortDescription, const class FText& LongDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Options_ControlsUI.Options_ControlsUI_C.PassDescriptionsOver__DelegateSignature");
		
		UOptions_ControlsUI_C_PassDescriptionsOver__DelegateSignature_Params params {};
		params.Title = Title;
		params.ShortDescription = ShortDescription;
		params.LongDescription = LongDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptions_ControlsUI_C.StaticClass
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


