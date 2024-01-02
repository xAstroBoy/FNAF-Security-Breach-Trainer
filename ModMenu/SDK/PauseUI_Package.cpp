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
	 * 		Name   -> Function PauseUI.PauseUI_C.GetFocusButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::GetFocusButton(class UButton** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.GetFocusButton");
		
		UPauseUI_C_GetFocusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.GetMainGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UPauseUI_C::GetMainGoal(class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.GetMainGoal");
		
		UPauseUI_C_GetMainGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.GetDLCObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Main                                                       (Parm, OutParm)
	 * 		class FText                                        Secondary                                                  (Parm, OutParm)
	 */
	void UPauseUI_C::GetDLCObjectives(class FText* Main, class FText* Secondary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.GetDLCObjectives");
		
		UPauseUI_C_GetDLCObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Main != nullptr)
			*Main = params.Main;
		if (Secondary != nullptr)
			*Secondary = params.Secondary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.AttemptToClosePopUps
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::AttemptToClosePopUps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.AttemptToClosePopUps");
		
		UPauseUI_C_AttemptToClosePopUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.AreExitPopUpsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPauseUI_C::AreExitPopUpsVisible(bool* visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.AreExitPopUpsVisible");
		
		UPauseUI_C_AreExitPopUpsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (visible != nullptr)
			*visible = params.visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.UpdateDLCObjectives
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::UpdateDLCObjectives()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.UpdateDLCObjectives");
		
		UPauseUI_C_UpdateDLCObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.ShowLastItemCollected
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::ShowLastItemCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.ShowLastItemCollected");
		
		UPauseUI_C_ShowLastItemCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.SetItemCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemCategory                             Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::SetItemCategory(EInventoryItemCategory Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.SetItemCategory");
		
		UPauseUI_C_SetItemCategory_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPauseUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.OnPreviewKeyDown");
		
		UPauseUI_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function PauseUI.PauseUI_C.InuputNext
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InuputNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InuputNext");
		
		UPauseUI_C_InuputNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputPrevious
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputPrevious");
		
		UPauseUI_C_InputPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputClose
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputClose");
		
		UPauseUI_C_InputClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputAccept
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputAccept");
		
		UPauseUI_C_InputAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputPrimary
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputPrimary");
		
		UPauseUI_C_InputPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputSecondary
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputSecondary");
		
		UPauseUI_C_InputSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputTertiary
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputTertiary");
		
		UPauseUI_C_InputTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputMoveAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::InputMoveAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputMoveAxis");
		
		UPauseUI_C_InputMoveAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputLookAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::InputLookAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputLookAxis");
		
		UPauseUI_C_InputLookAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputOptionAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::InputOptionAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputOptionAxis");
		
		UPauseUI_C_InputOptionAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputOpen
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputOpen");
		
		UPauseUI_C_InputOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::InputZoom(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputZoom");
		
		UPauseUI_C_InputZoom_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputCycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::InputCycle(int32_t Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputCycle");
		
		UPauseUI_C_InputCycle_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputDpadDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::InputDpadDirection(const struct FVector2D& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputDpadDirection");
		
		UPauseUI_C_InputDpadDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.Reset
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.Reset");
		
		UPauseUI_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.Tick");
		
		UPauseUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPauseUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.PreConstruct");
		
		UPauseUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.InputBack
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::InputBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.InputBack");
		
		UPauseUI_C_InputBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.OptionsBackButton
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::OptionsBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.OptionsBackButton");
		
		UPauseUI_C_OptionsBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__InventoryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.AcceptTextVisibility
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::AcceptTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.AcceptTextVisibility");
		
		UPauseUI_C_AcceptTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UPauseUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UPauseUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.PlayerClickedQuit
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::PlayerClickedQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.PlayerClickedQuit");
		
		UPauseUI_C_PlayerClickedQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature");
		
		UPauseUI_C_BndEvt__ExitToTitlePopUp_K2Node_ComponentBoundEvent_8_BackButton_Exit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature");
		
		UPauseUI_C_BndEvt__ExitPopUp_K2Node_ComponentBoundEvent_3_Exit_BackedOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__ExitGameButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.OpenInventoryMenu
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::OpenInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.OpenInventoryMenu");
		
		UPauseUI_C_OpenInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.UpdateLastItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFInventoryTableStruct                   ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPauseUI_C::UpdateLastItem(const struct FFNAFInventoryTableStruct& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.UpdateLastItem");
		
		UPauseUI_C_UpdateLastItem_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.GoToLastItemCollected
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::GoToLastItemCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.GoToLastItemCollected");
		
		UPauseUI_C_GoToLastItemCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.Construct");
		
		UPauseUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature");
		
		UPauseUI_C_BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UPauseUI_C_BndEvt__PauseUI_OptionsStickyButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.GamePadBackButtonUnpause
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::GamePadBackButtonUnpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.GamePadBackButtonUnpause");
		
		UPauseUI_C_GamePadBackButtonUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.ExecuteUbergraph_PauseUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPauseUI_C::ExecuteUbergraph_PauseUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.ExecuteUbergraph_PauseUI");
		
		UPauseUI_C_ExecuteUbergraph_PauseUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PauseUI.PauseUI_C.ResumeClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPauseUI_C::ResumeClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseUI.PauseUI_C.ResumeClicked__DelegateSignature");
		
		UPauseUI_C_ResumeClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPauseUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPauseUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PauseUI.PauseUI_C");
		return ptr;
	}

}


