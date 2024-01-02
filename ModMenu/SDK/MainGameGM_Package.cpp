/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetNavigationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavigationData*                             NavigationData                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetNavigationData(class ANavigationData** NavigationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetNavigationData");
		
		AMainGameGM_C_GetNavigationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigationData != nullptr)
			*NavigationData = params.NavigationData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetGMPowerStationManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APowerStationManager_C*                      PowerStationManager                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetGMPowerStationManager(class APowerStationManager_C** PowerStationManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetGMPowerStationManager");
		
		AMainGameGM_C_GetGMPowerStationManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerStationManager != nullptr)
			*PowerStationManager = params.PowerStationManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetGMTextFormatter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionTextFormatterFactory_C*              MissionTextFormatter                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetGMTextFormatter(class UMissionTextFormatterFactory_C** MissionTextFormatter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetGMTextFormatter");
		
		AMainGameGM_C_GetGMTextFormatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionTextFormatter != nullptr)
			*MissionTextFormatter = params.MissionTextFormatter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetPlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerHUD_C*                                PlayerHUD                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetPlayerHUD(class UPlayerHUD_C** PlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetPlayerHUD");
		
		AMainGameGM_C_GetPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerHUD != nullptr)
			*PlayerHUD = params.PlayerHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetGregoryRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  Gregory                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetGregoryRef(class AGregory_C** Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetGregoryRef");
		
		AMainGameGM_C_GetGregoryRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gregory != nullptr)
			*Gregory = params.Gregory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.HasGMLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasLoaded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameGM_C::HasGMLoaded(bool* HasLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.HasGMLoaded");
		
		AMainGameGM_C_HasGMLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasLoaded != nullptr)
			*HasLoaded = params.HasLoaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetFreddyRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFreddy_C*                                   Freddy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetFreddyRef(class AFreddy_C** Freddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetFreddyRef");
		
		AMainGameGM_C_GetFreddyRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Freddy != nullptr)
			*Freddy = params.Freddy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetFlashlightManager
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetInventoryDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::GetInventoryDataTable(class UDataTable** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetInventoryDataTable");
		
		AMainGameGM_C_GetInventoryDataTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetHasGMLoaded
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::GetHasGMLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.GetHasGMLoaded");
		
		AMainGameGM_C_GetHasGMLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.StartLoading
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.CheckShatteredAchivements
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SetGregory
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.GetGregory
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.ListenForLoaded
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.FinishLoading
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SkipAheadFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SpawnFreddyNearby
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SpawnMMSequence Actors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MMActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameGM_C::SpawnMMSequenceActors(class AActor* MMActor, bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SpawnMMSequence Actors");
		
		AMainGameGM_C_SpawnMMSequenceActors_Params params {};
		params.MMActor = MMActor;
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.FindPlayerStart
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Find Furthest Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      FurthestActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::FindFurthestActor(TArray<class AActor*>* Actors, class AActor* TargetActor, class AActor** FurthestActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Find Furthest Actor");
		
		AMainGameGM_C_FindFurthestActor_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnGMCallFreddy
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::OnGMCallFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.OnGMCallFreddy");
		
		AMainGameGM_C_OnGMCallFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnRoomHeatDisplayChanged
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnAIPawnsVis
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnPlayerFlashlightVis
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.ReceiveBeginPlay
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnForceSpawnVanny
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Call Freddy
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::CallFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Call Freddy");
		
		AMainGameGM_C_CallFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Time End
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::OnTimeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Time End");
		
		AMainGameGM_C_OnTimeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Start_RechargeSequence
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.Respawn Vanessa
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::RespawnVanessa()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.Respawn Vanessa");
		
		AMainGameGM_C_RespawnVanessa_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Game End
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::OnGameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Game End");
		
		AMainGameGM_C_OnGameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.DebugTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Debug Teleport Finished
	 * 		Flags  -> ()
	 */
	void AMainGameGM_C::OnDebugTeleportFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Debug Teleport Finished");
		
		AMainGameGM_C_OnDebugTeleportFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.On Freddy Teleport Query Finished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::OnFreddyTeleportQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.On Freddy Teleport Query Finished");
		
		AMainGameGM_C_OnFreddyTeleportQueryFinished_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SetFreddyRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFreddy_C*                                   Freddy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::SetFreddyRef(class AFreddy_C* Freddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SetFreddyRef");
		
		AMainGameGM_C_SetFreddyRef_Params params {};
		params.Freddy = Freddy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SetGregoryRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  Gregory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::SetGregoryRef(class AGregory_C* Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SetGregoryRef");
		
		AMainGameGM_C_SetGregoryRef_Params params {};
		params.Gregory = Gregory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.SetPlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerHUD_C*                                PlayerHUD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::SetPlayerHUD(class UPlayerHUD_C* PlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameGM.MainGameGM_C.SetPlayerHUD");
		
		AMainGameGM_C_SetPlayerHUD_Params params {};
		params.PlayerHUD = PlayerHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.ExecuteUbergraph_MainGameGM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameGM_C::ExecuteUbergraph_MainGameGM(int32_t EntryPoint)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnFinishedLoading__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnDebugSkip__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                SkippedTasks                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameGM.MainGameGM_C.OnAreaLoaded__DelegateSignature
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainGameGM_C.StaticClass
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


