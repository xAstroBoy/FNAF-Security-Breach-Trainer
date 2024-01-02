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
	 * 		Name   -> Function DebugUI.DebugUI_C.UpdateChecksVisibility
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::UpdateChecksVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.UpdateChecksVisibility");
		
		UDebugUI_C_UpdateChecksVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.DebugApplyDLSSQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFVisualQualityLevel                            Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugUI_C::DebugApplyDLSSQuality(EFNAFVisualQualityLevel Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.DebugApplyDLSSQuality");
		
		UDebugUI_C_DebugApplyDLSSQuality_Params params {};
		params.Quality = Quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.TimeFloatToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UDebugUI_C::TimeFloatToText(float InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.TimeFloatToText");
		
		UDebugUI_C_TimeFloatToText_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.TimeTextToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	float UDebugUI_C::TimeTextToFloat(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.TimeTextToFloat");
		
		UDebugUI_C_TimeTextToFloat_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.OnFocusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UDebugUI_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.OnFocusReceived");
		
		UDebugUI_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function DebugUI.DebugUI_C.Get_FlyingSpeed_Value_1
	 * 		Flags  -> ()
	 */
	float UDebugUI_C::Get_FlyingSpeed_Value_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Get_FlyingSpeed_Value_1");
		
		UDebugUI_C_Get_FlyingSpeed_Value_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.PreConstruct");
		
		UDebugUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Construct");
		
		UDebugUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugUI_C::BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugUI_C::BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.FocusButton
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::FocusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.FocusButton");
		
		UDebugUI_C_FocusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.UpdateQualityLevelText
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::UpdateQualityLevelText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.UpdateQualityLevelText");
		
		UDebugUI_C_UpdateQualityLevelText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");
		
		UDebugUI_C_BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.Tick");
		
		UDebugUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugUI_C::BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");
		
		UDebugUI_C_BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugUI.DebugUI_C.ExecuteUbergraph_DebugUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugUI_C::ExecuteUbergraph_DebugUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugUI.DebugUI_C.ExecuteUbergraph_DebugUI");
		
		UDebugUI_C_ExecuteUbergraph_DebugUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugUI.DebugUI_C");
		return ptr;
	}

}


