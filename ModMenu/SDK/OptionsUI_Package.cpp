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
	 * 		Name   -> Function OptionsUI.OptionsUI_C.UpdateSubtitles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::UpdateSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.UpdateSubtitles");
		
		UOptionsUI_C_UpdateSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.SettingsVisibility_Platform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::SettingsVisibility_Platform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.SettingsVisibility_Platform");
		
		UOptionsUI_C_SettingsVisibility_Platform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get_BackgroundAndSkrim_Visibility
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UOptionsUI_C::Get_BackgroundAndSkrim_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Get_BackgroundAndSkrim_Visibility");
		
		UOptionsUI_C_Get_BackgroundAndSkrim_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.StartingResolution
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntPoint                                   Resolution                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::StartingResolution(const struct FIntPoint& Resolution, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.StartingResolution");
		
		UOptionsUI_C_StartingResolution_Params params {};
		params.Resolution = Resolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get Severity Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::Get_Severity_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Get Severity Visibility");
		
		UOptionsUI_C_Get_Severity_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ShowMenuAndHighlightPrevious
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::ShowMenuAndHighlightPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ShowMenuAndHighlightPrevious");
		
		UOptionsUI_C_ShowMenuAndHighlightPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get_InvertedGamepad_CheckBox_CheckedState_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	SlateCore_ECheckBoxState UOptionsUI_C::Get_InvertedGamepad_CheckBox_CheckedState_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Get_InvertedGamepad_CheckBox_CheckedState_1");
		
		UOptionsUI_C_Get_InvertedGamepad_CheckBox_CheckedState_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get_RaytracingCheckbox_CheckedState_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	SlateCore_ECheckBoxState UOptionsUI_C::Get_RaytracingCheckbox_CheckedState_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Get_RaytracingCheckbox_CheckedState_1");
		
		UOptionsUI_C_Get_RaytracingCheckbox_CheckedState_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InuputNext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InuputNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InuputNext");
		
		UOptionsUI_C_InuputNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputPrevious
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputPrevious");
		
		UOptionsUI_C_InputPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputClose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputClose");
		
		UOptionsUI_C_InputClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputBack");
		
		UOptionsUI_C_InputBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputAccept
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputAccept");
		
		UOptionsUI_C_InputAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputPrimary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputPrimary");
		
		UOptionsUI_C_InputPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputSecondary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputSecondary");
		
		UOptionsUI_C_InputSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputTertiary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputTertiary");
		
		UOptionsUI_C_InputTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputMoveAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::InputMoveAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputMoveAxis");
		
		UOptionsUI_C_InputMoveAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputLookAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::InputLookAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputLookAxis");
		
		UOptionsUI_C_InputLookAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputOptionAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::InputOptionAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputOptionAxis");
		
		UOptionsUI_C_InputOptionAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::InputOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputOpen");
		
		UOptionsUI_C_InputOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputZoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::InputZoom(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputZoom");
		
		UOptionsUI_C_InputZoom_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputCycle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::InputCycle(int32_t Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputCycle");
		
		UOptionsUI_C_InputCycle_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputDpadDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::InputDpadDirection(const struct FVector2D& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.InputDpadDirection");
		
		UOptionsUI_C_InputDpadDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Reset");
		
		UOptionsUI_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UOptionsUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Construct");
		
		UOptionsUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Load Settings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::Load_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Load Settings");
		
		UOptionsUI_C_Load_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.PreConstruct");
		
		UOptionsUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.AcceptTextVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::AcceptTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.AcceptTextVisibility");
		
		UOptionsUI_C_AcceptTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UOptionsUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ResetColorBlind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::ResetColorBlind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ResetColorBlind");
		
		UOptionsUI_C_ResetColorBlind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.SetResolution
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::SetResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.SetResolution");
		
		UOptionsUI_C_SetResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ContinueWithoutSaving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::ContinueWithoutSaving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ContinueWithoutSaving");
		
		UOptionsUI_C_ContinueWithoutSaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.CloseConfirmationPrompt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::CloseConfirmationPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.CloseConfirmationPrompt");
		
		UOptionsUI_C_CloseConfirmationPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionsUI_C::BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ChangesApplied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::ChangesApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ChangesApplied");
		
		UOptionsUI_C_ChangesApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplyVisualChangesThenRestart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::ApplyVisualChangesThenRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ApplyVisualChangesThenRestart");
		
		UOptionsUI_C_ApplyVisualChangesThenRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.WarningPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOptionsUI_C::WarningPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.WarningPopup");
		
		UOptionsUI_C_WarningPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ExecuteUbergraph_OptionsUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::ExecuteUbergraph_OptionsUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ExecuteUbergraph_OptionsUI");
		
		UOptionsUI_C_ExecuteUbergraph_OptionsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOptionsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsUI.OptionsUI_C");
		return ptr;
	}

}


