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
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewLocation");
		
		AFlashlightRechargeStation_C_GetInteractViewLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewAngles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewAngles");
		
		AFlashlightRechargeStation_C_GetInteractViewAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnglesToCheck != nullptr)
			*AnglesToCheck = params.AnglesToCheck;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetHUDInstruction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void AFlashlightRechargeStation_C::GetHUDInstruction(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetHUDInstruction");
		
		AFlashlightRechargeStation_C_GetHUDInstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.InteractIgnoresTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightRechargeStation_C::InteractIgnoresTrace(bool* IgnoreTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.InteractIgnoresTrace");
		
		AFlashlightRechargeStation_C_InteractIgnoresTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreTrace != nullptr)
			*IgnoreTrace = params.IgnoreTrace;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInstructionOverride
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void AFlashlightRechargeStation_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInstructionOverride");
		
		AFlashlightRechargeStation_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateUIOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightRechargeStation_C::UpdateUIOnTick(bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateUIOnTick");
		
		AFlashlightRechargeStation_C_UpdateUIOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		InteractibleType_EInteractibleType                 Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		InteractiblePressType_EInteractiblePressType       PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractibleType");
		
		AFlashlightRechargeStation_C_GetInteractibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
		if (PressType != nullptr)
			*PressType = params.PressType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.CanPlayerInteract");
		
		AFlashlightRechargeStation_C_CanPlayerInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReturnFlashlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::ReturnFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReturnFlashlight");
		
		AFlashlightRechargeStation_C_ReturnFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetupWithFlashlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Charged                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightRechargeStation_C::SetupWithFlashlight(bool Charged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetupWithFlashlight");
		
		AFlashlightRechargeStation_C_SetupWithFlashlight_Params params {};
		params.Charged = Charged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetRechargeUI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFlashlightRechargeUI_C*                     AsFlashlight_Recharge_UI                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetRechargeUI(class UFlashlightRechargeUI_C** AsFlashlight_Recharge_UI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetRechargeUI");
		
		AFlashlightRechargeStation_C_GetRechargeUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsFlashlight_Recharge_UI != nullptr)
			*AsFlashlight_Recharge_UI = params.AsFlashlight_Recharge_UI;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetTimelineFinishState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::SetTimelineFinishState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetTimelineFinishState");
		
		AFlashlightRechargeStation_C_SetTimelineFinishState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateRechargeDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::UpdateRechargeDisplay(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateRechargeDisplay");
		
		AFlashlightRechargeStation_C_UpdateRechargeDisplay_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetCollectibleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanCollect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightRechargeStation_C::SetCollectibleState(bool CanCollect, bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetCollectibleState");
		
		AFlashlightRechargeStation_C_SetCollectibleState_Params params {};
		params.CanCollect = CanCollect;
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetFlashlightCollectible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlightCollectible_C*                    AsFlashlight_Collectible                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetFlashlightCollectible(class AFlashlightCollectible_C** AsFlashlight_Collectible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetFlashlightCollectible");
		
		AFlashlightRechargeStation_C_GetFlashlightCollectible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsFlashlight_Collectible != nullptr)
			*AsFlashlight_Collectible = params.AsFlashlight_Collectible;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::StationMovement__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__FinishedFunc");
		
		AFlashlightRechargeStation_C_StationMovement__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::StationMovement__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__UpdateFunc");
		
		AFlashlightRechargeStation_C_StationMovement__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::recharge_display_timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__FinishedFunc");
		
		AFlashlightRechargeStation_C_recharge_display_timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::recharge_display_timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__UpdateFunc");
		
		AFlashlightRechargeStation_C_recharge_display_timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.FlaslightStationOpenClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Open                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFlashlightRechargeStation_C::FlaslightStationOpenClose(bool Open)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.FlaslightStationOpenClose");
		
		AFlashlightRechargeStation_C_FlaslightStationOpenClose_Params params {};
		params.Open = Open;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature");
		
		AFlashlightRechargeStation_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteract");
		
		AFlashlightRechargeStation_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteractCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::OnPlayerInteractCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteractCancel");
		
		AFlashlightRechargeStation_C_OnPlayerInteractCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.Reverse Movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::Reverse_Movement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.Reverse Movement");
		
		AFlashlightRechargeStation_C_Reverse_Movement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReceiveBeginPlay");
		
		AFlashlightRechargeStation_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.Set Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::Set_Time(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.Set Time");
		
		AFlashlightRechargeStation_C_Set_Time_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Recharge Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::On_Recharge_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Recharge Finished");
		
		AFlashlightRechargeStation_C_On_Recharge_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.Take Player's Flashlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::Take_Players_Flashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.Take Player's Flashlight");
		
		AFlashlightRechargeStation_C_Take_Players_Flashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Flashlight Collected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStation_C::On_Flashlight_Collected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Flashlight Collected");
		
		AFlashlightRechargeStation_C_On_Flashlight_Collected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::OnPlayerHoverExit(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverExit");
		
		AFlashlightRechargeStation_C_OnPlayerHoverExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverEnter");
		
		AFlashlightRechargeStation_C_OnPlayerHoverEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ExecuteUbergraph_FlashlightRechargeStation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::ExecuteUbergraph_FlashlightRechargeStation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.ExecuteUbergraph_FlashlightRechargeStation");
		
		AFlashlightRechargeStation_C_ExecuteUbergraph_FlashlightRechargeStation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFlashlightRechargeStation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlightRechargeStation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightRechargeStation.FlashlightRechargeStation_C");
		return ptr;
	}

}


