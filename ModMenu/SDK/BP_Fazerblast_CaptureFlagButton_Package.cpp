/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_Fazerblast_CaptureFlagButton_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractViewLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractViewLocation");
		
		ABP_Fazerblast_CaptureFlagButton_C_GetInteractViewLocation_Params params {};
		
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
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractViewAngles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractViewAngles");
		
		ABP_Fazerblast_CaptureFlagButton_C_GetInteractViewAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnglesToCheck != nullptr)
			*AnglesToCheck = params.AnglesToCheck;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetHUDInstruction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::GetHUDInstruction(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetHUDInstruction");
		
		ABP_Fazerblast_CaptureFlagButton_C_GetHUDInstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.InteractIgnoresTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::InteractIgnoresTrace(bool* IgnoreTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.InteractIgnoresTrace");
		
		ABP_Fazerblast_CaptureFlagButton_C_InteractIgnoresTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreTrace != nullptr)
			*IgnoreTrace = params.IgnoreTrace;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInstructionOverride
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInstructionOverride");
		
		ABP_Fazerblast_CaptureFlagButton_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.UpdateUIOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::UpdateUIOnTick(bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.UpdateUIOnTick");
		
		ABP_Fazerblast_CaptureFlagButton_C_UpdateUIOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractibleType");
		
		ABP_Fazerblast_CaptureFlagButton_C_GetInteractibleType_Params params {};
		
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
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.CanPlayerInteract");
		
		ABP_Fazerblast_CaptureFlagButton_C_CanPlayerInteract_Params params {};
		
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
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.UserConstructionScript");
		
		ABP_Fazerblast_CaptureFlagButton_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.StopEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.StopEmitter");
		
		ABP_Fazerblast_CaptureFlagButton_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.PlayEmitter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.PlayEmitter");
		
		ABP_Fazerblast_CaptureFlagButton_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerInteractCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::OnPlayerInteractCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerInteractCancel");
		
		ABP_Fazerblast_CaptureFlagButton_C_OnPlayerInteractCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerHoverEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerHoverEnter");
		
		ABP_Fazerblast_CaptureFlagButton_C_OnPlayerHoverEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerHoverExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::OnPlayerHoverExit(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerHoverExit");
		
		ABP_Fazerblast_CaptureFlagButton_C_OnPlayerHoverExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerInteract");
		
		ABP_Fazerblast_CaptureFlagButton_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.On Interact Done
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::On_Interact_Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.On Interact Done");
		
		ABP_Fazerblast_CaptureFlagButton_C_On_Interact_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ChangeColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ChangeColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::ChangeColor(int ChangeColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ChangeColor");
		
		ABP_Fazerblast_CaptureFlagButton_C_ChangeColor_Params params {};
		params.ChangeColor = ChangeColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.Robot Captured
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AC_FazerBlast_Bot_C*                         CapturingBot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::Robot_Captured(class AC_FazerBlast_Bot_C* CapturingBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.Robot Captured");
		
		ABP_Fazerblast_CaptureFlagButton_C_Robot_Captured_Params params {};
		params.CapturingBot = CapturingBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.SpawnRobots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::SpawnRobots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.SpawnRobots");
		
		ABP_Fazerblast_CaptureFlagButton_C_SpawnRobots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.DespawnRobots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::DespawnRobots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.DespawnRobots");
		
		ABP_Fazerblast_CaptureFlagButton_C_DespawnRobots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ReceiveBeginPlay");
		
		ABP_Fazerblast_CaptureFlagButton_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ReceiveTick");
		
		ABP_Fazerblast_CaptureFlagButton_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ToggleInRange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ToggleInRange");
		
		ABP_Fazerblast_CaptureFlagButton_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.Reset");
		
		ABP_Fazerblast_CaptureFlagButton_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ExecuteUbergraph_BP_Fazerblast_CaptureFlagButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fazerblast_CaptureFlagButton_C::ExecuteUbergraph_BP_Fazerblast_CaptureFlagButton(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ExecuteUbergraph_BP_Fazerblast_CaptureFlagButton");
		
		ABP_Fazerblast_CaptureFlagButton_C_ExecuteUbergraph_BP_Fazerblast_CaptureFlagButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Fazerblast_CaptureFlagButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Fazerblast_CaptureFlagButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C");
		return ptr;
	}

}


