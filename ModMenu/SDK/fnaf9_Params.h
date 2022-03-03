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
	 * Function fnaf9.AIHiderInterface.ExitHideMode
	 */
	struct UAIHiderInterface_ExitHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIHiderInterface.EnterHideMode
	 */
	struct UAIHiderInterface_EnterHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.UnregisterSeekerPath
	 */
	struct UAIManagementSystem_UnregisterSeekerPath_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.UnRegisterAI
	 */
	struct UAIManagementSystem_UnRegisterAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.UnpauseManager
	 */
	struct UAIManagementSystem_UnpauseManager_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.StoreEndoStates
	 */
	struct UAIManagementSystem_StoreEndoStates_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.StartManager
	 */
	struct UAIManagementSystem_StartManager_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa
	 */
	struct UAIManagementSystem_SpawnVannyOrVanessa_Params
	{
	public:
		bool                                                       bSpawnVanny;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutSpawned;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint
	 */
	struct UAIManagementSystem_SpawnSpecificAIAtSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   SpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath
	 */
	struct UAIManagementSystem_SpawnAIWithTransformAndPath_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe
	 */
	struct UAIManagementSystem_SpawnAITypeWithTransformSafe_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_ESpawnActorCollisionHandlingMethod                  CollisionOverrideMethod;                                 // 0x0042(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceRespawn;                                           // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform
	 */
	struct UAIManagementSystem_SpawnAITypeWithTransform_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_ESpawnActorCollisionHandlingMethod                  CollisionOverrideMethod;                                 // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation
	 */
	struct UAIManagementSystem_SpawnAITypeAtLocation_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SpawnLocation;                                           // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ForceShattered;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation
	 */
	struct UAIManagementSystem_SpawnAIOnPathNearLocation_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIOnPath
	 */
	struct UAIManagementSystem_SpawnAIOnPath_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAINearPlayer
	 */
	struct UAIManagementSystem_SpawnAINearPlayer_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIFar
	 */
	struct UAIManagementSystem_SpawnAIFar_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint
	 */
	struct UAIManagementSystem_SpawnAIAtSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   SpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SpawnAIAtDistance
	 */
	struct UAIManagementSystem_SpawnAIAtDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled
	 */
	struct UAIManagementSystem_SetWorldSpawnEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable
	 */
	struct UAIManagementSystem_SetVanessaSpawnEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SetUseStagedSpawns
	 */
	struct UAIManagementSystem_SetUseStagedSpawns_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SetSpawningEnabled
	 */
	struct UAIManagementSystem_SetSpawningEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SetExpectedAI
	 */
	struct UAIManagementSystem_SetExpectedAI_Params
	{
	public:
		TArray<struct FAnimatronicExpectedData>                    AITypes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SetAllAIExpected
	 */
	struct UAIManagementSystem_SetAllAIExpected_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.SetAITeleportEnabled
	 */
	struct UAIManagementSystem_SetAITeleportEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SendVanessaAlert
	 */
	struct UAIManagementSystem_SendVanessaAlert_Params
	{
	public:
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberToAlert;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.SendGeneralAlert
	 */
	struct UAIManagementSystem_SendGeneralAlert_Params
	{
	public:
		struct FVector                                             AlertLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<fnaf9_EFNAFAISpawnType>                             TypesToAlert;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberToAlert;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.RespawnEndos
	 */
	struct UAIManagementSystem_RespawnEndos_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.RespawnAnimatronics
	 */
	struct UAIManagementSystem_RespawnAnimatronics_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.RespawnAllAI
	 */
	struct UAIManagementSystem_RespawnAllAI_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.Reset
	 */
	struct UAIManagementSystem_Reset_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.RemoveExpectedAI
	 */
	struct UAIManagementSystem_RemoveExpectedAI_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.RemoveCharacterByType
	 */
	struct UAIManagementSystem_RemoveCharacterByType_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.RemoveAllCharacters
	 */
	struct UAIManagementSystem_RemoveAllCharacters_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.RegisterSeekerPath
	 */
	struct UAIManagementSystem_RegisterSeekerPath_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.RegisterAI
	 */
	struct UAIManagementSystem_RegisterAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.PawnExitedRoom
	 */
	struct UAIManagementSystem_PawnExitedRoom_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       Room;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.PawnEnteringRoom
	 */
	struct UAIManagementSystem_PawnEnteringRoom_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       Room;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.PawnEnteredRoom
	 */
	struct UAIManagementSystem_PawnEnteredRoom_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       Room;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.PauseManager
	 */
	struct UAIManagementSystem_PauseManager_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnWorldStateChanged
	 */
	struct UAIManagementSystem_OnWorldStateChanged_Params
	{
	public:
		fnaf9_EFNAFGameState                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EFNAFGameState                                       OldState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.OnVannyPathsCollected
	 */
	struct UAIManagementSystem_OnVannyPathsCollected_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnPawnEndPlay
	 */
	struct UAIManagementSystem_OnPawnEndPlay_Params
	{
	public:
		class AActor*                                              DestroyedPawn;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EEndPlayReason                                      EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.OnAlertDistancesCollected
	 */
	struct UAIManagementSystem_OnAlertDistancesCollected_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld
	 */
	struct UAIManagementSystem_OnAIFellOutOfWorld_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled
	 */
	struct UAIManagementSystem_IsWorldSpawnEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.IsUsingStagedSpawns
	 */
	struct UAIManagementSystem_IsUsingStagedSpawns_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.IsSpawningEnabled
	 */
	struct UAIManagementSystem_IsSpawningEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.IsRoomOccupied
	 */
	struct UAIManagementSystem_IsRoomOccupied_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.IsRoomBeingEntered
	 */
	struct UAIManagementSystem_IsRoomBeingEntered_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.IsAITeleportEnabled
	 */
	struct UAIManagementSystem_IsAITeleportEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter
	 */
	struct UAIManagementSystem_GetTimeSinceLastEncounter_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer
	 */
	struct UAIManagementSystem_GetRoomDistancesToPlayer_Params
	{
	public:
		TMap<class APawn*, int32_t>                                ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn
	 */
	struct UAIManagementSystem_GetRoomAIPawnIsIn_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering
	 */
	struct UAIManagementSystem_GetRoomAIPawnIsEntering_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARoomAreaBase*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPawnForType
	 */
	struct UAIManagementSystem_GetPawnForType_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPawnClassForType
	 */
	struct UAIManagementSystem_GetPawnClassForType_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceShattered;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetPathForAI
	 */
	struct UAIManagementSystem_GetPathForAI_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PathName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetExistingPawnTypes
	 */
	struct UAIManagementSystem_GetExistingPawnTypes_Params
	{
	public:
		TArray<fnaf9_EFNAFAISpawnType>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetExistingPawn
	 */
	struct UAIManagementSystem_GetExistingPawn_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage
	 */
	struct UAIManagementSystem_GetCurrentVannyMeterValuesAsPercentage_Params
	{
	public:
		float                                                      OutCurrentValuePercent;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutSoftMaxPercent;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues
	 */
	struct UAIManagementSystem_GetCurrentVannyMeterValues_Params
	{
	public:
		float                                                      CurrentValue;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SoftMax;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage
	 */
	struct UAIManagementSystem_GetCurrentVannyMeterPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCachedDistances
	 */
	struct UAIManagementSystem_GetCachedDistances_Params
	{
	public:
		TArray<struct FAIDistanceResult>                           ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetCachedDistanceFor
	 */
	struct UAIManagementSystem_GetCachedDistanceFor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutResultValid;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIDistanceResult                                   OutResult;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor
	 */
	struct UAIManagementSystem_GetAllSpawnPointsFor_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AFNAFAISpawnPoint*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllSpawnPoints
	 */
	struct UAIManagementSystem_GetAllSpawnPoints_Params
	{
	public:
		TArray<class AFNAFAISpawnPoint*>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllRegisteredAI
	 */
	struct UAIManagementSystem_GetAllRegisteredAI_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns
	 */
	struct UAIManagementSystem_GetAllAnimatronicPawns_Params
	{
	public:
		TArray<class APawn*>                                       OutAnimatronicPawns;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost
	 */
	struct UAIManagementSystem_GetAllAIInRoomAtMost_Params
	{
	public:
		int32_t                                                    numRooms;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAllAI
	 */
	struct UAIManagementSystem_GetAllAI_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer
	 */
	struct UAIManagementSystem_GetAIPawnsWithSightToPlayer_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom
	 */
	struct UAIManagementSystem_GetAIPawnsEnteringRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.GetAIPawnInRoom
	 */
	struct UAIManagementSystem_GetAIPawnInRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance
	 */
	struct UAIManagementSystem_FindSpawnPointClosestToDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AFNAFAISpawnPoint*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance
	 */
	struct UAIManagementSystem_FindSpawnNotVisibleAtDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EFNAFAISpawnType                                     SpawnType;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               PawnForNavProperties;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AFNAFAISpawnPoint*>                           OutSpawnPointsResult;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              OutDistances;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView
	 */
	struct UAIManagementSystem_FindRandomPatrolPointOutOfView_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutLocation;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint
	 */
	struct UAIManagementSystem_FindFurthestSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindClosestSpawnPoint
	 */
	struct UAIManagementSystem_FindClosestSpawnPoint_Params
	{
	public:
		class AFNAFAISpawnPoint*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView
	 */
	struct UAIManagementSystem_FindClosestPatrolPointOutOfView_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutResultValid;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutLocation;                                             // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointIndex;                                           // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.FindClosestPathPointForAI
	 */
	struct UAIManagementSystem_FindClosestPathPointForAI_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutResultValid;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointIndex;                                           // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutLocation;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.ExitedHiding
	 */
	struct UAIManagementSystem_ExitedHiding_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.DestroyAllAINotVisible
	 */
	struct UAIManagementSystem_DestroyAllAINotVisible_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast
	 */
	struct UAIManagementSystem_DestroyAllAIInRoomsAtleast_Params
	{
	public:
		int32_t                                                    RoomDist;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.DestroyAllAI
	 */
	struct UAIManagementSystem_DestroyAllAI_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.ClearExpectedAI
	 */
	struct UAIManagementSystem_ClearExpectedAI_Params
	{
	};

	/**
	 * Function fnaf9.AIManagementSystem.CalculateAllAIDistances
	 */
	struct UAIManagementSystem_CalculateAllAIDistances_Params
	{
	public:
		TArray<struct FAIDistanceResult>                           DistanceResults;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutClosestIsValid;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ClosestIndex;                                            // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.ApplySound
	 */
	struct UAIManagementSystem_ApplySound_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.ApplyCollect
	 */
	struct UAIManagementSystem_ApplyCollect_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom
	 */
	struct UAIManagementSystem_AnyPawnInPlayerRoom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.AISpottedPlayer
	 */
	struct UAIManagementSystem_AISpottedPlayer_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.AILostSightOfPlayer
	 */
	struct UAIManagementSystem_AILostSightOfPlayer_Params
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.AdjustVannyMeter
	 */
	struct UAIManagementSystem_AdjustVannyMeter_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AIManagementSystem.AddExpectedAI
	 */
	struct UAIManagementSystem_AddExpectedAI_Params
	{
	public:
		struct FAnimatronicExpectedData                            AIType;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.SetPointType
	 */
	struct UPathPointProvider_SetPointType_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointType;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.SetPointLocation
	 */
	struct UPathPointProvider_SetPointLocation_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.RemovePointConnection
	 */
	struct UPathPointProvider_RemovePointConnection_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointToDisconnectIndex;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.RemovePoint
	 */
	struct UPathPointProvider_RemovePoint_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointType
	 */
	struct UPathPointProvider_GetPointType_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointsConnectedTo
	 */
	struct UPathPointProvider_GetPointsConnectedTo_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointLocation
	 */
	struct UPathPointProvider_GetPointLocation_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.GetPointColor
	 */
	struct UPathPointProvider_GetPointColor_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.GetNumberOfPathPoints
	 */
	struct UPathPointProvider_GetNumberOfPathPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.GetAvailablePointTypes
	 */
	struct UPathPointProvider_GetAvailablePointTypes_Params
	{
	public:
		TArray<class FText>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.AddPointConnection
	 */
	struct UPathPointProvider_AddPointConnection_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PointToConnectIndex;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PathPointProvider.AddPoint
	 */
	struct UPathPointProvider_AddPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PlayerTrigger.SetTriggerActive
	 */
	struct APlayerTrigger_SetTriggerActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PlayerTrigger.SaveActivated
	 */
	struct APlayerTrigger_SaveActivated_Params
	{
	};

	/**
	 * Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged
	 */
	struct APlayerTrigger_OnWorldObjectStateChanged_Params
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ObjectState;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PlayerTrigger.OnTriggerStay
	 */
	struct APlayerTrigger_OnTriggerStay_Params
	{
	};

	/**
	 * Function fnaf9.PlayerTrigger.OnTriggered
	 */
	struct APlayerTrigger_OnTriggered_Params
	{
	};

	/**
	 * Function fnaf9.PlayerTrigger.IsTriggerStateSet
	 */
	struct APlayerTrigger_IsTriggerStateSet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PlayerTrigger.IsTriggerActive
	 */
	struct APlayerTrigger_IsTriggerActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PlayerTrigger.ForceTrigger
	 */
	struct APlayerTrigger_ForceTrigger_Params
	{
	};

	/**
	 * Function fnaf9.PlayerTrigger.CanTrigger
	 */
	struct APlayerTrigger_CanTrigger_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AISpawnTrigger.OnAISpawnedFailure
	 */
	struct AAISpawnTrigger_OnAISpawnedFailure_Params
	{
	public:
		class APawn*                                               SpawnedPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.AISpawnTrigger.OnAISpawned
	 */
	struct AAISpawnTrigger_OnAISpawned_Params
	{
	public:
		class APawn*                                               SpawnedPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.CameraHelperFunctions.IsLocationInCameraView
	 */
	struct UCameraHelperFunctions_IsLocationInCameraView_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_ECameraAngleFlags                                    CameraAngles;                                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutHorizontalAngle;                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutVerticalAngle;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera
	 */
	struct UCameraHelperFunctions_GetLocationAnglesFromCamera_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutHorizontalAngle;                                      // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutVerticalAngle;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.CameraTrigger.GetAlertType
	 */
	struct UCameraTrigger_GetAlertType_Params
	{
	public:
		fnaf9_EAlertType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionalCheckComponent.OnConditionUpdated
	 */
	struct UConditionalCheckComponent_OnConditionUpdated_Params
	{
	};

	/**
	 * Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate
	 */
	struct UConditionCheckInterface_UnbindConditionUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      OnConditionResultUpdated;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionCheckInterface.ConditionsMet
	 */
	struct UConditionCheckInterface_ConditionsMet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate
	 */
	struct UConditionCheckInterface_BindConditionUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      OnConditionResultUpdated;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate
	 */
	struct UConditionFunctionLibrary_RemoveConditionDelegate_Params
	{
	public:
		struct FConditionResultDelegates                           DelegateHandle;                                          // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet
	 */
	struct UConditionFunctionLibrary_HasMetComponentConditionsWithGet_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutConditionsMet;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions
	 */
	struct UConditionFunctionLibrary_HasMetComponentConditions_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions
	 */
	struct UConditionFunctionLibrary_HasMetAnyComponentConditions_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate
	 */
	struct UConditionFunctionLibrary_CallConditionUpdate_Params
	{
	public:
		struct FConditionResultDelegates                           DelegateHandle;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate
	 */
	struct UConditionFunctionLibrary_AddConditionDelegate_Params
	{
	public:
		struct FConditionResultDelegates                           DelegateHandle;                                          // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.SetSecurityLevel
	 */
	struct UDoorComponent_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.SetPlayerBlocker
	 */
	struct UDoorComponent_SetPlayerBlocker_Params
	{
	public:
		class UPrimitiveComponent*                                 InPlayerBlocker;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.SetLockedForPlayer
	 */
	struct UDoorComponent_SetLockedForPlayer_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.SetLockedForAI
	 */
	struct UDoorComponent_SetLockedForAI_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer
	 */
	struct UDoorComponent_SetAutomaticDoorEnableForPlayer_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI
	 */
	struct UDoorComponent_SetAutomaticDoorEnableForAI_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.PawnExitedDoor
	 */
	struct UDoorComponent_PawnExitedDoor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.PawnEnteredDoor
	 */
	struct UDoorComponent_PawnEnteredDoor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.IsLockedForPlayer
	 */
	struct UDoorComponent_IsLockedForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.IsLockedForAI
	 */
	struct UDoorComponent_IsLockedForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.HasMetConditions
	 */
	struct UDoorComponent_HasMetConditions_Params
	{
	public:
		class AFNAFBasePlayerCharacter*                            BasePlayerCharacter;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bConditionsMet;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EConditionFailReason                                 FailReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.HasDoorInitialized
	 */
	struct UDoorComponent_HasDoorInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.GetPawnsInDoor
	 */
	struct UDoorComponent_GetPawnsInDoor_Params
	{
	public:
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer
	 */
	struct UDoorComponent_GetIsAutomaticDoorEnabledForPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI
	 */
	struct UDoorComponent_GetIsAutomaticDoorEnabledForAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.GetDoorSideFromLocation
	 */
	struct UDoorComponent_GetDoorSideFromLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EDoorSide                                            ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.GetDoorSideFromActor
	 */
	struct UDoorComponent_GetDoorSideFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EDoorSide                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.GetCurrentRequirements
	 */
	struct UDoorComponent_GetCurrentRequirements_Params
	{
	public:
		struct FDoorEntryRequirements                              ReturnValue;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.ForceOpen
	 */
	struct UDoorComponent_ForceOpen_Params
	{
	};

	/**
	 * Function fnaf9.DoorComponent.ForceClose
	 */
	struct UDoorComponent_ForceClose_Params
	{
	};

	/**
	 * Function fnaf9.DoorComponent.CopyConditions
	 */
	struct UDoorComponent_CopyConditions_Params
	{
	public:
		class UDoorComponent*                                      OtherDoorComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorComponent.CanPawnOpenDoor
	 */
	struct UDoorComponent_CanPawnOpenDoor_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutConditionsMet;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EConditionFailReason                                 OutFailReason;                                           // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorInteractor.OnOverlappedDoor
	 */
	struct UDoorInteractor_OnOverlappedDoor_Params
	{
	public:
		bool                                                       bCanEnterDoor;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EConditionFailReason                                 CantEnterReason;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDoorComponent*                                      DoorComponent;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.DoorInteractor.OnEndOverlapDoor
	 */
	struct UDoorInteractor_OnEndOverlapDoor_Params
	{
	};

	/**
	 * Function fnaf9.DoorInteractor.DoorEntryNotAllowed
	 */
	struct UDoorInteractor_DoorEntryNotAllowed_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay
	 */
	struct Afnaf9GameModeBase_ToggleFullAIDisplay_Params
	{
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.StartRepairGame
	 */
	struct Afnaf9GameModeBase_StartRepairGame_Params
	{
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.SetAIDisplay
	 */
	struct Afnaf9GameModeBase_SetAIDisplay_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay
	 */
	struct Afnaf9GameModeBase_RoomHeatDisplay_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.POIVisible
	 */
	struct Afnaf9GameModeBase_POIVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.POIDetectionVisible
	 */
	struct Afnaf9GameModeBase_POIDetectionVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis
	 */
	struct Afnaf9GameModeBase_PlayerFlashlightVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged
	 */
	struct Afnaf9GameModeBase_OnRoomHeatDisplayChanged_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis
	 */
	struct Afnaf9GameModeBase_OnPlayerFlashlightVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny
	 */
	struct Afnaf9GameModeBase_OnForceSpawnVanny_Params
	{
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis
	 */
	struct Afnaf9GameModeBase_OnAIPawnsVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn
	 */
	struct Afnaf9GameModeBase_IsAIDisplayOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny
	 */
	struct Afnaf9GameModeBase_ForceSpawnVanny_Params
	{
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.FinishRepairGame
	 */
	struct Afnaf9GameModeBase_FinishRepairGame_Params
	{
	};

	/**
	 * Function fnaf9.fnaf9GameModeBase.AIPawnsVis
	 */
	struct Afnaf9GameModeBase_AIPawnsVis_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFAchievementUtils.GetAllAchievements
	 */
	struct UFNAFAchievementUtils_GetAllAchievements_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFAISpawnPoint.GetAIType
	 */
	struct AFNAFAISpawnPoint_GetAIType_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld
	 */
	struct AFNAFBaseCharacter_OnFellOutOfWorld_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation
	 */
	struct AFNAFBasePlayerCharacter_TeleportPlayerWithCameraLocation_Params
	{
	public:
		struct FVector                                             CameraWorldLocation;                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer
	 */
	struct AFNAFBasePlayerCharacter_TeleportPlayer_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Yaw;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded
	 */
	struct AFNAFBasePlayerCharacter_OnKillZLevelsLoaded_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType
	 */
	struct AFNAFBasePlayerCharacter_GetPlayerPawnType_Params
	{
	public:
		fnaf9_EPlayerPawnType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation
	 */
	struct AFNAFBasePlayerCharacter_GetLastSavedLocationAndRotation_Params
	{
	public:
		struct FVector                                             LastSavedLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            LastSavedRotation;                                       // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged
	 */
	struct AFNAFBasePlayerController_OnUsingGamepadChanged_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare
	 */
	struct AFNAFBasePlayerController_OnTriggerVannyScare_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA
	 */
	struct AFNAFBasePlayerController_OnToggleLocalizationQA_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode
	 */
	struct AFNAFBasePlayerController_OnToggleFlightMode_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleDevUI
	 */
	struct AFNAFBasePlayerController_OnToggleDevUI_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode
	 */
	struct AFNAFBasePlayerController_OnToggleCinemaMode_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered
	 */
	struct AFNAFBasePlayerController_OnDebugSequenceEntered_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.IsUsingGamepad
	 */
	struct AFNAFBasePlayerController_IsUsingGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement
	 */
	struct AFNAFBasePlayerController_GiveVIPAchievement_Params
	{
	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown
	 */
	struct AFNAFBasePlayerController_GetCurrentKeysDown_Params
	{
	public:
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown
	 */
	struct AFNAFBasePlayerController_AnyOtherKeysDown_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFCheatManager.UpgradeFreddy
	 */
	struct UFNAFCheatManager_UpgradeFreddy_Params
	{
	public:
		fnaf9_EFreddyUpgradeType                                   Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFCheatManager.ToggleDebugCloaking
	 */
	struct UFNAFCheatManager_ToggleDebugCloaking_Params
	{
	};

	/**
	 * Function fnaf9.FNAFCheatManager.SetDebugCloaking
	 */
	struct UFNAFCheatManager_SetDebugCloaking_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFCheatManager.GetDebugCloaking
	 */
	struct UFNAFCheatManager_GetDebugCloaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFCheatManager.ApplyQualitySettings
	 */
	struct UFNAFCheatManager_ApplyQualitySettings_Params
	{
	public:
		int32_t                                                    VisualQualityLevel;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RayTraceQualityLevel;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventObject.TriggerEvent
	 */
	struct UFNAFEventObject_TriggerEvent_Params
	{
	};

	/**
	 * Function fnaf9.FNAFEventObject.IsEventFinished
	 */
	struct UFNAFEventObject_IsEventFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventObject.CanPlayEvent
	 */
	struct UFNAFEventObject_CanPlayEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventSystem.UnpauseEventSystem
	 */
	struct UFNAFEventSystem_UnpauseEventSystem_Params
	{
	};

	/**
	 * Function fnaf9.FNAFEventSystem.StoreEventTriggered
	 */
	struct UFNAFEventSystem_StoreEventTriggered_Params
	{
	public:
		class FName                                                EventTag;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventSystem.StopEventTimer
	 */
	struct UFNAFEventSystem_StopEventTimer_Params
	{
	};

	/**
	 * Function fnaf9.FNAFEventSystem.StartEventTimer
	 */
	struct UFNAFEventSystem_StartEventTimer_Params
	{
	};

	/**
	 * Function fnaf9.FNAFEventSystem.SetEventTimeSeconds
	 */
	struct UFNAFEventSystem_SetEventTimeSeconds_Params
	{
	public:
		float                                                      MinTimeBetweenEvents;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTimeBetweenEvents;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventSystem.SetEventActorWeight
	 */
	struct UFNAFEventSystem_SetEventActorWeight_Params
	{
	public:
		float                                                      NewWeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent
	 */
	struct UFNAFEventSystem_SetCurrentAudioComponent_Params
	{
	public:
		class UAudioComponent*                                     EventSoundCue;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFEventSystem.PauseEventSystem
	 */
	struct UFNAFEventSystem_PauseEventSystem_Params
	{
	};

	/**
	 * Function fnaf9.FNAFEventSystem.OnAudioFinished
	 */
	struct UFNAFEventSystem_OnAudioFinished_Params
	{
	};

	/**
	 * Function fnaf9.FNAFEventSystem.HasEventBeenTriggered
	 */
	struct UFNAFEventSystem_HasEventBeenTriggered_Params
	{
	public:
		class FName                                                EventTag;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.StartGamePlay
	 */
	struct UFNAFGameInstanceBase_StartGamePlay_Params
	{
	public:
		fnaf9_EFNAFGameType                                        GameType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel
	 */
	struct UFNAFGameInstanceBase_SetVisualQualityLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetSplashFinished
	 */
	struct UFNAFGameInstanceBase_SetSplashFinished_Params
	{
	public:
		bool                                                       bFinished;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel
	 */
	struct UFNAFGameInstanceBase_SetRayTraceQualityLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent
	 */
	struct UFNAFGameInstanceBase_ProcessActivityIntent_Params
	{
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete
	 */
	struct UFNAFGameInstanceBase_OnGameActivityLoadComplete_Params
	{
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated
	 */
	struct UFNAFGameInstanceBase_OnApplicationReactivated_Params
	{
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated
	 */
	struct UFNAFGameInstanceBase_OnApplicationDeactivated_Params
	{
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates
	 */
	struct UFNAFGameInstanceBase_LogGameClockDelegates_Params
	{
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsNormalPlay
	 */
	struct UFNAFGameInstanceBase_IsNormalPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity
	 */
	struct UFNAFGameInstanceBase_IsLoadingActivity_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.IsFromTitle
	 */
	struct UFNAFGameInstanceBase_IsFromTitle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.HasSplashFinished
	 */
	struct UFNAFGameInstanceBase_HasSplashFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel
	 */
	struct UFNAFGameInstanceBase_GetVisualQualityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel
	 */
	struct UFNAFGameInstanceBase_GetRayTraceQualityLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig
	 */
	struct UFNAFGameInstanceBase_GetIsShippingConfig_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult
	 */
	struct UFNAFGameInstanceBase_GetGPUBenchmarkResult_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndex
	 */
	struct UFNAFGameInstanceBase_GetGameTipTextByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType
	 */
	struct UFNAFGameInstanceBase_GetCurrentGameType_Params
	{
	public:
		fnaf9_EFNAFGameType                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult
	 */
	struct UFNAFGameInstanceBase_GetCPUBenchmarkResult_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString
	 */
	struct UFNAFGameInstanceBase_GetAllLoadedLevelsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.EndLoadingScreen
	 */
	struct UFNAFGameInstanceBase_EndLoadingScreen_Params
	{
	};

	/**
	 * Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreen
	 */
	struct UFNAFGameInstanceBase_BeginLoadingScreen_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice
	 */
	struct UFNAFInputDeviceSystem_GetCurrentInputDevice_Params
	{
	public:
		fnaf9_ESWGInputDeviceType                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.UsePartyPass
	 */
	struct UFNAFInventorySystem_UsePartyPass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.UseFlash
	 */
	struct UFNAFInventorySystem_UseFlash_Params
	{
	public:
		bool                                                       bOutFlashUsed;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetupNewGame
	 */
	struct UFNAFInventorySystem_SetupNewGame_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetSecurityLevel
	 */
	struct UFNAFInventorySystem_SetSecurityLevel_Params
	{
	public:
		int32_t                                                    NewSecurityLevel;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy
	 */
	struct UFNAFInventorySystem_SetPowerLevel_Freddy_Params
	{
	public:
		int32_t                                                    InPowerLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch
	 */
	struct UFNAFInventorySystem_SetPowerLevel_Fazwatch_Params
	{
	public:
		int32_t                                                    InPowerLevel;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetPartyLevel
	 */
	struct UFNAFInventorySystem_SetPartyLevel_Params
	{
	public:
		int32_t                                                    NewPartyLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetMessageViewed
	 */
	struct UFNAFInventorySystem_SetMessageViewed_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy
	 */
	struct UFNAFInventorySystem_SetMaxPowerLevel_Freddy_Params
	{
	public:
		int32_t                                                    NewMax;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch
	 */
	struct UFNAFInventorySystem_SetMaxPowerLevel_Fazwatch_Params
	{
	public:
		int32_t                                                    NewMax;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetItemViewed
	 */
	struct UFNAFInventorySystem_SetItemViewed_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.SetFlashlightStationID
	 */
	struct UFNAFInventorySystem_SetFlashlightStationID_Params
	{
	public:
		int32_t                                                    StationID;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetFreddyPower
	 */
	struct UFNAFInventorySystem_ResetFreddyPower_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetFlashlightPower
	 */
	struct UFNAFInventorySystem_ResetFlashlightPower_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ResetFlashes
	 */
	struct UFNAFInventorySystem_ResetFlashes_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveMessage
	 */
	struct UFNAFInventorySystem_RemoveMessage_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveItem
	 */
	struct UFNAFInventorySystem_RemoveItem_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.RemoveEverything
	 */
	struct UFNAFInventorySystem_RemoveEverything_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.IsVIPItem
	 */
	struct UFNAFInventorySystem_IsVIPItem_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.IsMessageValid
	 */
	struct UFNAFInventorySystem_IsMessageValid_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.IsItemValid
	 */
	struct UFNAFInventorySystem_IsItemValid_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasSecurityClearance
	 */
	struct UFNAFInventorySystem_HasSecurityClearance_Params
	{
	public:
		int32_t                                                    InSecurityLevel;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed
	 */
	struct UFNAFInventorySystem_HasMessageBeenViewed_Params
	{
	public:
		class FName                                                ItemOrMessage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasMessage
	 */
	struct UFNAFInventorySystem_HasMessage_Params
	{
	public:
		class FName                                                SearchMessage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasItemBeenViewed
	 */
	struct UFNAFInventorySystem_HasItemBeenViewed_Params
	{
	public:
		class FName                                                ItemOrMessage;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasItem
	 */
	struct UFNAFInventorySystem_HasItem_Params
	{
	public:
		class FName                                                searchItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy
	 */
	struct UFNAFInventorySystem_HasEnoughPower_Freddy_Params
	{
	public:
		int32_t                                                    PowerRequired;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch
	 */
	struct UFNAFInventorySystem_HasEnoughPower_Fazwatch_Params
	{
	public:
		int32_t                                                    PowerRequired;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass
	 */
	struct UFNAFInventorySystem_HasAvailablePartyPass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetTapesListenedTo
	 */
	struct UFNAFInventorySystem_GetTapesListenedTo_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier
	 */
	struct UFNAFInventorySystem_GetStaminaUpgradeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages
	 */
	struct UFNAFInventorySystem_GetNumberOfUnreadMessages_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetMessageInfo
	 */
	struct UFNAFInventorySystem_GetMessageInfo_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMessageTableStruct                             OutMessageInfo;                                          // 0x0008(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutFound;                                                // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetMaxFlashes
	 */
	struct UFNAFInventorySystem_GetMaxFlashes_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetItemInfo
	 */
	struct UFNAFInventorySystem_GetItemInfo_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFInventoryTableStruct                           OutItemInfo;                                             // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutFound;                                                // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier
	 */
	struct UFNAFInventorySystem_GetFreddyUpgradeMutliplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower
	 */
	struct UFNAFInventorySystem_GetFreddyMaxPower_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier
	 */
	struct UFNAFInventorySystem_GetFlashlightUpgradMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFlashlightStationID
	 */
	struct UFNAFInventorySystem_GetFlashlightStationID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower
	 */
	struct UFNAFInventorySystem_GetFlashlightMaxPower_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses
	 */
	struct UFNAFInventorySystem_GetCollectedPartyPasses_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType
	 */
	struct UFNAFInventorySystem_GetAllSurvivalItemsOfType_Params
	{
	public:
		fnaf9_EInventoryItemSurvivalCategory                       SurvivalCategory;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID
	 */
	struct UFNAFInventorySystem_ClearFlashlightStationID_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon
	 */
	struct UFNAFInventorySystem_CanUseFlashBeacon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AwardMessage
	 */
	struct UFNAFInventorySystem_AwardMessage_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNotify;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AwardItem
	 */
	struct UFNAFInventorySystem_AwardItem_Params
	{
	public:
		class FName                                                Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNotify;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy
	 */
	struct UFNAFInventorySystem_AdjustPower_Freddy_Params
	{
	public:
		int32_t                                                    ChangeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch
	 */
	struct UFNAFInventorySystem_AdjustPower_Fazwatch_Params
	{
	public:
		int32_t                                                    ChangeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddTapeListenedTo
	 */
	struct UFNAFInventorySystem_AddTapeListenedTo_Params
	{
	public:
		class FName                                                InTapeListenedTo;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddEverything
	 */
	struct UFNAFInventorySystem_AddEverything_Params
	{
	};

	/**
	 * Function fnaf9.FNAFInventorySystem.AddBrokenPlate
	 */
	struct UFNAFInventorySystem_AddBrokenPlate_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.UnregisterStreamingSource
	 */
	struct UFNAFLevelManager_UnregisterStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource
	 */
	struct UFNAFLevelManager_UnregisterPawnStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.SetPlayerPawn
	 */
	struct UFNAFLevelManager_SetPlayerPawn_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable
	 */
	struct UFNAFLevelManager_SetLevelStreamingEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource
	 */
	struct UFNAFLevelManager_RemoveLevelsFromStreamingSource_Params
	{
	public:
		class USceneComponent*                                     StreamingSource;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveLevelArray
	 */
	struct UFNAFLevelManager_RemoveLevelArray_Params
	{
	public:
		TArray<class ULevelStreaming*>                             Levels;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveLevel
	 */
	struct UFNAFLevelManager_RemoveLevel_Params
	{
	public:
		class ULevelStreaming*                                     LevelToUnload;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.RemoveAllLevels
	 */
	struct UFNAFLevelManager_RemoveAllLevels_Params
	{
	};

	/**
	 * Function fnaf9.FNAFLevelManager.RegisterStreamingSource
	 */
	struct UFNAFLevelManager_RegisterStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource
	 */
	struct UFNAFLevelManager_RegisterPawnStreamingSource_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable
	 */
	struct UFNAFLevelManager_IsLevelStreamingEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.GetStreamingSources
	 */
	struct UFNAFLevelManager_GetStreamingSources_Params
	{
	public:
		TArray<class USceneComponent*>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent
	 */
	struct UFNAFLevelManager_GetLevelNamesForComponent_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.AddLevelToLoad
	 */
	struct UFNAFLevelManager_AddLevelToLoad_Params
	{
	public:
		class ULevelStreaming*                                     LevelToLoad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad
	 */
	struct UFNAFLevelManager_AddLevelsFromStreamingSourceToLoad_Params
	{
	public:
		class USceneComponent*                                     StreamingSource;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad
	 */
	struct UFNAFLevelManager_AddLevelArrayToLoad_Params
	{
	public:
		TArray<class ULevelStreaming*>                             LevelsToLoad;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.TeleportAI
	 */
	struct UFNAFManagedAI_TeleportAI_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.StartMoveTo
	 */
	struct UFNAFManagedAI_StartMoveTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.SendVanessaAlert
	 */
	struct UFNAFManagedAI_SendVanessaAlert_Params
	{
	public:
		class APawn*                                               VanessaPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.SendPositionalAlert
	 */
	struct UFNAFManagedAI_SendPositionalAlert_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.IsShatteredVersion
	 */
	struct UFNAFManagedAI_IsShatteredVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.GetManagedAIType
	 */
	struct UFNAFManagedAI_GetManagedAIType_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.GetCurrentPathName
	 */
	struct UFNAFManagedAI_GetCurrentPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFManagedAI.ForceTrackToPlayer
	 */
	struct UFNAFManagedAI_ForceTrackToPlayer_Params
	{
	};

	/**
	 * Function fnaf9.FNAFManagedAI.EndTrackToPlayer
	 */
	struct UFNAFManagedAI_EndTrackToPlayer_Params
	{
	};

	/**
	 * Function fnaf9.FNAFManagedAI.CanReceiveAlert
	 */
	struct UFNAFManagedAI_CanReceiveAlert_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.SetupNewGame
	 */
	struct UFNAFMissionSystem_SetupNewGame_Params
	{
	};

	/**
	 * Function fnaf9.FNAFMissionSystem.SetMissionInfoState
	 */
	struct UFNAFMissionSystem_SetMissionInfoState_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InfoState;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.RemoveActiveMission
	 */
	struct UFNAFMissionSystem_RemoveActiveMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate
	 */
	struct UFNAFMissionSystem_NotifyMissionUpdate_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsValidMission
	 */
	struct UFNAFMissionSystem_IsValidMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted
	 */
	struct UFNAFMissionSystem_IsMissionActiveOrCompleted_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsInSurvivalMode
	 */
	struct UFNAFMissionSystem_IsInSurvivalMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsCompletedMission
	 */
	struct UFNAFMissionSystem_IsCompletedMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.IsActiveMission
	 */
	struct UFNAFMissionSystem_IsActiveMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTrackedMissions
	 */
	struct UFNAFMissionSystem_GetTrackedMissions_Params
	{
	public:
		TArray<struct FFNAFMissionState>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTaskTable
	 */
	struct UFNAFMissionSystem_GetTaskTable_Params
	{
	public:
		class UDataTable*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTaskInfo
	 */
	struct UFNAFMissionSystem_GetTaskInfo_Params
	{
	public:
		class FName                                                TaskName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionTaskInfo                                OutMissionTaskInfo;                                      // 0x0008(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidTask;                                            // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetTaskByIndex
	 */
	struct UFNAFMissionSystem_GetTaskByIndex_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TaskIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionTaskInfo                                OutMissionTaskInfo;                                      // 0x0010(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidTask;                                            // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionTable
	 */
	struct UFNAFMissionSystem_GetMissionTable_Params
	{
	public:
		class UDataTable*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionState
	 */
	struct UFNAFMissionSystem_GetMissionState_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionState                                   OutMissionState;                                         // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidMission;                                         // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionInfo
	 */
	struct UFNAFMissionSystem_GetMissionInfo_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    OutMissionInfo;                                          // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidMission;                                         // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionFromTask
	 */
	struct UFNAFMissionSystem_GetMissionFromTask_Params
	{
	public:
		class FName                                                TaskName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    OutMissionInfo;                                          // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       OutValidMission;                                         // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMissionFromMessage
	 */
	struct UFNAFMissionSystem_GetMissionFromMessage_Params
	{
	public:
		class FName                                                MessageName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OutMissionName;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutMissionStateIndex;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetMarkersForMission
	 */
	struct UFNAFMissionSystem_GetMarkersForMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MissionStateIndex;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AMissionMarker*>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetCompletedMissions
	 */
	struct UFNAFMissionSystem_GetCompletedMissions_Params
	{
	public:
		TArray<struct FFNAFMissionState>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts
	 */
	struct UFNAFMissionSystem_GetAreaMarkerCounts_Params
	{
	public:
		TMap<fnaf9_ELevelArea, int32_t>                            MapOfCounts;                                             // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAllMissionNames
	 */
	struct UFNAFMissionSystem_GetAllMissionNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers
	 */
	struct UFNAFMissionSystem_GetAllMissionMarkers_Params
	{
	public:
		TArray<class AMissionMarker*>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers
	 */
	struct UFNAFMissionSystem_GetAllCurrentMarkers_Params
	{
	public:
		TArray<class AMissionMarker*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.GetActiveMissions
	 */
	struct UFNAFMissionSystem_GetActiveMissions_Params
	{
	public:
		TArray<struct FFNAFMissionState>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.CompleteMissionTask
	 */
	struct UFNAFMissionSystem_CompleteMissionTask_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TaskIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.CompleteMission
	 */
	struct UFNAFMissionSystem_CompleteMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.BranchMissionStatus
	 */
	struct UFNAFMissionSystem_BranchMissionStatus_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EMissionStatus                                       Status;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFMissionSystem.AddActiveMission
	 */
	struct UFNAFMissionSystem_AddActiveMission_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType
	 */
	struct UFNAFPawnTypeProviderInterface_GetPlayerPawnType_Params
	{
	public:
		fnaf9_EPlayerPawnType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveData.SetHourOfCheckpoint
	 */
	struct UFNAFSaveData_SetHourOfCheckpoint_Params
	{
	public:
		int32_t                                                    InHour;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupPIE
	 */
	struct UFNAFSaveGameSystem_SetupPIE_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupNewSurvivalGame
	 */
	struct UFNAFSaveGameSystem_SetupNewSurvivalGame_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot
	 */
	struct UFNAFSaveGameSystem_SetupNewGameOnSlot_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetupNewGame
	 */
	struct UFNAFSaveGameSystem_SetupNewGame_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed
	 */
	struct UFNAFSaveGameSystem_SetIsSavingAllowed_Params
	{
	public:
		bool                                                       IsSavingAllowed;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame
	 */
	struct UFNAFSaveGameSystem_SaveCurrentGame_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint
	 */
	struct UFNAFSaveGameSystem_SaveCheckpoint_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.SaveArcade
	 */
	struct UFNAFSaveGameSystem_SaveArcade_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots
	 */
	struct UFNAFSaveGameSystem_Reset_SaveSlots_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot
	 */
	struct UFNAFSaveGameSystem_Rename_SaveSlot_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              renamedSlotName;                                         // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto
	 */
	struct UFNAFSaveGameSystem_PreviousSaveIsAuto_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave
	 */
	struct UFNAFSaveGameSystem_LoadWorldTransitSave_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData
	 */
	struct UFNAFSaveGameSystem_LoadSaveSlotData_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFNAFSaveData*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint
	 */
	struct UFNAFSaveGameSystem_LoadCheckpoint_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadAutoSave
	 */
	struct UFNAFSaveGameSystem_LoadAutoSave_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.LoadActivitySave
	 */
	struct UFNAFSaveGameSystem_LoadActivitySave_Params
	{
	public:
		class FString                                              InActivityId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed
	 */
	struct UFNAFSaveGameSystem_IsSavingAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasSaveData
	 */
	struct UFNAFSaveGameSystem_HasSaveData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasPreviousSave
	 */
	struct UFNAFSaveGameSystem_HasPreviousSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasAutoSave
	 */
	struct UFNAFSaveGameSystem_HasAutoSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.HasActivitySave
	 */
	struct UFNAFSaveGameSystem_HasActivitySave_Params
	{
	public:
		class FString                                              InActivityId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.GetGameIteration
	 */
	struct UFNAFSaveGameSystem_GetGameIteration_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData
	 */
	struct UFNAFSaveGameSystem_Get_SaveSlotNameData_Params
	{
	public:
		TMap<class FString, class FString>                         SaveSlots_Map;                                           // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint
	 */
	struct UFNAFSaveGameSystem_FinalizeCheckpoint_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName
	 */
	struct UFNAFSaveGameSystem_DeleteSaveGameByName_Params
	{
	public:
		class FString                                              SlotName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot
	 */
	struct UFNAFSaveGameSystem_DeleteSavedGame_BySlot_Params
	{
	public:
		int32_t                                                    saveSlotNumber;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave
	 */
	struct UFNAFSaveGameSystem_CreateWorldTransitSave_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint
	 */
	struct UFNAFSaveGameSystem_CreatePotentialCheckpoint_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AutoSave
	 */
	struct UFNAFSaveGameSystem_AutoSave_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame
	 */
	struct UFNAFSaveGameSystem_AsyncSaveGame_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isANewSlot;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isCurrentSlot;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Renamed_SaveSlot;                                        // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              internal_SlotName;                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded
	 */
	struct UFNAFSaveGameSystem_AsyncLoadGameLastLoaded_Params
	{
	};

	/**
	 * Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame
	 */
	struct UFNAFSaveGameSystem_AsyncLoadGame_Params
	{
	public:
		class FString                                              originalSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isContinueSelected;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              internal_SlotName;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.FNAFSightSystem.SetSightSystemDisplay
	 */
	struct UFNAFSightSystem_SetSightSystemDisplay_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.StartNextHour
	 */
	struct UGameClockSystem_StartNextHour_Params
	{
	};

	/**
	 * Function fnaf9.GameClockSystem.SetGameTimeEvent
	 */
	struct UGameClockSystem_SetGameTimeEvent_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Hour;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetGameEndEvent
	 */
	struct UGameClockSystem_SetGameEndEvent_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetCurrentTime
	 */
	struct UGameClockSystem_SetCurrentTime_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayDelegates;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetCurrentMinute
	 */
	struct UGameClockSystem_SetCurrentMinute_Params
	{
	public:
		int32_t                                                    Minute;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetCurrentHour
	 */
	struct UGameClockSystem_SetCurrentHour_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetClockRunning
	 */
	struct UGameClockSystem_SetClockRunning_Params
	{
	public:
		bool                                                       bRunClock;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour
	 */
	struct UGameClockSystem_SetClockRateInMinutesPerHour_Params
	{
	public:
		int32_t                                                    MinutesPerHour;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.SetClockRate
	 */
	struct UGameClockSystem_SetClockRate_Params
	{
	public:
		int32_t                                                    TotalRealHours;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo
	 */
	struct UGameClockSystem_ResetTimeDelegatesUpTo_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.OnNormalModeTriggered
	 */
	struct UGameClockSystem_OnNormalModeTriggered_Params
	{
	};

	/**
	 * Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered
	 */
	struct UGameClockSystem_OnMoonmanLiteTriggered_Params
	{
	};

	/**
	 * Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered
	 */
	struct UGameClockSystem_OnMoonmanIntermediateTriggered_Params
	{
	};

	/**
	 * Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered
	 */
	struct UGameClockSystem_OnMoonmanDangerTriggered_Params
	{
	};

	/**
	 * Function fnaf9.GameClockSystem.IsClockRunning
	 */
	struct UGameClockSystem_IsClockRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds
	 */
	struct UGameClockSystem_GetCurrentTimeInSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameClockSystem.GetCurrentTime
	 */
	struct UGameClockSystem_GetCurrentTime_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType
	 */
	struct UGameTypeCheckComponent_OnNotAllowedGameType_Params
	{
	};

	/**
	 * Function fnaf9.GameTypeCheckComponent.OnAllowedGameType
	 */
	struct UGameTypeCheckComponent_OnAllowedGameType_Params
	{
	};

	/**
	 * Function fnaf9.GameTypeCheckComponent.IsAllowed
	 */
	struct UGameTypeCheckComponent_IsAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.StartSearch
	 */
	struct UHideObjectInterface_StartSearch_Params
	{
	public:
		class APawn*                                               SearcherPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.PlayBotSearchSound
	 */
	struct UHideObjectInterface_PlayBotSearchSound_Params
	{
	public:
		class AActor*                                              SearcherActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.OnPlayerLeave
	 */
	struct UHideObjectInterface_OnPlayerLeave_Params
	{
	};

	/**
	 * Function fnaf9.HideObjectInterface.OnPlayerHide
	 */
	struct UHideObjectInterface_OnPlayerHide_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.IsEnterExitPlaying
	 */
	struct UHideObjectInterface_IsEnterExitPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.GetSearchLocation
	 */
	struct UHideObjectInterface_GetSearchLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.GetHideType
	 */
	struct UHideObjectInterface_GetHideType_Params
	{
	public:
		fnaf9_EHideObjectType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.GetHideLocation
	 */
	struct UHideObjectInterface_GetHideLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.GetHiddenPlayer
	 */
	struct UHideObjectInterface_GetHiddenPlayer_Params
	{
	public:
		class ACharacter*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.HideObjectInterface.EndSearch
	 */
	struct UHideObjectInterface_EndSearch_Params
	{
	};

	/**
	 * Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard
	 */
	struct UInstructionCardRowBlueprintFunctionLibrary_GetControllerInstructionCard_Params
	{
	public:
		struct FInstructionCardRow                                 MyStructRef;                                             // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.SetNewConditions
	 */
	struct UInventoryConditionalComponent_SetNewConditions_Params
	{
	public:
		class FName                                                NewRequiredInventoryItem;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewRequiredSecurityLevel;                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewRequiresPartyPass;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.OnMessageCollected
	 */
	struct UInventoryConditionalComponent_OnMessageCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMessageTableStruct                             MessageTableStruct;                                      // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.OnItemCollected
	 */
	struct UInventoryConditionalComponent_OnItemCollected_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFInventoryTableStruct                           InventoryTableStruct;                                    // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.InventoryConditionalComponent.HasMetConditions
	 */
	struct UInventoryConditionalComponent_HasMetConditions_Params
	{
	public:
		bool                                                       OutConditionsMet;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EConditionFailReason                                 OutFailReason;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled
	 */
	struct UItemCollectListenerComponent_SetEventsEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler
	 */
	struct UItemCollectListenerComponent_OnItemCollectedHandler_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFInventoryTableStruct                           InventoryItemInfo;                                       // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled
	 */
	struct UItemCollectListenerComponent_GetEventsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.SetStreamingEnable
	 */
	struct ULevelStreamViewpoint_SetStreamingEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated
	 */
	struct ULevelStreamViewpoint_OnLevelManagerUpdated_Params
	{
	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames
	 */
	struct ULevelStreamViewpoint_GetStreamingLevelNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded
	 */
	struct ULevelStreamViewpoint_AnyLevelsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightingMaterialManager.OnLevelVisible
	 */
	struct ALightingMaterialManager_OnLevelVisible_Params
	{
	};

	/**
	 * Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange
	 */
	struct ALightingMaterialManager_OnBeginLightScenarioChange_Params
	{
	};

	/**
	 * Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio
	 */
	struct ALightingMaterialManager_OnActivateSpecialLightingScenerio_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange
	 */
	struct ULightScenarioManager_UnbindOnEndScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange
	 */
	struct ULightScenarioManager_UnbindOnBeginScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.SetInitialScenario
	 */
	struct ULightScenarioManager_SetInitialScenario_Params
	{
	public:
		int32_t                                                    Area;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_ELightingScenario                                    Scenario;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.OnUnloadFinished
	 */
	struct ULightScenarioManager_OnUnloadFinished_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.OnTick
	 */
	struct ULightScenarioManager_OnTick_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.OnLoadFinished
	 */
	struct ULightScenarioManager_OnLoadFinished_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.OnFadeoutFinished
	 */
	struct ULightScenarioManager_OnFadeoutFinished_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished
	 */
	struct ULightScenarioManager_OnChangeAreaUnloadFinished_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished
	 */
	struct ULightScenarioManager_OnChangeAreaLoadFinished_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.IsChangingScenario
	 */
	struct ULightScenarioManager_IsChangingScenario_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap
	 */
	struct ULightScenarioManager_GetLightScenarioAreaFromMap_Params
	{
	public:
		class FName                                                MapName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_ELightScenarioArea                                   OutArea;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_ELightingScenario                                    OutScenario;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario
	 */
	struct ULightScenarioManager_GetLevelNameFromAreaScenario_Params
	{
	public:
		int32_t                                                    Area;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_ELightingScenario                                    Scenario;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.GetCurrentLightingScenario
	 */
	struct ULightScenarioManager_GetCurrentLightingScenario_Params
	{
	public:
		fnaf9_ELightingScenario                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.GetCurrentArea
	 */
	struct ULightScenarioManager_GetCurrentArea_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.EndLoadSequence
	 */
	struct ULightScenarioManager_EndLoadSequence_Params
	{
	};

	/**
	 * Function fnaf9.LightScenarioManager.ChangeScenario
	 */
	struct ULightScenarioManager_ChangeScenario_Params
	{
	public:
		fnaf9_ELightingScenario                                    NewScenario;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseFade;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.ChangeArea
	 */
	struct ULightScenarioManager_ChangeArea_Params
	{
	public:
		int32_t                                                    Area;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.BindOnEndScenarioChange
	 */
	struct ULightScenarioManager_BindOnEndScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange
	 */
	struct ULightScenarioManager_BindOnBeginScenarioChange_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.LightScenarioManager.BeginLoadSequence
	 */
	struct ULightScenarioManager_BeginLoadSequence_Params
	{
	};

	/**
	 * Function fnaf9.Localization.GetLocalizationCulture
	 */
	struct ULocalization_GetLocalizationCulture_Params
	{
	public:
		fnaf9_ELocalizationCulture                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.Localization.ChangeLocalizationCulture
	 */
	struct ULocalization_ChangeLocalizationCulture_Params
	{
	public:
		fnaf9_ELocalizationCulture                                 Culture;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate
	 */
	struct UMissionDisplayQueueLibrary_PushMissionUpdate_Params
	{
	public:
		fnaf9_EMissionUpdateType                                   UpdateType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                MissionName;                                             // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0058(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue
	 */
	struct UMissionDisplayQueueLibrary_HasMissionUpdateInQueue_Params
	{
	public:
		fnaf9_EMissionInQueue                                      MissionInQueue;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate
	 */
	struct UMissionDisplayQueueLibrary_GetNextMissionUpdate_Params
	{
	public:
		struct FMissionDisplayUpdateInfo                           ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue
	 */
	struct UMissionDisplayQueueLibrary_ClearMissionUpdateQueue_Params
	{
	};

	/**
	 * Function fnaf9.MissionMarker.GetStateIndex
	 */
	struct AMissionMarker_GetStateIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionMarker.GetMissionName
	 */
	struct AMissionMarker_GetMissionName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionStateCondition.OnMissionUpdated
	 */
	struct UMissionStateCondition_OnMissionUpdated_Params
	{
	public:
		class FName                                                InMissionName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MissionStateCondition.HasMetConditions
	 */
	struct UMissionStateCondition_HasMetConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn
	 */
	struct UMoonmanManagementSystem_UnRegisterSpawn_Params
	{
	public:
		class AMoonmanSpawnPoint*                                  InSpawnPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager
	 */
	struct UMoonmanManagementSystem_UnpauseMoonmanManager_Params
	{
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager
	 */
	struct UMoonmanManagementSystem_StartMoonmanLiteManager_Params
	{
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager
	 */
	struct UMoonmanManagementSystem_StartMoonmanDangerManager_Params
	{
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.RegisterSpawn
	 */
	struct UMoonmanManagementSystem_RegisterSpawn_Params
	{
	public:
		class AMoonmanSpawnPoint*                                  InSpawnPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager
	 */
	struct UMoonmanManagementSystem_PauseMoonmanManager_Params
	{
	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged
	 */
	struct UMoonmanManagementSystem_OnWorldStateChanged_Params
	{
	public:
		fnaf9_EFNAFGameState                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EFNAFGameState                                       PrevState;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor
	 */
	struct UMoonmanManagementSystem_GetAllMMSpawnPointsFor_Params
	{
	public:
		fnaf9_EMMAnimCategory                                      MMAnimation;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AMoonmanSpawnPoint*>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints
	 */
	struct UMoonmanManagementSystem_GetAllMMSpawnPoints_Params
	{
	public:
		TArray<class AMoonmanSpawnPoint*>                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability
	 */
	struct AMoonmanSpawnPoint_SetSpawnProbability_Params
	{
	public:
		float                                                      tempProbability;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer
	 */
	struct AMoonmanSpawnPoint_SetShouldFollowPlayer_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory
	 */
	struct AMoonmanSpawnPoint_SetMMAnimCategory_Params
	{
	public:
		fnaf9_EMMAnimCategory                                      In;                                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsTriggered
	 */
	struct AMoonmanSpawnPoint_SetIsTriggered_Params
	{
	public:
		bool                                                       isTriggered;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsStationary
	 */
	struct AMoonmanSpawnPoint_SetIsStationary_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsSpawned
	 */
	struct AMoonmanSpawnPoint_SetIsSpawned_Params
	{
	public:
		bool                                                       IsSpawned;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse
	 */
	struct AMoonmanSpawnPoint_SetIsSingleUse_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected
	 */
	struct AMoonmanSpawnPoint_SetIsMMDetected_Params
	{
	public:
		bool                                                       IsSkeletonDetected;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop
	 */
	struct AMoonmanSpawnPoint_SetIsAnimLoop_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce
	 */
	struct AMoonmanSpawnPoint_SetHasSpawnedOnce_Params
	{
	public:
		bool                                                       HasSpawnedOnce;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce
	 */
	struct AMoonmanSpawnPoint_SetHasLookedOnce_Params
	{
	public:
		bool                                                       HasLookedOnce;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetCanSpawn
	 */
	struct AMoonmanSpawnPoint_SetCanSpawn_Params
	{
	public:
		bool                                                       canSpawn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetCanPopUp
	 */
	struct AMoonmanSpawnPoint_SetCanPopUp_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer
	 */
	struct AMoonmanSpawnPoint_SetAimHeadAtPlayer_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay
	 */
	struct AMoonmanSpawnPoint_OnSetAIDisplay_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability
	 */
	struct AMoonmanSpawnPoint_GetSpawnProbability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability
	 */
	struct AMoonmanSpawnPoint_GetOriginalProbability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array
	 */
	struct AMoonmanSpawnPoint_GetMMAnimSeq_Array_Params
	{
	public:
		TArray<class UAnimSequence*>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory
	 */
	struct AMoonmanSpawnPoint_GetMMAnimCategory_Params
	{
	public:
		fnaf9_EMMAnimCategory                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsTriggered
	 */
	struct AMoonmanSpawnPoint_GetIsTriggered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsStationary
	 */
	struct AMoonmanSpawnPoint_GetIsStationary_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsSpawned
	 */
	struct AMoonmanSpawnPoint_GetIsSpawned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse
	 */
	struct AMoonmanSpawnPoint_GetIsSingleUse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected
	 */
	struct AMoonmanSpawnPoint_GetIsMMDetected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue
	 */
	struct AMoonmanSpawnPoint_GetIsFollowPlayerTrue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop
	 */
	struct AMoonmanSpawnPoint_GetIsAnimLoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce
	 */
	struct AMoonmanSpawnPoint_GetHasSpawnedOnce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce
	 */
	struct AMoonmanSpawnPoint_GetHasLookedOnce_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetCanSpawn
	 */
	struct AMoonmanSpawnPoint_GetCanSpawn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetCanPopUp
	 */
	struct AMoonmanSpawnPoint_GetCanPopUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer
	 */
	struct AMoonmanSpawnPoint_GetAimHeadAtPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint
	 */
	struct AMoonmanSpawnPoint_DetectTheSpawnPoint_Params
	{
	public:
		class AMoonmanSpawnPoint*                                  passed_HitActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       passed_bVisible;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PatrollerInterface.SetPatrolPath
	 */
	struct UPatrollerInterface_SetPatrolPath_Params
	{
	};

	/**
	 * Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex
	 */
	struct UPatrollerInterface_SetCurrentPatrolPointIndex_Params
	{
	public:
		int32_t                                                    PatrolPointIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.PatrollerInterface.GetPatrolPath
	 */
	struct UPatrollerInterface_GetPatrolPath_Params
	{
	};

	/**
	 * Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex
	 */
	struct UPatrollerInterface_GetCurrentPatrolPointIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SaveHandlerInterface.PostSaveGame
	 */
	struct USaveHandlerInterface_PostSaveGame_Params
	{
	};

	/**
	 * Function fnaf9.SaveHandlerInterface.PostGameLoad
	 */
	struct USaveHandlerInterface_PostGameLoad_Params
	{
	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnStoreGameData
	 */
	struct USaveHandlerInterface_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnGameDataLoaded
	 */
	struct USaveHandlerInterface_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnCheckpointSave
	 */
	struct USaveHandlerInterface_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SaveHandlerInterface.OnCheckpointLoad
	 */
	struct USaveHandlerInterface_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.StopOfficeMode
	 */
	struct ASecurityCamera_StopOfficeMode_Params
	{
	};

	/**
	 * Function fnaf9.SecurityCamera.StartOfficeMode
	 */
	struct ASecurityCamera_StartOfficeMode_Params
	{
	};

	/**
	 * Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled
	 */
	struct ASecurityCamera_SetPlayerDetectorEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled
	 */
	struct ASecurityCamera_SetEnemeyDetectorEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged
	 */
	struct ASecurityCamera_OnPlayerDetectorSightChanged_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.OnOfficeModeStarted
	 */
	struct ASecurityCamera_OnOfficeModeStarted_Params
	{
	};

	/**
	 * Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged
	 */
	struct ASecurityCamera_OnEnemyDetectorSightChanged_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.IsCameraUnlocked
	 */
	struct ASecurityCamera_IsCameraUnlocked_Params
	{
	public:
		bool                                                       OnlyShowCurrentMission;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.HasDetectedEnemies
	 */
	struct ASecurityCamera_HasDetectedEnemies_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.GetVisibleEnemies
	 */
	struct ASecurityCamera_GetVisibleEnemies_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.GetPlayerSceneCapture
	 */
	struct ASecurityCamera_GetPlayerSceneCapture_Params
	{
	public:
		class USceneCaptureComponent2D*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.GetCaptureTarget
	 */
	struct ASecurityCamera_GetCaptureTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCamera.CaptureView
	 */
	struct ASecurityCamera_CaptureView_Params
	{
	};

	/**
	 * Function fnaf9.SecurityCameraSystem.PlayerSpotted
	 */
	struct USecurityCameraSystem_PlayerSpotted_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras
	 */
	struct USecurityCameraSystem_GetAllSecurityCameras_Params
	{
	public:
		TArray<class ASecurityCamera*>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SeekerPatrolPath.GetSpawnType
	 */
	struct USeekerPatrolPath_GetSpawnType_Params
	{
	public:
		fnaf9_EFNAFAISpawnType                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SeekerPatrolPath.GetPathName
	 */
	struct USeekerPatrolPath_GetPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetSightType
	 */
	struct USightComponent_SetSightType_Params
	{
	public:
		fnaf9_ESightType                                           InSightType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetSightParams
	 */
	struct USightComponent_SetSightParams_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistance;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDistance;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetSightEnabled
	 */
	struct USightComponent_SetSightEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetSightAngle
	 */
	struct USightComponent_SetSightAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetIncludeTags
	 */
	struct USightComponent_SetIncludeTags_Params
	{
	public:
		TArray<class FName>                                        InIgnoreTags;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetFrustumTypeParams
	 */
	struct USightComponent_SetFrustumTypeParams_Params
	{
	public:
		float                                                      InMinYaw;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxYaw;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMinPitch;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxPitch;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetEndDistance
	 */
	struct USightComponent_SetEndDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.SetAspectRatio
	 */
	struct USightComponent_SetAspectRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.OnVisualQueryResults
	 */
	struct USightComponent_OnVisualQueryResults_Params
	{
	public:
		TArray<TWeakObjectPtr<class UVisualSourceComponent>>       DetectedSources;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.OnVisibleActorDestroyed
	 */
	struct USightComponent_OnVisibleActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.OnMoonManQueryResults
	 */
	struct USightComponent_OnMoonManQueryResults_Params
	{
	public:
		TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>>           MoonManSpawnPoints;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.IsUsingConeSight
	 */
	struct USightComponent_IsUsingConeSight_Params
	{
	public:
		fnaf9_ESightType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.IsSightEnabled
	 */
	struct USightComponent_IsSightEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.IsActorVisible
	 */
	struct USightComponent_IsActorVisible_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetVisibleActors
	 */
	struct USightComponent_GetVisibleActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetStartDistance
	 */
	struct USightComponent_GetStartDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetSightAngle
	 */
	struct USightComponent_GetSightAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetMinYaw
	 */
	struct USightComponent_GetMinYaw_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetMinPitch
	 */
	struct USightComponent_GetMinPitch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetMaxYaw
	 */
	struct USightComponent_GetMaxYaw_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetMaxPitch
	 */
	struct USightComponent_GetMaxPitch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetIncludeTags
	 */
	struct USightComponent_GetIncludeTags_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetFrustumTypeParams
	 */
	struct USightComponent_GetFrustumTypeParams_Params
	{
	public:
		float                                                      OutMinYaw;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMaxYaw;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMinPitch;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMaxPitch;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetEndDistance
	 */
	struct USightComponent_GetEndDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SightComponent.GetAspectRatio
	 */
	struct USightComponent_GetAspectRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline
	 */
	struct USplineFollowMovementComponent_StopFollowingSpline_Params
	{
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline
	 */
	struct USplineFollowMovementComponent_StartFollowingSpline_Params
	{
	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow
	 */
	struct USplineFollowMovementComponent_SetSplineToFollow_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline
	 */
	struct USplineFollowMovementComponent_SetDistanceAlongSpline_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline
	 */
	struct USplineFollowMovementComponent_IsFollowingSpline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance
	 */
	struct USplineFollowMovementComponent_GetCurrentDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation
	 */
	struct USplineUtils_GetApproxDistanceClosestToWorldLocation_Params
	{
	public:
		struct FVector                                             Pos_WS;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USplineComponent*                                    Spline;                                                  // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateComponent.SetObjectState
	 */
	struct UWorldStateComponent_SetObjectState_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateComponent.HasValidSaveName
	 */
	struct UWorldStateComponent_HasValidSaveName_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateComponent.GetObjectState
	 */
	struct UWorldStateComponent_GetObjectState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered
	 */
	struct UStoreActiveStateOnTrigger_OnActorTriggered_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation
	 */
	struct UStreamingLevelUtil_LoadStreamingLevelsAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnableVolumesAfterLoad;                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation
	 */
	struct UStreamingLevelUtil_GetAllStreamingVolumesAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ALevelStreamingVolume*>                       ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes
	 */
	struct UStreamingLevelUtil_GetAllStreamingVolumes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ALevelStreamingVolume*>                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation
	 */
	struct UStreamingLevelUtil_GetAllStreamingLevelsAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ULevelStreaming*>                             ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels
	 */
	struct UStreamingLevelUtil_GetAllStreamingLevels_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ULevelStreaming*>                             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.GetAllLevels
	 */
	struct UStreamingLevelUtil_GetAllLevels_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ULevel*>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes
	 */
	struct UStreamingLevelUtil_EnableAllStreamingVolumes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation
	 */
	struct UStreamingLoadComponent_StartAsyncLoadForLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLoadComponent.OnLevelLoaded
	 */
	struct UStreamingLoadComponent_OnLevelLoaded_Params
	{
	};

	/**
	 * Function fnaf9.StreamingLoadComponent.IsStreamingLevels
	 */
	struct UStreamingLoadComponent_IsStreamingLevels_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes
	 */
	struct UStreamingLoadComponent_EnableAllStreamingVolumes_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemPackage.OnSetup
	 */
	struct ASurvivalItemPackage_OnSetup_Params
	{
	};

	/**
	 * Function fnaf9.SurvivalItemPackage.HasCollected
	 */
	struct ASurvivalItemPackage_HasCollected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemPackage.Collect
	 */
	struct ASurvivalItemPackage_Collect_Params
	{
	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems
	 */
	struct ASurvivalItemRandomizer_RandomizeSurvivalItems_Params
	{
	public:
		bool                                                       bSpawnAllLocations;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.HasCollected
	 */
	struct ASurvivalItemRandomizer_HasCollected_Params
	{
	public:
		class ASurvivalItemPackage*                                Package;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetYellowScore
	 */
	struct ASurvivalItemRandomizer_GetYellowScore_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointsPerPackage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutScore;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetRedScore
	 */
	struct ASurvivalItemRandomizer_GetRedScore_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointsPerPackage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutScore;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetPurpleScore
	 */
	struct ASurvivalItemRandomizer_GetPurpleScore_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointsPerPackage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutScore;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetPinkScore
	 */
	struct ASurvivalItemRandomizer_GetPinkScore_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointsPerPackage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutScore;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance
	 */
	struct ASurvivalItemRandomizer_GetPackagesSortedByDistance_Params
	{
	public:
		TArray<class ASurvivalItemPackage*>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetGreenScore
	 */
	struct ASurvivalItemRandomizer_GetGreenScore_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointsPerPackage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutScore;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.SurvivalItemRandomizer.GetGoldScore
	 */
	struct ASurvivalItemRandomizer_GetGoldScore_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPointsPerPackage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutScore;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.UpdateMissionComponent.UpdateMission
	 */
	struct UUpdateMissionComponent_UpdateMission_Params
	{
	};

	/**
	 * Function fnaf9.UpdateMissionComponent.IsMissionFinished
	 */
	struct UUpdateMissionComponent_IsMissionFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.UpdateMissionComponent.HasMetCondition
	 */
	struct UUpdateMissionComponent_HasMetCondition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.UpdateMissionComponent.GetMissionName
	 */
	struct UUpdateMissionComponent_GetMissionName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations
	 */
	struct UVisualSourceComponent_SetVisualOffsetLocations_Params
	{
	public:
		TArray<struct FVector>                                     InVisualOffsets;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.SetVisualOffset
	 */
	struct UVisualSourceComponent_SetVisualOffset_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             visualOffset;                                            // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.SetSourceVisibility
	 */
	struct UVisualSourceComponent_SetSourceVisibility_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.RemoveVisualOffset
	 */
	struct UVisualSourceComponent_RemoveVisualOffset_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetVisualOffsets
	 */
	struct UVisualSourceComponent_GetVisualOffsets_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetVisualLocations
	 */
	struct UVisualSourceComponent_GetVisualLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetSourceVisibility
	 */
	struct UVisualSourceComponent_GetSourceVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation
	 */
	struct UVisualSourceComponent_GetDetectedVisualLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.VisualSourceComponent.DetectTheSource
	 */
	struct UVisualSourceComponent_DetectTheSource_Params
	{
	public:
		struct FVector                                             VSLocation;                                              // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              passed_HitActor;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       passed_bVisible;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.SetObjectState
	 */
	struct UWorldStateHandlerComponent_SetObjectState_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle
	 */
	struct UWorldStateHandlerComponent_OnObjectStateChangedHandle_Params
	{
	public:
		class FName                                                ObjectName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ObjectState;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent
	 */
	struct UWorldStateHandlerComponent_OnObjectStateChangedEvent_Params
	{
	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.HasValidSaveName
	 */
	struct UWorldStateHandlerComponent_HasValidSaveName_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateHandlerComponent.GetObjectState
	 */
	struct UWorldStateHandlerComponent_GetObjectState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.StartMinigame
	 */
	struct UWorldStateSystem_StartMinigame_Params
	{
	public:
		class FString                                              MinigameName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_EFNAFGameState                                       GameState;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              MinigameActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetWorldState
	 */
	struct UWorldStateSystem_SetWorldState_Params
	{
	public:
		fnaf9_EFNAFGameState                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetupNewGame
	 */
	struct UWorldStateSystem_SetupNewGame_Params
	{
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths
	 */
	struct UWorldStateSystem_SetSurvivalMaxDeaths_Params
	{
	public:
		int32_t                                                    MaxDeaths;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetSurvivalDifficulty
	 */
	struct UWorldStateSystem_SetSurvivalDifficulty_Params
	{
	public:
		fnaf9_ESurvivalDifficulty                                  Difficulty;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetRandomSeed
	 */
	struct UWorldStateSystem_SetRandomSeed_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPowerStationAvailable
	 */
	struct UWorldStateSystem_SetPowerStationAvailable_Params
	{
	public:
		bool                                                       bAvailable;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPlayerInPowerStation
	 */
	struct UWorldStateSystem_SetPlayerInPowerStation_Params
	{
	public:
		int32_t                                                    InPowerStationID;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPlayerInFreddy
	 */
	struct UWorldStateSystem_SetPlayerInFreddy_Params
	{
	public:
		bool                                                       bInFreddy;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot
	 */
	struct UWorldStateSystem_SetPlayerHasUsedHidingSpot_Params
	{
	};

	/**
	 * Function fnaf9.WorldStateSystem.SetFreddySick
	 */
	struct UWorldStateSystem_SetFreddySick_Params
	{
	public:
		bool                                                       bIsSick;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint
	 */
	struct UWorldStateSystem_SetFreddyPatrolPoint_Params
	{
	public:
		int32_t                                                    PatrolPointIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCurrentActivityId
	 */
	struct UWorldStateSystem_SetCurrentActivityId_Params
	{
	public:
		class FString                                              InActivityId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCanShowInstructionCards
	 */
	struct UWorldStateSystem_SetCanShowInstructionCards_Params
	{
	public:
		bool                                                       bCanShowInstructionCards;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy
	 */
	struct UWorldStateSystem_SetCanEnterExitFreddy_Params
	{
	public:
		bool                                                       bCanEnterExit;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetCanCallFreddy
	 */
	struct UWorldStateSystem_SetCanCallFreddy_Params
	{
	public:
		bool                                                       bCanCall;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetArcadeState
	 */
	struct UWorldStateSystem_SetArcadeState_Params
	{
	public:
		struct FArcadeSaveData                                     InArcadeState;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.SetAIState
	 */
	struct UWorldStateSystem_SetAIState_Params
	{
	public:
		struct FFNAFAISaveData                                     InAIState;                                               // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.RemoveActivated
	 */
	struct UWorldStateSystem_RemoveActivated_Params
	{
	public:
		class FName                                                ActivatableName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.IsPowerStationAvailable
	 */
	struct UWorldStateSystem_IsPowerStationAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.IsPlayerInFreddy
	 */
	struct UWorldStateSystem_IsPlayerInFreddy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.IsFreddySick
	 */
	struct UWorldStateSystem_IsFreddySick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.IsActivated
	 */
	struct UWorldStateSystem_IsActivated_Params
	{
	public:
		class FName                                                ActivatableName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot
	 */
	struct UWorldStateSystem_HasPlayerUsedHidingSpot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetWorldState
	 */
	struct UWorldStateSystem_GetWorldState_Params
	{
	public:
		fnaf9_EFNAFGameState                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths
	 */
	struct UWorldStateSystem_GetSurvivalMaxDeaths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSurvivalDifficulty
	 */
	struct UWorldStateSystem_GetSurvivalDifficulty_Params
	{
	public:
		fnaf9_ESurvivalDifficulty                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation
	 */
	struct UWorldStateSystem_GetSavedPlayerLocationAndRotation_Params
	{
	public:
		struct FVector                                             OutWorldLocation;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutWorldRotation;                                        // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation
	 */
	struct UWorldStateSystem_GetSavedFreddyLocationAndRotation_Params
	{
	public:
		bool                                                       OutFreddyInWorld;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutWorldLocation;                                        // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutWorldRotation;                                        // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetRandomSeed
	 */
	struct UWorldStateSystem_GetRandomSeed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetPowerStationInfo
	 */
	struct UWorldStateSystem_GetPowerStationInfo_Params
	{
	public:
		bool                                                       OutPlayerInPowerStation;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutPowerStationID;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetLivesRemaining
	 */
	struct UWorldStateSystem_GetLivesRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetFreddyPawn
	 */
	struct UWorldStateSystem_GetFreddyPawn_Params
	{
	public:
		class AFNAFBasePlayerCharacter*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint
	 */
	struct UWorldStateSystem_GetFreddyPatrolPoint_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentSpottedCount
	 */
	struct UWorldStateSystem_GetCurrentSpottedCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentMinigameActor
	 */
	struct UWorldStateSystem_GetCurrentMinigameActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentMinigame
	 */
	struct UWorldStateSystem_GetCurrentMinigame_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentDeathCount
	 */
	struct UWorldStateSystem_GetCurrentDeathCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetCurrentActivityId
	 */
	struct UWorldStateSystem_GetCurrentActivityId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetArcadeState
	 */
	struct UWorldStateSystem_GetArcadeState_Params
	{
	public:
		struct FArcadeSaveData                                     ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.GetAIState
	 */
	struct UWorldStateSystem_GetAIState_Params
	{
	public:
		struct FFNAFAISaveData                                     ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.EndMinigame
	 */
	struct UWorldStateSystem_EndMinigame_Params
	{
	};

	/**
	 * Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot
	 */
	struct UWorldStateSystem_DebugSetPlayerHasUsedHidingSpot_Params
	{
	public:
		bool                                                       HasHid;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation
	 */
	struct UWorldStateSystem_ClearPlayerInPowerStation_Params
	{
	};

	/**
	 * Function fnaf9.WorldStateSystem.CanStartMinigame
	 */
	struct UWorldStateSystem_CanStartMinigame_Params
	{
	public:
		bool                                                       CanStart;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		fnaf9_ECantStartMinigameReason                             reason;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.CanShowInstructionCards
	 */
	struct UWorldStateSystem_CanShowInstructionCards_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.CanEnterExitFreddy
	 */
	struct UWorldStateSystem_CanEnterExitFreddy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.CanCallFreddy
	 */
	struct UWorldStateSystem_CanCallFreddy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.AddSpotted
	 */
	struct UWorldStateSystem_AddSpotted_Params
	{
	};

	/**
	 * Function fnaf9.WorldStateSystem.AddDeath
	 */
	struct UWorldStateSystem_AddDeath_Params
	{
	public:
		int32_t                                                    OutRemainingLives;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function fnaf9.WorldStateSystem.AddActivated
	 */
	struct UWorldStateSystem_AddActivated_Params
	{
	public:
		class FName                                                ActivatableName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
