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
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.SetValue");
		
		UTitle_Slidebar_C_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.UpdateText");
		
		UTitle_Slidebar_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.GetValue
	 * 		Flags  -> ()
	 */
	float UTitle_Slidebar_C::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.GetValue");
		
		UTitle_Slidebar_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.CheckIfValueIsAcceptable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::CheckIfValueIsAcceptable(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.CheckIfValueIsAcceptable");
		
		UTitle_Slidebar_C_CheckIfValueIsAcceptable_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.TextFormatOfSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UTitle_Slidebar_C::TextFormatOfSliderValue(class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.TextFormatOfSliderValue");
		
		UTitle_Slidebar_C_TextFormatOfSliderValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.GetTitleAndDescriptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Settings_Title                                             (Parm, OutParm)
	 * 		class FText                                        ShortDescription                                           (Parm, OutParm)
	 * 		class FText                                        LongDescription                                            (Parm, OutParm)
	 */
	void UTitle_Slidebar_C::GetTitleAndDescriptions(class FText* Settings_Title, class FText* ShortDescription, class FText* LongDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.GetTitleAndDescriptions");
		
		UTitle_Slidebar_C_GetTitleAndDescriptions_Params params {};
		
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
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.Pip_LostFocusAppearance
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::Pip_LostFocusAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.Pip_LostFocusAppearance");
		
		UTitle_Slidebar_C_Pip_LostFocusAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.Pip_HasFocus_Appearance
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::Pip_HasFocus_Appearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.Pip_HasFocus_Appearance");
		
		UTitle_Slidebar_C_Pip_HasFocus_Appearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.GetSliderPercentage_Text
	 * 		Flags  -> ()
	 */
	class FText UTitle_Slidebar_C::GetSliderPercentage_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.GetSliderPercentage_Text");
		
		UTitle_Slidebar_C_GetSliderPercentage_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.GetSliderProgress
	 * 		Flags  -> ()
	 */
	float UTitle_Slidebar_C::GetSliderProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.GetSliderProgress");
		
		UTitle_Slidebar_C_GetSliderProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InuputNext
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InuputNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InuputNext");
		
		UTitle_Slidebar_C_InuputNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputPrevious
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputPrevious");
		
		UTitle_Slidebar_C_InputPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputClose
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputClose");
		
		UTitle_Slidebar_C_InputClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputBack
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputBack");
		
		UTitle_Slidebar_C_InputBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputAccept
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputAccept");
		
		UTitle_Slidebar_C_InputAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputPrimary
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputPrimary");
		
		UTitle_Slidebar_C_InputPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputSecondary
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputSecondary");
		
		UTitle_Slidebar_C_InputSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputTertiary
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputTertiary");
		
		UTitle_Slidebar_C_InputTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputMoveAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::InputMoveAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputMoveAxis");
		
		UTitle_Slidebar_C_InputMoveAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputOptionAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::InputOptionAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputOptionAxis");
		
		UTitle_Slidebar_C_InputOptionAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputOpen
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::InputOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputOpen");
		
		UTitle_Slidebar_C_InputOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::InputZoom(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputZoom");
		
		UTitle_Slidebar_C_InputZoom_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputCycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::InputCycle(int32_t Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputCycle");
		
		UTitle_Slidebar_C_InputCycle_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputDpadDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::InputDpadDirection(const struct FVector2D& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputDpadDirection");
		
		UTitle_Slidebar_C_InputDpadDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.Reset
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.Reset");
		
		UTitle_Slidebar_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTitle_Slidebar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.PreConstruct");
		
		UTitle_Slidebar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.InputLookAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::InputLookAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.InputLookAxis");
		
		UTitle_Slidebar_C_InputLookAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTitle_Slidebar_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.OnAddedToFocusPath");
		
		UTitle_Slidebar_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UTitle_Slidebar_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.OnRemovedFromFocusPath");
		
		UTitle_Slidebar_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_114_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Button_114_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_114_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_114_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.Construct
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.Construct");
		
		UTitle_Slidebar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTitle_Slidebar_C::BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UTitle_Slidebar_C_BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.ExecuteUbergraph_Title_Slidebar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::ExecuteUbergraph_Title_Slidebar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.ExecuteUbergraph_Title_Slidebar");
		
		UTitle_Slidebar_C_ExecuteUbergraph_Title_Slidebar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTitle_Slidebar_C::FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.FocusReceived__DelegateSignature");
		
		UTitle_Slidebar_C_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Title_Slidebar.Title_Slidebar_C.SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTitle_Slidebar_C::SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Title_Slidebar.Title_Slidebar_C.SliderValueChanged__DelegateSignature");
		
		UTitle_Slidebar_C_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTitle_Slidebar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTitle_Slidebar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Title_Slidebar.Title_Slidebar_C");
		return ptr;
	}

}


