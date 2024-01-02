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
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetCrouchToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrouchToggle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SettingsUpdates_C::GetCrouchToggle(bool* CrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetCrouchToggle");
		
		UBPI_SettingsUpdates_C_GetCrouchToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchToggle != nullptr)
			*CrouchToggle = params.CrouchToggle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetHelpiBlurbTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SettingsUpdates_C::GetHelpiBlurbTime(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetHelpiBlurbTime");
		
		UBPI_SettingsUpdates_C_GetHelpiBlurbTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateHelpiBlurbTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SettingsUpdates_C::UpdateHelpiBlurbTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateHelpiBlurbTime");
		
		UBPI_SettingsUpdates_C_UpdateHelpiBlurbTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetShowInstructionCards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowInstructionCards                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SettingsUpdates_C::GetShowInstructionCards(bool* ShowInstructionCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetShowInstructionCards");
		
		UBPI_SettingsUpdates_C_GetShowInstructionCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowInstructionCards != nullptr)
			*ShowInstructionCards = params.ShowInstructionCards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.SetMappingsFromSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKeyBinding_Struct>       SavedMappings                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_SettingsUpdates_C::SetMappingsFromSaved(TMap<class FName, struct FKeyBinding_Struct> SavedMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.SetMappingsFromSaved");
		
		UBPI_SettingsUpdates_C_SetMappingsFromSaved_Params params {};
		params.SavedMappings = SavedMappings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSavedMappings
	 * 		Flags  -> ()
	 */
	void UBPI_SettingsUpdates_C::UpdateSavedMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSavedMappings");
		
		UBPI_SettingsUpdates_C_UpdateSavedMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetStealthToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowStealthIcon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SettingsUpdates_C::GetStealthToggle(bool* ShowStealthIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetStealthToggle");
		
		UBPI_SettingsUpdates_C_GetStealthToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStealthIcon != nullptr)
			*ShowStealthIcon = params.ShowStealthIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetSprintToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeyboardSprintToggle                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               GamepadSprintToggle                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SettingsUpdates_C::GetSprintToggles(bool* KeyboardSprintToggle, bool* GamepadSprintToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.GetSprintToggles");
		
		UBPI_SettingsUpdates_C_GetSprintToggles_Params params {};
		
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
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSprintAndStealthToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Keyboard_Sprint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Gamepad_Sprint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CrouchIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CrouchToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SettingsUpdates_C::UpdateSprintAndStealthToggles(bool Keyboard_Sprint, bool Gamepad_Sprint, bool CrouchIcon, bool CrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSprintAndStealthToggles");
		
		UBPI_SettingsUpdates_C_UpdateSprintAndStealthToggles_Params params {};
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
	 * 		Name   -> Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSensitivitySettings
	 * 		Flags  -> ()
	 */
	void UBPI_SettingsUpdates_C::UpdateSensitivitySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SettingsUpdates.BPI_SettingsUpdates_C.UpdateSensitivitySettings");
		
		UBPI_SettingsUpdates_C_UpdateSensitivitySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SettingsUpdates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SettingsUpdates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SettingsUpdates.BPI_SettingsUpdates_C");
		return ptr;
	}

}


