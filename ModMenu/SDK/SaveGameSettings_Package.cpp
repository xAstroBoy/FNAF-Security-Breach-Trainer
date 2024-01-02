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
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.GetDefaultCrouchToggleValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USaveGameSettings_C::GetDefaultCrouchToggleValue(bool* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.GetDefaultCrouchToggleValue");
		
		USaveGameSettings_C_GetDefaultCrouchToggleValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.ResetControlsSettingsToDefault
	 * 		Flags  -> ()
	 */
	void USaveGameSettings_C::ResetControlsSettingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.ResetControlsSettingsToDefault");
		
		USaveGameSettings_C_ResetControlsSettingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.ResetVideoSettingsToDefault
	 * 		Flags  -> ()
	 */
	void USaveGameSettings_C::ResetVideoSettingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.ResetVideoSettingsToDefault");
		
		USaveGameSettings_C_ResetVideoSettingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.ResetAudioSettingsToDefault
	 * 		Flags  -> ()
	 */
	void USaveGameSettings_C::ResetAudioSettingsToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.ResetAudioSettingsToDefault");
		
		USaveGameSettings_C_ResetAudioSettingsToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.GetMediaForCurrentHour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LastedPlayedHour                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMediaSource*                                GameHourVideo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USaveGameSettings_C::GetMediaForCurrentHour(int32_t* LastedPlayedHour, class UMediaSource** GameHourVideo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.GetMediaForCurrentHour");
		
		USaveGameSettings_C_GetMediaForCurrentHour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastedPlayedHour != nullptr)
			*LastedPlayedHour = params.LastedPlayedHour;
		if (GameHourVideo != nullptr)
			*GameHourVideo = params.GameHourVideo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.LoadSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GamePadTurnRate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GamePadLookUpRate                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Brightness                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Contrast                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Gamma                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ForceFeedbackIntensityMultiplier                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELocalizationCulture                               Localization                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USaveGameSettings_C::LoadSettings(float* GamePadTurnRate, float* GamePadLookUpRate, float* Brightness, float* Contrast, float* Gamma, float* ForceFeedbackIntensityMultiplier, ELocalizationCulture* Localization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.LoadSettings");
		
		USaveGameSettings_C_LoadSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GamePadTurnRate != nullptr)
			*GamePadTurnRate = params.GamePadTurnRate;
		if (GamePadLookUpRate != nullptr)
			*GamePadLookUpRate = params.GamePadLookUpRate;
		if (Brightness != nullptr)
			*Brightness = params.Brightness;
		if (Contrast != nullptr)
			*Contrast = params.Contrast;
		if (Gamma != nullptr)
			*Gamma = params.Gamma;
		if (ForceFeedbackIntensityMultiplier != nullptr)
			*ForceFeedbackIntensityMultiplier = params.ForceFeedbackIntensityMultiplier;
		if (Localization != nullptr)
			*Localization = params.Localization;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USaveGameSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaveGameSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameSettings.SaveGameSettings_C");
		return ptr;
	}

}


