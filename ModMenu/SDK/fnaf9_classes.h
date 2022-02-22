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
	 * Class fnaf9.AIHiderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIHiderInterface : public UInterface
	{
	public:
		void ExitHideMode(class AActor* HideActor);
		void EnterHideMode(class AActor* HideActor);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIManagementSystem
	 * Size -> 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
	 */
	class UAIManagementSystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_I7ZI[0xC];                                   // 0x0030(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableDebugCloak;                                        // 0x003C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMXX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAISpawned;                                             // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7W9[0x1F0];                                 // 0x0050(0x01F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APawn*>                                       CurrentPawnAlertList;                                    // 0x0240(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QIFF[0x10];                                  // 0x0250(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnregisterSeekerPath();
		void UnRegisterAI(class APawn* AIPawn);
		void UnpauseManager();
		void StoreEndoStates();
		void StartManager();
		void SpawnVannyOrVanessa(bool bSpawnVanny, bool* bOutSpawned, const struct FLatentActionInfo& LatentActionInfo);
		void SpawnSpecificAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, fnaf9_EFNAFAISpawnType AIType, bool ForceShattered);
		class APawn* SpawnAIWithTransformAndPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const struct FTransform& SpawnTransform, const class FName& PathName);
		class APawn* SpawnAITypeWithTransformSafe(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, bool* success, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn);
		class APawn* SpawnAITypeWithTransform(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner);
		class APawn* SpawnAITypeAtLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, bool ForceShattered);
		class APawn* SpawnAIOnPathNearLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& Location, const class FName& PathName);
		class APawn* SpawnAIOnPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const class FName& PathName);
		void SpawnAINearPlayer();
		void SpawnAIFar();
		void SpawnAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, bool bForceShattered);
		void SpawnAIAtDistance(float Distance);
		void SetWorldSpawnEnabled(bool bEnable);
		void SetVanessaSpawnEnable(bool bEnable);
		void SetUseStagedSpawns(bool enable);
		void SetSpawningEnabled(bool enable);
		void SetExpectedAI(TArray<struct FAnimatronicExpectedData> AITypes);
		void SetAllAIExpected();
		void SetAITeleportEnabled(bool bEnable);
		void SendVanessaAlert(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert);
		void SendGeneralAlert(const struct FVector& AlertLocation, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert);
		void RespawnEndos();
		void RespawnAnimatronics();
		void RespawnAllAI();
		void Reset();
		void RemoveExpectedAI(fnaf9_EFNAFAISpawnType AIType);
		void RemoveCharacterByType(fnaf9_EFNAFAISpawnType AIType);
		void RemoveAllCharacters();
		void RegisterSeekerPath();
		void RegisterAI(class APawn* AIPawn);
		void PawnExitedRoom(class APawn* AIPawn, class ARoomAreaBase* Room);
		void PawnEnteringRoom(class APawn* AIPawn, class ARoomAreaBase* Room);
		void PawnEnteredRoom(class APawn* AIPawn, class ARoomAreaBase* Room);
		void PauseManager();
		void OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState OldState);
		void OnVannyPathsCollected();
		void OnPawnEndPlay(class AActor* DestroyedPawn, Engine_EEndPlayReason EndPlayReason);
		void OnAlertDistancesCollected();
		void OnAIFellOutOfWorld(class APawn* AIPawn);
		bool IsWorldSpawnEnabled();
		bool IsUsingStagedSpawns();
		bool IsSpawningEnabled();
		bool IsRoomOccupied(class ARoomAreaBase* Room);
		bool IsRoomBeingEntered(class ARoomAreaBase* Room);
		bool IsAITeleportEnabled();
		float GetTimeSinceLastEncounter();
		TMap<class APawn*, int32_t> GetRoomDistancesToPlayer();
		class ARoomAreaBase* GetRoomAIPawnIsIn(class APawn* AIPawn);
		class ARoomAreaBase* GetRoomAIPawnIsEntering(class APawn* AIPawn);
		class APawn* GetPawnForType(fnaf9_EFNAFAISpawnType AIType);
		class UClass* GetPawnClassForType(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered);
		void GetPathForAI(fnaf9_EFNAFAISpawnType AIType, const class FName& PathName);
		TArray<fnaf9_EFNAFAISpawnType> GetExistingPawnTypes();
		class APawn* GetExistingPawn(fnaf9_EFNAFAISpawnType AIType);
		void GetCurrentVannyMeterValuesAsPercentage(float* OutCurrentValuePercent, float* OutSoftMaxPercent);
		void GetCurrentVannyMeterValues(float* CurrentValue, float* Max, float* SoftMax);
		float GetCurrentVannyMeterPercentage();
		TArray<struct FAIDistanceResult> GetCachedDistances();
		void GetCachedDistanceFor(class APawn* Pawn, bool* bOutResultValid, struct FAIDistanceResult* OutResult);
		TArray<class AFNAFAISpawnPoint*> GetAllSpawnPointsFor(fnaf9_EFNAFAISpawnType AIType);
		TArray<class AFNAFAISpawnPoint*> GetAllSpawnPoints();
		TArray<class APawn*> GetAllRegisteredAI();
		void GetAllAnimatronicPawns(TArray<class APawn*>* OutAnimatronicPawns);
		TArray<class APawn*> GetAllAIInRoomAtMost(int32_t numRooms);
		TArray<class APawn*> GetAllAI();
		TArray<class APawn*> GetAIPawnsWithSightToPlayer();
		TArray<class APawn*> GetAIPawnsEnteringRoom(class ARoomAreaBase* Room);
		TArray<class APawn*> GetAIPawnInRoom(class ARoomAreaBase* Room);
		class AFNAFAISpawnPoint* FindSpawnPointClosestToDistance(float Distance);
		void FindSpawnNotVisibleAtDistance(float Distance, fnaf9_EFNAFAISpawnType SpawnType, class APawn* PawnForNavProperties, TArray<class AFNAFAISpawnPoint*>* OutSpawnPointsResult, TArray<float>* OutDistances, const struct FLatentActionInfo& LatentInfo);
		bool FindRandomPatrolPointOutOfView(fnaf9_EFNAFAISpawnType AIType, struct FVector* OutLocation);
		class AFNAFAISpawnPoint* FindFurthestSpawnPoint();
		class AFNAFAISpawnPoint* FindClosestSpawnPoint();
		void FindClosestPatrolPointOutOfView(class APawn* AIPawn, bool* bOutResultValid, struct FVector* OutLocation, const struct FLatentActionInfo& LatentActionInfo, int32_t* OutPointIndex);
		void FindClosestPathPointForAI(class APawn* AIPawn, bool* OutResultValid, int32_t* OutPointIndex, struct FVector* OutLocation, const struct FLatentActionInfo& LatentInfo);
		void ExitedHiding(class APawn* AIPawn);
		void DestroyAllAINotVisible();
		void DestroyAllAIInRoomsAtleast(int32_t RoomDist);
		void DestroyAllAI();
		void ClearExpectedAI();
		void CalculateAllAIDistances(TArray<struct FAIDistanceResult>* DistanceResults, bool* bOutClosestIsValid, int32_t* ClosestIndex, const struct FLatentActionInfo& LatentInfo);
		void ApplySound(float Strength, const struct FVector& WorldLocation);
		void ApplyCollect(const struct FVector& WorldLocation);
		bool AnyPawnInPlayerRoom();
		void AISpottedPlayer(class APawn* AIPawn);
		void AILostSightOfPlayer(class APawn* AIPawn);
		void AdjustVannyMeter(float Amount);
		void AddExpectedAI(const struct FAnimatronicExpectedData& AIType);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PathPointProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPathPointProvider : public UInterface
	{
	public:
		void SetPointType(int32_t PointIndex, int32_t PointType);
		void SetPointLocation(int32_t PointIndex, const struct FVector& Location);
		void RemovePointConnection(int32_t PointIndex, int32_t PointToDisconnectIndex);
		void RemovePoint(int32_t PointIndex);
		int32_t GetPointType(int32_t PointIndex);
		TArray<int32_t> GetPointsConnectedTo(int32_t PointIndex);
		struct FVector GetPointLocation(int32_t PointIndex);
		struct FLinearColor GetPointColor(int32_t PointIndex);
		int32_t GetNumberOfPathPoints();
		TArray<class FText> GetAvailablePointTypes();
		void AddPointConnection(int32_t PointIndex, int32_t PointToConnectIndex);
		int32_t AddPoint(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AIPathComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UAIPathComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISpawnPointComponent
	 * Size -> 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
	 */
	class UAISpawnPointComponent : public UArrowComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PlayerTrigger
	 * Size -> 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
	 */
	class APlayerTrigger : public AActor
	{
	public:
		unsigned char                                              UnknownData_E9YC[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerTriggered;                                       // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UBoxComponent* TriggerComponent;                                        // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContinuousTrigger;                                   // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_23K7[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SaveName;                                                // 0x024C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSaveOnTrigger;                                          // 0x0254(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHND[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<fnaf9_EFNAFGameType>                                ValidGameTypes;                                          // 0x0258(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixCollision;                                           // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerOnActorOverlap;                                  // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6D20[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetTriggerActive(bool bActive);
		void SaveActivated();
		void OnWorldObjectStateChanged(const class FName& ObjectName, bool ObjectState);
		void OnTriggerStay();
		void OnTriggered();
		bool IsTriggerStateSet();
		bool IsTriggerActive();
		void ForceTrigger();
		bool CanTrigger();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISpawnTrigger
	 * Size -> 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
	 */
	class AAISpawnTrigger : public APlayerTrigger
	{
	public:
		class FScriptMulticastDelegate                             OnAISpawnedDelegate;                                     // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAISpawnedFailureDelegate;                              // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       SpawnAnyCharacter;                                       // 0x0290(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       ForceShattered;                                          // 0x0291(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E4LM[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<fnaf9_EFNAFAISpawnType>                             SpawnCharacters;                                         // 0x0298(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArrowComponent* SpawnLocation;                                           // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnAISpawnedFailure(class APawn* SpawnedPawn);
		void OnAISpawned(class APawn* SpawnedPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.AISystemSettings
	 * Size -> 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
	 */
	class UAISystemSettings : public UDeveloperSettings
	{
	public:
		TMap<fnaf9_EFNAFAISpawnType, struct FFNAFAISettingInfo>    FNAFAITypeClasses;                                       // 0x0038(0x0050) Edit, Config, NativeAccessSpecifierPublic
		float                                                      MinimumSpawnDistance;                                    // 0x0088(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumSpawnDistance;                                    // 0x008C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnDelayTime;                                          // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenSightings;                                    // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutOfRangeDistance;                                      // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportDistance;                                        // 0x009C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerSecond;                             // 0x00A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerCampSecond;                         // 0x00A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerSoundUnit;                          // 0x00A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterIncreasePerGift;                               // 0x00AC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterLowAppear;                                     // 0x00B0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VannyMeterMax;                                           // 0x00B4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              VannyMeterPerHourBase;                                   // 0x00B8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.BallPitVolume
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class ABallPitVolume : public AActor
	{
	public:
		class UBoxComponent* Volume;                                                  // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      Balls;                                                   // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.CameraHelperFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraHelperFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsLocationInCameraView(class UObject* WorldContextObject, const struct FVector& Location, fnaf9_ECameraAngleFlags CameraAngles, float* OutHorizontalAngle, float* OutVerticalAngle);
		void STATIC_GetLocationAnglesFromCamera(class UObject* WorldContextObject, const struct FVector& Location, float* OutHorizontalAngle, float* OutVerticalAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.CameraTrigger
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraTrigger : public UInterface
	{
	public:
		fnaf9_EAlertType GetAlertType();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ConditionalCheckComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UConditionalCheckComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BC6J[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnConditionalCheckUpdated;                               // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		fnaf9_EConditionCheckType                                  ConditionCheck;                                          // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2VU[0x17];                                  // 0x00C9(0x0017) MISSED OFFSET (PADDING)

	public:
		void OnConditionUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ConditionCheckInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionCheckInterface : public UInterface
	{
	public:
		void UnbindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated);
		bool ConditionsMet();
		void BindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ConditionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConditionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemoveConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate);
		void STATIC_HasMetComponentConditionsWithGet(class AActor* ActorToCheck, bool* bOutConditionsMet);
		bool STATIC_HasMetComponentConditions(class AActor* ActorToCheck);
		bool STATIC_HasMetAnyComponentConditions(class AActor* ActorToCheck);
		void STATIC_CallConditionUpdate(const struct FConditionResultDelegates& DelegateHandle);
		void STATIC_AddConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DoorComponent
	 * Size -> 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
	 */
	class UDoorComponent : public UActorComponent
	{
	public:
		struct FDoorEntryRequirements                              NormalDoorEntryRequirements;                             // 0x00B0(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FDoorEntryRequirements                              SurvivalDoorEntryRequirements;                           // 0x00E8(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsOpen;                                                 // 0x0120(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JIDA[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPawnEnteredDoor;                                       // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnExitedDoor;                                        // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInitialOpen;                                           // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpenDoor;                                              // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCloseDoor;                                             // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerLockStateChanged;                                // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAILockStateChanged;                                    // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsLockedForAI;                                          // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLockedForPlayer;                                      // 0x0199(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VSQ6[0x6];                                   // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class APawn*, struct FPawnInDoorwayInfo>              PawnsInDoorway;                                          // 0x01A0(0x0050) Transient, NativeAccessSpecifierPrivate
		class UPrimitiveComponent* PlayerBlocker;                                           // 0x01F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0FJD[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSecurityLevel(int32_t NewSecurityLevel);
		void SetPlayerBlocker(class UPrimitiveComponent* InPlayerBlocker);
		void SetLockedForPlayer(bool bLocked);
		void SetLockedForAI(bool bLocked);
		void SetAutomaticDoorEnableForPlayer(bool bEnable);
		void SetAutomaticDoorEnableForAI(bool bEnable);
		void PawnExitedDoor(class APawn* Pawn);
		void PawnEnteredDoor(class APawn* Pawn);
		bool IsLockedForPlayer();
		bool IsLockedForAI();
		void HasMetConditions(class AFNAFBasePlayerCharacter* BasePlayerCharacter, bool* bConditionsMet, fnaf9_EConditionFailReason* FailReason);
		bool HasDoorInitialized();
		TArray<class APawn*> GetPawnsInDoor();
		bool GetIsAutomaticDoorEnabledForPlayer();
		bool GetIsAutomaticDoorEnabledForAI();
		fnaf9_EDoorSide GetDoorSideFromLocation(const struct FVector& WorldLocation);
		fnaf9_EDoorSide GetDoorSideFromActor(class AActor* Actor);
		struct FDoorEntryRequirements GetCurrentRequirements();
		void ForceOpen();
		void ForceClose();
		void CopyConditions(class UDoorComponent* OtherDoorComponent);
		void CanPawnOpenDoor(class APawn* Pawn, bool* bOutConditionsMet, fnaf9_EConditionFailReason* OutFailReason);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.DoorInteractor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDoorInteractor : public UInterface
	{
	public:
		void OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent);
		void OnEndOverlapDoor();
		bool DoorEntryNotAllowed(class UDoorComponent* DoorComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.EnvQueryTest_ObjectSweep
	 * Size -> 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_ObjectSweep : public UEnvQueryTest
	{
	public:
		class UClass* Context;                                                 // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x0200(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHHQ[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.fnaf9GameModeBase
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class Afnaf9GameModeBase : public AGameModeBase
	{
	public:
		class FScriptMulticastDelegate                             OnSetAIDisplay;                                          // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ST4Q[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ToggleFullAIDisplay();
		void StartRepairGame();
		void SetAIDisplay(bool enable);
		void RoomHeatDisplay(bool enable);
		void POIVisible(bool bVisible);
		void POIDetectionVisible(bool bVisible);
		void PlayerFlashlightVis(bool bEnable);
		void OnRoomHeatDisplayChanged(bool enable);
		void OnPlayerFlashlightVis(bool bEnable);
		void OnForceSpawnVanny();
		void OnAIPawnsVis(bool bEnable);
		bool IsAIDisplayOn();
		void ForceSpawnVanny();
		void FinishRepairGame();
		void AIPawnsVis(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFAchievementUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFAchievementUtils : public UObject
	{
	public:
		TArray<class FName> STATIC_GetAllAchievements();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFAISpawnPoint
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class AFNAFAISpawnPoint : public ANavigationObjectBase
	{
	public:
		bool                                                       bUseType;                                                // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		fnaf9_EFNAFAISpawnType                                     AIType;                                                  // 0x0251(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsStagedPoint;                                          // 0x0252(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8HFK[0x5];                                   // 0x0253(0x0005) MISSED OFFSET (PADDING)

	public:
		fnaf9_EFNAFAISpawnType GetAIType();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBaseCharacter
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class AFNAFBaseCharacter : public ACharacter
	{
	public:
		void OnFellOutOfWorld();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBaseAICharacter
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class AFNAFBaseAICharacter : public AFNAFBaseCharacter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBasePlayerCharacter
	 * Size -> 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
	 */
	class AFNAFBasePlayerCharacter : public ACharacter
	{
	public:
		fnaf9_EPlayerPawnType                                      PawnType;                                                // 0x04C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WG83[0xF];                                   // 0x04C1(0x000F) MISSED OFFSET (PADDING)

	public:
		void TeleportPlayerWithCameraLocation(const struct FVector& CameraWorldLocation, float Yaw);
		void TeleportPlayer(const struct FVector& WorldLocation, float Yaw);
		void OnKillZLevelsLoaded();
		fnaf9_EPlayerPawnType GetPlayerPawnType();
		void GetLastSavedLocationAndRotation(struct FVector* LastSavedLocation, struct FRotator* LastSavedRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFBasePlayerController
	 * Size -> 0x0048 (FullSize[0x05C0] - InheritedSize[0x0578])
	 */
	class AFNAFBasePlayerController : public APlayerController
	{
	public:
		class FScriptMulticastDelegate                             OnControlTypeChanged;                                    // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6D4M[0x38];                                  // 0x0588(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnUsingGamepadChanged();
		void OnTriggerVannyScare();
		void OnToggleLocalizationQA();
		void OnToggleFlightMode();
		void OnToggleDevUI();
		void OnToggleCinemaMode();
		void OnDebugSequenceEntered();
		bool IsUsingGamepad();
		void GiveVIPAchievement();
		TArray<struct FKey> GetCurrentKeysDown();
		bool AnyOtherKeysDown(const struct FKey& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UFNAFCheatManager : public UCheatManager
	{
	public:
		void UpgradeFreddy(fnaf9_EFreddyUpgradeType Type);
		void ToggleDebugCloaking();
		void SetDebugCloaking(bool Value);
		bool GetDebugCloaking();
		void ApplyQualitySettings(int32_t VisualQualityLevel, int32_t RayTraceQualityLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFEventObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFEventObject : public UInterface
	{
	public:
		void TriggerEvent();
		bool IsEventFinished();
		bool CanPlayEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFEventSystem
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UFNAFEventSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_S57K[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (PADDING)

	public:
		void UnpauseEventSystem();
		void StoreEventTriggered(const class FName& EventTag);
		void StopEventTimer();
		void StartEventTimer();
		void SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents);
		void SetEventActorWeight(float NewWeight);
		void SetCurrentAudioComponent(class UAudioComponent* EventSoundCue);
		void PauseEventSystem();
		void OnAudioFinished();
		bool HasEventBeenTriggered(const class FName& EventTag);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFGameInstanceBase
	 * Size -> 0x0018 (FullSize[0x01B0] - InheritedSize[0x0198])
	 */
	class UFNAFGameInstanceBase : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_ZTQ0[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (PADDING)

	public:
		void StartGamePlay(fnaf9_EFNAFGameType GameType);
		void SetVisualQualityLevel(int32_t Level);
		void SetSplashFinished(bool bFinished);
		void SetRayTraceQualityLevel(int32_t Level);
		void ProcessActivityIntent();
		void OnGameActivityLoadComplete();
		void OnApplicationReactivated();
		void OnApplicationDeactivated();
		void LogGameClockDelegates();
		bool IsNormalPlay();
		bool IsLoadingActivity();
		bool IsFromTitle();
		bool HasSplashFinished();
		int32_t GetVisualQualityLevel();
		int32_t GetRayTraceQualityLevel();
		bool GetIsShippingConfig();
		float GetGPUBenchmarkResult();
		fnaf9_EFNAFGameType GetCurrentGameType();
		float GetCPUBenchmarkResult();
		class FString GetAllLoadedLevelsString();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFGameUserSettings
	 * Size -> 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
	 */
	class UFNAFGameUserSettings : public UGameUserSettings
	{
	public:
		int32_t                                                    VisualQualityLevel;                                      // 0x0120(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RayTraceQualityLevel;                                    // 0x0124(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFGeneralEditorSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UFNAFGeneralEditorSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bSurvivalMode;                                           // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPIEUseIntro;                                            // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSurvivalAllLocations;                                   // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K96E[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinutesPerHour;                                          // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivalSeed;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6ZJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFInputDeviceSystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFNAFInputDeviceSystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnInputDeviceTypeChanged;                                // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		fnaf9_ESWGInputDeviceType GetCurrentInputDevice();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFInputSystemDeveloperSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UFNAFInputSystemDeveloperSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOverrideInputDevice;                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_ESWGInputDeviceType                                  OverrideInputDevice;                                     // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0GC[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFInventorySystem
	 * Size -> 0x0128 (FullSize[0x0158] - InheritedSize[0x0030])
	 */
	class UFNAFInventorySystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_QIYA[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInventoryItemAdded;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryItemRemoved;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMessageAdded;                                          // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecurityLevelUpdated;                                  // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyLevelUpdated;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyPassUsed;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Y7Y[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable* InventoryDataTable;                                      // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable* MessageDataTable;                                        // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FazwatchPowerLevel;                                      // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FazwatchMaxPowerLevel;                                   // 0x00B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FreddyPowerLevel;                                        // 0x00B8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FreddyMaxPowerLevel;                                     // 0x00BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecurityLevel;                                           // 0x00C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedPartyPassCount;                                 // 0x00C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsedPartyPassCount;                                      // 0x00C8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAvailableFlash;                                       // 0x00CC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlimitedFazwatchPower;                                 // 0x00D0(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlimitedStamina;                                       // 0x00D1(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6MT[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TapesListenedTo[0x50];                                   // 0x00D2(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    NumDishesBroken;                                         // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYJ0[0x2C];                                  // 0x012C(0x002C) MISSED OFFSET (PADDING)

	public:
		bool UsePartyPass();
		void UseFlash(bool* bOutFlashUsed);
		void SetupNewGame();
		void SetSecurityLevel(int32_t NewSecurityLevel);
		void SetPowerLevel_Freddy(int32_t InPowerLevel);
		void SetPowerLevel_Fazwatch(int32_t InPowerLevel);
		void SetPartyLevel(int32_t NewPartyLevel);
		void SetMessageViewed(const class FName& Message);
		void SetMaxPowerLevel_Freddy(int32_t NewMax);
		void SetMaxPowerLevel_Fazwatch(int32_t NewMax);
		void SetItemViewed(const class FName& Item);
		void SetFlashlightStationID(int32_t StationID);
		void ResetFreddyPower();
		void ResetFlashlightPower();
		void ResetFlashes();
		void RemoveMessage(const class FName& Message);
		void RemoveItem(const class FName& Item);
		void RemoveEverything();
		bool IsVIPItem(const class FName& Item);
		bool IsMessageValid(const class FName& Message);
		bool IsItemValid(const class FName& Item);
		bool HasSecurityClearance(int32_t InSecurityLevel);
		bool HasMessageBeenViewed(const class FName& ItemOrMessage);
		bool HasMessage(const class FName& SearchMessage);
		bool HasItemBeenViewed(const class FName& ItemOrMessage);
		bool HasItem(const class FName& searchItem);
		bool HasEnoughPower_Freddy(int32_t PowerRequired);
		bool HasEnoughPower_Fazwatch(int32_t PowerRequired);
		bool HasAvailablePartyPass();
		void GetTapesListenedTo();
		float GetStaminaUpgradeMultiplier();
		int32_t GetNumberOfUnreadMessages();
		void GetMessageInfo(const class FName& MessageName, struct FFNAFMessageTableStruct* OutMessageInfo, bool* OutFound);
		int32_t GetMaxFlashes();
		void GetItemInfo(const class FName& ItemName, struct FFNAFInventoryTableStruct* OutItemInfo, bool* OutFound);
		float GetFreddyUpgradeMutliplier();
		int32_t GetFreddyMaxPower();
		float GetFlashlightUpgradMultiplier();
		int32_t GetFlashlightStationID();
		int32_t GetFlashlightMaxPower();
		TArray<class FName> GetCollectedPartyPasses();
		TArray<class FName> GetAllSurvivalItemsOfType(fnaf9_EInventoryItemSurvivalCategory SurvivalCategory);
		void ClearFlashlightStationID();
		bool CanUseFlashBeacon();
		void AwardMessage(const class FName& Message, bool bNotify);
		void AwardItem(const class FName& Item, bool bNotify);
		bool AdjustPower_Freddy(int32_t ChangeAmount);
		bool AdjustPower_Fazwatch(int32_t ChangeAmount);
		void AddTapeListenedTo(const class FName& InTapeListenedTo);
		void AddEverything();
		int32_t AddBrokenPlate();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFLevelManager
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UFNAFLevelManager : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnlevelsUpdated;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0ZB[0x180];                                 // 0x0040(0x0180) MISSED OFFSET (PADDING)

	public:
		void UnregisterStreamingSource(class USceneComponent* SceneComponent);
		void UnregisterPawnStreamingSource(class USceneComponent* SceneComponent);
		void SetPlayerPawn(class APawn* PlayerPawn);
		void SetLevelStreamingEnable(bool bEnable);
		void RemoveLevelsFromStreamingSource(class USceneComponent* StreamingSource);
		void RemoveLevelArray(TArray<class ULevelStreaming*> Levels);
		void RemoveLevel(class ULevelStreaming* LevelToUnload);
		void RemoveAllLevels();
		void RegisterStreamingSource(class USceneComponent* SceneComponent);
		void RegisterPawnStreamingSource(class USceneComponent* SceneComponent);
		bool IsLevelStreamingEnable();
		TArray<class USceneComponent*> GetStreamingSources();
		TArray<class FName> GetLevelNamesForComponent(class USceneComponent* SceneComponent);
		void AddLevelToLoad(class ULevelStreaming* LevelToLoad);
		void AddLevelsFromStreamingSourceToLoad(class USceneComponent* StreamingSource);
		void AddLevelArrayToLoad(TArray<class ULevelStreaming*> LevelsToLoad);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFManagedAI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFManagedAI : public UInterface
	{
	public:
		void TeleportAI(const struct FVector& Location);
		void StartMoveTo(const struct FVector& Location);
		void SendVanessaAlert(class APawn* VanessaPawn);
		void SendPositionalAlert(const struct FVector& Location);
		bool IsShatteredVersion();
		fnaf9_EFNAFAISpawnType GetManagedAIType();
		class FName GetCurrentPathName();
		void ForceTrackToPlayer();
		void EndTrackToPlayer();
		bool CanReceiveAlert();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFMasterData
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UFNAFMasterData : public USaveGame
	{
	public:
		int32_t                                                    newSaveSlotNumber;                                       // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKRE[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lastSavedSlotName;                                       // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              lastLoadedSlotName;                                      // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActivitySaveSlot;                                        // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         SaveGameSlotNames_Map;                                   // 0x0060(0x0050) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		bool                                                       InvertedGamepad;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastSaveWasAuto;                                        // 0x00B1(0x0001) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11AF[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         ActivityIdSaveSlotNamesMap;                              // 0x00B8(0x0050) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFMissionSystem
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UFNAFMissionSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_YDHU[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNewActiveMissionAdded;                                 // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActiveMissionRemoved;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActiveMissionUpdated;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionCompleted;                                      // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UDataTable* MissionDataTable;                                        // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable* MissionTaskDataTable;                                    // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MMUS[0x60];                                  // 0x0088(0x0060) MISSED OFFSET (PADDING)

	public:
		void SetupNewGame();
		void SetMissionInfoState(const class FName& MissionName, int32_t InfoState);
		void RemoveActiveMission(const class FName& MissionName);
		void NotifyMissionUpdate(const class FName& MissionName);
		bool IsValidMission(const class FName& MissionName);
		bool IsMissionActiveOrCompleted(const class FName& MissionName);
		bool IsInSurvivalMode();
		bool IsCompletedMission(const class FName& MissionName);
		bool IsActiveMission(const class FName& MissionName);
		TArray<struct FFNAFMissionState> GetTrackedMissions();
		class UDataTable* GetTaskTable();
		void GetTaskInfo(const class FName& TaskName, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask);
		void GetTaskByIndex(const class FName& MissionName, int32_t TaskIndex, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask);
		class UDataTable* GetMissionTable();
		void GetMissionState(const class FName& MissionName, struct FFNAFMissionState* OutMissionState, bool* OutValidMission);
		void GetMissionInfo(const class FName& MissionName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission);
		void GetMissionFromTask(const class FName& TaskName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission);
		void GetMissionFromMessage(const class FName& MessageName, class FName* OutMissionName, int32_t* OutMissionStateIndex);
		TArray<class AMissionMarker*> GetMarkersForMission(const class FName& MissionName, int32_t MissionStateIndex);
		TArray<struct FFNAFMissionState> GetCompletedMissions();
		void GetAreaMarkerCounts(TMap<fnaf9_ELevelArea, int32_t>* MapOfCounts);
		TArray<class FName> GetAllMissionNames();
		TArray<class AMissionMarker*> GetAllMissionMarkers();
		TArray<class AMissionMarker*> GetAllCurrentMarkers();
		TArray<struct FFNAFMissionState> GetActiveMissions();
		void CompleteMissionTask(const class FName& MissionName, int32_t TaskIndex);
		void CompleteMission(const class FName& MissionName);
		void BranchMissionStatus(const class FName& MissionName, fnaf9_EMissionStatus* Status);
		void AddActiveMission(const class FName& MissionName);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFPawnTypeProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFNAFPawnTypeProviderInterface : public UInterface
	{
	public:
		fnaf9_EPlayerPawnType GetPlayerPawnType();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFSaveData
	 * Size -> 0x0270 (FullSize[0x0298] - InheritedSize[0x0028])
	 */
	class UFNAFSaveData : public USaveGame
	{
	public:
		struct FFNAFEventSystemData                                EventSystemData;                                         // 0x0028(0x0050) BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic
		struct FFNAFAISaveData                                     AISaveData;                                              // 0x0078(0x0068) BlueprintVisible, SaveGame, NativeAccessSpecifierPublic
		struct FFNAFWorldStateSaveData                             WorldStateData;                                          // 0x00E0(0x0080) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		struct FArcadeSaveData                                     ArcadeSaveData;                                          // 0x0160(0x0030) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFNAFInventorySaveData                              InventorySaveData;                                       // 0x0190(0x0088) Edit, EditConst, SaveGame, NativeAccessSpecifierPublic
		struct FFNAFPowerSaveData                                  FazwatchPowerSaveData;                                   // 0x0218(0x0008) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FFNAFPowerSaveData                                  FreddyPowerSaveData;                                     // 0x0220(0x0008) Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FFNAFMissionState>                           MissionState;                                            // 0x0228(0x0010) Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFreddyUpgradeState                                 FreddyUpgrades;                                          // 0x0238(0x0004) Edit, BlueprintVisible, EditConst, SaveGame, NoDestructor, NativeAccessSpecifierPublic
		struct FLightScenarioManagerData                           LightScenarioManagerData;                                // 0x023C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LUM[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Hour;                                                    // 0x0240(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minute;                                                  // 0x0244(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameIteration;                                           // 0x0248(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalTimePlayedInSeconds;                                // 0x024C(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           RealtimeSaveTime;                                        // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerLocation;                                          // 0x0258(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerRotation;                                          // 0x0264(0x000C) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInPowerStation;                                         // 0x0270(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GG37[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PowerStationID;                                          // 0x0274(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPowerStationSaveInfo>                       PowerStationsVisited;                                    // 0x0278(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActivityId;                                              // 0x0288(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetHourOfCheckpoint(int32_t InHour);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFSaveGameSystem
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class UFNAFSaveGameSystem : public UGameInstanceSubsystem
	{
	public:
		class UFNAFSaveData* SaveDataObject;                                          // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFNAFSaveData* TempSaveDataObject;                                      // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFNAFSaveData* WorldTransitDataObject;                                  // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFNAFMasterData* MasterDataObject;                                        // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T4RC[0x58];                                  // 0x0050(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSaveGameBegin;                                         // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSaveGameComplete;                                      // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadGameComplete;                                      // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         SaveSlotNames_Data;                                      // 0x00D8(0x0050) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		class FString                                              MasterDataSlotName;                                      // 0x0128(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveSlotName;                                            // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UserIndex;                                               // 0x0148(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSavingAllowed;                                        // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertedGamepad;                                        // 0x014D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L6M[0x2];                                   // 0x014E(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetupPIE();
		void SetupNewSurvivalGame();
		void SetupNewGameOnSlot(const class FString& originalSlotName);
		void SetupNewGame();
		void SetIsSavingAllowed(bool IsSavingAllowed);
		void SaveCurrentGame();
		void SaveCheckpoint();
		void SaveArcade();
		void Reset_SaveSlots();
		void Rename_SaveSlot(const class FString& originalSlotName, const class FString& renamedSlotName);
		bool PreviousSaveIsAuto();
		void LoadWorldTransitSave();
		class UFNAFSaveData* LoadSaveSlotData(const class FString& SlotName);
		void LoadCheckpoint();
		void LoadAutoSave();
		void LoadActivitySave(const class FString& InActivityId);
		bool IsSavingAllowed();
		bool HasSaveData();
		bool HasPreviousSave();
		bool HasAutoSave();
		bool HasActivitySave(const class FString& InActivityId);
		int32_t GetGameIteration();
		void Get_SaveSlotNameData(TMap<class FString, class FString>* SaveSlots_Map);
		void FinalizeCheckpoint();
		void DeleteSaveGameByName(const class FString& SlotName);
		void DeleteSavedGame_BySlot(int32_t saveSlotNumber);
		void CreateWorldTransitSave();
		void CreatePotentialCheckpoint();
		void AutoSave();
		void AsyncSaveGame(const class FString& originalSlotName, bool isANewSlot, bool isCurrentSlot, const class FString& Renamed_SaveSlot, class FString* internal_SlotName);
		void AsyncLoadGameLastLoaded();
		void AsyncLoadGame(const class FString& originalSlotName, bool isContinueSelected, class FString* internal_SlotName);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.FNAFSightSystem
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UFNAFSightSystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_0HSJ[0xD8];                                  // 0x0030(0x00D8) MISSED OFFSET (PADDING)

	public:
		void SetSightSystemDisplay(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameClockSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGameClockSettings : public UDeveloperSettings
	{
	public:
		float                                                      TotalGameTimeHours;                                      // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalRealTimeHours;                                      // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickRate;                                                // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEB0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameClockSystem
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UGameClockSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_IO1Z[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameClockStateChange;                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      NormalModeDelegate;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MoonmanLiteDelegate;                                     // 0x0058(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MoonmanIntermediateDelegate;                             // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MoonmanDangerDelegate;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameClockTick;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameClockTimeChanged;                                  // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameClockTickDelta;                                    // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WEE[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (PADDING)

	public:
		void StartNextHour();
		void SetGameTimeEvent(const class FScriptDelegate& Delegate, int32_t Hour, int32_t Minute);
		void SetGameEndEvent(const class FScriptDelegate& Delegate);
		void SetCurrentTime(int32_t Hour, int32_t Minute, bool bPlayDelegates);
		void SetCurrentMinute(int32_t Minute);
		void SetCurrentHour(int32_t Hour);
		void SetClockRunning(bool bRunClock);
		void SetClockRateInMinutesPerHour(int32_t MinutesPerHour);
		void SetClockRate(int32_t TotalRealHours);
		void ResetTimeDelegatesUpTo(int32_t Hour, int32_t Minute);
		void OnNormalModeTriggered();
		void OnMoonmanLiteTriggered();
		void OnMoonmanIntermediateTriggered();
		void OnMoonmanDangerTriggered();
		bool IsClockRunning();
		float GetCurrentTimeInSeconds();
		//void GetCurrentTime(int32_t* Hour, int32_t* Minute);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameTypeCheckComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UGameTypeCheckComponent : public UActorComponent
	{
	public:
		TArray<fnaf9_EFNAFGameType>                                AllowedGameTypes;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameTypeAllowed;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameTypeNotAllowed;                                    // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnNotAllowedGameType();
		void OnAllowedGameType();
		bool IsAllowed();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GameTypeCheckDestroy
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UGameTypeCheckDestroy : public UGameTypeCheckComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.GlobalAIPerception
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AGlobalAIPerception : public AActor
	{
	public:
		unsigned char                                              UnknownData_URU0[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.HideObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHideObjectInterface : public UInterface
	{
	public:
		void StartSearch(class APawn* SearcherPawn);
		void PlayBotSearchSound(class AActor* SearcherActor);
		void OnPlayerLeave();
		void OnPlayerHide(class ACharacter* PlayerCharacter);
		void GetSearchLocation(struct FVector* Location, struct FRotator* Rotation);
		fnaf9_EHideObjectType GetHideType();
		struct FVector GetHideLocation();
		class ACharacter* GetHiddenPlayer();
		void EndSearch();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.InstructionCardRowBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInstructionCardRowBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UTexture2D* STATIC_GetControllerInstructionCard(struct FInstructionCardRow* MyStructRef);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.InventoryConditionalComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UInventoryConditionalComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Q2J6[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RequiredInventoryItem;                                   // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredSecurityLevel;                                   // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresPartyPass;                                       // 0x00D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EPlayerPawnType                                      RequiresPawn;                                            // 0x00D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EPlayerPawnType                                      PawnTypeIgnoresConditions;                               // 0x00D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKD0[0x1];                                   // 0x00D7(0x0001) MISSED OFFSET (PADDING)

	public:
		void SetNewConditions(const class FName& NewRequiredInventoryItem, int32_t NewRequiredSecurityLevel, bool NewRequiresPartyPass);
		void OnMessageCollected(const class FName& ItemName, const struct FFNAFMessageTableStruct& MessageTableStruct);
		void OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryTableStruct);
		void HasMetConditions(bool* OutConditionsMet, fnaf9_EConditionFailReason* OutFailReason);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.ItemCollectListenerComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UItemCollectListenerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnItemCollected;                                         // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAlreadyCollected;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                InventoryItem;                                           // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEventsEnabled;                                          // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M4PZ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetEventsEnabled(bool bEnable);
		void OnItemCollectedHandler(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
		bool GetEventsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LevelStreamViewpoint
	 * Size -> 0x0020 (FullSize[0x0210] - InheritedSize[0x01F0])
	 */
	class ULevelStreamViewpoint : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLevelsLoaded;                                          // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bStreamingEnable;                                        // 0x0200(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStreamOnActivePawn;                               // 0x0201(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3HG[0xE];                                   // 0x0202(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetStreamingEnable(bool bEnable);
		void OnLevelManagerUpdated();
		TArray<class FName> GetStreamingLevelNames();
		bool AnyLevelsLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightingMaterialManager
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class ALightingMaterialManager : public AActor
	{
	public:
		TArray<struct FLightMeshMaterialInfo>                      MeshMaterials;                                           // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnLevelVisible();
		void OnBeginLightScenarioChange();
		void OnActivateSpecialLightingScenerio(const class FString& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightScenarioManager
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class ULightScenarioManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_UP9X[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	public:
		void UnbindOnEndScenarioChange(const class FScriptDelegate& Delegate);
		void UnbindOnBeginScenarioChange(const class FScriptDelegate& Delegate);
		void SetInitialScenario(int32_t Area, fnaf9_ELightingScenario Scenario);
		void OnUnloadFinished();
		void OnTick();
		void OnLoadFinished();
		void OnFadeoutFinished();
		void OnChangeAreaUnloadFinished();
		void OnChangeAreaLoadFinished();
		bool IsChangingScenario();
		void GetLightScenarioAreaFromMap(const class FName& MapName, fnaf9_ELightScenarioArea* OutArea, fnaf9_ELightingScenario* OutScenario);
		class FName GetLevelNameFromAreaScenario(int32_t Area, fnaf9_ELightingScenario Scenario);
		fnaf9_ELightingScenario GetCurrentLightingScenario();
		int32_t GetCurrentArea();
		void EndLoadSequence();
		void ChangeScenario(fnaf9_ELightingScenario NewScenario, bool bUseFade);
		void ChangeArea(int32_t Area);
		void BindOnEndScenarioChange(const class FScriptDelegate& Delegate);
		void BindOnBeginScenarioChange(const class FScriptDelegate& Delegate);
		void BeginLoadSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightScenarioManagerSettings
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class ULightScenarioManagerSettings : public UDeveloperSettings
	{
	public:
		TMap<fnaf9_ELightScenarioArea, struct FLightScenarioAreaInfo> LightScenarioInfo;                                       // 0x0038(0x0050) Edit, Config, NativeAccessSpecifierPublic
		TMap<class FName, struct FLightScenarioAreaMapInfo>        LightScenarioMap;                                        // 0x0088(0x0050) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.LightStreamingVolume
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class ALightStreamingVolume : public AVolume
	{
	public:
		int32_t                                                    LightScenarioArea;                                       // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5I0[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.Localization
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocalization : public UBlueprintFunctionLibrary
	{
	public:
		fnaf9_ELocalizationCulture STATIC_GetLocalizationCulture();
		void STATIC_ChangeLocalizationCulture(fnaf9_ELocalizationCulture Culture);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MissionDisplayQueueLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMissionDisplayQueueLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PushMissionUpdate(fnaf9_EMissionUpdateType UpdateType, const class FName& MissionName, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionState& MissionState);
		void STATIC_HasMissionUpdateInQueue(fnaf9_EMissionInQueue* MissionInQueue);
		struct FMissionDisplayUpdateInfo STATIC_GetNextMissionUpdate();
		void STATIC_ClearMissionUpdateQueue();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MissionMarker
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class AMissionMarker : public AActor
	{
	public:
		class FName                                                MissionName;                                             // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MissionStateIndex;                                       // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AHKH[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (PADDING)

	public:
		int32_t GetStateIndex();
		class FName GetMissionName();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MissionStateCondition
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UMissionStateCondition : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SWZD[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMissionConditionMet;                                   // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionConditionAlreadyMet;                            // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionConditionUnMet;                                 // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                MissionName;                                             // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EMissionStatus                                       MissionStatus;                                           // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WSP[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinMissionState;                                         // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMissionState;                                         // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQP3[0x14];                                  // 0x00FC(0x0014) MISSED OFFSET (PADDING)

	public:
		void OnMissionUpdated(const class FName& InMissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo);
		bool HasMetConditions();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MoonmanManagementSystem
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UMoonmanManagementSystem : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnMMRegisterSpawn;                                       // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMMUnregisterSpawn;                                     // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3HD[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnRegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint);
		void UnpauseMoonmanManager();
		void StartMoonmanLiteManager();
		void StartMoonmanDangerManager();
		void RegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint);
		void PauseMoonmanManager();
		void OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PrevState);
		TArray<class AMoonmanSpawnPoint*> GetAllMMSpawnPointsFor(fnaf9_EMMAnimCategory MMAnimation);
		TArray<class AMoonmanSpawnPoint*> GetAllMMSpawnPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.MoonmanSpawnPoint
	 * Size -> 0x0070 (FullSize[0x02C0] - InheritedSize[0x0250])
	 */
	class AMoonmanSpawnPoint : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_9Q57[0x10];                                  // 0x0250(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent* BillboardComponent;                                      // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualSourceComponent* VisualSource;                                            // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMMDetected;                                            // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       b_CanSpawn;                                              // 0x0280(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		fnaf9_EMMAnimCategory                                      MMAnimCategory;                                          // 0x0281(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LZVU[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               MMAnimSeq_Array;                                         // 0x0288(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldFollowPlayer;                                     // 0x0298(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FKMF[0x2];                                   // 0x0299(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsStationary;                                           // 0x029B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAnimLoop;                                               // 0x029C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAimHeadAtPlayer;                                        // 0x029D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanPopUp;                                               // 0x029E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsSingleUse;                                            // 0x029F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HIUG[0x8];                                   // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATriggerBox*>                                 MMColliderActors;                                        // 0x02A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      probabilityOfSpawn;                                      // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      originalProbabilityOfSpawn;                              // 0x02BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSpawnProbability(float tempProbability);
		void SetShouldFollowPlayer(bool In);
		void SetMMAnimCategory(fnaf9_EMMAnimCategory In);
		void SetIsTriggered(bool isTriggered);
		void SetIsStationary(bool In);
		void SetIsSpawned(bool IsSpawned);
		void SetIsSingleUse(bool In);
		void SetIsMMDetected(bool IsSkeletonDetected);
		void SetIsAnimLoop(bool In);
		void SetHasSpawnedOnce(bool HasSpawnedOnce);
		void SetHasLookedOnce(bool HasLookedOnce);
		void SetCanSpawn(bool canSpawn);
		void SetCanPopUp(bool In);
		void SetAimHeadAtPlayer(bool In);
		void OnSetAIDisplay(bool enable);
		float GetSpawnProbability();
		float GetOriginalProbability();
		TArray<class UAnimSequence*> GetMMAnimSeq_Array();
		fnaf9_EMMAnimCategory GetMMAnimCategory();
		bool GetIsTriggered();
		bool GetIsStationary();
		bool GetIsSpawned();
		bool GetIsSingleUse();
		bool GetIsMMDetected();
		bool GetIsFollowPlayerTrue();
		bool GetIsAnimLoop();
		bool GetHasSpawnedOnce();
		bool GetHasLookedOnce();
		bool GetCanSpawn();
		bool GetCanPopUp();
		bool GetAimHeadAtPlayer();
		void DetectTheSpawnPoint(class AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PatrollerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPatrollerInterface : public UInterface
	{
	public:
		void SetPatrolPath();
		void SetCurrentPatrolPointIndex(int32_t PatrolPointIndex);
		void GetPatrolPath();
		int32_t GetCurrentPatrolPointIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.PlayerTriggerWithConditionComps
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class APlayerTriggerWithConditionComps : public APlayerTrigger
	{
	public:
		fnaf9_EConditionCheckType                                  ConditionCheck;                                          // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXQ9[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.RichTextControlButtonDecorator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URichTextControlButtonDecorator : public URichTextBlockDecorator
	{
	public:
		class UDataTable* ButtonSet;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SaveHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USaveHandlerInterface : public UInterface
	{
	public:
		void PostSaveGame();
		void PostGameLoad();
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SecurityCamera
	 * Size -> 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
	 */
	class ASecurityCamera : public AActor
	{
	public:
		class USceneComponent* CameraPivot;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USightComponent* PlayerDetector;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent* PlayerControlledPivot;                                   // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USightComponent* EnemyDetector;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CameraInventoryName;                                     // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FazwatchAccessible;                                      // 0x0250(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerDetectorStartsOn;                                 // 0x0251(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnemyDetectorStartsOn;                                  // 0x0252(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerDetected;                                         // 0x0253(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APP6[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CameraName;                                              // 0x0258(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      PanMin;                                                  // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PanMax;                                                  // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltMin;                                                 // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltMax;                                                 // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRHK[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopOfficeMode();
		void StartOfficeMode();
		void SetPlayerDetectorEnabled(bool bEnable);
		void SetEnemeyDetectorEnabled(bool bEnable);
		void OnPlayerDetectorSightChanged(class AActor* UpdatedActor, bool bVisible);
		void OnOfficeModeStarted();
		void OnEnemyDetectorSightChanged(class AActor* UpdatedActor, bool bVisible);
		bool IsCameraUnlocked(bool OnlyShowCurrentMission);
		bool HasDetectedEnemies();
		TArray<class AActor*> GetVisibleEnemies();
		class USceneCaptureComponent2D* GetPlayerSceneCapture();
		class UTextureRenderTarget2D* GetCaptureTarget();
		void CaptureView();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SecurityCameraSystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USecurityCameraSystem : public UWorldSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnCameraAlert;                                           // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraRegistered;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraUnregistered;                                    // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraTriggerAlert;                                    // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCameraTriggerLostAlert;                                // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93XQ[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		void PlayerSpotted(class ASecurityCamera* SecurityCamera);
		TArray<class ASecurityCamera*> GetAllSecurityCameras();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SeekerPatrolPath
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USeekerPatrolPath : public UInterface
	{
	public:
		fnaf9_EFNAFAISpawnType GetSpawnType();
		class FName GetPathName();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SightComponent
	 * Size -> 0x0080 (FullSize[0x0270] - InheritedSize[0x01F0])
	 */
	class USightComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSightChanged;                                          // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      SightAngle;                                              // 0x0200(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartDistance;                                           // 0x0204(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndDistance;                                             // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		fnaf9_ESightType                                           SightType;                                               // 0x020C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S5EK[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AspectRatio;                                             // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinYaw;                                                  // 0x0214(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxYaw;                                                  // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinPitch;                                                // 0x021C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPitch;                                                // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ThetaSteps;                                              // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PhiSteps;                                                // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OMI4[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      VisibleActors;                                           // 0x0230(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AMoonmanSpawnPoint*>                          VisibleMMActors;                                         // 0x0240(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSightDetectionEnabled;                                  // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowVisionDebug;                                        // 0x0251(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GMRI[0x6];                                   // 0x0252(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        IncludeTags;                                             // 0x0258(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8D96[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSightType(fnaf9_ESightType InSightType);
		void SetSightParams(float Angle, float MinDistance, float MaxDistance);
		void SetSightEnabled(bool bEnable);
		void SetSightAngle(float Angle);
		void SetIncludeTags(TArray<class FName> InIgnoreTags);
		void SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch);
		void SetEndDistance(float Distance);
		void SetAspectRatio(float Ratio);
		void OnVisualQueryResults(TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources);
		void OnVisibleActorDestroyed(class AActor* DestroyedActor);
		void OnMoonManQueryResults(TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>> MoonManSpawnPoints);
		fnaf9_ESightType IsUsingConeSight();
		bool IsSightEnabled();
		bool IsActorVisible(class AActor* Actor);
		TArray<class AActor*> GetVisibleActors();
		float GetStartDistance();
		float GetSightAngle();
		float GetMinYaw();
		float GetMinPitch();
		float GetMaxYaw();
		float GetMaxPitch();
		TArray<class FName> GetIncludeTags();
		void GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch);
		float GetEndDistance();
		float GetAspectRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SplineFollowMovementComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class USplineFollowMovementComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFinishedFollowingSpline;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MovementSpeed;                                           // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTYX[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent* SplineToFollow;                                          // 0x00C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOrientToTangent;                                        // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFON[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)

	public:
		void StopFollowingSpline();
		void StartFollowingSpline();
		void SetSplineToFollow(class USplineComponent* Spline);
		void SetDistanceAlongSpline(float Distance);
		bool IsFollowingSpline();
		float GetCurrentDistance();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SplineUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USplineUtils : public UBlueprintFunctionLibrary
	{
	public:
		float STATIC_GetApproxDistanceClosestToWorldLocation(const struct FVector& Pos_WS, class USplineComponent* Spline);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.WorldStateComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UWorldStateComponent : public UActorComponent
	{
	public:
		class FName                                                SaveName;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSaveOnStateChange;                                      // 0x00B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWEN[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetObjectState(bool bEnabled);
		bool HasValidSaveName();
		bool GetObjectState();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.StoreActiveStateOnTrigger
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UStoreActiveStateOnTrigger : public UWorldStateComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPlayerTriggered;                                       // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		fnaf9_EPlayerPawnType                                      PlayerType;                                              // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8UQ7[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnActorTriggered(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.StreamingLevelUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamingLevelUtil : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_LoadStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, bool bEnableVolumesAfterLoad, const struct FLatentActionInfo& LatentInfo);
		TArray<class ALevelStreamingVolume*> STATIC_GetAllStreamingVolumesAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation);
		TArray<class ALevelStreamingVolume*> STATIC_GetAllStreamingVolumes(class UObject* WorldContextObject);
		TArray<class ULevelStreaming*> STATIC_GetAllStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation);
		TArray<class ULevelStreaming*> STATIC_GetAllStreamingLevels(class UObject* WorldContextObject);
		TArray<class ULevel*> STATIC_GetAllLevels(class UObject* WorldContextObject);
		void STATIC_EnableAllStreamingVolumes(class UObject* WorldContextObject, bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.StreamingLoadComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UStreamingLoadComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnLevelStreamingFinished;                                // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bTurnVolumesOnAfterLoad;                                 // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ED3F[0x1F];                                  // 0x00C1(0x001F) MISSED OFFSET (PADDING)

	public:
		void StartAsyncLoadForLocation(const struct FVector& WorldLocation);
		void OnLevelLoaded();
		bool IsStreamingLevels();
		void EnableAllStreamingVolumes(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalDoorConditionManager
	 * Size -> 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
	 */
	class ASurvivalDoorConditionManager : public AActor
	{
	public:
		unsigned char                                              DoorList[0x10];                                          // 0x0228(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    SecurityLevel;                                           // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequiredItem;                                            // 0x023C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVDP[0x14];                                  // 0x0244(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalItemPackage
	 * Size -> 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
	 */
	class ASurvivalItemPackage : public AActor
	{
	public:
		class FName                                                ItemName;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		fnaf9_EItemAreaType                                        ItemArea;                                                // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3CB[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASurvivalItemRandomizer* SurvivalRandomizer;                                      // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y33U[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSetup();
		bool HasCollected();
		void Collect();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalItemRandomizer
	 * Size -> 0x0168 (FullSize[0x0390] - InheritedSize[0x0228])
	 */
	class ASurvivalItemRandomizer : public AItemRandomizer
	{
	public:
		int32_t                                                    PointsPerPink;                                           // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointsPerYellow;                                         // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointsPerGreen;                                          // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointsPerRed;                                            // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointsPerPurple;                                         // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointsPerGold;                                           // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedPink;                                           // 0x0240(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPink;                                               // 0x0244(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedYellow;                                         // 0x0248(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalYellow;                                             // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedGreen;                                          // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalGreen;                                              // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedRed;                                            // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalRed;                                                // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedPurple;                                         // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalPurple;                                             // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollectedGold;                                           // 0x0268(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalGold;                                               // 0x026C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ASurvivalItemPackage*>                        RemainingPackages;                                       // 0x0270(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F34L[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<fnaf9_EItemAreaType, struct FRandomItemAreaInfo>      InfoPerArea;                                             // 0x0288(0x0050) Edit, NativeAccessSpecifierPrivate
		class UClass* SurvivalPackageClass;                                    // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JMNJ[0xB0];                                  // 0x02E0(0x00B0) MISSED OFFSET (PADDING)

	public:
		void RandomizeSurvivalItems(bool bSpawnAllLocations);
		bool HasCollected(class ASurvivalItemPackage* Package);
		void GetYellowScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore);
		void GetRedScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore);
		void GetPurpleScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore);
		void GetPinkScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore);
		TArray<class ASurvivalItemPackage*> GetPackagesSortedByDistance();
		void GetGreenScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore);
		void GetGoldScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.SurvivalRandomItem
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class ASurvivalRandomItem : public ARandomItemGroup
	{
	public:
		fnaf9_EItemAreaType                                        AreaType;                                                // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKFB[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.UpdateMissionComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UUpdateMissionComponent : public UActorComponent
	{
	public:
		class FName                                                MissionName;                                             // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MissionStateIndex;                                       // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldComplete;                                         // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldSave;                                             // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JN2R[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (PADDING)

	public:
		void UpdateMission();
		bool IsMissionFinished();
		bool HasMetCondition();
		class FName GetMissionName();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.VisualSourceComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UVisualSourceComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSourceDetected;                                        // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VisualOffsets;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsVisibilityEnabled;                                    // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DHTR[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets);
		void SetVisualOffset(int32_t PointIndex, const struct FVector& visualOffset);
		void SetSourceVisibility(bool bEnable);
		void RemoveVisualOffset(int32_t PointIndex);
		TArray<struct FVector> GetVisualOffsets();
		TArray<struct FVector> GetVisualLocations();
		bool GetSourceVisibility();
		struct FVector GetDetectedVisualLocation();
		void DetectTheSource(const struct FVector& VSLocation, class AActor* passed_HitActor, bool passed_bVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.WorldStateHandlerComponent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	class UWorldStateHandlerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_E0KN[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnObjectStateChanged;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ObjectStateName;                                         // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConditionMetOnStateSet;                                 // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WS3A[0x1F];                                  // 0x00D1(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetObjectState(bool bEnable);
		void OnObjectStateChangedHandle(const class FName& ObjectName, bool ObjectState);
		void OnObjectStateChangedEvent();
		bool HasValidSaveName();
		bool GetObjectState();
		static UClass* StaticClass();
	};

	/**
	 * Class fnaf9.WorldStateSystem
	 * Size -> 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
	 */
	class UWorldStateSystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_A6J0[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWorldStateChanged;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectStateChanged;                                    // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FFreddyUpgradeState                                 FreddyState;                                             // 0x0058(0x0004) BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FRandomStream                                       SeededRandomStream;                                      // 0x005C(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		fnaf9_EFNAFGameState                                       WorldState;                                              // 0x0064(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H2DR[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActivatedObjects[0x50];                                  // 0x0065(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FFNAFAISaveData                                     AIState;                                                 // 0x00B8(0x0068) Edit, Transient, EditConst, NativeAccessSpecifierPrivate
		struct FArcadeSaveData                                     ArcadeState;                                             // 0x0120(0x0030) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		class FString                                              CurrentMinigameName;                                     // 0x0150(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor* CurrentMinigameActor;                                    // 0x0160(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		fnaf9_ESurvivalDifficulty                                  SurvivalDifficulty;                                      // 0x0168(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2GGH[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentActivityId;                                       // 0x0170(0x0010) Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6B27[0x78];                                  // 0x0180(0x0078) MISSED OFFSET (PADDING)

	public:
		void StartMinigame(const class FString& MinigameName, fnaf9_EFNAFGameState GameState, class AActor* MinigameActor);
		void SetWorldState(fnaf9_EFNAFGameState NewState);
		void SetupNewGame();
		void SetSurvivalMaxDeaths(int32_t MaxDeaths);
		void SetSurvivalDifficulty(fnaf9_ESurvivalDifficulty Difficulty);
		void SetRandomSeed(int32_t Seed);
		void SetPowerStationAvailable(bool bAvailable);
		void SetPlayerInPowerStation(int32_t InPowerStationID);
		void SetPlayerInFreddy(bool bInFreddy);
		void SetPlayerHasUsedHidingSpot();
		void SetFreddySick(bool bIsSick);
		void SetFreddyPatrolPoint(int32_t PatrolPointIndex);
		void SetCurrentActivityId(const class FString& InActivityId);
		void SetCanEnterExitFreddy(bool bCanEnterExit);
		void SetCanCallFreddy(bool bCanCall);
		void SetArcadeState(const struct FArcadeSaveData& InArcadeState);
		void SetAIState(const struct FFNAFAISaveData& InAIState);
		void RemoveActivated(const class FName& ActivatableName);
		bool IsPowerStationAvailable();
		bool IsPlayerInFreddy();
		bool IsFreddySick();
		bool IsActivated(const class FName& ActivatableName);
		bool HasPlayerUsedHidingSpot();
		fnaf9_EFNAFGameState GetWorldState();
		int32_t GetSurvivalMaxDeaths();
		fnaf9_ESurvivalDifficulty GetSurvivalDifficulty();
		void GetSavedPlayerLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
		void GetSavedFreddyLocationAndRotation(bool* OutFreddyInWorld, struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
		int32_t GetRandomSeed();
		void GetPowerStationInfo(bool* OutPlayerInPowerStation, int32_t* OutPowerStationID);
		int32_t GetLivesRemaining();
		class AFNAFBasePlayerCharacter* GetFreddyPawn();
		int32_t GetFreddyPatrolPoint();
		int32_t GetCurrentSpottedCount();
		class AActor* GetCurrentMinigameActor();
		class FString GetCurrentMinigame();
		int32_t GetCurrentDeathCount();
		class FString GetCurrentActivityId();
		struct FArcadeSaveData GetArcadeState();
		struct FFNAFAISaveData GetAIState();
		void EndMinigame();
		void DebugSetPlayerHasUsedHidingSpot(bool HasHid);
		void ClearPlayerInPowerStation();
		void CanStartMinigame(bool* CanStart, fnaf9_ECantStartMinigameReason* reason);
		bool CanEnterExitFreddy();
		bool CanCallFreddy();
		void AddSpotted();
		void AddDeath(int32_t* OutRemainingLives);
		void AddActivated(const class FName& ActivatableName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
