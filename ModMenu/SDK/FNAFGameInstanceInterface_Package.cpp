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
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.HideLoadingScreenDLC
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceInterface_C::HideLoadingScreenDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.HideLoadingScreenDLC");
		
		UFNAFGameInstanceInterface_C_HideLoadingScreenDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.DisplayLoadingScreenDLC
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceInterface_C::DisplayLoadingScreenDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.DisplayLoadingScreenDLC");
		
		UFNAFGameInstanceInterface_C_DisplayLoadingScreenDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetSkipSystemUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstanceInterface_C::SetSkipSystemUsed(bool isUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetSkipSystemUsed");
		
		UFNAFGameInstanceInterface_C_SetSkipSystemUsed_Params params {};
		params.isUsed = isUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetIfSkipSystemUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               outUsed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstanceInterface_C::GetIfSkipSystemUsed(bool* outUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetIfSkipSystemUsed");
		
		UFNAFGameInstanceInterface_C_GetIfSkipSystemUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outUsed != nullptr)
			*outUsed = params.outUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetTempHapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstanceInterface_C::SetTempHapticFeedback(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetTempHapticFeedback");
		
		UFNAFGameInstanceInterface_C_SetTempHapticFeedback_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetHapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstanceInterface_C::SetHapticFeedback(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.SetHapticFeedback");
		
		UFNAFGameInstanceInterface_C_SetHapticFeedback_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetTempHapticFeedbackIntensityMultiplier
	 * 		Flags  -> ()
	 */
	float UFNAFGameInstanceInterface_C::GetTempHapticFeedbackIntensityMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetTempHapticFeedbackIntensityMultiplier");
		
		UFNAFGameInstanceInterface_C_GetTempHapticFeedbackIntensityMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetHapticFeedbackIntensityMultiplier
	 * 		Flags  -> ()
	 */
	float UFNAFGameInstanceInterface_C::GetHapticFeedbackIntensityMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetHapticFeedbackIntensityMultiplier");
		
		UFNAFGameInstanceInterface_C_GetHapticFeedbackIntensityMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.CheckForTrophyTimeAchievement
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceInterface_C::CheckForTrophyTimeAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.CheckForTrophyTimeAchievement");
		
		UFNAFGameInstanceInterface_C_CheckForTrophyTimeAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetSpawnAllSurvivalPackages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SpawnAll                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstanceInterface_C::GetSpawnAllSurvivalPackages(bool* SpawnAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetSpawnAllSurvivalPackages");
		
		UFNAFGameInstanceInterface_C_GetSpawnAllSurvivalPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnAll != nullptr)
			*SpawnAll = params.SpawnAll;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetShowSurvivalPackages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstanceInterface_C::GetShowSurvivalPackages(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetShowSurvivalPackages");
		
		UFNAFGameInstanceInterface_C_GetShowSurvivalPackages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameType                                      GameType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstanceInterface_C::GetGameType(EFNAFGameType* GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType");
		
		UFNAFGameInstanceInterface_C_GetGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameType != nullptr)
			*GameType = params.GameType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HourIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstanceInterface_C::ChangeHourlyActivity(int32_t HourIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity");
		
		UFNAFGameInstanceInterface_C_ChangeHourlyActivity_Params params {};
		params.HourIndex = HourIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFGameInstanceInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGameInstanceInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGameInstanceInterface.FNAFGameInstanceInterface_C");
		return ptr;
	}

}


