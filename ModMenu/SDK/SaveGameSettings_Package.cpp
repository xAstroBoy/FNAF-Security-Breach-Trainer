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
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.ResetControlsSettingsToDefault
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.ResetVideoSettingsToDefault
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.ResetAudioSettingsToDefault
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.GetMediaForCurrentHour
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Lasted_Played_Hour                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMediaSource*                                Game_Hour_Video                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USaveGameSettings_C::GetMediaForCurrentHour(int32_t* Lasted_Played_Hour, class UMediaSource** Game_Hour_Video)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SaveGameSettings.SaveGameSettings_C.GetMediaForCurrentHour");
		
		USaveGameSettings_C_GetMediaForCurrentHour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Lasted_Played_Hour != nullptr)
			*Lasted_Played_Hour = params.Lasted_Played_Hour;
		if (Game_Hour_Video != nullptr)
			*Game_Hour_Video = params.Game_Hour_Video;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SaveGameSettings.SaveGameSettings_C.LoadSettings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              GamePadTurnRate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GamePadLookUpRate                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Brightness                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Contrast                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Gamma                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ForceFeedbackIntensityMultiplier                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USaveGameSettings_C::LoadSettings(float* GamePadTurnRate, float* GamePadLookUpRate, float* Brightness, float* Contrast, float* Gamma, float* ForceFeedbackIntensityMultiplier)
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
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USaveGameSettings_C.StaticClass
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


