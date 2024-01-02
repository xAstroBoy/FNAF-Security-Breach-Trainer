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
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetCrouchToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrouchToggle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetCrouchToggle(bool* CrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetCrouchToggle");
		
		UFNAFGameInstance_C_GetCrouchToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchToggle != nullptr)
			*CrouchToggle = params.CrouchToggle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetHelpiBlurbTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetHelpiBlurbTime(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetHelpiBlurbTime");
		
		UFNAFGameInstance_C_GetHelpiBlurbTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetShowInstructionCards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowInstructionCards                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetShowInstructionCards(bool* ShowInstructionCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetShowInstructionCards");
		
		UFNAFGameInstance_C_GetShowInstructionCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowInstructionCards != nullptr)
			*ShowInstructionCards = params.ShowInstructionCards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetStealthToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowStealthIcon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetStealthToggle(bool* ShowStealthIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetStealthToggle");
		
		UFNAFGameInstance_C_GetStealthToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStealthIcon != nullptr)
			*ShowStealthIcon = params.ShowStealthIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetSprintToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeyboardSprintToggle                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               GamepadSprintToggle                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetSprintToggles(bool* KeyboardSprintToggle, bool* GamepadSprintToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetSprintToggles");
		
		UFNAFGameInstance_C_GetSprintToggles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyboardSprintToggle != nullptr)
			*KeyboardSprintToggle = params.KeyboardSprintToggle;
		if (GamepadSprintToggle != nullptr)
			*GamepadSprintToggle = params.GamepadSprintToggle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.UpdateSprintAndStealthToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Keyboard_Sprint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Gamepad_Sprint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CrouchIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CrouchToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::UpdateSprintAndStealthToggles(bool Keyboard_Sprint, bool Gamepad_Sprint, bool CrouchIcon, bool CrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.UpdateSprintAndStealthToggles");
		
		UFNAFGameInstance_C_UpdateSprintAndStealthToggles_Params params {};
		params.Keyboard_Sprint = Keyboard_Sprint;
		params.Gamepad_Sprint = Gamepad_Sprint;
		params.CrouchIcon = CrouchIcon;
		params.CrouchToggle = CrouchToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIfSkipSystemUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               outUsed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIfSkipSystemUsed(bool* outUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIfSkipSystemUsed");
		
		UFNAFGameInstance_C_GetIfSkipSystemUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outUsed != nullptr)
			*outUsed = params.outUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetTempHapticFeedbackIntensityMultiplier
	 * 		Flags  -> ()
	 */
	float UFNAFGameInstance_C::GetTempHapticFeedbackIntensityMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetTempHapticFeedbackIntensityMultiplier");
		
		UFNAFGameInstance_C_GetTempHapticFeedbackIntensityMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetHapticFeedbackIntensityMultiplier
	 * 		Flags  -> ()
	 */
	float UFNAFGameInstance_C::GetHapticFeedbackIntensityMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetHapticFeedbackIntensityMultiplier");
		
		UFNAFGameInstance_C_GetHapticFeedbackIntensityMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetSpawnAllSurvivalPackages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SpawnAll                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetSpawnAllSurvivalPackages(bool* SpawnAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetSpawnAllSurvivalPackages");
		
		UFNAFGameInstance_C_GetSpawnAllSurvivalPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnAll != nullptr)
			*SpawnAll = params.SpawnAll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetShowSurvivalPackages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetShowSurvivalPackages(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetShowSurvivalPackages");
		
		UFNAFGameInstance_C_GetShowSurvivalPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetGameType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameType                                      GameType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetGameType(EFNAFGameType* GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetGameType");
		
		UFNAFGameInstance_C_GetGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameType != nullptr)
			*GameType = params.GameType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyRuinGlobalVideoSettingsOverrides
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::ApplyRuinGlobalVideoSettingsOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyRuinGlobalVideoSettingsOverrides");
		
		UFNAFGameInstance_C_ApplyRuinGlobalVideoSettingsOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyRuinRTXOverrides
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::ApplyRuinRTXOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyRuinRTXOverrides");
		
		UFNAFGameInstance_C_ApplyRuinRTXOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.IsVolumetricFogAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFVisualQualitySettings                  FNAFVisualQualitySettings                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		EFNAFVisualQualityLevel                            VisualQuality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGXboxPlatform                                   XboxSpecific                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGPlatform                                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::IsVolumetricFogAllowed(const struct FFNAFVisualQualitySettings& FNAFVisualQualitySettings, EFNAFVisualQualityLevel VisualQuality, ESWGXboxPlatform XboxSpecific, ESWGPlatform Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.IsVolumetricFogAllowed");
		
		UFNAFGameInstance_C_IsVolumetricFogAllowed_Params params {};
		params.FNAFVisualQualitySettings = FNAFVisualQualitySettings;
		params.VisualQuality = VisualQuality;
		params.XboxSpecific = XboxSpecific;
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ToggleStealthIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StealthIndicatorToggle                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::ToggleStealthIndicator(bool StealthIndicatorToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ToggleStealthIndicator");
		
		UFNAFGameInstance_C_ToggleStealthIndicator_Params params {};
		params.StealthIndicatorToggle = StealthIndicatorToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ToggleGamepadSprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SprintToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::ToggleGamepadSprint(bool SprintToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ToggleGamepadSprint");
		
		UFNAFGameInstance_C_ToggleGamepadSprint_Params params {};
		params.SprintToggle = SprintToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ToggleKeyboardSprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SprintToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::ToggleKeyboardSprint(bool SprintToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ToggleKeyboardSprint");
		
		UFNAFGameInstance_C_ToggleKeyboardSprint_Params params {};
		params.SprintToggle = SprintToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKeyBinding_Struct>       Output_Get                                                 (Parm, OutParm)
	 */
	void UFNAFGameInstance_C::GetDefaultMappings(TMap<class FName, struct FKeyBinding_Struct>* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultMappings");
		
		UFNAFGameInstance_C_GetDefaultMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSSQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFDLSSLevel                                     DLSSLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ApplyDLSSQuality(EFNAFDLSSLevel DLSSLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSSQuality");
		
		UFNAFGameInstance_C_ApplyDLSSQuality_Params params {};
		params.DLSSLevel = DLSSLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFVisualQualityLevel                            Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ApplyDLSS(EFNAFVisualQualityLevel Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSS");
		
		UFNAFGameInstance_C_ApplyDLSS_Params params {};
		params.Quality = Quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetProperControllerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Keyboard_Key1                                              (Parm, OutParm)
	 * 		class FText                                        Keyboard_Key2                                              (Parm, OutParm)
	 * 		class URichTextBlock*                              Gamepad_Key1                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URichTextBlock*                              Gamepad_Key2                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetProperControllerIcon(const class FName& ActionName, class FText* Keyboard_Key1, class FText* Keyboard_Key2, class URichTextBlock** Gamepad_Key1, class URichTextBlock** Gamepad_Key2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetProperControllerIcon");
		
		UFNAFGameInstance_C_GetProperControllerIcon_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keyboard_Key1 != nullptr)
			*Keyboard_Key1 = params.Keyboard_Key1;
		if (Keyboard_Key2 != nullptr)
			*Keyboard_Key2 = params.Keyboard_Key2;
		if (Gamepad_Key1 != nullptr)
			*Gamepad_Key1 = params.Gamepad_Key1;
		if (Gamepad_Key2 != nullptr)
			*Gamepad_Key2 = params.Gamepad_Key2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.FindDeviceSpecicQualitySetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFDeviceSpecificQualityConfig            Settings                                                   (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::FindDeviceSpecicQualitySetting(struct FFNAFDeviceSpecificQualityConfig* Settings, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.FindDeviceSpecicQualitySetting");
		
		UFNAFGameInstance_C_FindDeviceSpecicQualitySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIsMinSpecPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMinSpec                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIsMinSpecPC(bool* IsMinSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIsMinSpecPC");
		
		UFNAFGameInstance_C_GetIsMinSpecPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMinSpec != nullptr)
			*IsMinSpec = params.IsMinSpec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultVisualQualityLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGPlatform                                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFVisualQualityLevel                            Visual                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFRayTraceQualityLevel                          RayTrace                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetDefaultVisualQualityLevels(ESWGPlatform Platform, EFNAFVisualQualityLevel* Visual, EFNAFRayTraceQualityLevel* RayTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultVisualQualityLevels");
		
		UFNAFGameInstance_C_GetDefaultVisualQualityLevels_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visual != nullptr)
			*Visual = params.Visual;
		if (RayTrace != nullptr)
			*RayTrace = params.RayTrace;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIsRTXGPU
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRTX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIsRTXGPU(bool* IsRTX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIsRTXGPU");
		
		UFNAFGameInstance_C_GetIsRTXGPU_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRTX != nullptr)
			*IsRTX = params.IsRTX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIsRayTracingSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGPlatform                                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Supported                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIsRayTracingSupported(ESWGPlatform Platform, bool* Supported)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIsRayTracingSupported");
		
		UFNAFGameInstance_C_GetIsRayTracingSupported_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Supported != nullptr)
			*Supported = params.Supported;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ToggleInstructionCards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowInstructions                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::ToggleInstructionCards(bool ShowInstructions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ToggleInstructionCards");
		
		UFNAFGameInstance_C_ToggleInstructionCards_Params params {};
		params.ShowInstructions = ShowInstructions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetMessageAndTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::SetMessageAndTime(const class FName& MessageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetMessageAndTime");
		
		UFNAFGameInstance_C_SetMessageAndTime_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetMessageTimeReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MsgTime                                                    (Parm, OutParm)
	 */
	void UFNAFGameInstance_C::GetMessageTimeReceived(const class FName& MessageName, class FText* MsgTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetMessageTimeReceived");
		
		UFNAFGameInstance_C_GetMessageTimeReceived_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgTime != nullptr)
			*MsgTime = params.MsgTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.InstructionCardViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InstructionCard_Type                             InstructionEnum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ViewedAlready                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::InstructionCardViewed(E_InstructionCard_Type InstructionEnum, bool* ViewedAlready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.InstructionCardViewed");
		
		UFNAFGameInstance_C_InstructionCardViewed_Params params {};
		params.InstructionEnum = InstructionEnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewedAlready != nullptr)
			*ViewedAlready = params.ViewedAlready;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetupNewGame
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetupNewGame");
		
		UFNAFGameInstance_C_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.IsInGameplayTrailerMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InGamePlayTrailerMode                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::IsInGameplayTrailerMode(bool* InGamePlayTrailerMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.IsInGameplayTrailerMode");
		
		UFNAFGameInstance_C_IsInGameplayTrailerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InGamePlayTrailerMode != nullptr)
			*InGamePlayTrailerMode = params.InGamePlayTrailerMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.LoadCardsAndMessages
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::LoadCardsAndMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.LoadCardsAndMessages");
		
		UFNAFGameInstance_C_LoadCardsAndMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.HasSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::HasSaveGame(bool* Exists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.HasSaveGame");
		
		UFNAFGameInstance_C_HasSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_347016F346FF261F1C1C92ADBA6D6462
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnFailure_347016F346FF261F1C1C92ADBA6D6462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_347016F346FF261F1C1C92ADBA6D6462");
		
		UFNAFGameInstance_C_OnFailure_347016F346FF261F1C1C92ADBA6D6462_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_347016F346FF261F1C1C92ADBA6D6462
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnSuccess_347016F346FF261F1C1C92ADBA6D6462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_347016F346FF261F1C1C92ADBA6D6462");
		
		UFNAFGameInstance_C_OnSuccess_347016F346FF261F1C1C92ADBA6D6462_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D");
		
		UFNAFGameInstance_C_OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D");
		
		UFNAFGameInstance_C_OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6");
		
		UFNAFGameInstance_C_OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6");
		
		UFNAFGameInstance_C_OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_C4FD1B5F4537DF8B128F3D916037CA11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_C4FD1B5F4537DF8B128F3D916037CA11(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_C4FD1B5F4537DF8B128F3D916037CA11");
		
		UFNAFGameInstance_C_OnFailure_C4FD1B5F4537DF8B128F3D916037CA11_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11");
		
		UFNAFGameInstance_C_OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_E76021A145A37BC709C55BBACDEFFBF4
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnFailure_E76021A145A37BC709C55BBACDEFFBF4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_E76021A145A37BC709C55BBACDEFFBF4");
		
		UFNAFGameInstance_C_OnFailure_E76021A145A37BC709C55BBACDEFFBF4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_E76021A145A37BC709C55BBACDEFFBF4
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnSuccess_E76021A145A37BC709C55BBACDEFFBF4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_E76021A145A37BC709C55BBACDEFFBF4");
		
		UFNAFGameInstance_C_OnSuccess_E76021A145A37BC709C55BBACDEFFBF4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49");
		
		UFNAFGameInstance_C_OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49");
		
		UFNAFGameInstance_C_OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2139E3F145F43A454CDBE3A76C9037C4
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnFailure_2139E3F145F43A454CDBE3A76C9037C4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2139E3F145F43A454CDBE3A76C9037C4");
		
		UFNAFGameInstance_C_OnFailure_2139E3F145F43A454CDBE3A76C9037C4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2139E3F145F43A454CDBE3A76C9037C4
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnSuccess_2139E3F145F43A454CDBE3A76C9037C4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2139E3F145F43A454CDBE3A76C9037C4");
		
		UFNAFGameInstance_C_OnSuccess_2139E3F145F43A454CDBE3A76C9037C4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_AC5026394EF21AF1261C85BD63C2D5E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_AC5026394EF21AF1261C85BD63C2D5E9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_AC5026394EF21AF1261C85BD63C2D5E9");
		
		UFNAFGameInstance_C_OnFailure_AC5026394EF21AF1261C85BD63C2D5E9_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9");
		
		UFNAFGameInstance_C_OnSuccess_AC5026394EF21AF1261C85BD63C2D5E9_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.UpdateSensitivitySettings
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::UpdateSensitivitySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.UpdateSensitivitySettings");
		
		UFNAFGameInstance_C_UpdateSensitivitySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.LoadMiniGameLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::LoadMiniGameLevel(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.LoadMiniGameLevel");
		
		UFNAFGameInstance_C_LoadMiniGameLevel_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Start New Game
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::StartNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Start New Game");
		
		UFNAFGameInstance_C_StartNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load From Save
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::LoadFromSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load From Save");
		
		UFNAFGameInstance_C_LoadFromSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load Title
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::LoadTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load Title");
		
		UFNAFGameInstance_C_LoadTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Retry Game
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::RetryGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Retry Game");
		
		UFNAFGameInstance_C_RetryGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Quit To Title
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::QuitToTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Quit To Title");
		
		UFNAFGameInstance_C_QuitToTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ReceiveInit");
		
		UFNAFGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Unpause Game
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::UnpauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Unpause Game");
		
		UFNAFGameInstance_C_UnpauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load To Area
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::LoadToArea(const class FName& Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load To Area");
		
		UFNAFGameInstance_C_LoadToArea_Params params {};
		params.Area = Area;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Set Trailer Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InGamePlayTrailerMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::SetTrailerMode(bool InGamePlayTrailerMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Set Trailer Mode");
		
		UFNAFGameInstance_C_SetTrailerMode_Params params {};
		params.InGamePlayTrailerMode = InGamePlayTrailerMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Finish Load To Area
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::FinishLoadToArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Finish Load To Area");
		
		UFNAFGameInstance_C_FinishLoadToArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::LoadLevel(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load Level");
		
		UFNAFGameInstance_C_LoadLevel_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetLoadSavedGameOnNextWorldStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InLoadSavedGameOnNextWorldLoad                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::SetLoadSavedGameOnNextWorldStart(bool InLoadSavedGameOnNextWorldLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetLoadSavedGameOnNextWorldStart");
		
		UFNAFGameInstance_C_SetLoadSavedGameOnNextWorldStart_Params params {};
		params.InLoadSavedGameOnNextWorldLoad = InLoadSavedGameOnNextWorldLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoad
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::CheckLoadSavedGameOnNextWorldLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoad");
		
		UFNAFGameInstance_C_CheckLoadSavedGameOnNextWorldLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.RunHardwareBenchmark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::RunHardwareBenchmark(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.RunHardwareBenchmark");
		
		UFNAFGameInstance_C_RunHardwareBenchmark_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.EndGame
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::EndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.EndGame");
		
		UFNAFGameInstance_C_EndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ChangeHourlyActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HourIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ChangeHourlyActivity(int32_t HourIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ChangeHourlyActivity");
		
		UFNAFGameInstance_C_ChangeHourlyActivity_Params params {};
		params.HourIndex = HourIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckForHideAndSeekMasterAchievement
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::CheckForHideAndSeekMasterAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckForHideAndSeekMasterAchievement");
		
		UFNAFGameInstance_C_CheckForHideAndSeekMasterAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckForLostAndFoundAchievement
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::CheckForLostAndFoundAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckForLostAndFoundAchievement");
		
		UFNAFGameInstance_C_CheckForLostAndFoundAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Check For ShatteredDreams Achievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ShatteredBotTypes                                ShatteredBotType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::CheckForShatteredDreamsAchievement(E_ShatteredBotTypes ShatteredBotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Check For ShatteredDreams Achievement");
		
		UFNAFGameInstance_C_CheckForShatteredDreamsAchievement_Params params {};
		params.ShatteredBotType = ShatteredBotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetIsRetry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRetry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::SetIsRetry(bool IsRetry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetIsRetry");
		
		UFNAFGameInstance_C_SetIsRetry_Params params {};
		params.IsRetry = IsRetry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckForTrophyTimeAchievement
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::CheckForTrophyTimeAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckForTrophyTimeAchievement");
		
		UFNAFGameInstance_C_CheckForTrophyTimeAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetTempHapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::SetTempHapticFeedback(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetTempHapticFeedback");
		
		UFNAFGameInstance_C_SetTempHapticFeedback_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetHapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::SetHapticFeedback(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetHapticFeedback");
		
		UFNAFGameInstance_C_SetHapticFeedback_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoadForChowda
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::CheckLoadSavedGameOnNextWorldLoadForChowda()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoadForChowda");
		
		UFNAFGameInstance_C_CheckLoadSavedGameOnNextWorldLoadForChowda_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.UpdateSavedMappings
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::UpdateSavedMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.UpdateSavedMappings");
		
		UFNAFGameInstance_C_UpdateSavedMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetMappingsFromSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKeyBinding_Struct>       SavedMappings                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFNAFGameInstance_C::SetMappingsFromSaved(TMap<class FName, struct FKeyBinding_Struct> SavedMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetMappingsFromSaved");
		
		UFNAFGameInstance_C_SetMappingsFromSaved_Params params {};
		params.SavedMappings = SavedMappings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.UpdateHelpiBlurbTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::UpdateHelpiBlurbTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.UpdateHelpiBlurbTime");
		
		UFNAFGameInstance_C_UpdateHelpiBlurbTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.PlayEndCredits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChowdaEndings                                     ChowdaEndGameType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::PlayEndCredits(EChowdaEndings ChowdaEndGameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.PlayEndCredits");
		
		UFNAFGameInstance_C_PlayEndCredits_Params params {};
		params.ChowdaEndGameType = ChowdaEndGameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyQualitySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFVisualQualityLevel                            QualityLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFRayTraceQualityLevel                          RayTraceLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFNAFDLSSLevel                                     DLSSLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGPlatform                                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGXboxPlatform                                   XboxSpecificPlatform                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ApplyQualitySettings(EFNAFVisualQualityLevel QualityLevel, EFNAFRayTraceQualityLevel RayTraceLevel, EFNAFDLSSLevel DLSSLevel, ESWGPlatform Platform, ESWGXboxPlatform XboxSpecificPlatform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyQualitySettings");
		
		UFNAFGameInstance_C_ApplyQualitySettings_Params params {};
		params.QualityLevel = QualityLevel;
		params.RayTraceLevel = RayTraceLevel;
		params.DLSSLevel = DLSSLevel;
		params.Platform = Platform;
		params.XboxSpecificPlatform = XboxSpecificPlatform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenStart
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnLoadingScreenStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenStart");
		
		UFNAFGameInstance_C_OnLoadingScreenStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenEnd
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnLoadingScreenEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenEnd");
		
		UFNAFGameInstance_C_OnLoadingScreenEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnPlayerLoginChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLoggedIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnPlayerLoginChanged(bool bLoggedIn, int32_t UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnPlayerLoginChanged");
		
		UFNAFGameInstance_C_OnPlayerLoginChanged_Params params {};
		params.bLoggedIn = bLoggedIn;
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnPlayerControllerPairingChanged
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnPlayerControllerPairingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnPlayerControllerPairingChanged");
		
		UFNAFGameInstance_C_OnPlayerControllerPairingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnControllerConnectionChanged
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnControllerConnectionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnControllerConnectionChanged");
		
		UFNAFGameInstance_C_OnControllerConnectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Start Chowda Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewGame                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            profileIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::StartChowdaMode(bool NewGame, int32_t profileIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Start Chowda Mode");
		
		UFNAFGameInstance_C_StartChowdaMode_Params params {};
		params.NewGame = NewGame;
		params.profileIndex = profileIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.LoadChapter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Chapter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            profileIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::LoadChapter(const class FName& Chapter, int32_t profileIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.LoadChapter");
		
		UFNAFGameInstance_C_LoadChapter_Params params {};
		params.Chapter = Chapter;
		params.profileIndex = profileIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetSkipSystemUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::SetSkipSystemUsed(bool isUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetSkipSystemUsed");
		
		UFNAFGameInstance_C_SetSkipSystemUsed_Params params {};
		params.isUsed = isUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.DisplayLoadingScreenDLC
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::DisplayLoadingScreenDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.DisplayLoadingScreenDLC");
		
		UFNAFGameInstance_C_DisplayLoadingScreenDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.HideLoadingScreenDLC
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::HideLoadingScreenDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.HideLoadingScreenDLC");
		
		UFNAFGameInstance_C_HideLoadingScreenDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSaveGameComplete
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnSaveGameComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSaveGameComplete");
		
		UFNAFGameInstance_C_OnSaveGameComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ExecuteUbergraph_FNAFGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance");
		
		UFNAFGameInstance_C_ExecuteUbergraph_FNAFGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSettingsApplied__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFVisualQualityLevel                            VisualQuality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGPlatform                                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGXboxPlatform                                   SpecificXboxPlatform                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRayTraceEnabled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDLSSEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVolumetricFogEnabled                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::OnSettingsApplied__DelegateSignature(EFNAFVisualQualityLevel VisualQuality, ESWGPlatform Platform, ESWGXboxPlatform SpecificXboxPlatform, bool IsRayTraceEnabled, bool IsDLSSEnabled, bool IsVolumetricFogEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSettingsApplied__DelegateSignature");
		
		UFNAFGameInstance_C_OnSettingsApplied__DelegateSignature_Params params {};
		params.VisualQuality = VisualQuality;
		params.Platform = Platform;
		params.SpecificXboxPlatform = SpecificXboxPlatform;
		params.IsRayTraceEnabled = IsRayTraceEnabled;
		params.IsDLSSEnabled = IsDLSSEnabled;
		params.IsVolumetricFogEnabled = IsVolumetricFogEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenRemoved__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnLoadingScreenRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenRemoved__DelegateSignature");
		
		UFNAFGameInstance_C_OnLoadingScreenRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenBegin__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstance_C::OnLoadingScreenBegin__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnLoadingScreenBegin__DelegateSignature");
		
		UFNAFGameInstance_C_OnLoadingScreenBegin__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.TrailerModeChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrailerEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::TrailerModeChanged__DelegateSignature(bool TrailerEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.TrailerModeChanged__DelegateSignature");
		
		UFNAFGameInstance_C_TrailerModeChanged__DelegateSignature_Params params {};
		params.TrailerEnabled = TrailerEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGameInstance.FNAFGameInstance_C");
		return ptr;
	}

}


