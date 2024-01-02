#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MainGameGM.MainGameGM_C.GetNavigationData
	 */
	struct AMainGameGM_C_GetNavigationData_Params
	{
	public:
		class ANavigationData*                                     NavigationData;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetGMPowerStationManager
	 */
	struct AMainGameGM_C_GetGMPowerStationManager_Params
	{
	public:
		class APowerStationManager_C*                              PowerStationManager;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetGMTextFormatter
	 */
	struct AMainGameGM_C_GetGMTextFormatter_Params
	{
	public:
		class UMissionTextFormatterFactory_C*                      MissionTextFormatter;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetPlayerHUD
	 */
	struct AMainGameGM_C_GetPlayerHUD_Params
	{
	public:
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetGregoryRef
	 */
	struct AMainGameGM_C_GetGregoryRef_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.HasGMLoaded
	 */
	struct AMainGameGM_C_HasGMLoaded_Params
	{
	public:
		bool                                                       HasLoaded;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetFreddyRef
	 */
	struct AMainGameGM_C_GetFreddyRef_Params
	{
	public:
		class AFreddy_C*                                           Freddy;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetFlashlightManager
	 */
	struct AMainGameGM_C_GetFlashlightManager_Params
	{
	public:
		class AFlashlightRechargeStationManager_C*                 FlashlightManager;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetInventoryDataTable
	 */
	struct AMainGameGM_C_GetInventoryDataTable_Params
	{
	public:
		class UDataTable*                                          Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetHasGMLoaded
	 */
	struct AMainGameGM_C_GetHasGMLoaded_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.StartLoading
	 */
	struct AMainGameGM_C_StartLoading_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.CheckShatteredAchivements
	 */
	struct AMainGameGM_C_CheckShatteredAchivements_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.SetGregory
	 */
	struct AMainGameGM_C_SetGregory_Params
	{
	public:
		class AGregory_C*                                          GregoryPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.GetGregory
	 */
	struct AMainGameGM_C_GetGregory_Params
	{
	public:
		class AGregory_C*                                          GregoryPawn;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.ListenForLoaded
	 */
	struct AMainGameGM_C_ListenForLoaded_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.FinishLoading
	 */
	struct AMainGameGM_C_FinishLoading_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.SkipAheadFinished
	 */
	struct AMainGameGM_C_SkipAheadFinished_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.SpawnFreddyNearby
	 */
	struct AMainGameGM_C_SpawnFreddyNearby_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.SpawnMMSequence Actors
	 */
	struct AMainGameGM_C_SpawnMMSequenceActors_Params
	{
	public:
		class AActor*                                              MMActor;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.FindPlayerStart
	 */
	struct AMainGameGM_C_FindPlayerStart_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              IncomingName;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.Find Furthest Actor
	 */
	struct AMainGameGM_C_FindFurthestActor_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              FurthestActor;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnGMCallFreddy
	 */
	struct AMainGameGM_C_OnGMCallFreddy_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnRoomHeatDisplayChanged
	 */
	struct AMainGameGM_C_OnRoomHeatDisplayChanged_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnAIPawnsVis
	 */
	struct AMainGameGM_C_OnAIPawnsVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnPlayerFlashlightVis
	 */
	struct AMainGameGM_C_OnPlayerFlashlightVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.ReceiveBeginPlay
	 */
	struct AMainGameGM_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnForceSpawnVanny
	 */
	struct AMainGameGM_C_OnForceSpawnVanny_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.Call Freddy
	 */
	struct AMainGameGM_C_CallFreddy_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.On Time End
	 */
	struct AMainGameGM_C_OnTimeEnd_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.Start_RechargeSequence
	 */
	struct AMainGameGM_C_Start_RechargeSequence_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.Respawn Vanessa
	 */
	struct AMainGameGM_C_RespawnVanessa_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.On Game End
	 */
	struct AMainGameGM_C_OnGameEnd_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.DebugTeleport
	 */
	struct AMainGameGM_C_DebugTeleport_Params
	{
	public:
		unsigned char                                              UnknownData_IAUW[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        SkippedTasks;                                            // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.On Debug Teleport Finished
	 */
	struct AMainGameGM_C_OnDebugTeleportFinished_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.On Freddy Teleport Query Finished
	 */
	struct AMainGameGM_C_OnFreddyTeleportQueryFinished_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.SetFreddyRef
	 */
	struct AMainGameGM_C_SetFreddyRef_Params
	{
	public:
		class AFreddy_C*                                           Freddy;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.SetGregoryRef
	 */
	struct AMainGameGM_C_SetGregoryRef_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.SetPlayerHUD
	 */
	struct AMainGameGM_C_SetPlayerHUD_Params
	{
	public:
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.ExecuteUbergraph_MainGameGM
	 */
	struct AMainGameGM_C_ExecuteUbergraph_MainGameGM_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KAJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnFinishedLoading__DelegateSignature
	 */
	struct AMainGameGM_C_OnFinishedLoading__DelegateSignature_Params
	{	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnDebugSkip__DelegateSignature
	 */
	struct AMainGameGM_C_OnDebugSkip__DelegateSignature_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainGameGM.MainGameGM_C.OnAreaLoaded__DelegateSignature
	 */
	struct AMainGameGM_C_OnAreaLoaded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
