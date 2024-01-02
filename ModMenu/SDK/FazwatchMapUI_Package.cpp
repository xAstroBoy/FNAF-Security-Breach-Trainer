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
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.UpdateFloorButtonStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FloorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::UpdateFloorButtonStyle(int32_t FloorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.UpdateFloorButtonStyle");
		
		UFazwatchMapUI_C_UpdateFloorButtonStyle_Params params {};
		params.FloorIndex = FloorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UFazwatchMapUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.OnPreviewKeyDown");
		
		UFazwatchMapUI_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.DoCustomNavigation_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UFazwatchMapUI_C::DoCustomNavigation_2(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.DoCustomNavigation_2");
		
		UFazwatchMapUI_C_DoCustomNavigation_2_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.DoCustomNavigation_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UFazwatchMapUI_C::DoCustomNavigation_1(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.DoCustomNavigation_1");
		
		UFazwatchMapUI_C_DoCustomNavigation_1_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.ChargeStationPositionsForCurrentFloor
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::ChargeStationPositionsForCurrentFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.ChargeStationPositionsForCurrentFloor");
		
		UFazwatchMapUI_C_ChargeStationPositionsForCurrentFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.FloorButtonUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FloorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::FloorButtonUsed(int32_t FloorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.FloorButtonUsed");
		
		UFazwatchMapUI_C_FloorButtonUsed_Params params {};
		params.FloorIndex = FloorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.SetActiveButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              YValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::SetActiveButton(float YValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.SetActiveButton");
		
		UFazwatchMapUI_C_SetActiveButton_Params params {};
		params.YValue = YValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InuputNext
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InuputNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InuputNext");
		
		UFazwatchMapUI_C_InuputNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputPrevious
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputPrevious");
		
		UFazwatchMapUI_C_InputPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputClose
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputClose");
		
		UFazwatchMapUI_C_InputClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputPrimary
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputPrimary");
		
		UFazwatchMapUI_C_InputPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputSecondary
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputSecondary");
		
		UFazwatchMapUI_C_InputSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputTertiary
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputTertiary");
		
		UFazwatchMapUI_C_InputTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputMoveAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::InputMoveAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputMoveAxis");
		
		UFazwatchMapUI_C_InputMoveAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputLookAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::InputLookAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputLookAxis");
		
		UFazwatchMapUI_C_InputLookAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputOpen
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputOpen");
		
		UFazwatchMapUI_C_InputOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::InputZoom(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputZoom");
		
		UFazwatchMapUI_C_InputZoom_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputCycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::InputCycle(int32_t Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputCycle");
		
		UFazwatchMapUI_C_InputCycle_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputDpadDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::InputDpadDirection(const struct FVector2D& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputDpadDirection");
		
		UFazwatchMapUI_C_InputDpadDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.Reset
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.Reset");
		
		UFazwatchMapUI_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor1Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__Floor1Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor1Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__Floor1Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__MainFloorButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__MainFloorButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__MainFloorButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__MainFloorButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.Construct");
		
		UFazwatchMapUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__Floor2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__Floor2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor3Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__Floor3Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor3Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__Floor3Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__FloorB1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__FloorB1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__FloorB1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__FloorB1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__FloorB2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__FloorB2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__FloorB2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__FloorB2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputOptionAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::InputOptionAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputOptionAxis");
		
		UFazwatchMapUI_C_InputOptionAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputAccept
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputAccept");
		
		UFazwatchMapUI_C_InputAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.UpdateSecurityLevel
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::UpdateSecurityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.UpdateSecurityLevel");
		
		UFazwatchMapUI_C_UpdateSecurityLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor4Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__Floor4Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor4Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__Floor4Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__LegendButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::BndEvt__LegendButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__LegendButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UFazwatchMapUI_C_BndEvt__LegendButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFazwatchMapUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.PreConstruct");
		
		UFazwatchMapUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.SetPlayerPos
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::SetPlayerPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.SetPlayerPos");
		
		UFazwatchMapUI_C_SetPlayerPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.UpdateFromFazwatch
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::UpdateFromFazwatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.UpdateFromFazwatch");
		
		UFazwatchMapUI_C_UpdateFromFazwatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.PositionChargeStationIcons
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::PositionChargeStationIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.PositionChargeStationIcons");
		
		UFazwatchMapUI_C_PositionChargeStationIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.HideAllChargeStations
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::HideAllChargeStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.HideAllChargeStations");
		
		UFazwatchMapUI_C_HideAllChargeStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.PositionFreddyIcon
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::PositionFreddyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.PositionFreddyIcon");
		
		UFazwatchMapUI_C_PositionFreddyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.HideAllIcons
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::HideAllIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.HideAllIcons");
		
		UFazwatchMapUI_C_HideAllIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.InputBack
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::InputBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.InputBack");
		
		UFazwatchMapUI_C_InputBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.Tick");
		
		UFazwatchMapUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.SetFloorButtonFocus
	 * 		Flags  -> ()
	 */
	void UFazwatchMapUI_C::SetFloorButtonFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.SetFloorButtonFocus");
		
		UFazwatchMapUI_C_SetFloorButtonFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FazwatchMapUI.FazwatchMapUI_C.ExecuteUbergraph_FazwatchMapUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFazwatchMapUI_C::ExecuteUbergraph_FazwatchMapUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FazwatchMapUI.FazwatchMapUI_C.ExecuteUbergraph_FazwatchMapUI");
		
		UFazwatchMapUI_C_ExecuteUbergraph_FazwatchMapUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFazwatchMapUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFazwatchMapUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FazwatchMapUI.FazwatchMapUI_C");
		return ptr;
	}

}


