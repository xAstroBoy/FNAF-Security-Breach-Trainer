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
	 * 		Name   -> Function MainGamePC.MainGamePC_C.IsPlayerCurrentlyMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlayerMoving                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::IsPlayerCurrentlyMoving(bool* IsPlayerMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.IsPlayerCurrentlyMoving");
		
		AMainGamePC_C_IsPlayerCurrentlyMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlayerMoving != nullptr)
			*IsPlayerMoving = params.IsPlayerMoving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetFlashlightActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      FlashlightActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::GetFlashlightActor(class AActor** FlashlightActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetFlashlightActor");
		
		AMainGamePC_C_GetFlashlightActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlashlightActor != nullptr)
			*FlashlightActor = params.FlashlightActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.PlayerEnteringExitingFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::PlayerEnteringExitingFreddy(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.PlayerEnteringExitingFreddy");
		
		AMainGamePC_C_PlayerEnteringExitingFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.IsInAir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAir                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::IsInAir(bool* InAir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.IsInAir");
		
		AMainGamePC_C_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAir != nullptr)
			*InAir = params.InAir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.IsSwitchingItems
	 * 		Flags  -> ()
	 */
	bool AMainGamePC_C::IsSwitchingItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.IsSwitchingItems");
		
		AMainGamePC_C_IsSwitchingItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.IsPlayerFlashlightActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::IsPlayerFlashlightActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.IsPlayerFlashlightActive");
		
		AMainGamePC_C_IsPlayerFlashlightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.LastItemCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFInventoryTableStruct                   ItemInfo                                                   (Parm, OutParm)
	 */
	void AMainGamePC_C::LastItemCollected(struct FFNAFInventoryTableStruct* ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LastItemCollected");
		
		AMainGamePC_C_LastItemCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemInfo != nullptr)
			*ItemInfo = params.ItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.IsPlayerUsingFazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsingFazwatch                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::IsPlayerUsingFazwatch(bool* IsUsingFazwatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.IsPlayerUsingFazwatch");
		
		AMainGamePC_C_IsPlayerUsingFazwatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsingFazwatch != nullptr)
			*IsUsingFazwatch = params.IsUsingFazwatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetCrouchToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrouchToggle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::GetCrouchToggle(bool* CrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetCrouchToggle");
		
		AMainGamePC_C_GetCrouchToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchToggle != nullptr)
			*CrouchToggle = params.CrouchToggle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetHelpiBlurbTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::GetHelpiBlurbTime(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetHelpiBlurbTime");
		
		AMainGamePC_C_GetHelpiBlurbTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetShowInstructionCards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowInstructionCards                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::GetShowInstructionCards(bool* ShowInstructionCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetShowInstructionCards");
		
		AMainGamePC_C_GetShowInstructionCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowInstructionCards != nullptr)
			*ShowInstructionCards = params.ShowInstructionCards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetStealthToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowStealthIcon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::GetStealthToggle(bool* ShowStealthIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetStealthToggle");
		
		AMainGamePC_C_GetStealthToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowStealthIcon != nullptr)
			*ShowStealthIcon = params.ShowStealthIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetSprintToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               KeyboardSprintToggle                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               GamepadSprintToggle                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::GetSprintToggles(bool* KeyboardSprintToggle, bool* GamepadSprintToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetSprintToggles");
		
		AMainGamePC_C_GetSprintToggles_Params params {};
		
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
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetSaveGameSettings
	 * 		Flags  -> ()
	 */
	class USaveGameSettings_C* AMainGamePC_C::GetSaveGameSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetSaveGameSettings");
		
		AMainGamePC_C_GetSaveGameSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetIsPlaySequenceRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSequenceRunning                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::GetIsPlaySequenceRunning(bool* IsSequenceRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetIsPlaySequenceRunning");
		
		AMainGamePC_C_GetIsPlaySequenceRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSequenceRunning != nullptr)
			*IsSequenceRunning = params.IsSequenceRunning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetListenerOverridePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::SetListenerOverridePosition(class USceneComponent* AttachToComponent, const struct FVector& Position, const struct FRotator& Rotation, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetListenerOverridePosition");
		
		AMainGamePC_C_SetListenerOverridePosition_Params params {};
		params.AttachToComponent = AttachToComponent;
		params.Position = Position;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.EnableListenerOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::EnableListenerOverride(bool enable, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.EnableListenerOverride");
		
		AMainGamePC_C_EnableListenerOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetListenerPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::GetListenerPosition(struct FVector* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetListenerPosition");
		
		AMainGamePC_C_GetListenerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetOverrideSaveLocationForNextSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  locationTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::SetOverrideSaveLocationForNextSave(const struct FTransform& locationTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetOverrideSaveLocationForNextSave");
		
		AMainGamePC_C_SetOverrideSaveLocationForNextSave_Params params {};
		params.locationTransform = locationTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateControllerInvert
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::UpdateControllerInvert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateControllerInvert");
		
		AMainGamePC_C_UpdateControllerInvert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GregoryCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Release                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::GregoryCrouch(bool Release)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GregoryCrouch");
		
		AMainGamePC_C_GregoryCrouch_Params params {};
		params.Release = Release;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateSensitivityValues
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::UpdateSensitivityValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateSensitivityValues");
		
		AMainGamePC_C_UpdateSensitivityValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.CallSettingsSavedListeners
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::CallSettingsSavedListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.CallSettingsSavedListeners");
		
		AMainGamePC_C_CallSettingsSavedListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.EndViewTethering
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::EndViewTethering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.EndViewTethering");
		
		AMainGamePC_C_EndViewTethering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SaveGameCallbackForSettings
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::SaveGameCallbackForSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SaveGameCallbackForSettings");
		
		AMainGamePC_C_SaveGameCallbackForSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SaveGameSettings
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::SaveGameSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SaveGameSettings");
		
		AMainGamePC_C_SaveGameSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateLastGameHourPlayed
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::UpdateLastGameHourPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateLastGameHourPlayed");
		
		AMainGamePC_C_UpdateLastGameHourPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ResetViewTetheringOffsets
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::ResetViewTetheringOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ResetViewTetheringOffsets");
		
		AMainGamePC_C_ResetViewTetheringOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateControlRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::UpdateControlRotation(float Pitch, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateControlRotation");
		
		AMainGamePC_C_UpdateControlRotation_Params params {};
		params.Pitch = Pitch;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Set View Tethering Func
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    TetherRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ModifyControlState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::SetViewTetheringFunc(bool enable, const struct FRotator& TetherRotation, bool ModifyControlState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Set View Tethering Func");
		
		AMainGamePC_C_SetViewTetheringFunc_Params params {};
		params.enable = enable;
		params.TetherRotation = TetherRotation;
		params.ModifyControlState = ModifyControlState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.LoadPlayerSettings
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::LoadPlayerSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LoadPlayerSettings");
		
		AMainGamePC_C_LoadPlayerSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.RestoreFreddyMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseFreddyAI                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::RestoreFreddyMovement(bool UseFreddyAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.RestoreFreddyMovement");
		
		AMainGamePC_C_RestoreFreddyMovement_Params params {};
		params.UseFreddyAI = UseFreddyAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ForceFreddyMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerAIController_C*                       OutPlayerAIController                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AFreddy_C*                                   OutFreddyPawn                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::ForceFreddyMovement(class APlayerAIController_C** OutPlayerAIController, class AFreddy_C** OutFreddyPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ForceFreddyMovement");
		
		AMainGamePC_C_ForceFreddyMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerAIController != nullptr)
			*OutPlayerAIController = params.OutPlayerAIController;
		if (OutFreddyPawn != nullptr)
			*OutFreddyPawn = params.OutFreddyPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.AfterUnpause
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::AfterUnpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.AfterUnpause");
		
		AMainGamePC_C_AfterUnpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.AfterPause
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::AfterPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.AfterPause");
		
		AMainGamePC_C_AfterPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GetLatestDistortionLevel
	 * 		Flags  -> ()
	 */
	float AMainGamePC_C::GetLatestDistortionLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GetLatestDistortionLevel");
		
		AMainGamePC_C_GetLatestDistortionLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetupDebugHUD
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::SetupDebugHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetupDebugHUD");
		
		AMainGamePC_C_SetupDebugHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetupPlayerHUD
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::SetupPlayerHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetupPlayerHUD");
		
		AMainGamePC_C_SetupPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Lower Watch
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::LowerWatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Lower Watch");
		
		AMainGamePC_C_LowerWatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Raise Watch
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::RaiseWatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Raise Watch");
		
		AMainGamePC_C_RaiseWatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Timeline_0__FinishedFunc");
		
		AMainGamePC_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Timeline_0__UpdateFunc");
		
		AMainGamePC_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_24
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Jump_K2Node_InputActionEvent_24(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_24");
		
		AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_24_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_23
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Jump_K2Node_InputActionEvent_23(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_23");
		
		AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_23_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_SecondaryAction_K2Node_InputActionEvent_22
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_SecondaryAction_K2Node_InputActionEvent_22(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_SecondaryAction_K2Node_InputActionEvent_22");
		
		AMainGamePC_C_InpActEvt_SecondaryAction_K2Node_InputActionEvent_22_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 1_K2Node_InputActionEvent_21
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_SwitchItem1_K2Node_InputActionEvent_21(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 1_K2Node_InputActionEvent_21");
		
		AMainGamePC_C_InpActEvt_SwitchItem1_K2Node_InputActionEvent_21_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 2_K2Node_InputActionEvent_20
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_SwitchItem2_K2Node_InputActionEvent_20(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 2_K2Node_InputActionEvent_20");
		
		AMainGamePC_C_InpActEvt_SwitchItem2_K2Node_InputActionEvent_20_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 3_K2Node_InputActionEvent_19
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_SwitchItem3_K2Node_InputActionEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 3_K2Node_InputActionEvent_19");
		
		AMainGamePC_C_InpActEvt_SwitchItem3_K2Node_InputActionEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Left_K2Node_InputActionEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_ChangeUITabLeft_K2Node_InputActionEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Left_K2Node_InputActionEvent_18");
		
		AMainGamePC_C_InpActEvt_ChangeUITabLeft_K2Node_InputActionEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Right_K2Node_InputActionEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_ChangeUITabRight_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Right_K2Node_InputActionEvent_17");
		
		AMainGamePC_C_InpActEvt_ChangeUITabRight_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Menu_K2Node_InputActionEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Menu_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Menu_K2Node_InputActionEvent_16");
		
		AMainGamePC_C_InpActEvt_Menu_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7");
		
		AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Crouch_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_15");
		
		AMainGamePC_C_InpActEvt_Crouch_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Crouch_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_14");
		
		AMainGamePC_C_InpActEvt_Crouch_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_L_K2Node_InputKeyEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_L_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_L_K2Node_InputKeyEvent_6");
		
		AMainGamePC_C_InpActEvt_L_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Skip_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_13");
		
		AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Skip_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_12");
		
		AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Touch1_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_5");
		
		AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Touch1_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_4");
		
		AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_CallFreddy_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_11");
		
		AMainGamePC_C_InpActEvt_CallFreddy_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_PrimaryAction_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_10");
		
		AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_PrimaryAction_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_9");
		
		AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Throw Object_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_ThrowObject_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Throw Object_K2Node_InputActionEvent_8");
		
		AMainGamePC_C_InpActEvt_ThrowObject_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Interact_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_7");
		
		AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Interact_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_6");
		
		AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_G_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_G_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_G_K2Node_InputKeyEvent_3");
		
		AMainGamePC_C_InpActEvt_G_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnFailure_6EE19B10415A6B32590DEAA77ED60D09
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnFailure_6EE19B10415A6B32590DEAA77ED60D09(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnFailure_6EE19B10415A6B32590DEAA77ED60D09");
		
		AMainGamePC_C_OnFailure_6EE19B10415A6B32590DEAA77ED60D09_Params params {};
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
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnSuccess_6EE19B10415A6B32590DEAA77ED60D09
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnSuccess_6EE19B10415A6B32590DEAA77ED60D09(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSuccess_6EE19B10415A6B32590DEAA77ED60D09");
		
		AMainGamePC_C_OnSuccess_6EE19B10415A6B32590DEAA77ED60D09_Params params {};
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
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5");
		
		AMainGamePC_C_OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5");
		
		AMainGamePC_C_OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2");
		
		AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1");
		
		AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5");
		
		AMainGamePC_C_InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Teleport_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Teleport_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Teleport_K2Node_InputActionEvent_4");
		
		AMainGamePC_C_InpActEvt_Teleport_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3");
		
		AMainGamePC_C_InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2");
		
		AMainGamePC_C_InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_1");
		
		AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.VisualChangeItem
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::VisualChangeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.VisualChangeItem");
		
		AMainGamePC_C_VisualChangeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Disable Jump Land Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::DisableJumpLandAudio(bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Disable Jump Land Audio");
		
		AMainGamePC_C_DisableJumpLandAudio_Params params {};
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.LowerArms
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::LowerArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LowerArms");
		
		AMainGamePC_C_LowerArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.RaiseArms
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::RaiseArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.RaiseArms");
		
		AMainGamePC_C_RaiseArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ForceFlashlightState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowPlayerToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::ForceFlashlightState(bool On, bool AllowPlayerToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ForceFlashlightState");
		
		AMainGamePC_C_ForceFlashlightState_Params params {};
		params.On = On;
		params.AllowPlayerToggle = AllowPlayerToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ForcePlayerCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AllowCrouchToggle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::ForcePlayerCrouch(bool Crouch, bool AllowCrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ForcePlayerCrouch");
		
		AMainGamePC_C_ForcePlayerCrouch_Params params {};
		params.Crouch = Crouch;
		params.AllowCrouchToggle = AllowCrouchToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.NonLethalJumpscareBPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachmentComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerformingScare                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::NonLethalJumpscareBPI(float CamShakeScale, class USceneComponent* AttachmentComponent, class AActor* ActorPerformingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.NonLethalJumpscareBPI");
		
		AMainGamePC_C_NonLethalJumpscareBPI_Params params {};
		params.CamShakeScale = CamShakeScale;
		params.AttachmentComponent = AttachmentComponent;
		params.ActorPerformingScare = ActorPerformingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.LethalJumpscareBPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachmentComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               JumpscareAudio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanEscape                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CamShakeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorPerfomingScare                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::LethalJumpscareBPI(class USceneComponent* AttachmentComponent, class UAkAudioEvent* JumpscareAudio, bool CanEscape, float CamShakeScale, class AActor* ActorPerfomingScare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LethalJumpscareBPI");
		
		AMainGamePC_C_LethalJumpscareBPI_Params params {};
		params.AttachmentComponent = AttachmentComponent;
		params.JumpscareAudio = JumpscareAudio;
		params.CanEscape = CanEscape;
		params.CamShakeScale = CamShakeScale;
		params.ActorPerfomingScare = ActorPerfomingScare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateIcons
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::UpdateIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateIcons");
		
		AMainGamePC_C_UpdateIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateSprintAndStealthToggles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Keyboard_Sprint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Gamepad_Sprint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CrouchIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CrouchToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::UpdateSprintAndStealthToggles(bool Keyboard_Sprint, bool Gamepad_Sprint, bool CrouchIcon, bool CrouchToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateSprintAndStealthToggles");
		
		AMainGamePC_C_UpdateSprintAndStealthToggles_Params params {};
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
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateSavedMappings
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::UpdateSavedMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateSavedMappings");
		
		AMainGamePC_C_UpdateSavedMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetMappingsFromSaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKeyBinding_Struct>       SavedMappings                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMainGamePC_C::SetMappingsFromSaved(TMap<class FName, struct FKeyBinding_Struct> SavedMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetMappingsFromSaved");
		
		AMainGamePC_C_SetMappingsFromSaved_Params params {};
		params.SavedMappings = SavedMappings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateHelpiBlurbTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::UpdateHelpiBlurbTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateHelpiBlurbTime");
		
		AMainGamePC_C_UpdateHelpiBlurbTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnGameDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnGameDataLoaded");
		
		AMainGamePC_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.PostGameLoad
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.PostGameLoad");
		
		AMainGamePC_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158");
		
		AMainGamePC_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_158_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173");
		
		AMainGamePC_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_173_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnPlayerKilled
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnPlayerKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnPlayerKilled");
		
		AMainGamePC_C_OnPlayerKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ReceiveBeginPlay");
		
		AMainGamePC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnPlayerWin
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnPlayerWin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnPlayerWin");
		
		AMainGamePC_C_OnPlayerWin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182");
		
		AMainGamePC_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193");
		
		AMainGamePC_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39");
		
		AMainGamePC_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54");
		
		AMainGamePC_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnRetry
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnRetry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnRetry");
		
		AMainGamePC_C_OnRetry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.LowerWatch
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::LowerWatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.LowerWatch");
		
		AMainGamePC_C_LowerWatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnToggleFlightMode
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnToggleFlightMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnToggleFlightMode");
		
		AMainGamePC_C_OnToggleFlightMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnEnter_SaveGameTrigger
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnEnter_SaveGameTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnEnter_SaveGameTrigger");
		
		AMainGamePC_C_OnEnter_SaveGameTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnToggleDevUI
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnToggleDevUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnToggleDevUI");
		
		AMainGamePC_C_OnToggleDevUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Enter Flying Mode
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::EnterFlyingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Enter Flying Mode");
		
		AMainGamePC_C_EnterFlyingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Set Flying Collision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionEnabled                                  FlyingCollisionMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::SetFlyingCollision(ECollisionEnabled FlyingCollisionMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Set Flying Collision");
		
		AMainGamePC_C_SetFlyingCollision_Params params {};
		params.FlyingCollisionMode = FlyingCollisionMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnSaveGameSelected
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnSaveGameSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSaveGameSelected");
		
		AMainGamePC_C_OnSaveGameSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Set Flying Speed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FlyingSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::SetFlyingSpeed(float FlyingSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Set Flying Speed");
		
		AMainGamePC_C_SetFlyingSpeed_Params params {};
		params.FlyingSpeed = FlyingSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnToggleCinemaMode
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnToggleCinemaMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnToggleCinemaMode");
		
		AMainGamePC_C_OnToggleCinemaMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ReceiveUnPossess");
		
		AMainGamePC_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ReceivePossess");
		
		AMainGamePC_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnTriggerVannyScare
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnTriggerVannyScare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnTriggerVannyScare");
		
		AMainGamePC_C_OnTriggerVannyScare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnCheckpointSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnCheckpointSave");
		
		AMainGamePC_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnCheckpointLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnCheckpointLoad");
		
		AMainGamePC_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.On Possessed Pawn Destroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnPossessedPawnDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.On Possessed Pawn Destroyed");
		
		AMainGamePC_C_OnPossessedPawnDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");
		
		AMainGamePC_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3");
		
		AMainGamePC_C_InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6");
		
		AMainGamePC_C_InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnStoreGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnStoreGameData");
		
		AMainGamePC_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Distortion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::Distortion(int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Distortion");
		
		AMainGamePC_C_Distortion_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.Stop Distortion
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::StopDistortion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.Stop Distortion");
		
		AMainGamePC_C_StopDistortion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.DebugCloseUI
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::DebugCloseUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.DebugCloseUI");
		
		AMainGamePC_C_DebugCloseUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.GiveVIPAchievement
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::GiveVIPAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.GiveVIPAchievement");
		
		AMainGamePC_C_GiveVIPAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1");
		
		AMainGamePC_C_InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.HideHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHideProgressWheel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::HideHUD(bool bHideProgressWheel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.HideHUD");
		
		AMainGamePC_C_HideHUD_Params params {};
		params.bHideProgressWheel = bHideProgressWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ShowHUD
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::ShowHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ShowHUD");
		
		AMainGamePC_C_ShowHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.EnableAllInputs
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::EnableAllInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.EnableAllInputs");
		
		AMainGamePC_C_EnableAllInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetEnabledInputFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputFlags                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::SetEnabledInputFlags(int32_t InputFlags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetEnabledInputFlags");
		
		AMainGamePC_C_SetEnabledInputFlags_Params params {};
		params.InputFlags = InputFlags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.AddSaveGameSettingsListener
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::AddSaveGameSettingsListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.AddSaveGameSettingsListener");
		
		AMainGamePC_C_AddSaveGameSettingsListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.RemoveSaveGameSettingsListener
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::RemoveSaveGameSettingsListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.RemoveSaveGameSettingsListener");
		
		AMainGamePC_C_RemoveSaveGameSettingsListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetViewTethering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    TetherRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ModifyControlState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::SetViewTethering(bool enable, const struct FRotator& TetherRotation, bool ModifyControlState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetViewTethering");
		
		AMainGamePC_C_SetViewTethering_Params params {};
		params.enable = enable;
		params.TetherRotation = TetherRotation;
		params.ModifyControlState = ModifyControlState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnUnlockEverything
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnUnlockEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnUnlockEverything");
		
		AMainGamePC_C_OnUnlockEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2");
		
		AMainGamePC_C_InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4");
		
		AMainGamePC_C_InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5");
		
		AMainGamePC_C_InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7");
		
		AMainGamePC_C_InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.UpdateSensitivitySettings
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::UpdateSensitivitySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.UpdateSensitivitySettings");
		
		AMainGamePC_C_UpdateSensitivitySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.SetIsPlaySequenceRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGamePC_C::SetIsPlaySequenceRunning(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.SetIsPlaySequenceRunning");
		
		AMainGamePC_C_SetIsPlaySequenceRunning_Params params {};
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ShowCinimaticSkip
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::ShowCinimaticSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ShowCinimaticSkip");
		
		AMainGamePC_C_ShowCinimaticSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.BeginCinimaticSkipFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::BeginCinimaticSkipFade(float DelayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.BeginCinimaticSkipFade");
		
		AMainGamePC_C_BeginCinimaticSkipFade_Params params {};
		params.DelayDuration = DelayDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.PostSaveGame
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.PostSaveGame");
		
		AMainGamePC_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::ExecuteUbergraph_MainGamePC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC");
		
		AMainGamePC_C_ExecuteUbergraph_MainGamePC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnSettingsSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USaveGameSettings_C*                         Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnSettingsSaved__DelegateSignature(class USaveGameSettings_C* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSettingsSaved__DelegateSignature");
		
		AMainGamePC_C_OnSettingsSaved__DelegateSignature_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnSkip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMainGamePC_C::OnSkip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnSkip__DelegateSignature");
		
		AMainGamePC_C_OnSkip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGamePC.MainGamePC_C.OnPossessedPawnChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGamePC_C::OnPossessedPawnChanged__DelegateSignature(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGamePC.MainGamePC_C.OnPossessedPawnChanged__DelegateSignature");
		
		AMainGamePC_C_OnPossessedPawnChanged__DelegateSignature_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainGamePC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainGamePC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainGamePC.MainGamePC_C");
		return ptr;
	}

}


