#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function OGM_Kitchen.OGM_Kitchen_C.CanDeactivate
	 */
	struct AOGM_Kitchen_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.GetActivatableState
	 */
	struct AOGM_Kitchen_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ActivatableState_EActivatableState                         CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.CanActivate
	 */
	struct AOGM_Kitchen_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.PastChica
	 */
	struct AOGM_Kitchen_C_PastChica_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ExitAll
	 */
	struct AOGM_Kitchen_C_ExitAll_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.Staffbot_Setup
	 */
	struct AOGM_Kitchen_C_Staffbot_Setup_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnEnd
	 */
	struct AOGM_Kitchen_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType_E_EndMiniGameType                        EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.Staffbot_SetupScreenCapture
	 */
	struct AOGM_Kitchen_C_Staffbot_SetupScreenCapture_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.AddHUD
	 */
	struct AOGM_Kitchen_C_AddHUD_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ButtonPressed
	 */
	struct AOGM_Kitchen_C_ButtonPressed_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ButtonEnable
	 */
	struct AOGM_Kitchen_C_ButtonEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OfficeDoorLock
	 */
	struct AOGM_Kitchen_C_OfficeDoorLock_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.GetDoorPowerPercentage
	 */
	struct AOGM_Kitchen_C_GetDoorPowerPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.DoorStrengthTick
	 */
	struct AOGM_Kitchen_C_DoorStrengthTick_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.StreamViewpointToggle
	 */
	struct AOGM_Kitchen_C_StreamViewpointToggle_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_ReturnToStart
	 */
	struct AOGM_Kitchen_C_StaffBot_ReturnToStart_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_Verify
	 */
	struct AOGM_Kitchen_C_StaffBot_Verify_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.StaffBot_Spawn
	 */
	struct AOGM_Kitchen_C_StaffBot_Spawn_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.CompletePizza
	 */
	struct AOGM_Kitchen_C_CompletePizza_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.CompleteCurrentPizzaStep
	 */
	struct AOGM_Kitchen_C_CompleteCurrentPizzaStep_Params
	{
	public:
		PizzaStep_EPizzaStep                                       PizzaStep;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.DebugInit
	 */
	struct AOGM_Kitchen_C_DebugInit_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.On Start
	 */
	struct AOGM_Kitchen_C_On_Start_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7
	 */
	struct AOGM_Kitchen_C_OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7
	 */
	struct AOGM_Kitchen_C_OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnFailure_9CEE3F5D496058D0154EDB89656BFCC1
	 */
	struct AOGM_Kitchen_C_OnFailure_9CEE3F5D496058D0154EDB89656BFCC1_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1
	 */
	struct AOGM_Kitchen_C_OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnCheckpointSave
	 */
	struct AOGM_Kitchen_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnGameDataLoaded
	 */
	struct AOGM_Kitchen_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnStoreGameData
	 */
	struct AOGM_Kitchen_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.PostSaveGame
	 */
	struct AOGM_Kitchen_C_PostSaveGame_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ActivateObject
	 */
	struct AOGM_Kitchen_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnActivatorDone
	 */
	struct AOGM_Kitchen_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.SetActivated
	 */
	struct AOGM_Kitchen_C_SetActivated_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.DeactivateObject
	 */
	struct AOGM_Kitchen_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.SetDeactivated
	 */
	struct AOGM_Kitchen_C_SetDeactivated_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ReceiveBeginPlay
	 */
	struct AOGM_Kitchen_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ReceiveActorBeginOverlap
	 */
	struct AOGM_Kitchen_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ReceiveTick
	 */
	struct AOGM_Kitchen_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.On Pizza Created
	 */
	struct AOGM_Kitchen_C_On_Pizza_Created_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnVictory
	 */
	struct AOGM_Kitchen_C_OnVictory_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.EndBeatCutscene
	 */
	struct AOGM_Kitchen_C_EndBeatCutscene_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.PlayBeatCutscene
	 */
	struct AOGM_Kitchen_C_PlayBeatCutscene_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnFail
	 */
	struct AOGM_Kitchen_C_OnFail_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.Teleport_ChicaSewer
	 */
	struct AOGM_Kitchen_C_Teleport_ChicaSewer_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.DoorLock
	 */
	struct AOGM_Kitchen_C_DoorLock_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.On Security Badge Collected
	 */
	struct AOGM_Kitchen_C_On_Security_Badge_Collected_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnEndSequenceDone
	 */
	struct AOGM_Kitchen_C_OnEndSequenceDone_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.PlayDreadunit
	 */
	struct AOGM_Kitchen_C_PlayDreadunit_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.VOFinished
	 */
	struct AOGM_Kitchen_C_VOFinished_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.RandomVO
	 */
	struct AOGM_Kitchen_C_RandomVO_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.EnableTimerCountdownRTPC
	 */
	struct AOGM_Kitchen_C_EnableTimerCountdownRTPC_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.PlayChicaVO
	 */
	struct AOGM_Kitchen_C_PlayChicaVO_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.PostGameLoad
	 */
	struct AOGM_Kitchen_C_PostGameLoad_Params
	{
	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.OnCheckpointLoad
	 */
	struct AOGM_Kitchen_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OGM_Kitchen.OGM_Kitchen_C.ExecuteUbergraph_OGM_Kitchen
	 */
	struct AOGM_Kitchen_C_ExecuteUbergraph_OGM_Kitchen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
