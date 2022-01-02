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

// Function RoomSystem.HideCueObjectInterface.SetupWorldCue
struct UHideCueObjectInterface_SetupWorldCue_Params
{
};

// Function RoomSystem.HideCueObjectInterface.ResetWorldCue
struct UHideCueObjectInterface_ResetWorldCue_Params
{
};

// Function RoomSystem.AIHideLocationInterface.IsPlayerInAttackRange
struct UAIHideLocationInterface_IsPlayerInAttackRange_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.AIHideLocationInterface.GetHideLocationAndRotation
struct UAIHideLocationInterface_GetHideLocationAndRotation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.AIHideLocationInterface.GetHideCueActor
struct UAIHideLocationInterface_GetHideCueActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.AIHideLocationInterface.GetAIEjectLocationAndRotation
struct UAIHideLocationInterface_GetAIEjectLocationAndRotation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.SetSecurityLevel
struct UDoorInterface_SetSecurityLevel_Params
{
	int                                                NewSecurityLevel;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.SetDoorRequiredItem
struct UDoorInterface_SetDoorRequiredItem_Params
{
	struct FName                                       ItemName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.SetDoorLockPlayer
struct UDoorInterface_SetDoorLockPlayer_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.SetDoorLockAI
struct UDoorInterface_SetDoorLockAI_Params
{
	bool                                               Lock;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.IsDoorOpen
struct UDoorInterface_IsDoorOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.IsDoorLockedForPlayer
struct UDoorInterface_IsDoorLockedForPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.IsDoorLockedForAI
struct UDoorInterface_IsDoorLockedForAI_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.HasDoorInitialized
struct UDoorInterface_HasDoorInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.DoorInterface.ForceDoorOpen
struct UDoorInterface_ForceDoorOpen_Params
{
};

// Function RoomSystem.DoorInterface.ForceDoorClose
struct UDoorInterface_ForceDoorClose_Params
{
};

// Function RoomSystem.POIBlueprintLibrary.SetPOIVisited
struct UPOIBlueprintLibrary_SetPOIVisited_Params
{
	struct FPOIIndex                                   Index;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.POIBlueprintLibrary.IsValid
struct UPOIBlueprintLibrary_IsValid_Params
{
	struct FPOIIndex                                   Index;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.POIBlueprintLibrary.HasPOIBeenVisited
struct UPOIBlueprintLibrary_HasPOIBeenVisited_Params
{
	struct FPOIIndex                                   Index;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.POIBlueprintLibrary.GetPOIResultsFromIndices
struct UPOIBlueprintLibrary_GetPOIResultsFromIndices_Params
{
	TArray<struct FPOIIndex>                           Indices;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPOIResult>                          Results;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.POIBlueprintLibrary.GetPOIInfoFromIndex
struct UPOIBlueprintLibrary_GetPOIInfoFromIndex_Params
{
	struct FPOIIndex                                   Index;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointOfInterestRuntimeInfo                 ReturnValue;                                               // 0x0010(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.POIBlueprintLibrary.CreatePOIIndicesFromResults
struct UPOIBlueprintLibrary_CreatePOIIndicesFromResults_Params
{
	TArray<struct FPOIResult>                          Results;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPOIIndex>                           Indices;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.POIResultBlueprintLibrary.HasPOIBeenVisited
struct UPOIResultBlueprintLibrary_HasPOIBeenVisited_Params
{
	struct FPointOfInterestRuntimeInfo                 Info;                                                      // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.SetPOIVisited
struct ARoomAreaBase_SetPOIVisited_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.ResetPOIHeat
struct ARoomAreaBase_ResetPOIHeat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.IsLocationInRoom
struct ARoomAreaBase_IsLocationInRoom_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetTotalRoomArea
struct ARoomAreaBase_GetTotalRoomArea_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetRoomPoints
struct ARoomAreaBase_GetRoomPoints_Params
{
	float                                              PointDelta;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetRoomEntryPoints
struct ARoomAreaBase_GetRoomEntryPoints_Params
{
	TMap<int, struct FVector>                          ReturnValue;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetRoomEntryPoint
struct ARoomAreaBase_GetRoomEntryPoint_Params
{
	int                                                EntryIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetRoomAdjacency
struct ARoomAreaBase_GetRoomAdjacency_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRoomAdjacencyInfo>                  ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetRandomLocationInRoom
struct ARoomAreaBase_GetRandomLocationInRoom_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetPointsOfInterestInfo
struct ARoomAreaBase_GetPointsOfInterestInfo_Params
{
	TArray<struct FPointOfInterestRuntimeInfo>         ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetPointsOfInterest
struct ARoomAreaBase_GetPointsOfInterest_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetPointOfInterestInfoByIndex
struct ARoomAreaBase_GetPointOfInterestInfoByIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointOfInterestRuntimeInfo                 ReturnValue;                                               // 0x0004(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetPlayerHeat
struct ARoomAreaBase_GetPlayerHeat_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetMapName
struct ARoomAreaBase_GetMapName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetDoors
struct ARoomAreaBase_GetDoors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetDetectors
struct ARoomAreaBase_GetDetectors_Params
{
	TArray<class UBoxComponent*>                       ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetCharacterDetectorRoot
struct ARoomAreaBase_GetCharacterDetectorRoot_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetAllHideActors
struct ARoomAreaBase_GetAllHideActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetAllAIHideActors
struct ARoomAreaBase_GetAllAIHideActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetAllAdjacentRooms
struct ARoomAreaBase_GetAllAdjacentRooms_Params
{
	TArray<struct FRoomAdjacencyInfo>                  ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetAllAdjacentRoomInfos
struct ARoomAreaBase_GetAllAdjacentRoomInfos_Params
{
	TArray<struct FRoomAdjacencyInfo>                  ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetAIHeat
struct ARoomAreaBase_GetAIHeat_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.GetAdjacentInfoFromDoor
struct ARoomAreaBase_GetAdjacentInfoFromDoor_Params
{
	class AActor*                                      Door;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRoomAdjacencyInfo                          ReturnValue;                                               // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.ClearPOIVisited
struct ARoomAreaBase_ClearPOIVisited_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomAreaBase.AdjustPOIHeat
struct ARoomAreaBase_AdjustPOIHeat_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.StartRoomSystem
struct URoomSystem_StartRoomSystem_Params
{
};

// Function RoomSystem.RoomSystem.RemovePOIsFromArray
struct URoomSystem_RemovePOIsFromArray_Params
{
	TArray<struct FPOIIndex>                           POIsToRemove;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPOIResult>                          POIArray;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPOIResult>                          ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.PlayerExitedRoom
struct URoomSystem_PlayerExitedRoom_Params
{
	class ARoomAreaBase*                               RoomExited;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.PlayerEnteredRoom
struct URoomSystem_PlayerEnteredRoom_Params
{
	class ARoomAreaBase*                               RoomEntered;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.IsPlayerInRoom
struct URoomSystem_IsPlayerInRoom_Params
{
	class AActor*                                      Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetWeightedRandomPOIFromArray
struct URoomSystem_GetWeightedRandomPOIFromArray_Params
{
	TArray<struct FPOIResult>                          POIArray;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOIResult                                  OutResult;                                                 // 0x0018(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetRoomAtLocation
struct URoomSystem_GetRoomAtLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARoomAreaBase*                               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetPOIsInRange
struct URoomSystem_GetPOIsInRange_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPOIResult>                          OutPointIndices;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetPOIsInNavigableRange
struct URoomSystem_GetPOIsInNavigableRange_Params
{
	class APawn*                                       NavigationPawn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPOIResult>                          OutPOIs;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentActionInfo;                                          // 0x0020(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetPlayerVisitAgeForRoom
struct URoomSystem_GetPlayerVisitAgeForRoom_Params
{
	class AActor*                                      Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetPlayerTimeInRoom
struct URoomSystem_GetPlayerTimeInRoom_Params
{
	class AActor*                                      Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetPlayerRoomInfo
struct URoomSystem_GetPlayerRoomInfo_Params
{
	class AActor*                                      Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerRoomInfo                             RoomInfo;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Found;                                                     // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetPlayerCurrentRooms
struct URoomSystem_GetPlayerCurrentRooms_Params
{
	TArray<class ARoomAreaBase*>                       ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetHighestHeatPOIFromArray
struct URoomSystem_GetHighestHeatPOIFromArray_Params
{
	TArray<struct FPOIResult>                          POIArray;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValid;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOIResult                                  OutResult;                                                 // 0x0018(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetClosestPointOfInterest
struct URoomSystem_GetClosestPointOfInterest_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutValid;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPOIResult                                  OutResult;                                                 // 0x0010(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetAllRoomDistancesFromRoom
struct URoomSystem_GetAllRoomDistancesFromRoom_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class ARoomAreaBase*, int>                    ReturnValue;                                               // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.GetAllRoomDistancesFromPlayerRoom
struct URoomSystem_GetAllRoomDistancesFromPlayerRoom_Params
{
	TMap<class ARoomAreaBase*, int>                    ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function RoomSystem.RoomSystem.AdjustClosestPointOfInterestHeat
struct URoomSystem_AdjustClosestPointOfInterestHeat_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
