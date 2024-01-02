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
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.ToggleCallToActionVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleButtonCustom_C::ToggleCallToActionVisibility(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.ToggleCallToActionVisibility");
		
		UTitleButtonCustom_C_ToggleCallToActionVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UTitleButtonCustom_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.OnFocusReceived");
		
		UTitleButtonCustom_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.SwitchTextStyle_OnFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleButtonCustom_C::SwitchTextStyle_OnFocus(bool HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.SwitchTextStyle_OnFocus");
		
		UTitleButtonCustom_C_SwitchTextStyle_OnFocus_Params params {};
		params.HasFocus = HasFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.SwitchButtonStyle_OnFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleButtonCustom_C::SwitchButtonStyle_OnFocus(bool HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.SwitchButtonStyle_OnFocus");
		
		UTitleButtonCustom_C_SwitchButtonStyle_OnFocus_Params params {};
		params.HasFocus = HasFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.Set Display
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleButtonCustom_C::SetDisplay(const class FText& DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.Set Display");
		
		UTitleButtonCustom_C_SetDisplay_Params params {};
		params.DisplayText = DisplayText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UTitleButtonCustom_C_BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.SetButtonStyle
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::SetButtonStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.SetButtonStyle");
		
		UTitleButtonCustom_C_SetButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.SetTextBlockStyle
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::SetTextBlockStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.SetTextBlockStyle");
		
		UTitleButtonCustom_C_SetTextBlockStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UTitleButtonCustom_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTitleButtonCustom_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.OnAddedToFocusPath");
		
		UTitleButtonCustom_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTitleButtonCustom_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.OnRemovedFromFocusPath");
		
		UTitleButtonCustom_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitleButtonCustom_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.PreConstruct");
		
		UTitleButtonCustom_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTitleButtonCustom_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.ExecuteUbergraph_TitleButtonCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitleButtonCustom_C::ExecuteUbergraph_TitleButtonCustom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.ExecuteUbergraph_TitleButtonCustom");
		
		UTitleButtonCustom_C_ExecuteUbergraph_TitleButtonCustom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.ButtonLostUserFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::ButtonLostUserFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.ButtonLostUserFocus__DelegateSignature");
		
		UTitleButtonCustom_C_ButtonLostUserFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.ButtonReceivedUserFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::ButtonReceivedUserFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.ButtonReceivedUserFocus__DelegateSignature");
		
		UTitleButtonCustom_C_ButtonReceivedUserFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.GetDescriptionFromButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTitleButtonCustom_C::GetDescriptionFromButton__DelegateSignature(const class FText& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.GetDescriptionFromButton__DelegateSignature");
		
		UTitleButtonCustom_C_GetDescriptionFromButton__DelegateSignature_Params params {};
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.OnHovered__DelegateSignature");
		
		UTitleButtonCustom_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TitleButtonCustom.TitleButtonCustom_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitleButtonCustom_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TitleButtonCustom.TitleButtonCustom_C.OnClicked__DelegateSignature");
		
		UTitleButtonCustom_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitleButtonCustom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitleButtonCustom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TitleButtonCustom.TitleButtonCustom_C");
		return ptr;
	}

}


