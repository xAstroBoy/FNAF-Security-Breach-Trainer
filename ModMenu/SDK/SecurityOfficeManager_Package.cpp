/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SecurityOfficeManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractViewLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractViewLocation");
		
		ASecurityOfficeManager_C_GetInteractViewLocation_Params params {};
		
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
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractViewAngles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_ECameraAngleFlags                            AnglesToCheck                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractViewAngles");
		
		ASecurityOfficeManager_C_GetInteractViewAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnglesToCheck != nullptr)
			*AnglesToCheck = params.AnglesToCheck;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.GetHUDInstruction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void ASecurityOfficeManager_C::GetHUDInstruction(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.GetHUDInstruction");
		
		ASecurityOfficeManager_C_GetHUDInstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.InteractIgnoresTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreTrace                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOfficeManager_C::InteractIgnoresTrace(bool* IgnoreTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.InteractIgnoresTrace");
		
		ASecurityOfficeManager_C_InteractIgnoresTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IgnoreTrace != nullptr)
			*IgnoreTrace = params.IgnoreTrace;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.GetInstructionOverride
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Instruction                                                (Parm, OutParm)
	 */
	void ASecurityOfficeManager_C::GetInstructionOverride(class FText* Instruction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.GetInstructionOverride");
		
		ASecurityOfficeManager_C_GetInstructionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instruction != nullptr)
			*Instruction = params.Instruction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.UpdateUIOnTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityOfficeManager_C::UpdateUIOnTick(bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.UpdateUIOnTick");
		
		ASecurityOfficeManager_C_UpdateUIOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.GetInteractibleType");
		
		ASecurityOfficeManager_C_GetInteractibleType_Params params {};
		
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
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.CanPlayerInteract");
		
		ASecurityOfficeManager_C_CanPlayerInteract_Params params {};
		
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
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.TickCameras
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::TickCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.TickCameras");
		
		ASecurityOfficeManager_C_TickCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.CheckAllCamerasReady
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::CheckAllCamerasReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.CheckAllCamerasReady");
		
		ASecurityOfficeManager_C_CheckAllCamerasReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.GetCurrentPowerDrain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PowerDrain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::GetCurrentPowerDrain(float* PowerDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.GetCurrentPowerDrain");
		
		ASecurityOfficeManager_C_GetCurrentPowerDrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerDrain != nullptr)
			*PowerDrain = params.PowerDrain;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnCheckpointSave");
		
		ASecurityOfficeManager_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnGameDataLoaded");
		
		ASecurityOfficeManager_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnStoreGameData");
		
		ASecurityOfficeManager_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.PostGameLoad");
		
		ASecurityOfficeManager_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.PostSaveGame");
		
		ASecurityOfficeManager_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerInteractCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::OnPlayerInteractCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerInteractCancel");
		
		ASecurityOfficeManager_C_OnPlayerInteractCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerHoverEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnPlayerHoverEnter(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerHoverEnter");
		
		ASecurityOfficeManager_C_OnPlayerHoverEnter_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerHoverExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnPlayerHoverExit(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerHoverExit");
		
		ASecurityOfficeManager_C_OnPlayerHoverExit_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.ReceiveTick");
		
		ASecurityOfficeManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnPlayerInteract");
		
		ASecurityOfficeManager_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.ReceiveBeginPlay");
		
		ASecurityOfficeManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ASecurityOfficeManager_C_BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.On Victory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::On_Victory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.On Victory");
		
		ASecurityOfficeManager_C_On_Victory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.End Office Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::End_Office_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.End Office Game");
		
		ASecurityOfficeManager_C_End_Office_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.On Office Game Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::On_Office_Game_Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.On Office Game Activated");
		
		ASecurityOfficeManager_C_On_Office_Game_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Already Awarded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::Already_Awarded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Already Awarded");
		
		ASecurityOfficeManager_C_Already_Awarded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASecurityOfficeManager_C::BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASecurityOfficeManager_C_BndEvt__EscapeBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Exit Office Pawn Mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::Exit_Office_Pawn_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Exit Office Pawn Mode");
		
		ASecurityOfficeManager_C_Exit_Office_Pawn_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Enter Office Pawn Mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::Enter_Office_Pawn_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Enter Office Pawn Mode");
		
		ASecurityOfficeManager_C_Enter_Office_Pawn_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Add Power Drain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PowerDrainer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::Add_Power_Drain(class AActor* PowerDrainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Add Power Drain");
		
		ASecurityOfficeManager_C_Add_Power_Drain_Params params {};
		params.PowerDrainer = PowerDrainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Remove Power Drain
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PowerDrainer                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::Remove_Power_Drain(class AActor* PowerDrainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Remove Power Drain");
		
		ASecurityOfficeManager_C_Remove_Power_Drain_Params params {};
		params.PowerDrainer = PowerDrainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Process Power Drain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DrainMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::Process_Power_Drain(float DrainMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Process Power Drain");
		
		ASecurityOfficeManager_C_Process_Power_Drain_Params params {};
		params.DrainMultiplier = DrainMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Drain Power
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AmountToDrain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::Drain_Power(float AmountToDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Drain Power");
		
		ASecurityOfficeManager_C_Drain_Power_Params params {};
		params.AmountToDrain = AmountToDrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.Bind Activatable to Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PanelIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Activatable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PowerDrain                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::Bind_Activatable_to_Screen(int PanelIndex, class AActor* Activatable, float PowerDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.Bind Activatable to Screen");
		
		ASecurityOfficeManager_C_Bind_Activatable_to_Screen_Params params {};
		params.PanelIndex = PanelIndex;
		params.Activatable = Activatable;
		params.PowerDrain = PowerDrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.On Camera Levels Loaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACamera_C*                                   Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::On_Camera_Levels_Loaded(class ACamera_C* Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.On Camera Levels Loaded");
		
		ASecurityOfficeManager_C_On_Camera_Levels_Loaded_Params params {};
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.On All Cameras Ready
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::On_All_Cameras_Ready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.On All Cameras Ready");
		
		ASecurityOfficeManager_C_On_All_Cameras_Ready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnCheckpointLoad");
		
		ASecurityOfficeManager_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.ExecuteUbergraph_SecurityOfficeManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityOfficeManager_C::ExecuteUbergraph_SecurityOfficeManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.ExecuteUbergraph_SecurityOfficeManager");
		
		ASecurityOfficeManager_C_ExecuteUbergraph_SecurityOfficeManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnOfficeGameEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::OnOfficeGameEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnOfficeGameEnded__DelegateSignature");
		
		ASecurityOfficeManager_C_OnOfficeGameEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnOfficeGameStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::OnOfficeGameStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnOfficeGameStarted__DelegateSignature");
		
		ASecurityOfficeManager_C_OnOfficeGameStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityOfficeManager.SecurityOfficeManager_C.OnPowerDrained__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityOfficeManager_C::OnPowerDrained__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityOfficeManager.SecurityOfficeManager_C.OnPowerDrained__DelegateSignature");
		
		ASecurityOfficeManager_C_OnPowerDrained__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityOfficeManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityOfficeManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityOfficeManager.SecurityOfficeManager_C");
		return ptr;
	}

}


