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
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.IsStartupMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StartupMission                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStartupMissionTrigger_C::IsStartupMission(bool* StartupMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.IsStartupMission");
		
		AStartupMissionTrigger_C_IsStartupMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartupMission != nullptr)
			*StartupMission = params.StartupMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.CanDeactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanDeactivate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStartupMissionTrigger_C::CanDeactivate(bool* CanDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.CanDeactivate");
		
		AStartupMissionTrigger_C_CanDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDeactivate != nullptr)
			*CanDeactivate = params.CanDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.GetActivatableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EActivatableState                                  CurrentState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::GetActivatableState(class AActor* Activator, EActivatableState* CurrentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.GetActivatableState");
		
		AStartupMissionTrigger_C_GetActivatableState_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentState != nullptr)
			*CurrentState = params.CurrentState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.CanActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EConditionFailReason                               CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::CanActivate(class AActor* Activator, bool* CanActivate, EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.CanActivate");
		
		AStartupMissionTrigger_C_CanActivate_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivate != nullptr)
			*CanActivate = params.CanActivate;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Check Destroy Intro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Destroyed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStartupMissionTrigger_C::CheckDestroyIntro(bool* Destroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Check Destroy Intro");
		
		AStartupMissionTrigger_C_CheckDestroyIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Destroyed != nullptr)
			*Destroyed = params.Destroyed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.SetReflection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseCapture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStartupMissionTrigger_C::SetReflection(bool UseCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.SetReflection");
		
		AStartupMissionTrigger_C_SetReflection_Params params {};
		params.UseCapture = UseCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.OnActivatorDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::OnActivatorDone(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.OnActivatorDone");
		
		AStartupMissionTrigger_C_OnActivatorDone_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.SetActivated
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::SetActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.SetActivated");
		
		AStartupMissionTrigger_C_SetActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.DeactivateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Deactivator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::DeactivateObject(class AActor* Deactivator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.DeactivateObject");
		
		AStartupMissionTrigger_C_DeactivateObject_Params params {};
		params.Deactivator = Deactivator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.SetDeactivated
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::SetDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.SetDeactivated");
		
		AStartupMissionTrigger_C_SetDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.ActivateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Activator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::ActivateObject(class AActor* Activator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.ActivateObject");
		
		AStartupMissionTrigger_C_ActivateObject_Params params {};
		params.Activator = Activator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Possess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::OnPossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Possess");
		
		AStartupMissionTrigger_C_OnPossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Start New Game Mission
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::StartNewGameMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Start New Game Mission");
		
		AStartupMissionTrigger_C_StartNewGameMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.ReceiveBeginPlay");
		
		AStartupMissionTrigger_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AStartupMissionTrigger_C::BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AStartupMissionTrigger_C::BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Fazwatch Collected
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::OnFazwatchCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Fazwatch Collected");
		
		AStartupMissionTrigger_C_OnFazwatchCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Back Door Open
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BackDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Back Door Open");
		
		AStartupMissionTrigger_C_BackDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Side Door Entered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPassedDoorCheck                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EConditionFailReason                               FailReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::OnSideDoorEntered(class UDoorComponent* DoorComponent, class APawn* Pawn, bool bPassedDoorCheck, EConditionFailReason FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Side Door Entered");
		
		AStartupMissionTrigger_C_OnSideDoorEntered_Params params {};
		params.DoorComponent = DoorComponent;
		params.Pawn = Pawn;
		params.bPassedDoorCheck = bPassedDoorCheck;
		params.FailReason = FailReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Enable Door Trigger
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::EnableDoorTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Enable Door Trigger");
		
		AStartupMissionTrigger_C_EnableDoorTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Wrong Door
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::WrongDoor(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Wrong Door");
		
		AStartupMissionTrigger_C_WrongDoor_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Vanessa Spawn
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::VanessaSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Vanessa Spawn");
		
		AStartupMissionTrigger_C_VanessaSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Debug Skipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AStartupMissionTrigger_C::OnDebugSkipped(TArray<class FName> SkippedTasks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Debug Skipped");
		
		AStartupMissionTrigger_C_OnDebugSkipped_Params params {};
		params.SkippedTasks = SkippedTasks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.GregoryScared
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::GregoryScared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.GregoryScared");
		
		AStartupMissionTrigger_C_GregoryScared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Return Rotation
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::ReturnRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Return Rotation");
		
		AStartupMissionTrigger_C_ReturnRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature");
		
		AStartupMissionTrigger_C_BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Freddy Exited
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::OnFreddyExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Freddy Exited");
		
		AStartupMissionTrigger_C_OnFreddyExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.On Player Possessed Gregory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::OnPlayerPossessedGregory(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.On Player Possessed Gregory");
		
		AStartupMissionTrigger_C_OnPlayerPossessedGregory_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Skip All
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::SkipAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Skip All");
		
		AStartupMissionTrigger_C_SkipAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Continue from save after door
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::Continuefromsaveafterdoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Continue from save after door");
		
		AStartupMissionTrigger_C_Continuefromsaveafterdoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.Bind Posses for Finish
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::BindPossesforFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.Bind Posses for Finish");
		
		AStartupMissionTrigger_C_BindPossesforFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.LookOutWindowLogic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::LookOutWindowLogic(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.LookOutWindowLogic");
		
		AStartupMissionTrigger_C_LookOutWindowLogic_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.OnSkip
	 * 		Flags  -> ()
	 */
	void AStartupMissionTrigger_C::OnSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.OnSkip");
		
		AStartupMissionTrigger_C_OnSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStartupMissionTrigger_C::ExecuteUbergraph_StartupMissionTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger");
		
		AStartupMissionTrigger_C_ExecuteUbergraph_StartupMissionTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStartupMissionTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStartupMissionTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StartupMissionTrigger.StartupMissionTrigger_C");
		return ptr;
	}

}


