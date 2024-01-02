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
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.Navigation_RightArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTitle_ComboBox_C::Navigation_RightArrow(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.Navigation_RightArrow");
		
		UTitle_ComboBox_C_Navigation_RightArrow_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.Navigation_LeftArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UTitle_ComboBox_C::Navigation_LeftArrow(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.Navigation_LeftArrow");
		
		UTitle_ComboBox_C_Navigation_LeftArrow_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.ShowProofOfFocus
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::ShowProofOfFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.ShowProofOfFocus");
		
		UTitle_ComboBox_C_ShowProofOfFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.GetTitleAndDescriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Settings_Title                                             (Parm, OutParm)
	 * 		class FText                                        ShortDescription                                           (Parm, OutParm)
	 * 		class FText                                        LongDescription                                            (Parm, OutParm)
	 */
	void UTitle_ComboBox_C::GetTitleAndDescriptions(class FText* Settings_Title, class FText* ShortDescription, class FText* LongDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.GetTitleAndDescriptions");
		
		UTitle_ComboBox_C_GetTitleAndDescriptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings_Title != nullptr)
			*Settings_Title = params.Settings_Title;
		if (ShortDescription != nullptr)
			*ShortDescription = params.ShortDescription;
		if (LongDescription != nullptr)
			*LongDescription = params.LongDescription;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UTitle_ComboBox_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.OnPreviewKeyDown");
		
		UTitle_ComboBox_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UTitle_ComboBox_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.OnFocusReceived");
		
		UTitle_ComboBox_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.CycleThroughComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::CycleThroughComboBox(int32_t Next)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.CycleThroughComboBox");
		
		UTitle_ComboBox_C_CycleThroughComboBox_Params params {};
		params.Next = Next;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.HasFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::HasFocus(class UButton* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.HasFocus");
		
		UTitle_ComboBox_C_HasFocus_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.ApplyChanges
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::ApplyChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.ApplyChanges");
		
		UTitle_ComboBox_C_ApplyChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.SetToDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideDefault                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OverrideValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::SetToDefault(bool OverrideDefault, int32_t OverrideValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.SetToDefault");
		
		UTitle_ComboBox_C_SetToDefault_Params params {};
		params.OverrideDefault = OverrideDefault;
		params.OverrideValue = OverrideValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_ComboBox_C_BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_ComboBox_C_BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.StartingValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::StartingValue(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.StartingValue");
		
		UTitle_ComboBox_C_StartingValue_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UTitle_ComboBox_C_BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UTitle_ComboBox_C_BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitle_ComboBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.PreConstruct");
		
		UTitle_ComboBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.Tick");
		
		UTitle_ComboBox_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTitle_ComboBox_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.OnRemovedFromFocusPath");
		
		UTitle_ComboBox_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.Nav_RightArrow
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::Nav_RightArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.Nav_RightArrow");
		
		UTitle_ComboBox_C_Nav_RightArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.Nav_LeftArrow
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::Nav_LeftArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.Nav_LeftArrow");
		
		UTitle_ComboBox_C_Nav_LeftArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTitle_ComboBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.OnAddedToFocusPath");
		
		UTitle_ComboBox_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.ExecuteUbergraph_Title_ComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::ExecuteUbergraph_Title_ComboBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.ExecuteUbergraph_Title_ComboBox");
		
		UTitle_ComboBox_C_ExecuteUbergraph_Title_ComboBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_ComboBox_C::FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.FocusReceived__DelegateSignature");
		
		UTitle_ComboBox_C_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.ArrowKeyPressed__DelegateSignature");
		
		UTitle_ComboBox_C_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_ComboBox.Title_ComboBox_C.ChangesApplied__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_ComboBox_C::ChangesApplied__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_ComboBox.Title_ComboBox_C.ChangesApplied__DelegateSignature");
		
		UTitle_ComboBox_C_ChangesApplied__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitle_ComboBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_ComboBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Title_ComboBox.Title_ComboBox_C");
		return ptr;
	}

}


