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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RoomSystem.HideCueObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHideCueObjectInterface : public UInterface
	{
	public:
		void SetupWorldCue();
		void ResetWorldCue();
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.AIHideLocationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIHideLocationInterface : public UInterface
	{
	public:
		bool IsPlayerInAttackRange();
		void GetHideLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
		class AActor* GetHideCueActor();
		void GetAIEjectLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.DoorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDoorInterface : public UInterface
	{
	public:
		void SetSecurityLevel(int NewSecurityLevel);
		void SetDoorRequiredItem(const class FName& ItemName);
		void SetDoorLockPlayer(bool Lock);
		void SetDoorLockAI(bool Lock);
		bool IsDoorOpen();
		bool IsDoorLockedForPlayer();
		bool IsDoorLockedForAI();
		bool HasDoorInitialized();
		void ForceDoorOpen();
		void ForceDoorClose();
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.POIBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPOIBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetPOIVisited(const struct FPOIIndex& Index);
		bool STATIC_IsValid(const struct FPOIIndex& Index);
		bool STATIC_HasPOIBeenVisited(const struct FPOIIndex& Index);
		void STATIC_GetPOIResultsFromIndices(TArray<struct FPOIIndex> Indices, TArray<struct FPOIResult>* Results);
		struct FPointOfInterestRuntimeInfo STATIC_GetPOIInfoFromIndex(const struct FPOIIndex& Index);
		void STATIC_CreatePOIIndicesFromResults(TArray<struct FPOIResult> Results, TArray<struct FPOIIndex>* Indices);
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.POIResultBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPOIResultBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_HasPOIBeenVisited(const struct FPointOfInterestRuntimeInfo& Info);
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.RoomAreaBase
	 * Size -> 0x00E0 (FullSize[0x0308] - InheritedSize[0x0228])
	 */
	class ARoomAreaBase : public AActor
	{
	public:
		class FName                                                MapName;                                                 // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CharacterDetectorsRoot;                                  // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UBoxComponent*>                               CharacterDetectors;                                      // 0x0238(0x0010) Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<int, struct FVector>                                  RoomEntryPoints;                                         // 0x0248(0x0050) Edit, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FRoomAdjacencyInfo>                          AdjacentRooms;                                           // 0x0298(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      HideActors;                                              // 0x02A8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      AIHideActors;                                            // 0x02B8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      AICharactersInRoom;                                      // 0x02C8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     PointsOfInterest;                                        // 0x02D8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPlayerIsInRoom;                                         // 0x02E8(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V1NL[0x1F];                                  // 0x02E9(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetPOIVisited(int Index);
		void ResetPOIHeat(int Index);
		bool IsLocationInRoom(const struct FVector& Location);
		float GetTotalRoomArea();
		TArray<struct FVector> GetRoomPoints(float PointDelta);
		TMap<int, struct FVector> GetRoomEntryPoints();
		struct FVector GetRoomEntryPoint(int EntryIndex);
		TArray<struct FRoomAdjacencyInfo> GetRoomAdjacency(class ARoomAreaBase* Room);
		struct FVector GetRandomLocationInRoom();
		TArray<struct FPointOfInterestRuntimeInfo> GetPointsOfInterestInfo();
		TArray<struct FVector> GetPointsOfInterest();
		struct FPointOfInterestRuntimeInfo GetPointOfInterestInfoByIndex(int Index);
		float GetPlayerHeat();
		class FName GetMapName();
		TArray<class AActor*> GetDoors();
		TArray<class UBoxComponent*> GetDetectors();
		class USceneComponent* GetCharacterDetectorRoot();
		TArray<class AActor*> GetAllHideActors();
		TArray<class AActor*> GetAllAIHideActors();
		TArray<struct FRoomAdjacencyInfo> GetAllAdjacentRooms();
		TArray<struct FRoomAdjacencyInfo> GetAllAdjacentRoomInfos();
		float GetAIHeat();
		struct FRoomAdjacencyInfo GetAdjacentInfoFromDoor(class AActor* Door);
		void ClearPOIVisited(int Index);
		void AdjustPOIHeat(int Index, float Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.RoomSystem
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class URoomSystem : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnPlayerEnteredRoom;                                     // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerExitedRoom;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoomLoaded;                                            // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRoomUnloaded;                                          // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOUF[0x90];                                  // 0x0070(0x0090) MISSED OFFSET (PADDING)

	public:
		void StartRoomSystem();
		TArray<struct FPOIResult> RemovePOIsFromArray(TArray<struct FPOIIndex>* POIsToRemove, TArray<struct FPOIResult>* POIArray);
		void PlayerExitedRoom(class ARoomAreaBase* RoomExited);
		void PlayerEnteredRoom(class ARoomAreaBase* RoomEntered);
		bool IsPlayerInRoom(class AActor* Room);
		void GetWeightedRandomPOIFromArray(TArray<struct FPOIResult> POIArray, bool* bOutValid, struct FPOIResult* OutResult);
		class ARoomAreaBase* GetRoomAtLocation(const struct FVector& Location);
		void GetPOIsInRange(const struct FVector& WorldLocation, float Radius, TArray<struct FPOIResult>* OutPointIndices);
		void GetPOIsInNavigableRange(class APawn* NavigationPawn, float Radius, TArray<struct FPOIResult>* OutPOIs, const struct FLatentActionInfo& LatentActionInfo);
		float GetPlayerVisitAgeForRoom(class AActor* Room);
		float GetPlayerTimeInRoom(class AActor* Room);
		void GetPlayerRoomInfo(class AActor* Room, struct FPlayerRoomInfo* RoomInfo, bool* Found);
		TArray<class ARoomAreaBase*> GetPlayerCurrentRooms();
		void GetHighestHeatPOIFromArray(TArray<struct FPOIResult> POIArray, bool* bValid, struct FPOIResult* OutResult);
		void GetClosestPointOfInterest(const struct FVector& WorldLocation, bool* bOutValid, struct FPOIResult* OutResult);
		TMap<class ARoomAreaBase*, int> GetAllRoomDistancesFromRoom(class ARoomAreaBase* Room);
		TMap<class ARoomAreaBase*, int> GetAllRoomDistancesFromPlayerRoom();
		void AdjustClosestPointOfInterestHeat(const struct FVector& WorldLocation, float Amount);
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.RoomSystemSettings
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class URoomSystemSettings : public UDeveloperSettings
	{
	public:
		float                                                      PlayerRoomHeatIncreaseRate;                              // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerRoomHeatDecayRate;                                 // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerRoomRecentDecay;                                   // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AIRoomHeatIncreaseRate;                                  // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AIRoomHeatDecayRate;                                     // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPOIHeat;                                              // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      POINearIncreasePerSecond;                                // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      POIHeatIncreaseOnCollect;                                // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RoomSystem.RoomVisibilityData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URoomVisibilityData : public UObject
	{
	public:
		TArray<struct FRoomVisibilityPoint>                        RoomVisibilityPoints;                                    // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
