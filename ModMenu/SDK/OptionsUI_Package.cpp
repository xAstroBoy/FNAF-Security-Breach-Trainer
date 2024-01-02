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
	 * 		Name   -> Function OptionsUI.OptionsUI_C.NavDown_FromColorblindIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::NavDown_FromColorblindIntensity(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.NavDown_FromColorblindIntensity");
		
		UOptionsUI_C_NavDown_FromColorblindIntensity_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.NavDown_FromTextureQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::NavDown_FromTextureQuality(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.NavDown_FromTextureQuality");
		
		UOptionsUI_C_NavDown_FromTextureQuality_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.NavDown_FromColorblind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::NavDown_FromColorblind(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.NavDown_FromColorblind");
		
		UOptionsUI_C_NavDown_FromColorblind_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.NavUp_FromCreditsButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::NavUp_FromCreditsButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.NavUp_FromCreditsButton");
		
		UOptionsUI_C_NavUp_FromCreditsButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.NavDown_FromStealthToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::NavDown_FromStealthToggle(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.NavDown_FromStealthToggle");
		
		UOptionsUI_C_NavDown_FromStealthToggle_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplySettings_ButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               AcceptChanges                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsUI_C::ApplySettings_ButtonPressed(const struct FKey& InputKey, bool* AcceptChanges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ApplySettings_ButtonPressed");
		
		UOptionsUI_C_ApplySettings_ButtonPressed_Params params {};
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AcceptChanges != nullptr)
			*AcceptChanges = params.AcceptChanges;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOptionsUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.OnPreviewKeyDown");
		
		UOptionsUI_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function OptionsUI.OptionsUI_C.FocusOnControlsMenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::FocusOnControlsMenuButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.FocusOnControlsMenuButton");
		
		UOptionsUI_C_FocusOnControlsMenuButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.FocusOnGeneralMenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::FocusOnGeneralMenuButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.FocusOnGeneralMenuButton");
		
		UOptionsUI_C_FocusOnGeneralMenuButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.FocusOnVideoMenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::FocusOnVideoMenuButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.FocusOnVideoMenuButton");
		
		UOptionsUI_C_FocusOnVideoMenuButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.FocusOnAudioMenuButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UOptionsUI_C::FocusOnAudioMenuButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.FocusOnAudioMenuButton");
		
		UOptionsUI_C_FocusOnAudioMenuButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.DLCSettings_Visibility
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::DLCSettings_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.DLCSettings_Visibility");
		
		UOptionsUI_C_DLCSettings_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplySettings_Video
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::ApplySettings_Video()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ApplySettings_Video");
		
		UOptionsUI_C_ApplySettings_Video_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplySettings_Audio
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::ApplySettings_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ApplySettings_Audio");
		
		UOptionsUI_C_ApplySettings_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplySettings_General
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::ApplySettings_General()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ApplySettings_General");
		
		UOptionsUI_C_ApplySettings_General_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.RestoreDefaults_Video
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::RestoreDefaults_Video()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.RestoreDefaults_Video");
		
		UOptionsUI_C_RestoreDefaults_Video_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.RestoreDefaults_Audio
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::RestoreDefaults_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.RestoreDefaults_Audio");
		
		UOptionsUI_C_RestoreDefaults_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.RestoreDefaults_General
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::RestoreDefaults_General()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.RestoreDefaults_General");
		
		UOptionsUI_C_RestoreDefaults_General_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.UpdateDescriptionPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InText1                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InText2                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsUI_C::UpdateDescriptionPanel(const class FText& InText, const class FText& InText1, const class FText& InText2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.UpdateDescriptionPanel");
		
		UOptionsUI_C_UpdateDescriptionPanel_Params params {};
		params.InText = InText;
		params.InText1 = InText1;
		params.InText2 = InText2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.UpdateSubtitles
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.SettingsVisibility_Platform
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get_BackgroundAndSkrim_Visibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UOptionsUI_C::Get_BackgroundAndSkrim_Visibility()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.StartingResolution
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get Severity Visibility
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::GetSeverityVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Get Severity Visibility");
		
		UOptionsUI_C_GetSeverityVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ShowMenuAndHighlightPrevious
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get_InvertedGamepad_CheckBox_CheckedState_1
	 * 		Flags  -> ()
	 */
	ECheckBoxState UOptionsUI_C::Get_InvertedGamepad_CheckBox_CheckedState_1()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Get_RaytracingCheckbox_CheckedState_1
	 * 		Flags  -> ()
	 */
	ECheckBoxState UOptionsUI_C::Get_RaytracingCheckbox_CheckedState_1()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.RestoreDefaults_ButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               RestorePressed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionsUI_C::RestoreDefaults_ButtonPressed(const struct FKey& InputPin, bool* RestorePressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.RestoreDefaults_ButtonPressed");
		
		UOptionsUI_C_RestoreDefaults_ButtonPressed_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RestorePressed != nullptr)
			*RestorePressed = params.RestorePressed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InuputNext
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputPrevious
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputClose
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputAccept
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputPrimary
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputSecondary
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputTertiary
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputMoveAxis
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputLookAxis
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputOptionAxis
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputOpen
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputZoom
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputCycle
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputDpadDirection
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Reset
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ConflictingActionMappingName                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature(const class FText& ConflictingActionMappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature_Params params {};
		params.ConflictingActionMappingName = ConflictingActionMappingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_Slidebar_C*                           SlideBar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature_Params params {};
		params.SlideBar = SlideBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_ComboBox_C*                           ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ShortDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        LongDescription                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature(const class FText& Title, const class FText& ShortDescription, const class FText& LongDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature_Params params {};
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
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTitle_CheckBox_C*                           CheckBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionsUI_C::BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature_Params params {};
		params.CheckBox = CheckBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Construct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.Load Settings
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::LoadSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.Load Settings");
		
		UOptionsUI_C_LoadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.PreConstruct
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.AcceptTextVisibility
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ResetColorBlind
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.SetResolution
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ContinueWithoutSaving
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.CloseConfirmationPrompt
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ChangesApplied
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplyVisualChangesThenRestart
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.WarningPopup
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.UpdateLocalizationInfo
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::UpdateLocalizationInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.UpdateLocalizationInfo");
		
		UOptionsUI_C_UpdateLocalizationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.InputBack
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ApplyChanges_Hotkey
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::ApplyChanges_Hotkey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.ApplyChanges_Hotkey");
		
		UOptionsUI_C_ApplyChanges_Hotkey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.RestoreDefaults_HotKey
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::RestoreDefaults_HotKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.RestoreDefaults_HotKey");
		
		UOptionsUI_C_RestoreDefaults_HotKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BackButtonPressed
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BackButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BackButtonPressed");
		
		UOptionsUI_C_BackButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature");
		
		UOptionsUI_C_BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionsUI_C::BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");
		
		UOptionsUI_C_BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionsUI.OptionsUI_C.ExecuteUbergraph_OptionsUI
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsUI_C.StaticClass
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


