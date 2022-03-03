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
	 * Function StageLift.StageLift_C.UpdateActorPosition
	 */
	struct AStageLift_C_UpdateActorPosition_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.UserConstructionScript
	 */
	struct AStageLift_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.MoveTimeline__FinishedFunc
	 */
	struct AStageLift_C_MoveTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.MoveTimeline__UpdateFunc
	 */
	struct AStageLift_C_MoveTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.RailingTimeline__FinishedFunc
	 */
	struct AStageLift_C_RailingTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.RailingTimeline__UpdateFunc
	 */
	struct AStageLift_C_RailingTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.OnCheckpointSave
	 */
	struct AStageLift_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.OnGameDataLoaded
	 */
	struct AStageLift_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.OnStoreGameData
	 */
	struct AStageLift_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.PostGameLoad
	 */
	struct AStageLift_C_PostGameLoad_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.PostSaveGame
	 */
	struct AStageLift_C_PostSaveGame_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.ReceiveBeginPlay
	 */
	struct AStageLift_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.Move
	 */
	struct AStageLift_C_Move_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.Set Movement Time
	 */
	struct AStageLift_C_Set_Movement_Time_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.Set To Top
	 */
	struct AStageLift_C_Set_To_Top_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.Set To Bottom
	 */
	struct AStageLift_C_Set_To_Bottom_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.OnStageLiftTimerRunsOut
	 */
	struct AStageLift_C_OnStageLiftTimerRunsOut_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.On Debug Skip
	 */
	struct AStageLift_C_On_Debug_Skip_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.OnCheckpointLoad
	 */
	struct AStageLift_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StageLift.StageLift_C.Update State
	 */
	struct AStageLift_C_Update_State_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.HandleButtonState
	 */
	struct AStageLift_C_HandleButtonState_Params
	{
	};

	/**
	 * Function StageLift.StageLift_C.ExecuteUbergraph_StageLift
	 */
	struct AStageLift_C_ExecuteUbergraph_StageLift_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
