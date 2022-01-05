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
	 * Function FreddyGuideSick.FreddyGuideSick_C.GetCurrentPatrolPointIndex
	 */
	struct AFreddyGuideSick_C_GetCurrentPatrolPointIndex_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.GetPatrolPath
	 */
	struct AFreddyGuideSick_C_GetPatrolPath_Params
	{
	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointLoad
	 */
	struct AFreddyGuideSick_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointSave
	 */
	struct AFreddyGuideSick_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.OnGameDataLoaded
	 */
	struct AFreddyGuideSick_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.PostGameLoad
	 */
	struct AFreddyGuideSick_C_PostGameLoad_Params
	{
	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.PostSaveGame
	 */
	struct AFreddyGuideSick_C_PostSaveGame_Params
	{
	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.ReceiveBeginPlay
	 */
	struct AFreddyGuideSick_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.Try Entering
	 */
	struct AFreddyGuideSick_C_Try_Entering_Params
	{
	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.SetPatrolPath
	 */
	struct AFreddyGuideSick_C_SetPatrolPath_Params
	{
	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.SetCurrentPatrolPointIndex
	 */
	struct AFreddyGuideSick_C_SetCurrentPatrolPointIndex_Params
	{
	public:
		int                                                        PatrolPointIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.OnStoreGameData
	 */
	struct AFreddyGuideSick_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyGuideSick.FreddyGuideSick_C.ExecuteUbergraph_FreddyGuideSick
	 */
	struct AFreddyGuideSick_C_ExecuteUbergraph_FreddyGuideSick_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
