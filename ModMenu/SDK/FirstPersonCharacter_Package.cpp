/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FirstPersonCharacter_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.GetCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraComponent*                            Camera                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::GetCamera(class UCameraComponent** Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.GetCamera");
		
		AFirstPersonCharacter_C_GetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Camera != nullptr)
			*Camera = params.Camera;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.DoorEntryNotAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AFirstPersonCharacter_C::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.DoorEntryNotAllowed");
		
		AFirstPersonCharacter_C_DoorEntryNotAllowed_Params params {};
		params.DoorComponent = DoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.GetFlashlightLocationAndDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasFlashlight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FlashlightLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     FlashlightDirection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::GetFlashlightLocationAndDirection(bool* HasFlashlight, struct FVector* FlashlightLocation, struct FVector* FlashlightDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.GetFlashlightLocationAndDirection");
		
		AFirstPersonCharacter_C_GetFlashlightLocationAndDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFlashlight != nullptr)
			*HasFlashlight = params.HasFlashlight;
		if (FlashlightLocation != nullptr)
			*FlashlightLocation = params.FlashlightLocation;
		if (FlashlightDirection != nullptr)
			*FlashlightDirection = params.FlashlightDirection;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.GetLevelStreamViewpoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelStreamViewpoint*                       LevelStreamViewpoint                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::GetLevelStreamViewpoint(class ULevelStreamViewpoint** LevelStreamViewpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.GetLevelStreamViewpoint");
		
		AFirstPersonCharacter_C_GetLevelStreamViewpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelStreamViewpoint != nullptr)
			*LevelStreamViewpoint = params.LevelStreamViewpoint;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ChooseBallFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNiagaraSystem*                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::ChooseBallFX(class UNiagaraSystem** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ChooseBallFX");
		
		AFirstPersonCharacter_C_ChooseBallFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.SetGravityEnable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::SetGravityEnable(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.SetGravityEnable");
		
		AFirstPersonCharacter_C_SetGravityEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.UpdateSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::UpdateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.UpdateSettings");
		
		AFirstPersonCharacter_C_UpdateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Jump Audio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Handle_Jump_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Jump Audio");
		
		AFirstPersonCharacter_C_Handle_Jump_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Land Audio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Handle_Land_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Land Audio");
		
		AFirstPersonCharacter_C_Handle_Land_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.GetPlayerHUD
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPlayerHUD_C*                                PlayerHUD                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::GetPlayerHUD(class UPlayerHUD_C** PlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.GetPlayerHUD");
		
		AFirstPersonCharacter_C_GetPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerHUD != nullptr)
			*PlayerHUD = params.PlayerHUD;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.SetupSpringArm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsingGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::SetupSpringArm(bool bUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.SetupSpringArm");
		
		AFirstPersonCharacter_C_SetupSpringArm_Params params {};
		params.bUsingGamepad = bUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.footstep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::footstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.footstep");
		
		AFirstPersonCharacter_C_footstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Arm_Roll__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__FinishedFunc");
		
		AFirstPersonCharacter_C_Arm_Roll__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Arm_Roll__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Arm Roll__UpdateFunc");
		
		AFirstPersonCharacter_C_Arm_Roll__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__FinishedFunc");
		
		AFirstPersonCharacter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__UpdateFunc");
		
		AFirstPersonCharacter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__CamShakeTrigger__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Timeline_0__CamShakeTrigger__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Timeline_0__CamShakeTrigger__EventFunc");
		
		AFirstPersonCharacter_C_Timeline_0__CamShakeTrigger__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_3");
		
		AFirstPersonCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_2");
		
		AFirstPersonCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Q_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_Q_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Q_K2Node_InputKeyEvent_1");
		
		AFirstPersonCharacter_C_InpActEvt_Q_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_TMPZOOM_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InpActEvt_TMPZOOM_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_TMPZOOM_K2Node_InputActionEvent_1");
		
		AFirstPersonCharacter_C_InpActEvt_TMPZOOM_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.RollForLower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Watch_Up                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::RollForLower(bool Watch_Up)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.RollForLower");
		
		AFirstPersonCharacter_C_RollForLower_Params params {};
		params.Watch_Up = Watch_Up;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.PressAndReleaseMouse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::PressAndReleaseMouse(bool Pressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.PressAndReleaseMouse");
		
		AFirstPersonCharacter_C_PressAndReleaseMouse_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Teleport Player With Offset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DeltaLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaYaw                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::Teleport_Player_With_Offset(const struct FVector& DeltaLocation, float DeltaYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Teleport Player With Offset");
		
		AFirstPersonCharacter_C_Teleport_Player_With_Offset_Params params {};
		params.DeltaLocation = DeltaLocation;
		params.DeltaYaw = DeltaYaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Teleport Player With Delta Yaw
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaYaw                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::Teleport_Player_With_Delta_Yaw(const struct FVector& Location, float DeltaYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Teleport Player With Delta Yaw");
		
		AFirstPersonCharacter_C_Teleport_Player_With_Delta_Yaw_Params params {};
		params.Location = Location;
		params.DeltaYaw = DeltaYaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.OnControllerType Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsUsingGamepad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::OnControllerType_Changed(bool bIsUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.OnControllerType Changed");
		
		AFirstPersonCharacter_C_OnControllerType_Changed_Params params {};
		params.bIsUsingGamepad = bIsUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveUnpossessed");
		
		AFirstPersonCharacter_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.On Interact Release
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::On_Interact_Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.On Interact Release");
		
		AFirstPersonCharacter_C_On_Interact_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Attempt Freddy Call
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Attempt_Freddy_Call()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Attempt Freddy Call");
		
		AFirstPersonCharacter_C_Attempt_Freddy_Call_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ReceivePossessed");
		
		AFirstPersonCharacter_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay");
		
		AFirstPersonCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptThrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::AttemptThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptThrow");
		
		AFirstPersonCharacter_C_AttemptThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::AttemptSwitch_Item3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item3");
		
		AFirstPersonCharacter_C_AttemptSwitch_Item3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::AttemptSwitch_Item2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item2");
		
		AFirstPersonCharacter_C_AttemptSwitch_Item2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_DJMM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::CamShakeEvent_DJMM(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_DJMM");
		
		AFirstPersonCharacter_C_CamShakeEvent_DJMM_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.CameraShakeEvent_Animatronics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::CameraShakeEvent_Animatronics(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.CameraShakeEvent_Animatronics");
		
		AFirstPersonCharacter_C_CameraShakeEvent_Animatronics_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::AttemptSwitch_Item1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSwitch:Item1");
		
		AFirstPersonCharacter_C_AttemptSwitch_Item1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_Landing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::CamShakeEvent_Landing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_Landing");
		
		AFirstPersonCharacter_C_CamShakeEvent_Landing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSecondaryAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::AttemptSecondaryAction(const class FName& ItemToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptSecondaryAction");
		
		AFirstPersonCharacter_C_AttemptSecondaryAction_Params params {};
		params.ItemToUse = ItemToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_Jumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::CamShakeEvent_Jumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.CamShakeEvent_Jumping");
		
		AFirstPersonCharacter_C_CamShakeEvent_Jumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.CameraShakeEvent_MontyLand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::CameraShakeEvent_MontyLand(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.CameraShakeEvent_MontyLand");
		
		AFirstPersonCharacter_C_CameraShakeEvent_MontyLand_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.OnOverlappedDoor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanEnterDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantEnterReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.OnOverlappedDoor");
		
		AFirstPersonCharacter_C_OnOverlappedDoor_Params params {};
		params.bCanEnterDoor = bCanEnterDoor;
		params.CantEnterReason = CantEnterReason;
		params.DoorComponent = DoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.OnEndOverlapDoor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::OnEndOverlapDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.OnEndOverlapDoor");
		
		AFirstPersonCharacter_C_OnEndOverlapDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.SwitchGIVolume
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::SwitchGIVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.SwitchGIVolume");
		
		AFirstPersonCharacter_C_SwitchGIVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.SwitchColorForScenario
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::SwitchColorForScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.SwitchColorForScenario");
		
		AFirstPersonCharacter_C_SwitchColorForScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptPrimaryAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::AttemptPrimaryAction(const class FName& ItemToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.AttemptPrimaryAction");
		
		AFirstPersonCharacter_C_AttemptPrimaryAction_Params params {};
		params.ItemToUse = ItemToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Attempt Interact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::Attempt_Interact(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Attempt Interact");
		
		AFirstPersonCharacter_C_Attempt_Interact_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.SetFOV
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::SetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.SetFOV");
		
		AFirstPersonCharacter_C_SetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveTick");
		
		AFirstPersonCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.RollForRaise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WatchUp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::RollForRaise(bool WatchUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.RollForRaise");
		
		AFirstPersonCharacter_C_RollForRaise_Params params {};
		params.WatchUp = WatchUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Pause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Pause");
		
		AFirstPersonCharacter_C_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Set Interact Enable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFirstPersonCharacter_C::Set_Interact_Enable(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Set Interact Enable");
		
		AFirstPersonCharacter_C_Set_Interact_Enable_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Use Chica Beak
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Use_Chica_Beak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Use Chica Beak");
		
		AFirstPersonCharacter_C_Use_Chica_Beak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Use Monty Claws
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Use_Monty_Claws()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Use Monty Claws");
		
		AFirstPersonCharacter_C_Use_Monty_Claws_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.Use Roxy Eyes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::Use_Roxy_Eyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.Use Roxy Eyes");
		
		AFirstPersonCharacter_C_Use_Roxy_Eyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature");
		
		AFirstPersonCharacter_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.PauseHaptics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::PauseHaptics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.PauseHaptics");
		
		AFirstPersonCharacter_C_PauseHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.StartHaptics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFirstPersonCharacter_C::StartHaptics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.StartHaptics");
		
		AFirstPersonCharacter_C_StartHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.InteractableHaptics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::InteractableHaptics(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.InteractableHaptics");
		
		AFirstPersonCharacter_C_InteractableHaptics_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFirstPersonCharacter_C::ExecuteUbergraph_FirstPersonCharacter(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter");
		
		AFirstPersonCharacter_C_ExecuteUbergraph_FirstPersonCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFirstPersonCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFirstPersonCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FirstPersonCharacter.FirstPersonCharacter_C");
		return ptr;
	}

}


