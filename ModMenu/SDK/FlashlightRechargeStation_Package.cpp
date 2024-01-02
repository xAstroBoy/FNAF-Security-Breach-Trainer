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
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewLocation
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewAngles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECameraAngleFlags                                  AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetInteractViewAngles(ECameraAngleFlags* AnglesToCheck)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetHUDInstruction
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.InteractIgnoresTrace
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInstructionOverride
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateUIOnTick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractibleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractibleType                                  Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractiblePressType                             PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.CanPlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EConditionFailReason                               CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::CanPlayerInteract(bool* CanInteract, EConditionFailReason* CantReason)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetupWithFlashlight
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetRechargeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFlashlightRechargeUI_C*                     AsFlashlightRechargeUI                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetRechargeUI(class UFlashlightRechargeUI_C** AsFlashlightRechargeUI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetRechargeUI");
		
		AFlashlightRechargeStation_C_GetRechargeUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsFlashlightRechargeUI != nullptr)
			*AsFlashlightRechargeUI = params.AsFlashlightRechargeUI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetTimelineFinishState
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateRechargeDisplay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetCollectibleState
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetFlashlightCollectible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFlashlightCollectible_C*                    AsFlashlightCollectible                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::GetFlashlightCollectible(class AFlashlightCollectible_C** AsFlashlightCollectible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetFlashlightCollectible");
		
		AFlashlightRechargeStation_C_GetFlashlightCollectible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsFlashlightCollectible != nullptr)
			*AsFlashlightCollectible = params.AsFlashlightCollectible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__FinishedFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__UpdateFunc
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFlashlightRechargeStation_C::rechargedisplaytimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__FinishedFunc");
		
		AFlashlightRechargeStation_C_rechargedisplaytimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFlashlightRechargeStation_C::rechargedisplaytimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__UpdateFunc");
		
		AFlashlightRechargeStation_C_rechargedisplaytimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.FlaslightStationOpenClose
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteract
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverExit
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteractCancel
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.Reverse Movement
	 * 		Flags  -> ()
	 */
	void AFlashlightRechargeStation_C::ReverseMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.Reverse Movement");
		
		AFlashlightRechargeStation_C_ReverseMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.Set Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::SetTime(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.Set Time");
		
		AFlashlightRechargeStation_C_SetTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Recharge Finished
	 * 		Flags  -> ()
	 */
	void AFlashlightRechargeStation_C::OnRechargeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Recharge Finished");
		
		AFlashlightRechargeStation_C_OnRechargeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.Take Player's Flashlight
	 * 		Flags  -> ()
	 */
	void AFlashlightRechargeStation_C::TakePlayersFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.Take Player's Flashlight");
		
		AFlashlightRechargeStation_C_TakePlayersFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Flashlight Collected
	 * 		Flags  -> ()
	 */
	void AFlashlightRechargeStation_C::OnFlashlightCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Flashlight Collected");
		
		AFlashlightRechargeStation_C_OnFlashlightCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverEnter
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReturnFlashlight
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStation_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReceiveTick");
		
		AFlashlightRechargeStation_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlashlightRechargeStation.FlashlightRechargeStation_C.ExecuteUbergraph_FlashlightRechargeStation
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlashlightRechargeStation_C.StaticClass
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


