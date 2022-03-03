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
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.CheckIfInUse
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        KeyToCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::CheckIfInUse(const struct FKey& KeyToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.CheckIfInUse");
		
		UWI_ButtonRemapping_C_CheckIfInUse_Params params {};
		params.KeyToCheck = KeyToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UWI_ButtonRemapping_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnFocusReceived");
		
		UWI_ButtonRemapping_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.SetOptionsControlsUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOptions_ControlsUI_C*                       ControlsUI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::SetOptionsControlsUI(class UOptions_ControlsUI_C* ControlsUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.SetOptionsControlsUI");
		
		UWI_ButtonRemapping_C_SetOptionsControlsUI_Params params {};
		params.ControlsUI = ControlsUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.Brush Style
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::Brush_Style()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.Brush Style");
		
		UWI_ButtonRemapping_C_Brush_Style_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Gamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Key1                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::UpdateIcon(bool Gamepad, bool Key1, const struct FKey& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateIcon");
		
		UWI_ButtonRemapping_C_UpdateIcon_Params params {};
		params.Gamepad = Gamepad;
		params.Key1 = Key1;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.Get_Key
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class URichTextBlock*                              RichText_Key                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::Get_Key(class URichTextBlock** RichText_Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.Get_Key");
		
		UWI_ButtonRemapping_C_Get_Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RichText_Key != nullptr)
			*RichText_Key = params.RichText_Key;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");
		
		UWI_ButtonRemapping_C_BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_ButtonRemapping_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.PreConstruct");
		
		UWI_ButtonRemapping_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateIconsFromSaved_BasedOnController
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsUsingGamepad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_ButtonRemapping_C::UpdateIconsFromSaved_BasedOnController(bool bIsUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateIconsFromSaved_BasedOnController");
		
		UWI_ButtonRemapping_C_UpdateIconsFromSaved_BasedOnController_Params params {};
		params.bIsUsingGamepad = bIsUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.Tick");
		
		UWI_ButtonRemapping_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWI_ButtonRemapping_C_BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.ResetToDefaultKeys
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::ResetToDefaultKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.ResetToDefaultKeys");
		
		UWI_ButtonRemapping_C_ResetToDefaultKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");
		
		UWI_ButtonRemapping_C_BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWI_ButtonRemapping_C_BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnFocusLost
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWI_ButtonRemapping_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnFocusLost");
		
		UWI_ButtonRemapping_C_OnFocusLost_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.Revert_ChangesNotSaved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::Revert_ChangesNotSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.Revert_ChangesNotSaved");
		
		UWI_ButtonRemapping_C_Revert_ChangesNotSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.SaveMappingsToInstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::SaveMappingsToInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.SaveMappingsToInstance");
		
		UWI_ButtonRemapping_C_SaveMappingsToInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.ForceHideImage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HideKey1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWI_ButtonRemapping_C::ForceHideImage(bool HideKey1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.ForceHideImage");
		
		UWI_ButtonRemapping_C_ForceHideImage_Params params {};
		params.HideKey1 = HideKey1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateFnafInstanceMappings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::UpdateFnafInstanceMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.UpdateFnafInstanceMappings");
		
		UWI_ButtonRemapping_C_UpdateFnafInstanceMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.RemoveSpecificBindings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        KeyToRemove                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::RemoveSpecificBindings(const struct FKey& KeyToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.RemoveSpecificBindings");
		
		UWI_ButtonRemapping_C_RemoveSpecificBindings_Params params {};
		params.KeyToRemove = KeyToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.ReapplyPreviousMappings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::ReapplyPreviousMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.ReapplyPreviousMappings");
		
		UWI_ButtonRemapping_C_ReapplyPreviousMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.ExecuteUbergraph_WI_ButtonRemapping
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_ButtonRemapping_C::ExecuteUbergraph_WI_ButtonRemapping(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.ExecuteUbergraph_WI_ButtonRemapping");
		
		UWI_ButtonRemapping_C_ExecuteUbergraph_WI_ButtonRemapping_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnHovered__DelegateSignature");
		
		UWI_ButtonRemapping_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWI_ButtonRemapping_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_ButtonRemapping.WI_ButtonRemapping_C.OnClicked__DelegateSignature");
		
		UWI_ButtonRemapping_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_ButtonRemapping_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_ButtonRemapping_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_ButtonRemapping.WI_ButtonRemapping_C");
		return ptr;
	}

}


