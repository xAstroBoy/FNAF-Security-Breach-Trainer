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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.Get Gregory Pawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGregory_C*                                  Gregory                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::Get_Gregory_Pawn(class AGregory_C** Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.Get Gregory Pawn");
		
		AHourlyMoonManSequence_C_Get_Gregory_Pawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gregory != nullptr)
			*Gregory = params.Gregory;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameClockTick_Funcn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              deltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnGameClockTick_Funcn(float deltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameClockTick_Funcn");
		
		AHourlyMoonManSequence_C_OnGameClockTick_Funcn_Params params {};
		params.deltaTime = deltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnCheckpointSave");
		
		AHourlyMoonManSequence_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameDataLoaded");
		
		AHourlyMoonManSequence_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnStoreGameData");
		
		AHourlyMoonManSequence_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.PostSaveGame");
		
		AHourlyMoonManSequence_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnWorldStateChanged_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EFNAFGameState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		fnaf9_EFNAFGameState                               PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnWorldStateChanged_Event(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnWorldStateChanged_Event");
		
		AHourlyMoonManSequence_C_OnWorldStateChanged_Event_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnSourceDetected_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UVisualSourceComponent*                      VisualSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      UpdatedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHourlyMoonManSequence_C::OnSourceDetected_Event(class UVisualSourceComponent* VisualSource, class AActor* UpdatedActor, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnSourceDetected_Event");
		
		AHourlyMoonManSequence_C_OnSourceDetected_Event_Params params {};
		params.VisualSource = VisualSource;
		params.UpdatedActor = UpdatedActor;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.ReceiveBeginPlay");
		
		AHourlyMoonManSequence_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.KillPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::KillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.KillPlayer");
		
		AHourlyMoonManSequence_C_KillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnMMDetected_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      UpdatedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHourlyMoonManSequence_C::OnMMDetected_Event(class AActor* UpdatedActor, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnMMDetected_Event");
		
		AHourlyMoonManSequence_C_OnMMDetected_Event_Params params {};
		params.UpdatedActor = UpdatedActor;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnMMActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::SpawnMMActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnMMActor");
		
		AHourlyMoonManSequence_C_SpawnMMActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.ReceiveTick");
		
		AHourlyMoonManSequence_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.DestroyMM
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::DestroyMM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.DestroyMM");
		
		AHourlyMoonManSequence_C_DestroyMM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnMMSpawnPointDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          MMSpawnPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHourlyMoonManSequence_C::OnMMSpawnPointDetected(class AMoonmanSpawnPoint* MMSpawnPoint, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnMMSpawnPointDetected");
		
		AHourlyMoonManSequence_C_OnMMSpawnPointDetected_Params params {};
		params.MMSpawnPoint = MMSpawnPoint;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnVisualSourceDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          MMActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UVisualSourceComponent*                      VisualSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnVisualSourceDetected(class AMoonmanSpawnPoint* MMActor, bool Visible, class UVisualSourceComponent* VisualSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnVisualSourceDetected");
		
		AHourlyMoonManSequence_C_OnVisualSourceDetected_Params params {};
		params.MMActor = MMActor;
		params.Visible = Visible;
		params.VisualSource = VisualSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.SetGregorySight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::SetGregorySight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.SetGregorySight");
		
		AHourlyMoonManSequence_C_SetGregorySight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.GetClosestMoonmanNew
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::GetClosestMoonmanNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.GetClosestMoonmanNew");
		
		AHourlyMoonManSequence_C_GetClosestMoonmanNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnDeathSeq
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::OnDeathSeq()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnDeathSeq");
		
		AHourlyMoonManSequence_C_OnDeathSeq_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.ResetMMStates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          MMSpawnPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::ResetMMStates(class AMoonmanSpawnPoint* MMSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.ResetMMStates");
		
		AHourlyMoonManSequence_C_ResetMMStates_Params params {};
		params.MMSpawnPoint = MMSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyeBlinkSetup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::EyeBlinkSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyeBlinkSetup");
		
		AHourlyMoonManSequence_C_EyeBlinkSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointRegistered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::SpawnPointRegistered(class AMoonmanSpawnPoint* InSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointRegistered");
		
		AHourlyMoonManSequence_C_SpawnPointRegistered_Params params {};
		params.InSpawnPoint = InSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointUnregistered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::SpawnPointUnregistered(class AMoonmanSpawnPoint* InSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointUnregistered");
		
		AHourlyMoonManSequence_C_SpawnPointUnregistered_Params params {};
		params.InSpawnPoint = InSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameClockTick_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              deltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnGameClockTick_Event(float deltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameClockTick_Event");
		
		AHourlyMoonManSequence_C_OnGameClockTick_Event_Params params {};
		params.deltaTime = deltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyesShut1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::EyesShut1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyesShut1");
		
		AHourlyMoonManSequence_C_EyesShut1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyesOpen2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::EyesOpen2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyesOpen2");
		
		AHourlyMoonManSequence_C_EyesOpen2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.PostGameLoad");
		
		AHourlyMoonManSequence_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnCheckpointLoad");
		
		AHourlyMoonManSequence_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.ForceDestroyAllSpawnedMoonman
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::ForceDestroyAllSpawnedMoonman()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.ForceDestroyAllSpawnedMoonman");
		
		AHourlyMoonManSequence_C_ForceDestroyAllSpawnedMoonman_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.On Level Load Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::On_Level_Load_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.On Level Load Finished");
		
		AHourlyMoonManSequence_C_On_Level_Load_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.End Moon Man Sequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHourlyMoonManSequence_C::End_Moon_Man_Sequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.End Moon Man Sequence");
		
		AHourlyMoonManSequence_C_End_Moon_Man_Sequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function HourlyMoonManSequence.HourlyMoonManSequence_C.ExecuteUbergraph_HourlyMoonManSequence
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHourlyMoonManSequence_C::ExecuteUbergraph_HourlyMoonManSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HourlyMoonManSequence.HourlyMoonManSequence_C.ExecuteUbergraph_HourlyMoonManSequence");
		
		AHourlyMoonManSequence_C_ExecuteUbergraph_HourlyMoonManSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AHourlyMoonManSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHourlyMoonManSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HourlyMoonManSequence.HourlyMoonManSequence_C");
		return ptr;
	}

}


