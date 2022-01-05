/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MainGameGM_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetFlashlightManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlightRechargeStationManager_C*         FlashlightManager                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetFlashlightManager");
		
		AMainGameGM_C_GetFlashlightManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlashlightManager != nullptr)
			*FlashlightManager = params.FlashlightManager;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.StartLoading
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::StartLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.StartLoading");
		
		AMainGameGM_C_StartLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.CheckShatteredAchivements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::CheckShatteredAchivements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.CheckShatteredAchivements");
		
		AMainGameGM_C_CheckShatteredAchivements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SetGregory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGregory_C*                                  GregoryPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::SetGregory(class AGregory_C* GregoryPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SetGregory");
		
		AMainGameGM_C_SetGregory_Params params {};
		params.GregoryPawn = GregoryPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetGregory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AGregory_C*                                  GregoryPawn                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetGregory(class AGregory_C** GregoryPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetGregory");
		
		AMainGameGM_C_GetGregory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GregoryPawn != nullptr)
			*GregoryPawn = params.GregoryPawn;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.ListenForLoaded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AMainGameGM_C::ListenForLoaded(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.ListenForLoaded");
		
		AMainGameGM_C_ListenForLoaded_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.FinishLoading
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::FinishLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.FinishLoading");
		
		AMainGameGM_C_FinishLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SkipAheadFinished
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::SkipAheadFinished(TArray<class FName>* SkippedTasks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SkipAheadFinished");
		
		AMainGameGM_C_SkipAheadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkippedTasks != nullptr)
			*SkippedTasks = params.SkippedTasks;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SpawnFreddyNearby
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::SpawnFreddyNearby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SpawnFreddyNearby");
		
		AMainGameGM_C_SpawnFreddyNearby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SpawnMMSequence Actors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MMActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameGM_C::SpawnMMSequence_Actors(class AActor* MMActor, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SpawnMMSequence Actors");
		
		AMainGameGM_C_SpawnMMSequence_Actors_Params params {};
		params.MMActor = MMActor;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.FindPlayerStart
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      IncomingName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class AActor* AMainGameGM_C::FindPlayerStart(class AController* Player, const class FString& IncomingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.FindPlayerStart");
		
		AMainGameGM_C_FindPlayerStart_Params params {};
		params.Player = Player;
		params.IncomingName = IncomingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Find Furthest Actor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      FurthestActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::Find_Furthest_Actor(TArray<class AActor*>* Actors, class AActor* TargetActor, class AActor** FurthestActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Find Furthest Actor");
		
		AMainGameGM_C_Find_Furthest_Actor_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
		if (FurthestActor != nullptr)
			*FurthestActor = params.FurthestActor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnPlayerFlashlightVis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameGM_C::OnPlayerFlashlightVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnPlayerFlashlightVis");
		
		AMainGameGM_C_OnPlayerFlashlightVis_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainGameGM_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.ReceiveBeginPlay");
		
		AMainGameGM_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnForceSpawnVanny
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AMainGameGM_C::OnForceSpawnVanny()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnForceSpawnVanny");
		
		AMainGameGM_C_OnForceSpawnVanny_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Call Freddy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::Call_Freddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Call Freddy");
		
		AMainGameGM_C_Call_Freddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Time End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::On_Time_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Time End");
		
		AMainGameGM_C_On_Time_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnAIPawnsVis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameGM_C::OnAIPawnsVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnAIPawnsVis");
		
		AMainGameGM_C_OnAIPawnsVis_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Start_RechargeSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::Start_RechargeSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Start_RechargeSequence");
		
		AMainGameGM_C_Start_RechargeSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnRoomHeatDisplayChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameGM_C::OnRoomHeatDisplayChanged(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnRoomHeatDisplayChanged");
		
		AMainGameGM_C_OnRoomHeatDisplayChanged_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Respawn Vanessa
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::Respawn_Vanessa()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Respawn Vanessa");
		
		AMainGameGM_C_Respawn_Vanessa_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Game End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::On_Game_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Game End");
		
		AMainGameGM_C_On_Game_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.DebugTeleport
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::DebugTeleport(TArray<class FName>* SkippedTasks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.DebugTeleport");
		
		AMainGameGM_C_DebugTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkippedTasks != nullptr)
			*SkippedTasks = params.SkippedTasks;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Debug Teleport Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::On_Debug_Teleport_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Debug Teleport Finished");
		
		AMainGameGM_C_On_Debug_Teleport_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Freddy Teleport Query Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<AIModule_EEnvQueryStatus>              QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::On_Freddy_Teleport_Query_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Freddy Teleport Query Finished");
		
		AMainGameGM_C_On_Freddy_Teleport_Query_Finished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.ExecuteUbergraph_MainGameGM
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::ExecuteUbergraph_MainGameGM(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.ExecuteUbergraph_MainGameGM");
		
		AMainGameGM_C_ExecuteUbergraph_MainGameGM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnFinishedLoading__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::OnFinishedLoading__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnFinishedLoading__DelegateSignature");
		
		AMainGameGM_C_OnFinishedLoading__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnDebugSkip__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::OnDebugSkip__DelegateSignature(TArray<class FName>* SkippedTasks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnDebugSkip__DelegateSignature");
		
		AMainGameGM_C_OnDebugSkip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkippedTasks != nullptr)
			*SkippedTasks = params.SkippedTasks;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnAreaLoaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameGM_C::OnAreaLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnAreaLoaded__DelegateSignature");
		
		AMainGameGM_C_OnAreaLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMainGameGM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainGameGM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainGameGM.MainGameGM_C");
		return ptr;
	}

}


