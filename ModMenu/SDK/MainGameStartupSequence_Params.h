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
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.SpawnFreddy
	 */
	struct AMainGameStartupSequence_C_SpawnFreddy_Params
	{
	public:
		struct FVector                                             SpawnTransform_Location;                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            SpawnTransform_Rotation;                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AFreddy_C*                                           FreddyPawn;                                              // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.Is Main Game
	 */
	struct AMainGameStartupSequence_C_IsMainGame_Params
	{
	public:
		bool                                                       IsMainGame;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EL4I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.RespawnPlayer
	 */
	struct AMainGameStartupSequence_C_RespawnPlayer_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.OnCheckpointLoad
	 */
	struct AMainGameStartupSequence_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.OnCheckpointSave
	 */
	struct AMainGameStartupSequence_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.OnGameDataLoaded
	 */
	struct AMainGameStartupSequence_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.OnStoreGameData
	 */
	struct AMainGameStartupSequence_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.PostGameLoad
	 */
	struct AMainGameStartupSequence_C_PostGameLoad_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.PostSaveGame
	 */
	struct AMainGameStartupSequence_C_PostSaveGame_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.Spawn Sequence
	 */
	struct AMainGameStartupSequence_C_SpawnSequence_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.OnRetry
	 */
	struct AMainGameStartupSequence_C_OnRetry_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.ReceiveBeginPlay
	 */
	struct AMainGameStartupSequence_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded
	 */
	struct AMainGameStartupSequence_C_OnRespawnLevelsLoaded_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.FreddyBootedUp
	 */
	struct AMainGameStartupSequence_C_FreddyBootedUp_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.End Loading Screen
	 */
	struct AMainGameStartupSequence_C_EndLoadingScreen_Params
	{	};

	/**
	 * Function MainGameStartupSequence.MainGameStartupSequence_C.ExecuteUbergraph_MainGameStartupSequence
	 */
	struct AMainGameStartupSequence_C_ExecuteUbergraph_MainGameStartupSequence_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FC0F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
