#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function fnaf9.AIHiderInterface.ExitHideMode
struct UAIHiderInterface_ExitHideMode_Params
{
	class AActor*                                      HideActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIHiderInterface.EnterHideMode
struct UAIHiderInterface_EnterHideMode_Params
{
	class AActor*                                      HideActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.UnregisterSeekerPath
struct UAIManagementSystem_UnregisterSeekerPath_Params
{
};

// Function fnaf9.AIManagementSystem.UnRegisterAI
struct UAIManagementSystem_UnRegisterAI_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.UnpauseManager
struct UAIManagementSystem_UnpauseManager_Params
{
};

// Function fnaf9.AIManagementSystem.StoreEndoStates
struct UAIManagementSystem_StoreEndoStates_Params
{
};

// Function fnaf9.AIManagementSystem.StartManager
struct UAIManagementSystem_StartManager_Params
{
};

// Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa
struct UAIManagementSystem_SpawnVannyOrVanessa_Params
{
	bool                                               bSpawnVanny;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutSpawned;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentActionInfo;                                          // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint
struct UAIManagementSystem_SpawnSpecificAIAtSpawnPoint_Params
{
	class AFNAFAISpawnPoint*                           SpawnPoint;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceShattered;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath
struct UAIManagementSystem_SpawnAIWithTransformAndPath_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceShattered;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       PathName;                                                  // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe
struct UAIManagementSystem_SpawnAITypeWithTransformSafe_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ForceShattered;                                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               success;                                                   // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ESpawnActorCollisionHandlingMethod          CollisionOverrideMethod;                                   // 0x0042(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Owner;                                                     // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceRespawn;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform
struct UAIManagementSystem_SpawnAITypeWithTransform_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ForceShattered;                                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ESpawnActorCollisionHandlingMethod          CollisionOverrideMethod;                                   // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Owner;                                                     // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation
struct UAIManagementSystem_SpawnAITypeAtLocation_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceShattered;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation
struct UAIManagementSystem_SpawnAIOnPathNearLocation_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PathName;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAIOnPath
struct UAIManagementSystem_SpawnAIOnPath_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceShattered;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PathName;                                                  // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAINearPlayer
struct UAIManagementSystem_SpawnAINearPlayer_Params
{
};

// Function fnaf9.AIManagementSystem.SpawnAIFar
struct UAIManagementSystem_SpawnAIFar_Params
{
};

// Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint
struct UAIManagementSystem_SpawnAIAtSpawnPoint_Params
{
	class AFNAFAISpawnPoint*                           SpawnPoint;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceShattered;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SpawnAIAtDistance
struct UAIManagementSystem_SpawnAIAtDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled
struct UAIManagementSystem_SetWorldSpawnEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable
struct UAIManagementSystem_SetVanessaSpawnEnable_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SetUseStagedSpawns
struct UAIManagementSystem_SetUseStagedSpawns_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SetSpawningEnabled
struct UAIManagementSystem_SetSpawningEnabled_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SetExpectedAI
struct UAIManagementSystem_SetExpectedAI_Params
{
	TArray<struct FAnimatronicExpectedData>            AITypes;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SetAllAIExpected
struct UAIManagementSystem_SetAllAIExpected_Params
{
};

// Function fnaf9.AIManagementSystem.SetAITeleportEnabled
struct UAIManagementSystem_SetAITeleportEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SendVanessaAlert
struct UAIManagementSystem_SendVanessaAlert_Params
{
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberToAlert;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.SendGeneralAlert
struct UAIManagementSystem_SendGeneralAlert_Params
{
	struct FVector                                     AlertLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberToAlert;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.RespawnEndos
struct UAIManagementSystem_RespawnEndos_Params
{
};

// Function fnaf9.AIManagementSystem.RespawnAnimatronics
struct UAIManagementSystem_RespawnAnimatronics_Params
{
};

// Function fnaf9.AIManagementSystem.RespawnAllAI
struct UAIManagementSystem_RespawnAllAI_Params
{
};

// Function fnaf9.AIManagementSystem.Reset
struct UAIManagementSystem_Reset_Params
{
};

// Function fnaf9.AIManagementSystem.RemoveExpectedAI
struct UAIManagementSystem_RemoveExpectedAI_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.RemoveCharacterByType
struct UAIManagementSystem_RemoveCharacterByType_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.RemoveAllCharacters
struct UAIManagementSystem_RemoveAllCharacters_Params
{
};

// Function fnaf9.AIManagementSystem.RegisterSeekerPath
struct UAIManagementSystem_RegisterSeekerPath_Params
{
};

// Function fnaf9.AIManagementSystem.RegisterAI
struct UAIManagementSystem_RegisterAI_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.PawnExitedRoom
struct UAIManagementSystem_PawnExitedRoom_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARoomAreaBase*                               Room;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.PawnEnteringRoom
struct UAIManagementSystem_PawnEnteringRoom_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARoomAreaBase*                               Room;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.PawnEnteredRoom
struct UAIManagementSystem_PawnEnteredRoom_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARoomAreaBase*                               Room;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.PauseManager
struct UAIManagementSystem_PauseManager_Params
{
};

// Function fnaf9.AIManagementSystem.OnWorldStateChanged
struct UAIManagementSystem_OnWorldStateChanged_Params
{
	fnaf9_EFNAFGameState                               NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EFNAFGameState                               OldState;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.OnVannyPathsCollected
struct UAIManagementSystem_OnVannyPathsCollected_Params
{
};

// Function fnaf9.AIManagementSystem.OnPawnEndPlay
struct UAIManagementSystem_OnPawnEndPlay_Params
{
	class AActor*                                      DestroyedPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.OnAlertDistancesCollected
struct UAIManagementSystem_OnAlertDistancesCollected_Params
{
};

// Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld
struct UAIManagementSystem_OnAIFellOutOfWorld_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled
struct UAIManagementSystem_IsWorldSpawnEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.IsUsingStagedSpawns
struct UAIManagementSystem_IsUsingStagedSpawns_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.IsSpawningEnabled
struct UAIManagementSystem_IsSpawningEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.IsRoomOccupied
struct UAIManagementSystem_IsRoomOccupied_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.IsRoomBeingEntered
struct UAIManagementSystem_IsRoomBeingEntered_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.IsAITeleportEnabled
struct UAIManagementSystem_IsAITeleportEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter
struct UAIManagementSystem_GetTimeSinceLastEncounter_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer
struct UAIManagementSystem_GetRoomDistancesToPlayer_Params
{
	TMap<class APawn*, int>                            ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn
struct UAIManagementSystem_GetRoomAIPawnIsIn_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARoomAreaBase*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering
struct UAIManagementSystem_GetRoomAIPawnIsEntering_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARoomAreaBase*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetPawnForType
struct UAIManagementSystem_GetPawnForType_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetPawnClassForType
struct UAIManagementSystem_GetPawnClassForType_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceShattered;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetPathForAI
struct UAIManagementSystem_GetPathForAI_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PathName;                                                  // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetExistingPawnTypes
struct UAIManagementSystem_GetExistingPawnTypes_Params
{
	TArray<fnaf9_EFNAFAISpawnType>                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetExistingPawn
struct UAIManagementSystem_GetExistingPawn_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage
struct UAIManagementSystem_GetCurrentVannyMeterValuesAsPercentage_Params
{
	float                                              OutCurrentValuePercent;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutSoftMaxPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues
struct UAIManagementSystem_GetCurrentVannyMeterValues_Params
{
	float                                              CurrentValue;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoftMax;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage
struct UAIManagementSystem_GetCurrentVannyMeterPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetCachedDistances
struct UAIManagementSystem_GetCachedDistances_Params
{
	TArray<struct FAIDistanceResult>                   ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetCachedDistanceFor
struct UAIManagementSystem_GetCachedDistanceFor_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutResultValid;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDistanceResult                           OutResult;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor
struct UAIManagementSystem_GetAllSpawnPointsFor_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFNAFAISpawnPoint*>                   ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAllSpawnPoints
struct UAIManagementSystem_GetAllSpawnPoints_Params
{
	TArray<class AFNAFAISpawnPoint*>                   ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAllRegisteredAI
struct UAIManagementSystem_GetAllRegisteredAI_Params
{
	TArray<class APawn*>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns
struct UAIManagementSystem_GetAllAnimatronicPawns_Params
{
	TArray<class APawn*>                               OutAnimatronicPawns;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost
struct UAIManagementSystem_GetAllAIInRoomAtMost_Params
{
	int                                                numRooms;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAllAI
struct UAIManagementSystem_GetAllAI_Params
{
	TArray<class APawn*>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer
struct UAIManagementSystem_GetAIPawnsWithSightToPlayer_Params
{
	TArray<class APawn*>                               ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom
struct UAIManagementSystem_GetAIPawnsEnteringRoom_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.GetAIPawnInRoom
struct UAIManagementSystem_GetAIPawnInRoom_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance
struct UAIManagementSystem_FindSpawnPointClosestToDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFNAFAISpawnPoint*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance
struct UAIManagementSystem_FindSpawnNotVisibleAtDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EFNAFAISpawnType                             SpawnType;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       PawnForNavProperties;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFNAFAISpawnPoint*>                   OutSpawnPointsResult;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      OutDistances;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView
struct UAIManagementSystem_FindRandomPatrolPointOutOfView_Params
{
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint
struct UAIManagementSystem_FindFurthestSpawnPoint_Params
{
	class AFNAFAISpawnPoint*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindClosestSpawnPoint
struct UAIManagementSystem_FindClosestSpawnPoint_Params
{
	class AFNAFAISpawnPoint*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView
struct UAIManagementSystem_FindClosestPatrolPointOutOfView_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutResultValid;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentActionInfo;                                          // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutPointIndex;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.FindClosestPathPointForAI
struct UAIManagementSystem_FindClosestPathPointForAI_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OutResultValid;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointIndex;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutLocation;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.ExitedHiding
struct UAIManagementSystem_ExitedHiding_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.DestroyAllAINotVisible
struct UAIManagementSystem_DestroyAllAINotVisible_Params
{
};

// Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast
struct UAIManagementSystem_DestroyAllAIInRoomsAtleast_Params
{
	int                                                RoomDist;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.DestroyAllAI
struct UAIManagementSystem_DestroyAllAI_Params
{
};

// Function fnaf9.AIManagementSystem.ClearExpectedAI
struct UAIManagementSystem_ClearExpectedAI_Params
{
};

// Function fnaf9.AIManagementSystem.CalculateAllAIDistances
struct UAIManagementSystem_CalculateAllAIDistances_Params
{
	TArray<struct FAIDistanceResult>                   DistanceResults;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutClosestIsValid;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClosestIndex;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.ApplySound
struct UAIManagementSystem_ApplySound_Params
{
	float                                              Strength;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.ApplyCollect
struct UAIManagementSystem_ApplyCollect_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom
struct UAIManagementSystem_AnyPawnInPlayerRoom_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.AISpottedPlayer
struct UAIManagementSystem_AISpottedPlayer_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.AILostSightOfPlayer
struct UAIManagementSystem_AILostSightOfPlayer_Params
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.AdjustVannyMeter
struct UAIManagementSystem_AdjustVannyMeter_Params
{
	float                                              Amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AIManagementSystem.AddExpectedAI
struct UAIManagementSystem_AddExpectedAI_Params
{
	struct FAnimatronicExpectedData                    AIType;                                                    // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.SetPointType
struct UPathPointProvider_SetPointType_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointType;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.SetPointLocation
struct UPathPointProvider_SetPointLocation_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.RemovePointConnection
struct UPathPointProvider_RemovePointConnection_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointToDisconnectIndex;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.RemovePoint
struct UPathPointProvider_RemovePoint_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.GetPointType
struct UPathPointProvider_GetPointType_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.GetPointsConnectedTo
struct UPathPointProvider_GetPointsConnectedTo_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.GetPointLocation
struct UPathPointProvider_GetPointLocation_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.GetPointColor
struct UPathPointProvider_GetPointColor_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.GetNumberOfPathPoints
struct UPathPointProvider_GetNumberOfPathPoints_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.GetAvailablePointTypes
struct UPathPointProvider_GetAvailablePointTypes_Params
{
	TArray<struct FText>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.AddPointConnection
struct UPathPointProvider_AddPointConnection_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointToConnectIndex;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PathPointProvider.AddPoint
struct UPathPointProvider_AddPoint_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PlayerTrigger.SetTriggerActive
struct APlayerTrigger_SetTriggerActive_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PlayerTrigger.SaveActivated
struct APlayerTrigger_SaveActivated_Params
{
};

// Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged
struct APlayerTrigger_OnWorldObjectStateChanged_Params
{
	struct FName                                       ObjectName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ObjectState;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PlayerTrigger.OnTriggerStay
struct APlayerTrigger_OnTriggerStay_Params
{
};

// Function fnaf9.PlayerTrigger.OnTriggered
struct APlayerTrigger_OnTriggered_Params
{
};

// Function fnaf9.PlayerTrigger.IsTriggerStateSet
struct APlayerTrigger_IsTriggerStateSet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PlayerTrigger.IsTriggerActive
struct APlayerTrigger_IsTriggerActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PlayerTrigger.ForceTrigger
struct APlayerTrigger_ForceTrigger_Params
{
};

// Function fnaf9.PlayerTrigger.CanTrigger
struct APlayerTrigger_CanTrigger_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AISpawnTrigger.OnAISpawnedFailure
struct AAISpawnTrigger_OnAISpawnedFailure_Params
{
	class APawn*                                       SpawnedPawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.AISpawnTrigger.OnAISpawned
struct AAISpawnTrigger_OnAISpawned_Params
{
	class APawn*                                       SpawnedPawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.CameraHelperFunctions.IsLocationInCameraView
struct UCameraHelperFunctions_IsLocationInCameraView_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ECameraAngleFlags                            CameraAngles;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutHorizontalAngle;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutVerticalAngle;                                          // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera
struct UCameraHelperFunctions_GetLocationAnglesFromCamera_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutHorizontalAngle;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutVerticalAngle;                                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.CameraTrigger.GetAlertType
struct UCameraTrigger_GetAlertType_Params
{
	fnaf9_EAlertType                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionalCheckComponent.OnConditionUpdated
struct UConditionalCheckComponent_OnConditionUpdated_Params
{
};

// Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate
struct UConditionCheckInterface_UnbindConditionUpdatedDelegate_Params
{
	struct FScriptDelegate                             OnConditionResultUpdated;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionCheckInterface.ConditionsMet
struct UConditionCheckInterface_ConditionsMet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate
struct UConditionCheckInterface_BindConditionUpdatedDelegate_Params
{
	struct FScriptDelegate                             OnConditionResultUpdated;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate
struct UConditionFunctionLibrary_RemoveConditionDelegate_Params
{
	struct FConditionResultDelegates                   DelegateHandle;                                            // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet
struct UConditionFunctionLibrary_HasMetComponentConditionsWithGet_Params
{
	class AActor*                                      ActorToCheck;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutConditionsMet;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions
struct UConditionFunctionLibrary_HasMetComponentConditions_Params
{
	class AActor*                                      ActorToCheck;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions
struct UConditionFunctionLibrary_HasMetAnyComponentConditions_Params
{
	class AActor*                                      ActorToCheck;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate
struct UConditionFunctionLibrary_CallConditionUpdate_Params
{
	struct FConditionResultDelegates                   DelegateHandle;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate
struct UConditionFunctionLibrary_AddConditionDelegate_Params
{
	struct FConditionResultDelegates                   DelegateHandle;                                            // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Delegate;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.SetSecurityLevel
struct UDoorComponent_SetSecurityLevel_Params
{
	int                                                NewSecurityLevel;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.SetPlayerBlocker
struct UDoorComponent_SetPlayerBlocker_Params
{
	class UPrimitiveComponent*                         InPlayerBlocker;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.SetLockedForPlayer
struct UDoorComponent_SetLockedForPlayer_Params
{
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.SetLockedForAI
struct UDoorComponent_SetLockedForAI_Params
{
	bool                                               bLocked;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer
struct UDoorComponent_SetAutomaticDoorEnableForPlayer_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI
struct UDoorComponent_SetAutomaticDoorEnableForAI_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.PawnExitedDoor
struct UDoorComponent_PawnExitedDoor_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.PawnEnteredDoor
struct UDoorComponent_PawnEnteredDoor_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.IsLockedForPlayer
struct UDoorComponent_IsLockedForPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.IsLockedForAI
struct UDoorComponent_IsLockedForAI_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.HasMetConditions
struct UDoorComponent_HasMetConditions_Params
{
	class AFNAFBasePlayerCharacter*                    BasePlayerCharacter;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConditionsMet;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EConditionFailReason                         FailReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.HasDoorInitialized
struct UDoorComponent_HasDoorInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.GetPawnsInDoor
struct UDoorComponent_GetPawnsInDoor_Params
{
	TArray<class APawn*>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer
struct UDoorComponent_GetIsAutomaticDoorEnabledForPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI
struct UDoorComponent_GetIsAutomaticDoorEnabledForAI_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.GetDoorSideFromLocation
struct UDoorComponent_GetDoorSideFromLocation_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EDoorSide                                    ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.GetDoorSideFromActor
struct UDoorComponent_GetDoorSideFromActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EDoorSide                                    ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.GetCurrentRequirements
struct UDoorComponent_GetCurrentRequirements_Params
{
	struct FDoorEntryRequirements                      ReturnValue;                                               // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.ForceOpen
struct UDoorComponent_ForceOpen_Params
{
};

// Function fnaf9.DoorComponent.ForceClose
struct UDoorComponent_ForceClose_Params
{
};

// Function fnaf9.DoorComponent.CopyConditions
struct UDoorComponent_CopyConditions_Params
{
	class UDoorComponent*                              OtherDoorComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorComponent.CanPawnOpenDoor
struct UDoorComponent_CanPawnOpenDoor_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutConditionsMet;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EConditionFailReason                         OutFailReason;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorInteractor.OnOverlappedDoor
struct UDoorInteractor_OnOverlappedDoor_Params
{
	bool                                               bCanEnterDoor;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EConditionFailReason                         CantEnterReason;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDoorComponent*                              DoorComponent;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.DoorInteractor.OnEndOverlapDoor
struct UDoorInteractor_OnEndOverlapDoor_Params
{
};

// Function fnaf9.DoorInteractor.DoorEntryNotAllowed
struct UDoorInteractor_DoorEntryNotAllowed_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay
struct Afnaf9GameModeBase_ToggleFullAIDisplay_Params
{
};

// Function fnaf9.fnaf9GameModeBase.StartRepairGame
struct Afnaf9GameModeBase_StartRepairGame_Params
{
};

// Function fnaf9.fnaf9GameModeBase.SetAIDisplay
struct Afnaf9GameModeBase_SetAIDisplay_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay
struct Afnaf9GameModeBase_RoomHeatDisplay_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.POIVisible
struct Afnaf9GameModeBase_POIVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.POIDetectionVisible
struct Afnaf9GameModeBase_POIDetectionVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis
struct Afnaf9GameModeBase_PlayerFlashlightVis_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged
struct Afnaf9GameModeBase_OnRoomHeatDisplayChanged_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis
struct Afnaf9GameModeBase_OnPlayerFlashlightVis_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny
struct Afnaf9GameModeBase_OnForceSpawnVanny_Params
{
};

// Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis
struct Afnaf9GameModeBase_OnAIPawnsVis_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn
struct Afnaf9GameModeBase_IsAIDisplayOn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny
struct Afnaf9GameModeBase_ForceSpawnVanny_Params
{
};

// Function fnaf9.fnaf9GameModeBase.FinishRepairGame
struct Afnaf9GameModeBase_FinishRepairGame_Params
{
};

// Function fnaf9.fnaf9GameModeBase.AIPawnsVis
struct Afnaf9GameModeBase_AIPawnsVis_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFAchievementUtils.GetAllAchievements
struct UFNAFAchievementUtils_GetAllAchievements_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFAISpawnPoint.GetAIType
struct AFNAFAISpawnPoint_GetAIType_Params
{
	fnaf9_EFNAFAISpawnType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld
struct AFNAFBaseCharacter_OnFellOutOfWorld_Params
{
};

// Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation
struct AFNAFBasePlayerCharacter_TeleportPlayerWithCameraLocation_Params
{
	struct FVector                                     CameraWorldLocation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer
struct AFNAFBasePlayerCharacter_TeleportPlayer_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded
struct AFNAFBasePlayerCharacter_OnKillZLevelsLoaded_Params
{
};

// Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType
struct AFNAFBasePlayerCharacter_GetPlayerPawnType_Params
{
	fnaf9_EPlayerPawnType                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation
struct AFNAFBasePlayerCharacter_GetLastSavedLocationAndRotation_Params
{
	struct FVector                                     LastSavedLocation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    LastSavedRotation;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged
struct AFNAFBasePlayerController_OnUsingGamepadChanged_Params
{
};

// Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare
struct AFNAFBasePlayerController_OnTriggerVannyScare_Params
{
};

// Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA
struct AFNAFBasePlayerController_OnToggleLocalizationQA_Params
{
};

// Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode
struct AFNAFBasePlayerController_OnToggleFlightMode_Params
{
};

// Function fnaf9.FNAFBasePlayerController.OnToggleDevUI
struct AFNAFBasePlayerController_OnToggleDevUI_Params
{
};

// Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode
struct AFNAFBasePlayerController_OnToggleCinemaMode_Params
{
};

// Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered
struct AFNAFBasePlayerController_OnDebugSequenceEntered_Params
{
};

// Function fnaf9.FNAFBasePlayerController.IsUsingGamepad
struct AFNAFBasePlayerController_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement
struct AFNAFBasePlayerController_GiveVIPAchievement_Params
{
};

// Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown
struct AFNAFBasePlayerController_GetCurrentKeysDown_Params
{
	TArray<struct FKey>                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown
struct AFNAFBasePlayerController_AnyOtherKeysDown_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFCheatManager.UpgradeFreddy
struct UFNAFCheatManager_UpgradeFreddy_Params
{
	fnaf9_EFreddyUpgradeType                           Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFCheatManager.ToggleDebugCloaking
struct UFNAFCheatManager_ToggleDebugCloaking_Params
{
};

// Function fnaf9.FNAFCheatManager.SetDebugCloaking
struct UFNAFCheatManager_SetDebugCloaking_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFCheatManager.GetDebugCloaking
struct UFNAFCheatManager_GetDebugCloaking_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFCheatManager.ApplyQualitySettings
struct UFNAFCheatManager_ApplyQualitySettings_Params
{
	int                                                VisualQualityLevel;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTraceQualityLevel;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventObject.TriggerEvent
struct UFNAFEventObject_TriggerEvent_Params
{
};

// Function fnaf9.FNAFEventObject.IsEventFinished
struct UFNAFEventObject_IsEventFinished_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventObject.CanPlayEvent
struct UFNAFEventObject_CanPlayEvent_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventSystem.UnpauseEventSystem
struct UFNAFEventSystem_UnpauseEventSystem_Params
{
};

// Function fnaf9.FNAFEventSystem.StoreEventTriggered
struct UFNAFEventSystem_StoreEventTriggered_Params
{
	struct FName                                       EventTag;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventSystem.StopEventTimer
struct UFNAFEventSystem_StopEventTimer_Params
{
};

// Function fnaf9.FNAFEventSystem.StartEventTimer
struct UFNAFEventSystem_StartEventTimer_Params
{
};

// Function fnaf9.FNAFEventSystem.SetEventTimeSeconds
struct UFNAFEventSystem_SetEventTimeSeconds_Params
{
	float                                              MinTimeBetweenEvents;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTimeBetweenEvents;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventSystem.SetEventActorWeight
struct UFNAFEventSystem_SetEventActorWeight_Params
{
	float                                              NewWeight;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent
struct UFNAFEventSystem_SetCurrentAudioComponent_Params
{
	class UAudioComponent*                             EventSoundCue;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFEventSystem.PauseEventSystem
struct UFNAFEventSystem_PauseEventSystem_Params
{
};

// Function fnaf9.FNAFEventSystem.OnAudioFinished
struct UFNAFEventSystem_OnAudioFinished_Params
{
};

// Function fnaf9.FNAFEventSystem.HasEventBeenTriggered
struct UFNAFEventSystem_HasEventBeenTriggered_Params
{
	struct FName                                       EventTag;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.StartGamePlay
struct UFNAFGameInstanceBase_StartGamePlay_Params
{
	fnaf9_EFNAFGameType                                GameType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel
struct UFNAFGameInstanceBase_SetVisualQualityLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.SetSplashFinished
struct UFNAFGameInstanceBase_SetSplashFinished_Params
{
	bool                                               bFinished;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel
struct UFNAFGameInstanceBase_SetRayTraceQualityLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent
struct UFNAFGameInstanceBase_ProcessActivityIntent_Params
{
};

// Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete
struct UFNAFGameInstanceBase_OnGameActivityLoadComplete_Params
{
};

// Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated
struct UFNAFGameInstanceBase_OnApplicationReactivated_Params
{
};

// Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated
struct UFNAFGameInstanceBase_OnApplicationDeactivated_Params
{
};

// Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates
struct UFNAFGameInstanceBase_LogGameClockDelegates_Params
{
};

// Function fnaf9.FNAFGameInstanceBase.IsNormalPlay
struct UFNAFGameInstanceBase_IsNormalPlay_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity
struct UFNAFGameInstanceBase_IsLoadingActivity_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.IsFromTitle
struct UFNAFGameInstanceBase_IsFromTitle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.HasSplashFinished
struct UFNAFGameInstanceBase_HasSplashFinished_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel
struct UFNAFGameInstanceBase_GetVisualQualityLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel
struct UFNAFGameInstanceBase_GetRayTraceQualityLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig
struct UFNAFGameInstanceBase_GetIsShippingConfig_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult
struct UFNAFGameInstanceBase_GetGPUBenchmarkResult_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType
struct UFNAFGameInstanceBase_GetCurrentGameType_Params
{
	fnaf9_EFNAFGameType                                ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult
struct UFNAFGameInstanceBase_GetCPUBenchmarkResult_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString
struct UFNAFGameInstanceBase_GetAllLoadedLevelsString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice
struct UFNAFInputDeviceSystem_GetCurrentInputDevice_Params
{
	fnaf9_ESWGInputDeviceType                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.UsePartyPass
struct UFNAFInventorySystem_UsePartyPass_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.UseFlash
struct UFNAFInventorySystem_UseFlash_Params
{
	bool                                               bOutFlashUsed;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetupNewGame
struct UFNAFInventorySystem_SetupNewGame_Params
{
};

// Function fnaf9.FNAFInventorySystem.SetSecurityLevel
struct UFNAFInventorySystem_SetSecurityLevel_Params
{
	int                                                NewSecurityLevel;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy
struct UFNAFInventorySystem_SetPowerLevel_Freddy_Params
{
	int                                                InPowerLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch
struct UFNAFInventorySystem_SetPowerLevel_Fazwatch_Params
{
	int                                                InPowerLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetPartyLevel
struct UFNAFInventorySystem_SetPartyLevel_Params
{
	int                                                NewPartyLevel;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetMessageViewed
struct UFNAFInventorySystem_SetMessageViewed_Params
{
	struct FName                                       Message;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy
struct UFNAFInventorySystem_SetMaxPowerLevel_Freddy_Params
{
	int                                                NewMax;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch
struct UFNAFInventorySystem_SetMaxPowerLevel_Fazwatch_Params
{
	int                                                NewMax;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetItemViewed
struct UFNAFInventorySystem_SetItemViewed_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.SetFlashlightStationID
struct UFNAFInventorySystem_SetFlashlightStationID_Params
{
	int                                                StationID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.ResetFreddyPower
struct UFNAFInventorySystem_ResetFreddyPower_Params
{
};

// Function fnaf9.FNAFInventorySystem.ResetFlashlightPower
struct UFNAFInventorySystem_ResetFlashlightPower_Params
{
};

// Function fnaf9.FNAFInventorySystem.ResetFlashes
struct UFNAFInventorySystem_ResetFlashes_Params
{
};

// Function fnaf9.FNAFInventorySystem.RemoveMessage
struct UFNAFInventorySystem_RemoveMessage_Params
{
	struct FName                                       Message;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.RemoveItem
struct UFNAFInventorySystem_RemoveItem_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.RemoveEverything
struct UFNAFInventorySystem_RemoveEverything_Params
{
};

// Function fnaf9.FNAFInventorySystem.IsVIPItem
struct UFNAFInventorySystem_IsVIPItem_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.IsMessageValid
struct UFNAFInventorySystem_IsMessageValid_Params
{
	struct FName                                       Message;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.IsItemValid
struct UFNAFInventorySystem_IsItemValid_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasSecurityClearance
struct UFNAFInventorySystem_HasSecurityClearance_Params
{
	int                                                InSecurityLevel;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed
struct UFNAFInventorySystem_HasMessageBeenViewed_Params
{
	struct FName                                       ItemOrMessage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasMessage
struct UFNAFInventorySystem_HasMessage_Params
{
	struct FName                                       SearchMessage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasItemBeenViewed
struct UFNAFInventorySystem_HasItemBeenViewed_Params
{
	struct FName                                       ItemOrMessage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasItem
struct UFNAFInventorySystem_HasItem_Params
{
	struct FName                                       searchItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy
struct UFNAFInventorySystem_HasEnoughPower_Freddy_Params
{
	int                                                PowerRequired;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch
struct UFNAFInventorySystem_HasEnoughPower_Fazwatch_Params
{
	int                                                PowerRequired;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass
struct UFNAFInventorySystem_HasAvailablePartyPass_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetTapesListenedTo
struct UFNAFInventorySystem_GetTapesListenedTo_Params
{
};

// Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier
struct UFNAFInventorySystem_GetStaminaUpgradeMultiplier_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages
struct UFNAFInventorySystem_GetNumberOfUnreadMessages_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetMessageInfo
struct UFNAFInventorySystem_GetMessageInfo_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMessageTableStruct                     OutMessageInfo;                                            // 0x0008(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutFound;                                                  // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetMaxFlashes
struct UFNAFInventorySystem_GetMaxFlashes_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetItemInfo
struct UFNAFInventorySystem_GetItemInfo_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFInventoryTableStruct                   OutItemInfo;                                               // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutFound;                                                  // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier
struct UFNAFInventorySystem_GetFreddyUpgradeMutliplier_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower
struct UFNAFInventorySystem_GetFreddyMaxPower_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier
struct UFNAFInventorySystem_GetFlashlightUpgradMultiplier_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetFlashlightStationID
struct UFNAFInventorySystem_GetFlashlightStationID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower
struct UFNAFInventorySystem_GetFlashlightMaxPower_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses
struct UFNAFInventorySystem_GetCollectedPartyPasses_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType
struct UFNAFInventorySystem_GetAllSurvivalItemsOfType_Params
{
	fnaf9_EInventoryItemSurvivalCategory               SurvivalCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID
struct UFNAFInventorySystem_ClearFlashlightStationID_Params
{
};

// Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon
struct UFNAFInventorySystem_CanUseFlashBeacon_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.AwardMessage
struct UFNAFInventorySystem_AwardMessage_Params
{
	struct FName                                       Message;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.AwardItem
struct UFNAFInventorySystem_AwardItem_Params
{
	struct FName                                       Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotify;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy
struct UFNAFInventorySystem_AdjustPower_Freddy_Params
{
	int                                                ChangeAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch
struct UFNAFInventorySystem_AdjustPower_Fazwatch_Params
{
	int                                                ChangeAmount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.AddTapeListenedTo
struct UFNAFInventorySystem_AddTapeListenedTo_Params
{
	struct FName                                       InTapeListenedTo;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFInventorySystem.AddEverything
struct UFNAFInventorySystem_AddEverything_Params
{
};

// Function fnaf9.FNAFInventorySystem.AddBrokenPlate
struct UFNAFInventorySystem_AddBrokenPlate_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.UnregisterStreamingSource
struct UFNAFLevelManager_UnregisterStreamingSource_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource
struct UFNAFLevelManager_UnregisterPawnStreamingSource_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.SetPlayerPawn
struct UFNAFLevelManager_SetPlayerPawn_Params
{
	class APawn*                                       PlayerPawn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable
struct UFNAFLevelManager_SetLevelStreamingEnable_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource
struct UFNAFLevelManager_RemoveLevelsFromStreamingSource_Params
{
	class USceneComponent*                             StreamingSource;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.RemoveLevelArray
struct UFNAFLevelManager_RemoveLevelArray_Params
{
	TArray<class ULevelStreaming*>                     Levels;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.RemoveLevel
struct UFNAFLevelManager_RemoveLevel_Params
{
	class ULevelStreaming*                             LevelToUnload;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.RemoveAllLevels
struct UFNAFLevelManager_RemoveAllLevels_Params
{
};

// Function fnaf9.FNAFLevelManager.RegisterStreamingSource
struct UFNAFLevelManager_RegisterStreamingSource_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource
struct UFNAFLevelManager_RegisterPawnStreamingSource_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable
struct UFNAFLevelManager_IsLevelStreamingEnable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.GetStreamingSources
struct UFNAFLevelManager_GetStreamingSources_Params
{
	TArray<class USceneComponent*>                     ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent
struct UFNAFLevelManager_GetLevelNamesForComponent_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.AddLevelToLoad
struct UFNAFLevelManager_AddLevelToLoad_Params
{
	class ULevelStreaming*                             LevelToLoad;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad
struct UFNAFLevelManager_AddLevelsFromStreamingSourceToLoad_Params
{
	class USceneComponent*                             StreamingSource;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad
struct UFNAFLevelManager_AddLevelArrayToLoad_Params
{
	TArray<class ULevelStreaming*>                     LevelsToLoad;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.TeleportAI
struct UFNAFManagedAI_TeleportAI_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.StartMoveTo
struct UFNAFManagedAI_StartMoveTo_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.SendVanessaAlert
struct UFNAFManagedAI_SendVanessaAlert_Params
{
	class APawn*                                       VanessaPawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.SendPositionalAlert
struct UFNAFManagedAI_SendPositionalAlert_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.IsShatteredVersion
struct UFNAFManagedAI_IsShatteredVersion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.GetManagedAIType
struct UFNAFManagedAI_GetManagedAIType_Params
{
	fnaf9_EFNAFAISpawnType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.GetCurrentPathName
struct UFNAFManagedAI_GetCurrentPathName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFManagedAI.ForceTrackToPlayer
struct UFNAFManagedAI_ForceTrackToPlayer_Params
{
};

// Function fnaf9.FNAFManagedAI.EndTrackToPlayer
struct UFNAFManagedAI_EndTrackToPlayer_Params
{
};

// Function fnaf9.FNAFManagedAI.CanReceiveAlert
struct UFNAFManagedAI_CanReceiveAlert_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.SetupNewGame
struct UFNAFMissionSystem_SetupNewGame_Params
{
};

// Function fnaf9.FNAFMissionSystem.SetMissionInfoState
struct UFNAFMissionSystem_SetMissionInfoState_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InfoState;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.RemoveActiveMission
struct UFNAFMissionSystem_RemoveActiveMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate
struct UFNAFMissionSystem_NotifyMissionUpdate_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.IsValidMission
struct UFNAFMissionSystem_IsValidMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted
struct UFNAFMissionSystem_IsMissionActiveOrCompleted_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.IsInSurvivalMode
struct UFNAFMissionSystem_IsInSurvivalMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.IsCompletedMission
struct UFNAFMissionSystem_IsCompletedMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.IsActiveMission
struct UFNAFMissionSystem_IsActiveMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetTrackedMissions
struct UFNAFMissionSystem_GetTrackedMissions_Params
{
	TArray<struct FFNAFMissionState>                   ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetTaskTable
struct UFNAFMissionSystem_GetTaskTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetTaskInfo
struct UFNAFMissionSystem_GetTaskInfo_Params
{
	struct FName                                       TaskName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionTaskInfo                        OutMissionTaskInfo;                                        // 0x0008(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutValidTask;                                              // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetTaskByIndex
struct UFNAFMissionSystem_GetTaskByIndex_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaskIndex;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionTaskInfo                        OutMissionTaskInfo;                                        // 0x0010(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutValidTask;                                              // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetMissionTable
struct UFNAFMissionSystem_GetMissionTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetMissionState
struct UFNAFMissionSystem_GetMissionState_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionState                           OutMissionState;                                           // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutValidMission;                                           // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetMissionInfo
struct UFNAFMissionSystem_GetMissionInfo_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionInfo                            OutMissionInfo;                                            // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutValidMission;                                           // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetMissionFromTask
struct UFNAFMissionSystem_GetMissionFromTask_Params
{
	struct FName                                       TaskName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionInfo                            OutMissionInfo;                                            // 0x0008(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               OutValidMission;                                           // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetMissionFromMessage
struct UFNAFMissionSystem_GetMissionFromMessage_Params
{
	struct FName                                       MessageName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OutMissionName;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutMissionStateIndex;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetMarkersForMission
struct UFNAFMissionSystem_GetMarkersForMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MissionStateIndex;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMissionMarker*>                      ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetCompletedMissions
struct UFNAFMissionSystem_GetCompletedMissions_Params
{
	TArray<struct FFNAFMissionState>                   ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts
struct UFNAFMissionSystem_GetAreaMarkerCounts_Params
{
	TMap<fnaf9_ELevelArea, int>                        MapOfCounts;                                               // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetAllMissionNames
struct UFNAFMissionSystem_GetAllMissionNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers
struct UFNAFMissionSystem_GetAllMissionMarkers_Params
{
	TArray<class AMissionMarker*>                      ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers
struct UFNAFMissionSystem_GetAllCurrentMarkers_Params
{
	TArray<class AMissionMarker*>                      ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.GetActiveMissions
struct UFNAFMissionSystem_GetActiveMissions_Params
{
	TArray<struct FFNAFMissionState>                   ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.CompleteMissionTask
struct UFNAFMissionSystem_CompleteMissionTask_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaskIndex;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.CompleteMission
struct UFNAFMissionSystem_CompleteMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.BranchMissionStatus
struct UFNAFMissionSystem_BranchMissionStatus_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EMissionStatus                               Status;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFMissionSystem.AddActiveMission
struct UFNAFMissionSystem_AddActiveMission_Params
{
	struct FName                                       MissionName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType
struct UFNAFPawnTypeProviderInterface_GetPlayerPawnType_Params
{
	fnaf9_EPlayerPawnType                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveData.SetHourOfCheckpoint
struct UFNAFSaveData_SetHourOfCheckpoint_Params
{
	int                                                InHour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.SetupPIE
struct UFNAFSaveGameSystem_SetupPIE_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.SetupNewSurvivalGame
struct UFNAFSaveGameSystem_SetupNewSurvivalGame_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot
struct UFNAFSaveGameSystem_SetupNewGameOnSlot_Params
{
	struct FString                                     originalSlotName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.SetupNewGame
struct UFNAFSaveGameSystem_SetupNewGame_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed
struct UFNAFSaveGameSystem_SetIsSavingAllowed_Params
{
	bool                                               IsSavingAllowed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame
struct UFNAFSaveGameSystem_SaveCurrentGame_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint
struct UFNAFSaveGameSystem_SaveCheckpoint_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.SaveArcade
struct UFNAFSaveGameSystem_SaveArcade_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots
struct UFNAFSaveGameSystem_Reset_SaveSlots_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot
struct UFNAFSaveGameSystem_Rename_SaveSlot_Params
{
	struct FString                                     originalSlotName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     renamedSlotName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto
struct UFNAFSaveGameSystem_PreviousSaveIsAuto_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave
struct UFNAFSaveGameSystem_LoadWorldTransitSave_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData
struct UFNAFSaveGameSystem_LoadSaveSlotData_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFNAFSaveData*                               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint
struct UFNAFSaveGameSystem_LoadCheckpoint_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.LoadAutoSave
struct UFNAFSaveGameSystem_LoadAutoSave_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.LoadActivitySave
struct UFNAFSaveGameSystem_LoadActivitySave_Params
{
	struct FString                                     InActivityId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed
struct UFNAFSaveGameSystem_IsSavingAllowed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.HasSaveData
struct UFNAFSaveGameSystem_HasSaveData_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.HasPreviousSave
struct UFNAFSaveGameSystem_HasPreviousSave_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.HasAutoSave
struct UFNAFSaveGameSystem_HasAutoSave_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.HasActivitySave
struct UFNAFSaveGameSystem_HasActivitySave_Params
{
	struct FString                                     InActivityId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.GetGameIteration
struct UFNAFSaveGameSystem_GetGameIteration_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData
struct UFNAFSaveGameSystem_Get_SaveSlotNameData_Params
{
	TMap<struct FString, struct FString>               SaveSlots_Map;                                             // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint
struct UFNAFSaveGameSystem_FinalizeCheckpoint_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName
struct UFNAFSaveGameSystem_DeleteSaveGameByName_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot
struct UFNAFSaveGameSystem_DeleteSavedGame_BySlot_Params
{
	int                                                saveSlotNumber;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave
struct UFNAFSaveGameSystem_CreateWorldTransitSave_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint
struct UFNAFSaveGameSystem_CreatePotentialCheckpoint_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.AutoSave
struct UFNAFSaveGameSystem_AutoSave_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame
struct UFNAFSaveGameSystem_AsyncSaveGame_Params
{
	struct FString                                     originalSlotName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isANewSlot;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isCurrentSlot;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Renamed_SaveSlot;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     internal_SlotName;                                         // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded
struct UFNAFSaveGameSystem_AsyncLoadGameLastLoaded_Params
{
};

// Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame
struct UFNAFSaveGameSystem_AsyncLoadGame_Params
{
	struct FString                                     originalSlotName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isContinueSelected;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     internal_SlotName;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.FNAFSightSystem.SetSightSystemDisplay
struct UFNAFSightSystem_SetSightSystemDisplay_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.StartNextHour
struct UGameClockSystem_StartNextHour_Params
{
};

// Function fnaf9.GameClockSystem.SetGameTimeEvent
struct UGameClockSystem_SetGameTimeEvent_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Hour;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetGameEndEvent
struct UGameClockSystem_SetGameEndEvent_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetCurrentTime
struct UGameClockSystem_SetCurrentTime_Params
{
	int                                                Hour;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayDelegates;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetCurrentMinute
struct UGameClockSystem_SetCurrentMinute_Params
{
	int                                                Minute;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetCurrentHour
struct UGameClockSystem_SetCurrentHour_Params
{
	int                                                Hour;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetClockRunning
struct UGameClockSystem_SetClockRunning_Params
{
	bool                                               bRunClock;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour
struct UGameClockSystem_SetClockRateInMinutesPerHour_Params
{
	int                                                MinutesPerHour;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.SetClockRate
struct UGameClockSystem_SetClockRate_Params
{
	int                                                TotalRealHours;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo
struct UGameClockSystem_ResetTimeDelegatesUpTo_Params
{
	int                                                Hour;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.OnNormalModeTriggered
struct UGameClockSystem_OnNormalModeTriggered_Params
{
};

// Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered
struct UGameClockSystem_OnMoonmanLiteTriggered_Params
{
};

// Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered
struct UGameClockSystem_OnMoonmanIntermediateTriggered_Params
{
};

// Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered
struct UGameClockSystem_OnMoonmanDangerTriggered_Params
{
};

// Function fnaf9.GameClockSystem.IsClockRunning
struct UGameClockSystem_IsClockRunning_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds
struct UGameClockSystem_GetCurrentTimeInSeconds_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameClockSystem.GetCurrentTime
struct UGameClockSystem_GetCurrentTime_Params
{
	int                                                Hour;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType
struct UGameTypeCheckComponent_OnNotAllowedGameType_Params
{
};

// Function fnaf9.GameTypeCheckComponent.OnAllowedGameType
struct UGameTypeCheckComponent_OnAllowedGameType_Params
{
};

// Function fnaf9.GameTypeCheckComponent.IsAllowed
struct UGameTypeCheckComponent_IsAllowed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.StartSearch
struct UHideObjectInterface_StartSearch_Params
{
	class APawn*                                       SearcherPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.PlayBotSearchSound
struct UHideObjectInterface_PlayBotSearchSound_Params
{
	class AActor*                                      SearcherActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.OnPlayerLeave
struct UHideObjectInterface_OnPlayerLeave_Params
{
};

// Function fnaf9.HideObjectInterface.OnPlayerHide
struct UHideObjectInterface_OnPlayerHide_Params
{
	class ACharacter*                                  PlayerCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.GetSearchLocation
struct UHideObjectInterface_GetSearchLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.GetHideType
struct UHideObjectInterface_GetHideType_Params
{
	fnaf9_EHideObjectType                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.GetHideLocation
struct UHideObjectInterface_GetHideLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.GetHiddenPlayer
struct UHideObjectInterface_GetHiddenPlayer_Params
{
	class ACharacter*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.HideObjectInterface.EndSearch
struct UHideObjectInterface_EndSearch_Params
{
};

// Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard
struct UInstructionCardRowBlueprintFunctionLibrary_GetControllerInstructionCard_Params
{
	struct FInstructionCardRow                         MyStructRef;                                               // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.InventoryConditionalComponent.SetNewConditions
struct UInventoryConditionalComponent_SetNewConditions_Params
{
	struct FName                                       NewRequiredInventoryItem;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewRequiredSecurityLevel;                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NewRequiresPartyPass;                                      // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.InventoryConditionalComponent.OnMessageCollected
struct UInventoryConditionalComponent_OnMessageCollected_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMessageTableStruct                     MessageTableStruct;                                        // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
};

// Function fnaf9.InventoryConditionalComponent.OnItemCollected
struct UInventoryConditionalComponent_OnItemCollected_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFInventoryTableStruct                   InventoryTableStruct;                                      // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function fnaf9.InventoryConditionalComponent.HasMetConditions
struct UInventoryConditionalComponent_HasMetConditions_Params
{
	bool                                               OutConditionsMet;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EConditionFailReason                         OutFailReason;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled
struct UItemCollectListenerComponent_SetEventsEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler
struct UItemCollectListenerComponent_OnItemCollectedHandler_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFInventoryTableStruct                   InventoryItemInfo;                                         // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled
struct UItemCollectListenerComponent_GetEventsEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LevelStreamViewpoint.SetStreamingEnable
struct ULevelStreamViewpoint_SetStreamingEnable_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated
struct ULevelStreamViewpoint_OnLevelManagerUpdated_Params
{
};

// Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames
struct ULevelStreamViewpoint_GetStreamingLevelNames_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded
struct ULevelStreamViewpoint_AnyLevelsLoaded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightingMaterialManager.OnLevelVisible
struct ALightingMaterialManager_OnLevelVisible_Params
{
};

// Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange
struct ALightingMaterialManager_OnBeginLightScenarioChange_Params
{
};

// Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio
struct ALightingMaterialManager_OnActivateSpecialLightingScenerio_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange
struct ULightScenarioManager_UnbindOnEndScenarioChange_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange
struct ULightScenarioManager_UnbindOnBeginScenarioChange_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.SetInitialScenario
struct ULightScenarioManager_SetInitialScenario_Params
{
	int                                                Area;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ELightingScenario                            Scenario;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.OnUnloadFinished
struct ULightScenarioManager_OnUnloadFinished_Params
{
};

// Function fnaf9.LightScenarioManager.OnTick
struct ULightScenarioManager_OnTick_Params
{
};

// Function fnaf9.LightScenarioManager.OnLoadFinished
struct ULightScenarioManager_OnLoadFinished_Params
{
};

// Function fnaf9.LightScenarioManager.OnFadeoutFinished
struct ULightScenarioManager_OnFadeoutFinished_Params
{
};

// Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished
struct ULightScenarioManager_OnChangeAreaUnloadFinished_Params
{
};

// Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished
struct ULightScenarioManager_OnChangeAreaLoadFinished_Params
{
};

// Function fnaf9.LightScenarioManager.IsChangingScenario
struct ULightScenarioManager_IsChangingScenario_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap
struct ULightScenarioManager_GetLightScenarioAreaFromMap_Params
{
	struct FName                                       MapName;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ELightScenarioArea                           OutArea;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ELightingScenario                            OutScenario;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario
struct ULightScenarioManager_GetLevelNameFromAreaScenario_Params
{
	int                                                Area;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ELightingScenario                            Scenario;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.GetCurrentLightingScenario
struct ULightScenarioManager_GetCurrentLightingScenario_Params
{
	fnaf9_ELightingScenario                            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.GetCurrentArea
struct ULightScenarioManager_GetCurrentArea_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.EndLoadSequence
struct ULightScenarioManager_EndLoadSequence_Params
{
};

// Function fnaf9.LightScenarioManager.ChangeScenario
struct ULightScenarioManager_ChangeScenario_Params
{
	fnaf9_ELightingScenario                            NewScenario;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseFade;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.ChangeArea
struct ULightScenarioManager_ChangeArea_Params
{
	int                                                Area;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.BindOnEndScenarioChange
struct ULightScenarioManager_BindOnEndScenarioChange_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange
struct ULightScenarioManager_BindOnBeginScenarioChange_Params
{
	struct FScriptDelegate                             Delegate;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.LightScenarioManager.BeginLoadSequence
struct ULightScenarioManager_BeginLoadSequence_Params
{
};

// Function fnaf9.Localization.GetLocalizationCulture
struct ULocalization_GetLocalizationCulture_Params
{
	TEnumAsByte<fnaf9_ELocalizationCulture>            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.Localization.ChangeLocalizationCulture
struct ULocalization_ChangeLocalizationCulture_Params
{
	TEnumAsByte<fnaf9_ELocalizationCulture>            Culture;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate
struct UMissionDisplayQueueLibrary_PushMissionUpdate_Params
{
	fnaf9_EMissionUpdateType                           UpdateType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MissionName;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionInfo                            MissionInfo;                                               // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFNAFMissionState                           MissionState;                                              // 0x0058(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue
struct UMissionDisplayQueueLibrary_HasMissionUpdateInQueue_Params
{
	fnaf9_EMissionInQueue                              MissionInQueue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate
struct UMissionDisplayQueueLibrary_GetNextMissionUpdate_Params
{
	struct FMissionDisplayUpdateInfo                   ReturnValue;                                               // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue
struct UMissionDisplayQueueLibrary_ClearMissionUpdateQueue_Params
{
};

// Function fnaf9.MissionMarker.GetStateIndex
struct AMissionMarker_GetStateIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionMarker.GetMissionName
struct AMissionMarker_GetMissionName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionStateCondition.OnMissionUpdated
struct UMissionStateCondition_OnMissionUpdated_Params
{
	struct FName                                       InMissionName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFNAFMissionState                           MissionState;                                              // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFNAFMissionInfo                            MissionInfo;                                               // 0x0028(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.MissionStateCondition.HasMetConditions
struct UMissionStateCondition_HasMetConditions_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn
struct UMoonmanManagementSystem_UnRegisterSpawn_Params
{
	class AMoonmanSpawnPoint*                          InSpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager
struct UMoonmanManagementSystem_UnpauseMoonmanManager_Params
{
};

// Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager
struct UMoonmanManagementSystem_StartMoonmanLiteManager_Params
{
};

// Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager
struct UMoonmanManagementSystem_StartMoonmanDangerManager_Params
{
};

// Function fnaf9.MoonmanManagementSystem.RegisterSpawn
struct UMoonmanManagementSystem_RegisterSpawn_Params
{
	class AMoonmanSpawnPoint*                          InSpawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager
struct UMoonmanManagementSystem_PauseMoonmanManager_Params
{
};

// Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged
struct UMoonmanManagementSystem_OnWorldStateChanged_Params
{
	fnaf9_EFNAFGameState                               NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EFNAFGameState                               PrevState;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor
struct UMoonmanManagementSystem_GetAllMMSpawnPointsFor_Params
{
	fnaf9_EMMAnimCategory                              MMAnimation;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMoonmanSpawnPoint*>                  ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints
struct UMoonmanManagementSystem_GetAllMMSpawnPoints_Params
{
	TArray<class AMoonmanSpawnPoint*>                  ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability
struct AMoonmanSpawnPoint_SetSpawnProbability_Params
{
	float                                              tempProbability;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer
struct AMoonmanSpawnPoint_SetShouldFollowPlayer_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory
struct AMoonmanSpawnPoint_SetMMAnimCategory_Params
{
	fnaf9_EMMAnimCategory                              In;                                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetIsTriggered
struct AMoonmanSpawnPoint_SetIsTriggered_Params
{
	bool                                               isTriggered;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetIsStationary
struct AMoonmanSpawnPoint_SetIsStationary_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetIsSpawned
struct AMoonmanSpawnPoint_SetIsSpawned_Params
{
	bool                                               IsSpawned;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse
struct AMoonmanSpawnPoint_SetIsSingleUse_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected
struct AMoonmanSpawnPoint_SetIsMMDetected_Params
{
	bool                                               IsSkeletonDetected;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop
struct AMoonmanSpawnPoint_SetIsAnimLoop_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce
struct AMoonmanSpawnPoint_SetHasSpawnedOnce_Params
{
	bool                                               HasSpawnedOnce;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce
struct AMoonmanSpawnPoint_SetHasLookedOnce_Params
{
	bool                                               HasLookedOnce;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetCanSpawn
struct AMoonmanSpawnPoint_SetCanSpawn_Params
{
	bool                                               canSpawn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetCanPopUp
struct AMoonmanSpawnPoint_SetCanPopUp_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer
struct AMoonmanSpawnPoint_SetAimHeadAtPlayer_Params
{
	bool                                               In;                                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay
struct AMoonmanSpawnPoint_OnSetAIDisplay_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability
struct AMoonmanSpawnPoint_GetSpawnProbability_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability
struct AMoonmanSpawnPoint_GetOriginalProbability_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array
struct AMoonmanSpawnPoint_GetMMAnimSeq_Array_Params
{
	TArray<class UAnimSequence*>                       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory
struct AMoonmanSpawnPoint_GetMMAnimCategory_Params
{
	fnaf9_EMMAnimCategory                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsTriggered
struct AMoonmanSpawnPoint_GetIsTriggered_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsStationary
struct AMoonmanSpawnPoint_GetIsStationary_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsSpawned
struct AMoonmanSpawnPoint_GetIsSpawned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse
struct AMoonmanSpawnPoint_GetIsSingleUse_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected
struct AMoonmanSpawnPoint_GetIsMMDetected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue
struct AMoonmanSpawnPoint_GetIsFollowPlayerTrue_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop
struct AMoonmanSpawnPoint_GetIsAnimLoop_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce
struct AMoonmanSpawnPoint_GetHasSpawnedOnce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce
struct AMoonmanSpawnPoint_GetHasLookedOnce_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetCanSpawn
struct AMoonmanSpawnPoint_GetCanSpawn_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetCanPopUp
struct AMoonmanSpawnPoint_GetCanPopUp_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer
struct AMoonmanSpawnPoint_GetAimHeadAtPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint
struct AMoonmanSpawnPoint_DetectTheSpawnPoint_Params
{
	class AMoonmanSpawnPoint*                          passed_HitActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               passed_bVisible;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PatrollerInterface.SetPatrolPath
struct UPatrollerInterface_SetPatrolPath_Params
{
};

// Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex
struct UPatrollerInterface_SetCurrentPatrolPointIndex_Params
{
	int                                                PatrolPointIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.PatrollerInterface.GetPatrolPath
struct UPatrollerInterface_GetPatrolPath_Params
{
};

// Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex
struct UPatrollerInterface_GetCurrentPatrolPointIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SaveHandlerInterface.PostSaveGame
struct USaveHandlerInterface_PostSaveGame_Params
{
};

// Function fnaf9.SaveHandlerInterface.PostGameLoad
struct USaveHandlerInterface_PostGameLoad_Params
{
};

// Function fnaf9.SaveHandlerInterface.OnStoreGameData
struct USaveHandlerInterface_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SaveHandlerInterface.OnGameDataLoaded
struct USaveHandlerInterface_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SaveHandlerInterface.OnCheckpointSave
struct USaveHandlerInterface_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SaveHandlerInterface.OnCheckpointLoad
struct USaveHandlerInterface_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.StopOfficeMode
struct ASecurityCamera_StopOfficeMode_Params
{
};

// Function fnaf9.SecurityCamera.StartOfficeMode
struct ASecurityCamera_StartOfficeMode_Params
{
};

// Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled
struct ASecurityCamera_SetPlayerDetectorEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled
struct ASecurityCamera_SetEnemeyDetectorEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged
struct ASecurityCamera_OnPlayerDetectorSightChanged_Params
{
	class AActor*                                      UpdatedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.OnOfficeModeStarted
struct ASecurityCamera_OnOfficeModeStarted_Params
{
};

// Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged
struct ASecurityCamera_OnEnemyDetectorSightChanged_Params
{
	class AActor*                                      UpdatedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.IsCameraUnlocked
struct ASecurityCamera_IsCameraUnlocked_Params
{
	bool                                               OnlyShowCurrentMission;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.HasDetectedEnemies
struct ASecurityCamera_HasDetectedEnemies_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.GetVisibleEnemies
struct ASecurityCamera_GetVisibleEnemies_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.GetPlayerSceneCapture
struct ASecurityCamera_GetPlayerSceneCapture_Params
{
	class USceneCaptureComponent2D*                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.GetCaptureTarget
struct ASecurityCamera_GetCaptureTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCamera.CaptureView
struct ASecurityCamera_CaptureView_Params
{
};

// Function fnaf9.SecurityCameraSystem.PlayerSpotted
struct USecurityCameraSystem_PlayerSpotted_Params
{
	class ASecurityCamera*                             SecurityCamera;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras
struct USecurityCameraSystem_GetAllSecurityCameras_Params
{
	TArray<class ASecurityCamera*>                     ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SeekerPatrolPath.GetSpawnType
struct USeekerPatrolPath_GetSpawnType_Params
{
	fnaf9_EFNAFAISpawnType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SeekerPatrolPath.GetPathName
struct USeekerPatrolPath_GetPathName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetSightType
struct USightComponent_SetSightType_Params
{
	fnaf9_ESightType                                   InSightType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetSightParams
struct USightComponent_SetSightParams_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetSightEnabled
struct USightComponent_SetSightEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetSightAngle
struct USightComponent_SetSightAngle_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetIncludeTags
struct USightComponent_SetIncludeTags_Params
{
	TArray<struct FName>                               InIgnoreTags;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetFrustumTypeParams
struct USightComponent_SetFrustumTypeParams_Params
{
	float                                              InMinYaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMaxYaw;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMinPitch;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InMaxPitch;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetEndDistance
struct USightComponent_SetEndDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.SetAspectRatio
struct USightComponent_SetAspectRatio_Params
{
	float                                              Ratio;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.OnVisualQueryResults
struct USightComponent_OnVisualQueryResults_Params
{
	TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.OnVisibleActorDestroyed
struct USightComponent_OnVisibleActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.OnMoonManQueryResults
struct USightComponent_OnMoonManQueryResults_Params
{
	TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>>   MoonManSpawnPoints;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.IsUsingConeSight
struct USightComponent_IsUsingConeSight_Params
{
	fnaf9_ESightType                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.IsSightEnabled
struct USightComponent_IsSightEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.IsActorVisible
struct USightComponent_IsActorVisible_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetVisibleActors
struct USightComponent_GetVisibleActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetStartDistance
struct USightComponent_GetStartDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetSightAngle
struct USightComponent_GetSightAngle_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetMinYaw
struct USightComponent_GetMinYaw_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetMinPitch
struct USightComponent_GetMinPitch_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetMaxYaw
struct USightComponent_GetMaxYaw_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetMaxPitch
struct USightComponent_GetMaxPitch_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetIncludeTags
struct USightComponent_GetIncludeTags_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetFrustumTypeParams
struct USightComponent_GetFrustumTypeParams_Params
{
	float                                              OutMinYaw;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutMaxYaw;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutMinPitch;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutMaxPitch;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetEndDistance
struct USightComponent_GetEndDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SightComponent.GetAspectRatio
struct USightComponent_GetAspectRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline
struct USplineFollowMovementComponent_StopFollowingSpline_Params
{
};

// Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline
struct USplineFollowMovementComponent_StartFollowingSpline_Params
{
};

// Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow
struct USplineFollowMovementComponent_SetSplineToFollow_Params
{
	class USplineComponent*                            Spline;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline
struct USplineFollowMovementComponent_SetDistanceAlongSpline_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline
struct USplineFollowMovementComponent_IsFollowingSpline_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance
struct USplineFollowMovementComponent_GetCurrentDistance_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation
struct USplineUtils_GetApproxDistanceClosestToWorldLocation_Params
{
	struct FVector                                     Pos_WS;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                            Spline;                                                    // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateComponent.SetObjectState
struct UWorldStateComponent_SetObjectState_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateComponent.HasValidSaveName
struct UWorldStateComponent_HasValidSaveName_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateComponent.GetObjectState
struct UWorldStateComponent_GetObjectState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered
struct UStoreActiveStateOnTrigger_OnActorTriggered_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation
struct UStreamingLevelUtil_LoadStreamingLevelsAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableVolumesAfterLoad;                                   // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation
struct UStreamingLevelUtil_GetAllStreamingVolumesAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ALevelStreamingVolume*>               ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes
struct UStreamingLevelUtil_GetAllStreamingVolumes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ALevelStreamingVolume*>               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation
struct UStreamingLevelUtil_GetAllStreamingLevelsAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULevelStreaming*>                     ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels
struct UStreamingLevelUtil_GetAllStreamingLevels_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULevelStreaming*>                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.GetAllLevels
struct UStreamingLevelUtil_GetAllLevels_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULevel*>                              ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes
struct UStreamingLevelUtil_EnableAllStreamingVolumes_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation
struct UStreamingLoadComponent_StartAsyncLoadForLocation_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLoadComponent.OnLevelLoaded
struct UStreamingLoadComponent_OnLevelLoaded_Params
{
};

// Function fnaf9.StreamingLoadComponent.IsStreamingLevels
struct UStreamingLoadComponent_IsStreamingLevels_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes
struct UStreamingLoadComponent_EnableAllStreamingVolumes_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemPackage.OnSetup
struct ASurvivalItemPackage_OnSetup_Params
{
};

// Function fnaf9.SurvivalItemPackage.HasCollected
struct ASurvivalItemPackage_HasCollected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemPackage.Collect
struct ASurvivalItemPackage_Collect_Params
{
};

// Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems
struct ASurvivalItemRandomizer_RandomizeSurvivalItems_Params
{
	bool                                               bSpawnAllLocations;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.HasCollected
struct ASurvivalItemRandomizer_HasCollected_Params
{
	class ASurvivalItemPackage*                        Package;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetYellowScore
struct ASurvivalItemRandomizer_GetYellowScore_Params
{
	int                                                OutCount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointsPerPackage;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutScore;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetRedScore
struct ASurvivalItemRandomizer_GetRedScore_Params
{
	int                                                OutCount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointsPerPackage;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutScore;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetPurpleScore
struct ASurvivalItemRandomizer_GetPurpleScore_Params
{
	int                                                OutCount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointsPerPackage;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutScore;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetPinkScore
struct ASurvivalItemRandomizer_GetPinkScore_Params
{
	int                                                OutCount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointsPerPackage;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutScore;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance
struct ASurvivalItemRandomizer_GetPackagesSortedByDistance_Params
{
	TArray<class ASurvivalItemPackage*>                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetGreenScore
struct ASurvivalItemRandomizer_GetGreenScore_Params
{
	int                                                OutCount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointsPerPackage;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutScore;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.SurvivalItemRandomizer.GetGoldScore
struct ASurvivalItemRandomizer_GetGoldScore_Params
{
	int                                                OutCount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPointsPerPackage;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutScore;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.UpdateMissionComponent.UpdateMission
struct UUpdateMissionComponent_UpdateMission_Params
{
};

// Function fnaf9.UpdateMissionComponent.IsMissionFinished
struct UUpdateMissionComponent_IsMissionFinished_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.UpdateMissionComponent.HasMetCondition
struct UUpdateMissionComponent_HasMetCondition_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.UpdateMissionComponent.GetMissionName
struct UUpdateMissionComponent_GetMissionName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations
struct UVisualSourceComponent_SetVisualOffsetLocations_Params
{
	TArray<struct FVector>                             InVisualOffsets;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.SetVisualOffset
struct UVisualSourceComponent_SetVisualOffset_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     visualOffset;                                              // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.SetSourceVisibility
struct UVisualSourceComponent_SetSourceVisibility_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.RemoveVisualOffset
struct UVisualSourceComponent_RemoveVisualOffset_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.GetVisualOffsets
struct UVisualSourceComponent_GetVisualOffsets_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.GetVisualLocations
struct UVisualSourceComponent_GetVisualLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.GetSourceVisibility
struct UVisualSourceComponent_GetSourceVisibility_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation
struct UVisualSourceComponent_GetDetectedVisualLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.VisualSourceComponent.DetectTheSource
struct UVisualSourceComponent_DetectTheSource_Params
{
	struct FVector                                     VSLocation;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      passed_HitActor;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               passed_bVisible;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateHandlerComponent.SetObjectState
struct UWorldStateHandlerComponent_SetObjectState_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle
struct UWorldStateHandlerComponent_OnObjectStateChangedHandle_Params
{
	struct FName                                       ObjectName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ObjectState;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent
struct UWorldStateHandlerComponent_OnObjectStateChangedEvent_Params
{
};

// Function fnaf9.WorldStateHandlerComponent.HasValidSaveName
struct UWorldStateHandlerComponent_HasValidSaveName_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateHandlerComponent.GetObjectState
struct UWorldStateHandlerComponent_GetObjectState_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.StartMinigame
struct UWorldStateSystem_StartMinigame_Params
{
	struct FString                                     MinigameName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EFNAFGameState                               GameState;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      MinigameActor;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetWorldState
struct UWorldStateSystem_SetWorldState_Params
{
	fnaf9_EFNAFGameState                               NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetupNewGame
struct UWorldStateSystem_SetupNewGame_Params
{
};

// Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths
struct UWorldStateSystem_SetSurvivalMaxDeaths_Params
{
	int                                                MaxDeaths;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetSurvivalDifficulty
struct UWorldStateSystem_SetSurvivalDifficulty_Params
{
	fnaf9_ESurvivalDifficulty                          Difficulty;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetRandomSeed
struct UWorldStateSystem_SetRandomSeed_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetPowerStationAvailable
struct UWorldStateSystem_SetPowerStationAvailable_Params
{
	bool                                               bAvailable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetPlayerInPowerStation
struct UWorldStateSystem_SetPlayerInPowerStation_Params
{
	int                                                InPowerStationID;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetPlayerInFreddy
struct UWorldStateSystem_SetPlayerInFreddy_Params
{
	bool                                               bInFreddy;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot
struct UWorldStateSystem_SetPlayerHasUsedHidingSpot_Params
{
};

// Function fnaf9.WorldStateSystem.SetFreddySick
struct UWorldStateSystem_SetFreddySick_Params
{
	bool                                               bIsSick;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint
struct UWorldStateSystem_SetFreddyPatrolPoint_Params
{
	int                                                PatrolPointIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetCurrentActivityId
struct UWorldStateSystem_SetCurrentActivityId_Params
{
	struct FString                                     InActivityId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy
struct UWorldStateSystem_SetCanEnterExitFreddy_Params
{
	bool                                               bCanEnterExit;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetCanCallFreddy
struct UWorldStateSystem_SetCanCallFreddy_Params
{
	bool                                               bCanCall;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetArcadeState
struct UWorldStateSystem_SetArcadeState_Params
{
	struct FArcadeSaveData                             InArcadeState;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.SetAIState
struct UWorldStateSystem_SetAIState_Params
{
	struct FFNAFAISaveData                             InAIState;                                                 // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.RemoveActivated
struct UWorldStateSystem_RemoveActivated_Params
{
	struct FName                                       ActivatableName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.IsPowerStationAvailable
struct UWorldStateSystem_IsPowerStationAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.IsPlayerInFreddy
struct UWorldStateSystem_IsPlayerInFreddy_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.IsFreddySick
struct UWorldStateSystem_IsFreddySick_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.IsActivated
struct UWorldStateSystem_IsActivated_Params
{
	struct FName                                       ActivatableName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot
struct UWorldStateSystem_HasPlayerUsedHidingSpot_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetWorldState
struct UWorldStateSystem_GetWorldState_Params
{
	fnaf9_EFNAFGameState                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths
struct UWorldStateSystem_GetSurvivalMaxDeaths_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetSurvivalDifficulty
struct UWorldStateSystem_GetSurvivalDifficulty_Params
{
	fnaf9_ESurvivalDifficulty                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation
struct UWorldStateSystem_GetSavedPlayerLocationAndRotation_Params
{
	struct FVector                                     OutWorldLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutWorldRotation;                                          // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation
struct UWorldStateSystem_GetSavedFreddyLocationAndRotation_Params
{
	bool                                               OutFreddyInWorld;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutWorldLocation;                                          // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    OutWorldRotation;                                          // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetRandomSeed
struct UWorldStateSystem_GetRandomSeed_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetPowerStationInfo
struct UWorldStateSystem_GetPowerStationInfo_Params
{
	bool                                               OutPlayerInPowerStation;                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPowerStationID;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetLivesRemaining
struct UWorldStateSystem_GetLivesRemaining_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetFreddyPawn
struct UWorldStateSystem_GetFreddyPawn_Params
{
	class AFNAFBasePlayerCharacter*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint
struct UWorldStateSystem_GetFreddyPatrolPoint_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetCurrentSpottedCount
struct UWorldStateSystem_GetCurrentSpottedCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetCurrentMinigameActor
struct UWorldStateSystem_GetCurrentMinigameActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetCurrentMinigame
struct UWorldStateSystem_GetCurrentMinigame_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetCurrentDeathCount
struct UWorldStateSystem_GetCurrentDeathCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetCurrentActivityId
struct UWorldStateSystem_GetCurrentActivityId_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetArcadeState
struct UWorldStateSystem_GetArcadeState_Params
{
	struct FArcadeSaveData                             ReturnValue;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.GetAIState
struct UWorldStateSystem_GetAIState_Params
{
	struct FFNAFAISaveData                             ReturnValue;                                               // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.EndMinigame
struct UWorldStateSystem_EndMinigame_Params
{
};

// Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot
struct UWorldStateSystem_DebugSetPlayerHasUsedHidingSpot_Params
{
	bool                                               HasHid;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation
struct UWorldStateSystem_ClearPlayerInPowerStation_Params
{
};

// Function fnaf9.WorldStateSystem.CanStartMinigame
struct UWorldStateSystem_CanStartMinigame_Params
{
	bool                                               CanStart;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ECantStartMinigameReason                     reason;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.CanEnterExitFreddy
struct UWorldStateSystem_CanEnterExitFreddy_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.CanCallFreddy
struct UWorldStateSystem_CanCallFreddy_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.AddSpotted
struct UWorldStateSystem_AddSpotted_Params
{
};

// Function fnaf9.WorldStateSystem.AddDeath
struct UWorldStateSystem_AddDeath_Params
{
	int                                                OutRemainingLives;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function fnaf9.WorldStateSystem.AddActivated
struct UWorldStateSystem_AddActivated_Params
{
	struct FName                                       ActivatableName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
