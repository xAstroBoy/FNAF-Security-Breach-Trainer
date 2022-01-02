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
// Classes
//---------------------------------------------------------------------------

// Class fnaf9.AIHiderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIHiderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.AIHiderInterface");
		return ptr;
	}



	void ExitHideMode(class AActor* HideActor);
	void EnterHideMode(class AActor* HideActor);
};

// Class fnaf9.AIManagementSystem
// 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
class UAIManagementSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_J15T[0xC];                                     // 0x0030(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               EnableDebugCloak;                                          // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3FY[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAISpawned;                                               // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BAYI[0x1F0];                                   // 0x0050(0x01F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APawn*>                               CurrentPawnAlertList;                                      // 0x0240(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_113K[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.AIManagementSystem");
		return ptr;
	}



	void UnregisterSeekerPath();
	void UnRegisterAI(class APawn* AIPawn);
	void UnpauseManager();
	void StoreEndoStates();
	void StartManager();
	void SpawnVannyOrVanessa(bool bSpawnVanny, bool* bOutSpawned, const struct FLatentActionInfo& LatentActionInfo);
	void SpawnSpecificAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, fnaf9_EFNAFAISpawnType AIType, bool ForceShattered);
	class APawn* SpawnAIWithTransformAndPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const struct FTransform& SpawnTransform, const struct FName& PathName);
	class APawn* SpawnAITypeWithTransformSafe(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, bool* success, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn);
	class APawn* SpawnAITypeWithTransform(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner);
	class APawn* SpawnAITypeAtLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, bool ForceShattered);
	class APawn* SpawnAIOnPathNearLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& Location, const struct FName& PathName);
	class APawn* SpawnAIOnPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const struct FName& PathName);
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
	void SendVanessaAlert(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert);
	void SendGeneralAlert(const struct FVector& AlertLocation, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert);
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
	void OnPawnEndPlay(class AActor* DestroyedPawn, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnAlertDistancesCollected();
	void OnAIFellOutOfWorld(class APawn* AIPawn);
	bool IsWorldSpawnEnabled();
	bool IsUsingStagedSpawns();
	bool IsSpawningEnabled();
	bool IsRoomOccupied(class ARoomAreaBase* Room);
	bool IsRoomBeingEntered(class ARoomAreaBase* Room);
	bool IsAITeleportEnabled();
	float GetTimeSinceLastEncounter();
	TMap<class APawn*, int> GetRoomDistancesToPlayer();
	class ARoomAreaBase* GetRoomAIPawnIsIn(class APawn* AIPawn);
	class ARoomAreaBase* GetRoomAIPawnIsEntering(class APawn* AIPawn);
	class APawn* GetPawnForType(fnaf9_EFNAFAISpawnType AIType);
	class UClass* GetPawnClassForType(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered);
	void GetPathForAI(fnaf9_EFNAFAISpawnType AIType, const struct FName& PathName);
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
	TArray<class APawn*> GetAllAIInRoomAtMost(int numRooms);
	TArray<class APawn*> GetAllAI();
	TArray<class APawn*> GetAIPawnsWithSightToPlayer();
	TArray<class APawn*> GetAIPawnsEnteringRoom(class ARoomAreaBase* Room);
	TArray<class APawn*> GetAIPawnInRoom(class ARoomAreaBase* Room);
	class AFNAFAISpawnPoint* FindSpawnPointClosestToDistance(float Distance);
	void FindSpawnNotVisibleAtDistance(float Distance, fnaf9_EFNAFAISpawnType SpawnType, class APawn* PawnForNavProperties, TArray<class AFNAFAISpawnPoint*>* OutSpawnPointsResult, TArray<float>* OutDistances, const struct FLatentActionInfo& LatentInfo);
	bool FindRandomPatrolPointOutOfView(fnaf9_EFNAFAISpawnType AIType, struct FVector* OutLocation);
	class AFNAFAISpawnPoint* FindFurthestSpawnPoint();
	class AFNAFAISpawnPoint* FindClosestSpawnPoint();
	void FindClosestPatrolPointOutOfView(class APawn* AIPawn, bool* bOutResultValid, struct FVector* OutLocation, const struct FLatentActionInfo& LatentActionInfo, int* OutPointIndex);
	void FindClosestPathPointForAI(class APawn* AIPawn, bool* OutResultValid, int* OutPointIndex, struct FVector* OutLocation, const struct FLatentActionInfo& LatentInfo);
	void ExitedHiding(class APawn* AIPawn);
	void DestroyAllAINotVisible();
	void DestroyAllAIInRoomsAtleast(int RoomDist);
	void DestroyAllAI();
	void ClearExpectedAI();
	void CalculateAllAIDistances(TArray<struct FAIDistanceResult>* DistanceResults, bool* bOutClosestIsValid, int* ClosestIndex, const struct FLatentActionInfo& LatentInfo);
	void ApplySound(float Strength, const struct FVector& WorldLocation);
	void ApplyCollect(const struct FVector& WorldLocation);
	bool AnyPawnInPlayerRoom();
	void AISpottedPlayer(class APawn* AIPawn);
	void AILostSightOfPlayer(class APawn* AIPawn);
	void AdjustVannyMeter(float Amount);
	void AddExpectedAI(const struct FAnimatronicExpectedData& AIType);
};

// Class fnaf9.PathPointProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPathPointProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.PathPointProvider");
		return ptr;
	}



	void SetPointType(int PointIndex, int PointType);
	void SetPointLocation(int PointIndex, const struct FVector& Location);
	void RemovePointConnection(int PointIndex, int PointToDisconnectIndex);
	void RemovePoint(int PointIndex);
	int GetPointType(int PointIndex);
	TArray<int> GetPointsConnectedTo(int PointIndex);
	struct FVector GetPointLocation(int PointIndex);
	struct FLinearColor GetPointColor(int PointIndex);
	int GetNumberOfPathPoints();
	TArray<struct FText> GetAvailablePointTypes();
	void AddPointConnection(int PointIndex, int PointToConnectIndex);
	int AddPoint(const struct FVector& Location);
};

// Class fnaf9.AIPathComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UAIPathComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.AIPathComponent");
		return ptr;
	}



};

// Class fnaf9.AISpawnPointComponent
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class UAISpawnPointComponent : public UArrowComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.AISpawnPointComponent");
		return ptr;
	}



};

// Class fnaf9.PlayerTrigger
// 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
class APlayerTrigger : public AActor
{
public:
	unsigned char                                      UnknownData_EJRH[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerTriggered;                                         // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UBoxComponent*                               TriggerComponent;                                          // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseContinuousTrigger;                                     // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JIK1[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SaveName;                                                  // 0x024C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveOnTrigger;                                            // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SS0Y[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<fnaf9_EFNAFGameType>                        ValidGameTypes;                                            // 0x0258(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixCollision;                                             // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnActorOverlap;                                    // 0x0269(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45QU[0x6];                                     // 0x026A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.PlayerTrigger");
		return ptr;
	}



	void SetTriggerActive(bool bActive);
	void SaveActivated();
	void OnWorldObjectStateChanged(const struct FName& ObjectName, bool ObjectState);
	void OnTriggerStay();
	void OnTriggered();
	bool IsTriggerStateSet();
	bool IsTriggerActive();
	void ForceTrigger();
	bool CanTrigger();
};

// Class fnaf9.AISpawnTrigger
// 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
class AAISpawnTrigger : public APlayerTrigger
{
public:
	struct FScriptMulticastDelegate                    OnAISpawnedDelegate;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAISpawnedFailureDelegate;                                // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               SpawnAnyCharacter;                                         // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ForceShattered;                                            // 0x0291(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RFQW[0x6];                                     // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<fnaf9_EFNAFAISpawnType>                     SpawnCharacters;                                           // 0x0298(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UArrowComponent*                             SpawnLocation;                                             // 0x02A8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.AISpawnTrigger");
		return ptr;
	}



	void OnAISpawnedFailure(class APawn* SpawnedPawn);
	void OnAISpawned(class APawn* SpawnedPawn);
};

// Class fnaf9.AISystemSettings
// 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
class UAISystemSettings : public UDeveloperSettings
{
public:
	TMap<fnaf9_EFNAFAISpawnType, struct FFNAFAISettingInfo> FNAFAITypeClasses;                                         // 0x0038(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	float                                              MinimumSpawnDistance;                                      // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumSpawnDistance;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnDelayTime;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenSightings;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutOfRangeDistance;                                        // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeleportDistance;                                          // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VannyMeterIncreasePerSecond;                               // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VannyMeterIncreasePerCampSecond;                           // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VannyMeterIncreasePerSoundUnit;                            // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VannyMeterIncreasePerGift;                                 // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VannyMeterLowAppear;                                       // 0x00B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VannyMeterMax;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      VannyMeterPerHourBase;                                     // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.AISystemSettings");
		return ptr;
	}



};

// Class fnaf9.BallPitVolume
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class ABallPitVolume : public AActor
{
public:
	class UBoxComponent*                               Volume;                                                    // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Balls;                                                     // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.BallPitVolume");
		return ptr;
	}



};

// Class fnaf9.CameraHelperFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCameraHelperFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.CameraHelperFunctions");
		return ptr;
	}



	bool STATIC_IsLocationInCameraView(class UObject* WorldContextObject, const struct FVector& Location, fnaf9_ECameraAngleFlags CameraAngles, float* OutHorizontalAngle, float* OutVerticalAngle);
	void STATIC_GetLocationAnglesFromCamera(class UObject* WorldContextObject, const struct FVector& Location, float* OutHorizontalAngle, float* OutVerticalAngle);
};

// Class fnaf9.CameraTrigger
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCameraTrigger : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.CameraTrigger");
		return ptr;
	}



	fnaf9_EAlertType GetAlertType();
};

// Class fnaf9.ConditionalCheckComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UConditionalCheckComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_3FD1[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnConditionalCheckUpdated;                                 // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	fnaf9_EConditionCheckType                          ConditionCheck;                                            // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EIJC[0x17];                                    // 0x00C9(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.ConditionalCheckComponent");
		return ptr;
	}



	void OnConditionUpdated();
};

// Class fnaf9.ConditionCheckInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UConditionCheckInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.ConditionCheckInterface");
		return ptr;
	}



	void UnbindConditionUpdatedDelegate(const struct FScriptDelegate& OnConditionResultUpdated);
	bool ConditionsMet();
	void BindConditionUpdatedDelegate(const struct FScriptDelegate& OnConditionResultUpdated);
};

// Class fnaf9.ConditionFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UConditionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.ConditionFunctionLibrary");
		return ptr;
	}



	void STATIC_RemoveConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const struct FScriptDelegate& Delegate);
	void STATIC_HasMetComponentConditionsWithGet(class AActor* ActorToCheck, bool* bOutConditionsMet);
	bool STATIC_HasMetComponentConditions(class AActor* ActorToCheck);
	bool STATIC_HasMetAnyComponentConditions(class AActor* ActorToCheck);
	void STATIC_CallConditionUpdate(const struct FConditionResultDelegates& DelegateHandle);
	void STATIC_AddConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const struct FScriptDelegate& Delegate);
};

// Class fnaf9.DoorComponent
// 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
class UDoorComponent : public UActorComponent
{
public:
	struct FDoorEntryRequirements                      NormalDoorEntryRequirements;                               // 0x00B0(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDoorEntryRequirements                      SurvivalDoorEntryRequirements;                             // 0x00E8(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsOpen;                                                   // 0x0120(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L11G[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPawnEnteredDoor;                                         // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPawnExitedDoor;                                          // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInitialOpen;                                             // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpenDoor;                                                // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCloseDoor;                                               // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerLockStateChanged;                                  // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAILockStateChanged;                                      // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bIsLockedForAI;                                            // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsLockedForPlayer;                                        // 0x0199(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LJD3[0x6];                                     // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class APawn*, struct FPawnInDoorwayInfo>      PawnsInDoorway;                                            // 0x01A0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         PlayerBlocker;                                             // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SHFN[0x8];                                     // 0x01F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.DoorComponent");
		return ptr;
	}



	void SetSecurityLevel(int NewSecurityLevel);
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
};

// Class fnaf9.DoorInteractor
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDoorInteractor : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.DoorInteractor");
		return ptr;
	}



	void OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent);
	void OnEndOverlapDoor();
	bool DoorEntryNotAllowed(class UDoorComponent* DoorComponent);
};

// Class fnaf9.EnvQueryTest_ObjectSweep
// 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
class UEnvQueryTest_ObjectSweep : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                   // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereRadius;                                              // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AC5H[0x4];                                     // 0x0204(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.EnvQueryTest_ObjectSweep");
		return ptr;
	}



};

// Class fnaf9.fnaf9GameModeBase
// 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
class Afnaf9GameModeBase : public AGameModeBase
{
public:
	struct FScriptMulticastDelegate                    OnSetAIDisplay;                                            // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2X4[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.fnaf9GameModeBase");
		return ptr;
	}



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
};

// Class fnaf9.FNAFAchievementUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFNAFAchievementUtils : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFAchievementUtils");
		return ptr;
	}



	TArray<struct FName> STATIC_GetAllAchievements();
};

// Class fnaf9.FNAFAISpawnPoint
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class AFNAFAISpawnPoint : public ANavigationObjectBase
{
public:
	bool                                               bUseType;                                                  // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	fnaf9_EFNAFAISpawnType                             AIType;                                                    // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsStagedPoint;                                            // 0x0252(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y9XN[0x5];                                     // 0x0253(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFAISpawnPoint");
		return ptr;
	}



	fnaf9_EFNAFAISpawnType GetAIType();
};

// Class fnaf9.FNAFBaseCharacter
// 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
class AFNAFBaseCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_08Z6[0x8];                                     // 0x04B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFBaseCharacter");
		return ptr;
	}



	void OnFellOutOfWorld();
};

// Class fnaf9.FNAFBaseAICharacter
// 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
class AFNAFBaseAICharacter : public AFNAFBaseCharacter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFBaseAICharacter");
		return ptr;
	}



};

// Class fnaf9.FNAFBasePlayerCharacter
// 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
class AFNAFBasePlayerCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_RZOG[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	fnaf9_EPlayerPawnType                              PawnType;                                                  // 0x04C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7NPJ[0xF];                                     // 0x04C1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFBasePlayerCharacter");
		return ptr;
	}



	void TeleportPlayerWithCameraLocation(const struct FVector& CameraWorldLocation, float Yaw);
	void TeleportPlayer(const struct FVector& WorldLocation, float Yaw);
	void OnKillZLevelsLoaded();
	fnaf9_EPlayerPawnType GetPlayerPawnType();
	void GetLastSavedLocationAndRotation(struct FVector* LastSavedLocation, struct FRotator* LastSavedRotation);
};

// Class fnaf9.FNAFBasePlayerController
// 0x0048 (FullSize[0x05C0] - InheritedSize[0x0578])
class AFNAFBasePlayerController : public APlayerController
{
public:
	struct FScriptMulticastDelegate                    OnControlTypeChanged;                                      // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WJTO[0x38];                                    // 0x0588(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFBasePlayerController");
		return ptr;
	}



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
};

// Class fnaf9.FNAFCheatManager
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UFNAFCheatManager : public UCheatManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFCheatManager");
		return ptr;
	}



	void UpgradeFreddy(fnaf9_EFreddyUpgradeType Type);
	void ToggleDebugCloaking();
	void SetDebugCloaking(bool Value);
	bool GetDebugCloaking();
	void ApplyQualitySettings(int VisualQualityLevel, int RayTraceQualityLevel);
};

// Class fnaf9.FNAFEventObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFNAFEventObject : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFEventObject");
		return ptr;
	}



	void TriggerEvent();
	bool IsEventFinished();
	bool CanPlayEvent();
};

// Class fnaf9.FNAFEventSystem
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class UFNAFEventSystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_3Y27[0x98];                                    // 0x0030(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFEventSystem");
		return ptr;
	}



	void UnpauseEventSystem();
	void StoreEventTriggered(const struct FName& EventTag);
	void StopEventTimer();
	void StartEventTimer();
	void SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents);
	void SetEventActorWeight(float NewWeight);
	void SetCurrentAudioComponent(class UAudioComponent* EventSoundCue);
	void PauseEventSystem();
	void OnAudioFinished();
	bool HasEventBeenTriggered(const struct FName& EventTag);
};

// Class fnaf9.FNAFGameInstanceBase
// 0x0018 (FullSize[0x01B0] - InheritedSize[0x0198])
class UFNAFGameInstanceBase : public UGameInstance
{
public:
	unsigned char                                      UnknownData_TJ52[0x18];                                    // 0x0198(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFGameInstanceBase");
		return ptr;
	}



	void StartGamePlay(fnaf9_EFNAFGameType GameType);
	void SetVisualQualityLevel(int Level);
	void SetSplashFinished(bool bFinished);
	void SetRayTraceQualityLevel(int Level);
	void ProcessActivityIntent();
	void OnGameActivityLoadComplete();
	void OnApplicationReactivated();
	void OnApplicationDeactivated();
	void LogGameClockDelegates();
	bool IsNormalPlay();
	bool IsLoadingActivity();
	bool IsFromTitle();
	bool HasSplashFinished();
	int GetVisualQualityLevel();
	int GetRayTraceQualityLevel();
	bool GetIsShippingConfig();
	float GetGPUBenchmarkResult();
	fnaf9_EFNAFGameType GetCurrentGameType();
	float GetCPUBenchmarkResult();
	struct FString GetAllLoadedLevelsString();
};

// Class fnaf9.FNAFGameUserSettings
// 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
class UFNAFGameUserSettings : public UGameUserSettings
{
public:
	int                                                VisualQualityLevel;                                        // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTraceQualityLevel;                                      // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFGameUserSettings");
		return ptr;
	}



};

// Class fnaf9.FNAFGeneralEditorSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UFNAFGeneralEditorSettings : public UDeveloperSettings
{
public:
	bool                                               bSurvivalMode;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPIEUseIntro;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSurvivalAllLocations;                                     // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0PQ[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinutesPerHour;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SurvivalSeed;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ4S[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFGeneralEditorSettings");
		return ptr;
	}



};

// Class fnaf9.FNAFInputDeviceSystem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFNAFInputDeviceSystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnInputDeviceTypeChanged;                                  // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFInputDeviceSystem");
		return ptr;
	}



	fnaf9_ESWGInputDeviceType GetCurrentInputDevice();
};

// Class fnaf9.FNAFInputSystemDeveloperSettings
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UFNAFInputSystemDeveloperSettings : public UDeveloperSettings
{
public:
	bool                                               bOverrideInputDevice;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_ESWGInputDeviceType                          OverrideInputDevice;                                       // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S263[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFInputSystemDeveloperSettings");
		return ptr;
	}



};

// Class fnaf9.FNAFInventorySystem
// 0x0128 (FullSize[0x0158] - InheritedSize[0x0030])
class UFNAFInventorySystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_GVW4[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInventoryItemAdded;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInventoryItemRemoved;                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMessageAdded;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSecurityLevelUpdated;                                    // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyLevelUpdated;                                       // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyPassUsed;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62AZ[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  InventoryDataTable;                                        // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  MessageDataTable;                                          // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FazwatchPowerLevel;                                        // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FazwatchMaxPowerLevel;                                     // 0x00B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FreddyPowerLevel;                                          // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FreddyMaxPowerLevel;                                       // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecurityLevel;                                             // 0x00C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedPartyPassCount;                                   // 0x00C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UsedPartyPassCount;                                        // 0x00C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumAvailableFlash;                                         // 0x00CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnlimitedFazwatchPower;                                   // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnlimitedStamina;                                         // 0x00D1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MW5Q[0x6];                                     // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TapesListenedTo[0x50];                                     // 0x00D2(0x0050) UNKNOWN PROPERTY: SetProperty
	int                                                NumDishesBroken;                                           // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RCO7[0x2C];                                    // 0x012C(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFInventorySystem");
		return ptr;
	}



	bool UsePartyPass();
	void UseFlash(bool* bOutFlashUsed);
	void SetupNewGame();
	void SetSecurityLevel(int NewSecurityLevel);
	void SetPowerLevel_Freddy(int InPowerLevel);
	void SetPowerLevel_Fazwatch(int InPowerLevel);
	void SetPartyLevel(int NewPartyLevel);
	void SetMessageViewed(const struct FName& Message);
	void SetMaxPowerLevel_Freddy(int NewMax);
	void SetMaxPowerLevel_Fazwatch(int NewMax);
	void SetItemViewed(const struct FName& Item);
	void SetFlashlightStationID(int StationID);
	void ResetFreddyPower();
	void ResetFlashlightPower();
	void ResetFlashes();
	void RemoveMessage(const struct FName& Message);
	void RemoveItem(const struct FName& Item);
	void RemoveEverything();
	bool IsVIPItem(const struct FName& Item);
	bool IsMessageValid(const struct FName& Message);
	bool IsItemValid(const struct FName& Item);
	bool HasSecurityClearance(int InSecurityLevel);
	bool HasMessageBeenViewed(const struct FName& ItemOrMessage);
	bool HasMessage(const struct FName& SearchMessage);
	bool HasItemBeenViewed(const struct FName& ItemOrMessage);
	bool HasItem(const struct FName& searchItem);
	bool HasEnoughPower_Freddy(int PowerRequired);
	bool HasEnoughPower_Fazwatch(int PowerRequired);
	bool HasAvailablePartyPass();
	void GetTapesListenedTo();
	float GetStaminaUpgradeMultiplier();
	int GetNumberOfUnreadMessages();
	void GetMessageInfo(const struct FName& MessageName, struct FFNAFMessageTableStruct* OutMessageInfo, bool* OutFound);
	int GetMaxFlashes();
	void GetItemInfo(const struct FName& ItemName, struct FFNAFInventoryTableStruct* OutItemInfo, bool* OutFound);
	float GetFreddyUpgradeMutliplier();
	int GetFreddyMaxPower();
	float GetFlashlightUpgradMultiplier();
	int GetFlashlightStationID();
	int GetFlashlightMaxPower();
	TArray<struct FName> GetCollectedPartyPasses();
	TArray<struct FName> GetAllSurvivalItemsOfType(fnaf9_EInventoryItemSurvivalCategory SurvivalCategory);
	void ClearFlashlightStationID();
	bool CanUseFlashBeacon();
	void AwardMessage(const struct FName& Message, bool bNotify);
	void AwardItem(const struct FName& Item, bool bNotify);
	bool AdjustPower_Freddy(int ChangeAmount);
	bool AdjustPower_Fazwatch(int ChangeAmount);
	void AddTapeListenedTo(const struct FName& InTapeListenedTo);
	void AddEverything();
	int AddBrokenPlate();
};

// Class fnaf9.FNAFLevelManager
// 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
class UFNAFLevelManager : public UWorldSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnlevelsUpdated;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NLSD[0x180];                                   // 0x0040(0x0180) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFLevelManager");
		return ptr;
	}



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
	TArray<struct FName> GetLevelNamesForComponent(class USceneComponent* SceneComponent);
	void AddLevelToLoad(class ULevelStreaming* LevelToLoad);
	void AddLevelsFromStreamingSourceToLoad(class USceneComponent* StreamingSource);
	void AddLevelArrayToLoad(TArray<class ULevelStreaming*> LevelsToLoad);
};

// Class fnaf9.FNAFManagedAI
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFNAFManagedAI : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFManagedAI");
		return ptr;
	}



	void TeleportAI(const struct FVector& Location);
	void StartMoveTo(const struct FVector& Location);
	void SendVanessaAlert(class APawn* VanessaPawn);
	void SendPositionalAlert(const struct FVector& Location);
	bool IsShatteredVersion();
	fnaf9_EFNAFAISpawnType GetManagedAIType();
	struct FName GetCurrentPathName();
	void ForceTrackToPlayer();
	void EndTrackToPlayer();
	bool CanReceiveAlert();
};

// Class fnaf9.FNAFMasterData
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UFNAFMasterData : public USaveGame
{
public:
	int                                                newSaveSlotNumber;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NF39[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     lastSavedSlotName;                                         // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     lastLoadedSlotName;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivitySaveSlot;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               SaveGameSlotNames_Map;                                     // 0x0060(0x0050) (Edit, EditConst, SaveGame, NativeAccessSpecifierPublic)
	bool                                               InvertedGamepad;                                           // 0x00B0(0x0001) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLastSaveWasAuto;                                          // 0x00B1(0x0001) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0LE[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               ActivityIdSaveSlotNamesMap;                                // 0x00B8(0x0050) (Edit, EditConst, SaveGame, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFMasterData");
		return ptr;
	}



};

// Class fnaf9.FNAFMissionSystem
// 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
class UFNAFMissionSystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_EV0V[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNewActiveMissionAdded;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveMissionRemoved;                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActiveMissionUpdated;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMissionCompleted;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                                  MissionDataTable;                                          // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  MissionTaskDataTable;                                      // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6IB7[0x60];                                    // 0x0088(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFMissionSystem");
		return ptr;
	}



	void SetupNewGame();
	void SetMissionInfoState(const struct FName& MissionName, int InfoState);
	void RemoveActiveMission(const struct FName& MissionName);
	void NotifyMissionUpdate(const struct FName& MissionName);
	bool IsValidMission(const struct FName& MissionName);
	bool IsMissionActiveOrCompleted(const struct FName& MissionName);
	bool IsInSurvivalMode();
	bool IsCompletedMission(const struct FName& MissionName);
	bool IsActiveMission(const struct FName& MissionName);
	TArray<struct FFNAFMissionState> GetTrackedMissions();
	class UDataTable* GetTaskTable();
	void GetTaskInfo(const struct FName& TaskName, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask);
	void GetTaskByIndex(const struct FName& MissionName, int TaskIndex, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask);
	class UDataTable* GetMissionTable();
	void GetMissionState(const struct FName& MissionName, struct FFNAFMissionState* OutMissionState, bool* OutValidMission);
	void GetMissionInfo(const struct FName& MissionName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission);
	void GetMissionFromTask(const struct FName& TaskName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission);
	void GetMissionFromMessage(const struct FName& MessageName, struct FName* OutMissionName, int* OutMissionStateIndex);
	TArray<class AMissionMarker*> GetMarkersForMission(const struct FName& MissionName, int MissionStateIndex);
	TArray<struct FFNAFMissionState> GetCompletedMissions();
	void GetAreaMarkerCounts(TMap<fnaf9_ELevelArea, int>* MapOfCounts);
	TArray<struct FName> GetAllMissionNames();
	TArray<class AMissionMarker*> GetAllMissionMarkers();
	TArray<class AMissionMarker*> GetAllCurrentMarkers();
	TArray<struct FFNAFMissionState> GetActiveMissions();
	void CompleteMissionTask(const struct FName& MissionName, int TaskIndex);
	void CompleteMission(const struct FName& MissionName);
	void BranchMissionStatus(const struct FName& MissionName, fnaf9_EMissionStatus* Status);
	void AddActiveMission(const struct FName& MissionName);
};

// Class fnaf9.FNAFPawnTypeProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFNAFPawnTypeProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFPawnTypeProviderInterface");
		return ptr;
	}



	fnaf9_EPlayerPawnType GetPlayerPawnType();
};

// Class fnaf9.FNAFSaveData
// 0x0270 (FullSize[0x0298] - InheritedSize[0x0028])
class UFNAFSaveData : public USaveGame
{
public:
	struct FFNAFEventSystemData                        EventSystemData;                                           // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FFNAFAISaveData                             AISaveData;                                                // 0x0078(0x0068) (BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	struct FFNAFWorldStateSaveData                     WorldStateData;                                            // 0x00E0(0x0080) (Edit, EditConst, SaveGame, NativeAccessSpecifierPublic)
	struct FArcadeSaveData                             ArcadeSaveData;                                            // 0x0160(0x0030) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFNAFInventorySaveData                      InventorySaveData;                                         // 0x0190(0x0088) (Edit, EditConst, SaveGame, NativeAccessSpecifierPublic)
	struct FFNAFPowerSaveData                          FazwatchPowerSaveData;                                     // 0x0218(0x0008) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFNAFPowerSaveData                          FreddyPowerSaveData;                                       // 0x0220(0x0008) (Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FFNAFMissionState>                   MissionState;                                              // 0x0228(0x0010) (Edit, ZeroConstructor, EditConst, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFreddyUpgradeState                         FreddyUpgrades;                                            // 0x0238(0x0004) (Edit, BlueprintVisible, EditConst, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	struct FLightScenarioManagerData                   LightScenarioManagerData;                                  // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J1BK[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Hour;                                                      // 0x0240(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x0244(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameIteration;                                             // 0x0248(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalTimePlayedInSeconds;                                  // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   RealtimeSaveTime;                                          // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlayerLocation;                                            // 0x0258(0x000C) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PlayerRotation;                                            // 0x0264(0x000C) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bInPowerStation;                                           // 0x0270(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R3AL[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PowerStationID;                                            // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPowerStationSaveInfo>               PowerStationsVisited;                                      // 0x0278(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivityId;                                                // 0x0288(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFSaveData");
		return ptr;
	}



	void SetHourOfCheckpoint(int InHour);
};

// Class fnaf9.FNAFSaveGameSystem
// 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
class UFNAFSaveGameSystem : public UGameInstanceSubsystem
{
public:
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFNAFSaveData*                               TempSaveDataObject;                                        // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFNAFSaveData*                               WorldTransitDataObject;                                    // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFNAFMasterData*                             MasterDataObject;                                          // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AT4Y[0x58];                                    // 0x0050(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSaveGameBegin;                                           // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSaveGameComplete;                                        // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadGameComplete;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               SaveSlotNames_Data;                                        // 0x00D8(0x0050) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FString                                     MasterDataSlotName;                                        // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SaveSlotName;                                              // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           UserIndex;                                                 // 0x0148(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSavingAllowed;                                          // 0x014C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertedGamepad;                                          // 0x014D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACK0[0x2];                                     // 0x014E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFSaveGameSystem");
		return ptr;
	}



	void SetupPIE();
	void SetupNewSurvivalGame();
	void SetupNewGameOnSlot(const struct FString& originalSlotName);
	void SetupNewGame();
	void SetIsSavingAllowed(bool IsSavingAllowed);
	void SaveCurrentGame();
	void SaveCheckpoint();
	void SaveArcade();
	void Reset_SaveSlots();
	void Rename_SaveSlot(const struct FString& originalSlotName, const struct FString& renamedSlotName);
	bool PreviousSaveIsAuto();
	void LoadWorldTransitSave();
	class UFNAFSaveData* LoadSaveSlotData(const struct FString& SlotName);
	void LoadCheckpoint();
	void LoadAutoSave();
	void LoadActivitySave(const struct FString& InActivityId);
	bool IsSavingAllowed();
	bool HasSaveData();
	bool HasPreviousSave();
	bool HasAutoSave();
	bool HasActivitySave(const struct FString& InActivityId);
	int GetGameIteration();
	void Get_SaveSlotNameData(TMap<struct FString, struct FString>* SaveSlots_Map);
	void FinalizeCheckpoint();
	void DeleteSaveGameByName(const struct FString& SlotName);
	void DeleteSavedGame_BySlot(int saveSlotNumber);
	void CreateWorldTransitSave();
	void CreatePotentialCheckpoint();
	void AutoSave();
	void AsyncSaveGame(const struct FString& originalSlotName, bool isANewSlot, bool isCurrentSlot, const struct FString& Renamed_SaveSlot, struct FString* internal_SlotName);
	void AsyncLoadGameLastLoaded();
	void AsyncLoadGame(const struct FString& originalSlotName, bool isContinueSelected, struct FString* internal_SlotName);
};

// Class fnaf9.FNAFSightSystem
// 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
class UFNAFSightSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_604D[0xD8];                                    // 0x0030(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.FNAFSightSystem");
		return ptr;
	}



	void SetSightSystemDisplay(bool bEnable);
};

// Class fnaf9.GameClockSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UGameClockSettings : public UDeveloperSettings
{
public:
	float                                              TotalGameTimeHours;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalRealTimeHours;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickRate;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1IV7[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.GameClockSettings");
		return ptr;
	}



};

// Class fnaf9.GameClockSystem
// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
class UGameClockSystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_LGV3[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameClockStateChange;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             NormalModeDelegate;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             MoonmanLiteDelegate;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             MoonmanIntermediateDelegate;                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             MoonmanDangerDelegate;                                     // 0x0078(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameClockTick;                                           // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameClockTimeChanged;                                    // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameClockTickDelta;                                      // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E4ZS[0x48];                                    // 0x00B8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.GameClockSystem");
		return ptr;
	}



	void StartNextHour();
	void SetGameTimeEvent(const struct FScriptDelegate& Delegate, int Hour, int Minute);
	void SetGameEndEvent(const struct FScriptDelegate& Delegate);
	void SetCurrentTime(int Hour, int Minute, bool bPlayDelegates);
	void SetCurrentMinute(int Minute);
	void SetCurrentHour(int Hour);
	void SetClockRunning(bool bRunClock);
	void SetClockRateInMinutesPerHour(int MinutesPerHour);
	void SetClockRate(int TotalRealHours);
	void ResetTimeDelegatesUpTo(int Hour, int Minute);
	void OnNormalModeTriggered();
	void OnMoonmanLiteTriggered();
	void OnMoonmanIntermediateTriggered();
	void OnMoonmanDangerTriggered();
	bool IsClockRunning();
	float GetCurrentTimeInSeconds();
	void GetCurrentTime(int* Hour, int* Minute);
};

// Class fnaf9.GameTypeCheckComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UGameTypeCheckComponent : public UActorComponent
{
public:
	TArray<fnaf9_EFNAFGameType>                        AllowedGameTypes;                                          // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameTypeAllowed;                                         // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameTypeNotAllowed;                                      // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.GameTypeCheckComponent");
		return ptr;
	}



	void OnNotAllowedGameType();
	void OnAllowedGameType();
	bool IsAllowed();
};

// Class fnaf9.GameTypeCheckDestroy
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UGameTypeCheckDestroy : public UGameTypeCheckComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.GameTypeCheckDestroy");
		return ptr;
	}



};

// Class fnaf9.GlobalAIPerception
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class AGlobalAIPerception : public AActor
{
public:
	unsigned char                                      UnknownData_TNPC[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.GlobalAIPerception");
		return ptr;
	}



};

// Class fnaf9.HideObjectInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHideObjectInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.HideObjectInterface");
		return ptr;
	}



	void StartSearch(class APawn* SearcherPawn);
	void PlayBotSearchSound(class AActor* SearcherActor);
	void OnPlayerLeave();
	void OnPlayerHide(class ACharacter* PlayerCharacter);
	void GetSearchLocation(struct FVector* Location, struct FRotator* Rotation);
	fnaf9_EHideObjectType GetHideType();
	struct FVector GetHideLocation();
	class ACharacter* GetHiddenPlayer();
	void EndSearch();
};

// Class fnaf9.InstructionCardRowBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInstructionCardRowBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.InstructionCardRowBlueprintFunctionLibrary");
		return ptr;
	}



	class UTexture2D* STATIC_GetControllerInstructionCard(struct FInstructionCardRow* MyStructRef);
};

// Class fnaf9.InventoryConditionalComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UInventoryConditionalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_1DGV[0x18];                                    // 0x00B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RequiredInventoryItem;                                     // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredSecurityLevel;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresPartyPass;                                         // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EPlayerPawnType                              RequiresPawn;                                              // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EPlayerPawnType                              PawnTypeIgnoresConditions;                                 // 0x00D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NSR5[0x1];                                     // 0x00D7(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.InventoryConditionalComponent");
		return ptr;
	}



	void SetNewConditions(const struct FName& NewRequiredInventoryItem, int NewRequiredSecurityLevel, bool NewRequiresPartyPass);
	void OnMessageCollected(const struct FName& ItemName, const struct FFNAFMessageTableStruct& MessageTableStruct);
	void OnItemCollected(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryTableStruct);
	void HasMetConditions(bool* OutConditionsMet, fnaf9_EConditionFailReason* OutFailReason);
};

// Class fnaf9.ItemCollectListenerComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UItemCollectListenerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnItemCollected;                                           // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemAlreadyCollected;                                    // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       InventoryItem;                                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bEventsEnabled;                                            // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_97AB[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.ItemCollectListenerComponent");
		return ptr;
	}



	void SetEventsEnabled(bool bEnable);
	void OnItemCollectedHandler(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo);
	bool GetEventsEnabled();
};

// Class fnaf9.LevelStreamViewpoint
// 0x0020 (FullSize[0x0210] - InheritedSize[0x01F0])
class ULevelStreamViewpoint : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnLevelsLoaded;                                            // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bStreamingEnable;                                          // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableStreamOnActivePawn;                                 // 0x0201(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKQC[0xE];                                     // 0x0202(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.LevelStreamViewpoint");
		return ptr;
	}



	void SetStreamingEnable(bool bEnable);
	void OnLevelManagerUpdated();
	TArray<struct FName> GetStreamingLevelNames();
	bool AnyLevelsLoaded();
};

// Class fnaf9.LightingMaterialManager
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class ALightingMaterialManager : public AActor
{
public:
	TArray<struct FLightMeshMaterialInfo>              MeshMaterials;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.LightingMaterialManager");
		return ptr;
	}



	void OnLevelVisible();
	void OnBeginLightScenarioChange();
	void OnActivateSpecialLightingScenerio(const struct FString& Key);
};

// Class fnaf9.LightScenarioManager
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class ULightScenarioManager : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_CLR1[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.LightScenarioManager");
		return ptr;
	}



	void UnbindOnEndScenarioChange(const struct FScriptDelegate& Delegate);
	void UnbindOnBeginScenarioChange(const struct FScriptDelegate& Delegate);
	void SetInitialScenario(int Area, fnaf9_ELightingScenario Scenario);
	void OnUnloadFinished();
	void OnTick();
	void OnLoadFinished();
	void OnFadeoutFinished();
	void OnChangeAreaUnloadFinished();
	void OnChangeAreaLoadFinished();
	bool IsChangingScenario();
	void GetLightScenarioAreaFromMap(const struct FName& MapName, fnaf9_ELightScenarioArea* OutArea, fnaf9_ELightingScenario* OutScenario);
	struct FName GetLevelNameFromAreaScenario(int Area, fnaf9_ELightingScenario Scenario);
	fnaf9_ELightingScenario GetCurrentLightingScenario();
	int GetCurrentArea();
	void EndLoadSequence();
	void ChangeScenario(fnaf9_ELightingScenario NewScenario, bool bUseFade);
	void ChangeArea(int Area);
	void BindOnEndScenarioChange(const struct FScriptDelegate& Delegate);
	void BindOnBeginScenarioChange(const struct FScriptDelegate& Delegate);
	void BeginLoadSequence();
};

// Class fnaf9.LightScenarioManagerSettings
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class ULightScenarioManagerSettings : public UDeveloperSettings
{
public:
	TMap<fnaf9_ELightScenarioArea, struct FLightScenarioAreaInfo> LightScenarioInfo;                                         // 0x0038(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FLightScenarioAreaMapInfo> LightScenarioMap;                                          // 0x0088(0x0050) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.LightScenarioManagerSettings");
		return ptr;
	}



};

// Class fnaf9.LightStreamingVolume
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class ALightStreamingVolume : public AVolume
{
public:
	int                                                LightScenarioArea;                                         // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTIR[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.LightStreamingVolume");
		return ptr;
	}



};

// Class fnaf9.Localization
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocalization : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.Localization");
		return ptr;
	}



	TEnumAsByte<fnaf9_ELocalizationCulture> STATIC_GetLocalizationCulture();
	void STATIC_ChangeLocalizationCulture(TEnumAsByte<fnaf9_ELocalizationCulture> Culture);
};

// Class fnaf9.MissionDisplayQueueLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMissionDisplayQueueLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.MissionDisplayQueueLibrary");
		return ptr;
	}



	void STATIC_PushMissionUpdate(fnaf9_EMissionUpdateType UpdateType, const struct FName& MissionName, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionState& MissionState);
	void STATIC_HasMissionUpdateInQueue(fnaf9_EMissionInQueue* MissionInQueue);
	struct FMissionDisplayUpdateInfo STATIC_GetNextMissionUpdate();
	void STATIC_ClearMissionUpdateQueue();
};

// Class fnaf9.MissionMarker
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class AMissionMarker : public AActor
{
public:
	struct FName                                       MissionName;                                               // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MissionStateIndex;                                         // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R3D9[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.MissionMarker");
		return ptr;
	}



	int GetStateIndex();
	struct FName GetMissionName();
};

// Class fnaf9.MissionStateCondition
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UMissionStateCondition : public UActorComponent
{
public:
	unsigned char                                      UnknownData_H7QP[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMissionConditionMet;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMissionConditionAlreadyMet;                              // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMissionConditionUnMet;                                   // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       MissionName;                                               // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EMissionStatus                               MissionStatus;                                             // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLAK[0x3];                                     // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinMissionState;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMissionState;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SG6A[0x14];                                    // 0x00FC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.MissionStateCondition");
		return ptr;
	}



	void OnMissionUpdated(const struct FName& InMissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo);
	bool HasMetConditions();
};

// Class fnaf9.MoonmanManagementSystem
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UMoonmanManagementSystem : public UWorldSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnMMRegisterSpawn;                                         // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMMUnregisterSpawn;                                       // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YW4F[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.MoonmanManagementSystem");
		return ptr;
	}



	void UnRegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint);
	void UnpauseMoonmanManager();
	void StartMoonmanLiteManager();
	void StartMoonmanDangerManager();
	void RegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint);
	void PauseMoonmanManager();
	void OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PrevState);
	TArray<class AMoonmanSpawnPoint*> GetAllMMSpawnPointsFor(fnaf9_EMMAnimCategory MMAnimation);
	TArray<class AMoonmanSpawnPoint*> GetAllMMSpawnPoints();
};

// Class fnaf9.MoonmanSpawnPoint
// 0x0070 (FullSize[0x02C0] - InheritedSize[0x0250])
class AMoonmanSpawnPoint : public ANavigationObjectBase
{
public:
	unsigned char                                      UnknownData_WL0A[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBillboardComponent*                         BillboardComponent;                                        // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVisualSourceComponent*                      VisualSource;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMMDetected;                                              // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               b_CanSpawn;                                                // 0x0280(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	fnaf9_EMMAnimCategory                              MMAnimCategory;                                            // 0x0281(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6EMW[0x6];                                     // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimSequence*>                       MMAnimSeq_Array;                                           // 0x0288(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShouldFollowPlayer;                                       // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0GZ7[0x2];                                     // 0x0299(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsStationary;                                             // 0x029B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAnimLoop;                                                 // 0x029C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAimHeadAtPlayer;                                          // 0x029D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCanPopUp;                                                 // 0x029E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsSingleUse;                                              // 0x029F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H8S7[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATriggerBox*>                         MMColliderActors;                                          // 0x02A8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              probabilityOfSpawn;                                        // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              originalProbabilityOfSpawn;                                // 0x02BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.MoonmanSpawnPoint");
		return ptr;
	}



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
};

// Class fnaf9.PatrollerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPatrollerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.PatrollerInterface");
		return ptr;
	}



	void SetPatrolPath();
	void SetCurrentPatrolPointIndex(int PatrolPointIndex);
	void GetPatrolPath();
	int GetCurrentPatrolPointIndex();
};

// Class fnaf9.PlayerTriggerWithConditionComps
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class APlayerTriggerWithConditionComps : public APlayerTrigger
{
public:
	fnaf9_EConditionCheckType                          ConditionCheck;                                            // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J3ZF[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.PlayerTriggerWithConditionComps");
		return ptr;
	}



};

// Class fnaf9.RichTextControlButtonDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URichTextControlButtonDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ButtonSet;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.RichTextControlButtonDecorator");
		return ptr;
	}



};

// Class fnaf9.SaveHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USaveHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SaveHandlerInterface");
		return ptr;
	}



	void PostSaveGame();
	void PostGameLoad();
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
};

// Class fnaf9.SecurityCamera
// 0x0068 (FullSize[0x0290] - InheritedSize[0x0228])
class ASecurityCamera : public AActor
{
public:
	class USceneComponent*                             CameraPivot;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USightComponent*                             PlayerDetector;                                            // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             PlayerControlledPivot;                                     // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USightComponent*                             EnemyDetector;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CameraInventoryName;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FazwatchAccessible;                                        // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerDetectorStartsOn;                                   // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnemyDetectorStartsOn;                                    // 0x0252(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerDetected;                                           // 0x0253(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IAR[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CameraName;                                                // 0x0258(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              PanMin;                                                    // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PanMax;                                                    // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TiltMin;                                                   // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TiltMax;                                                   // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HI4H[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SecurityCamera");
		return ptr;
	}



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
};

// Class fnaf9.SecurityCameraSystem
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class USecurityCameraSystem : public UWorldSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnCameraAlert;                                             // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCameraRegistered;                                        // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCameraUnregistered;                                      // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCameraTriggerAlert;                                      // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCameraTriggerLostAlert;                                  // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPO1[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SecurityCameraSystem");
		return ptr;
	}



	void PlayerSpotted(class ASecurityCamera* SecurityCamera);
	TArray<class ASecurityCamera*> GetAllSecurityCameras();
};

// Class fnaf9.SeekerPatrolPath
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeekerPatrolPath : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SeekerPatrolPath");
		return ptr;
	}



	fnaf9_EFNAFAISpawnType GetSpawnType();
	struct FName GetPathName();
};

// Class fnaf9.SightComponent
// 0x0080 (FullSize[0x0270] - InheritedSize[0x01F0])
class USightComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnSightChanged;                                            // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              SightAngle;                                                // 0x0200(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartDistance;                                             // 0x0204(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndDistance;                                               // 0x0208(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	fnaf9_ESightType                                   SightType;                                                 // 0x020C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RYWH[0x3];                                     // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AspectRatio;                                               // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MinYaw;                                                    // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxYaw;                                                    // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MinPitch;                                                  // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxPitch;                                                  // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ThetaSteps;                                                // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                PhiSteps;                                                  // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GIBP[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              VisibleActors;                                             // 0x0230(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AMoonmanSpawnPoint*>                  VisibleMMActors;                                           // 0x0240(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSightDetectionEnabled;                                    // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShowVisionDebug;                                          // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DWHV[0x6];                                     // 0x0252(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               IncludeTags;                                               // 0x0258(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YN7S[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SightComponent");
		return ptr;
	}



	void SetSightType(fnaf9_ESightType InSightType);
	void SetSightParams(float Angle, float MinDistance, float MaxDistance);
	void SetSightEnabled(bool bEnable);
	void SetSightAngle(float Angle);
	void SetIncludeTags(TArray<struct FName> InIgnoreTags);
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
	TArray<struct FName> GetIncludeTags();
	void GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch);
	float GetEndDistance();
	float GetAspectRatio();
};

// Class fnaf9.SplineFollowMovementComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class USplineFollowMovementComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFinishedFollowingSpline;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              MovementSpeed;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LACR[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USplineComponent*                            SplineToFollow;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrientToTangent;                                          // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZOM[0xF];                                     // 0x00D1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SplineFollowMovementComponent");
		return ptr;
	}



	void StopFollowingSpline();
	void StartFollowingSpline();
	void SetSplineToFollow(class USplineComponent* Spline);
	void SetDistanceAlongSpline(float Distance);
	bool IsFollowingSpline();
	float GetCurrentDistance();
};

// Class fnaf9.SplineUtils
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USplineUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SplineUtils");
		return ptr;
	}



	float STATIC_GetApproxDistanceClosestToWorldLocation(const struct FVector& Pos_WS, class USplineComponent* Spline);
};

// Class fnaf9.WorldStateComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UWorldStateComponent : public UActorComponent
{
public:
	struct FName                                       SaveName;                                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveOnStateChange;                                        // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F8CJ[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.WorldStateComponent");
		return ptr;
	}



	void SetObjectState(bool bEnabled);
	bool HasValidSaveName();
	bool GetObjectState();
};

// Class fnaf9.StoreActiveStateOnTrigger
// 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
class UStoreActiveStateOnTrigger : public UWorldStateComponent
{
public:
	struct FScriptMulticastDelegate                    OnPlayerTriggered;                                         // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	fnaf9_EPlayerPawnType                              PlayerType;                                                // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KP5N[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.StoreActiveStateOnTrigger");
		return ptr;
	}



	void OnActorTriggered(class AActor* OverlappedActor, class AActor* OtherActor);
};

// Class fnaf9.StreamingLevelUtil
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStreamingLevelUtil : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.StreamingLevelUtil");
		return ptr;
	}



	void STATIC_LoadStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, bool bEnableVolumesAfterLoad, const struct FLatentActionInfo& LatentInfo);
	TArray<class ALevelStreamingVolume*> STATIC_GetAllStreamingVolumesAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	TArray<class ALevelStreamingVolume*> STATIC_GetAllStreamingVolumes(class UObject* WorldContextObject);
	TArray<class ULevelStreaming*> STATIC_GetAllStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	TArray<class ULevelStreaming*> STATIC_GetAllStreamingLevels(class UObject* WorldContextObject);
	TArray<class ULevel*> STATIC_GetAllLevels(class UObject* WorldContextObject);
	void STATIC_EnableAllStreamingVolumes(class UObject* WorldContextObject, bool bEnable);
};

// Class fnaf9.StreamingLoadComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UStreamingLoadComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLevelStreamingFinished;                                  // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bTurnVolumesOnAfterLoad;                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AX62[0x1F];                                    // 0x00C1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.StreamingLoadComponent");
		return ptr;
	}



	void StartAsyncLoadForLocation(const struct FVector& WorldLocation);
	void OnLevelLoaded();
	bool IsStreamingLevels();
	void EnableAllStreamingVolumes(bool bEnable);
};

// Class fnaf9.SurvivalDoorConditionManager
// 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
class ASurvivalDoorConditionManager : public AActor
{
public:
	unsigned char                                      DoorList[0x10];                                            // 0x0228(0x0010) UNKNOWN PROPERTY: ArrayProperty
	int                                                SecurityLevel;                                             // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RequiredItem;                                              // 0x023C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GYEC[0x14];                                    // 0x0244(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SurvivalDoorConditionManager");
		return ptr;
	}



};

// Class fnaf9.SurvivalItemPackage
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class ASurvivalItemPackage : public AActor
{
public:
	struct FName                                       ItemName;                                                  // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	fnaf9_EItemAreaType                                ItemArea;                                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WX04[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASurvivalItemRandomizer*                     SurvivalRandomizer;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIB6[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SurvivalItemPackage");
		return ptr;
	}



	void OnSetup();
	bool HasCollected();
	void Collect();
};

// Class fnaf9.SurvivalItemRandomizer
// 0x0168 (FullSize[0x0390] - InheritedSize[0x0228])
class ASurvivalItemRandomizer : public AItemRandomizer
{
public:
	int                                                PointsPerPink;                                             // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsPerYellow;                                           // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsPerGreen;                                            // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsPerRed;                                              // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsPerPurple;                                           // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointsPerGold;                                             // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedPink;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalPink;                                                 // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedYellow;                                           // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalYellow;                                               // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedGreen;                                            // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalGreen;                                                // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedRed;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalRed;                                                  // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedPurple;                                           // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalPurple;                                               // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollectedGold;                                             // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalGold;                                                 // 0x026C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASurvivalItemPackage*>                RemainingPackages;                                         // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8TTP[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<fnaf9_EItemAreaType, struct FRandomItemAreaInfo> InfoPerArea;                                               // 0x0288(0x0050) (Edit, NativeAccessSpecifierPrivate)
	class UClass*                                      SurvivalPackageClass;                                      // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5LM1[0xB0];                                    // 0x02E0(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SurvivalItemRandomizer");
		return ptr;
	}



	void RandomizeSurvivalItems(bool bSpawnAllLocations);
	bool HasCollected(class ASurvivalItemPackage* Package);
	void GetYellowScore(int* OutCount, int* OutPointsPerPackage, int* OutScore);
	void GetRedScore(int* OutCount, int* OutPointsPerPackage, int* OutScore);
	void GetPurpleScore(int* OutCount, int* OutPointsPerPackage, int* OutScore);
	void GetPinkScore(int* OutCount, int* OutPointsPerPackage, int* OutScore);
	TArray<class ASurvivalItemPackage*> GetPackagesSortedByDistance();
	void GetGreenScore(int* OutCount, int* OutPointsPerPackage, int* OutScore);
	void GetGoldScore(int* OutCount, int* OutPointsPerPackage, int* OutScore);
};

// Class fnaf9.SurvivalRandomItem
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class ASurvivalRandomItem : public ARandomItemGroup
{
public:
	fnaf9_EItemAreaType                                AreaType;                                                  // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07RL[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.SurvivalRandomItem");
		return ptr;
	}



};

// Class fnaf9.UpdateMissionComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UUpdateMissionComponent : public UActorComponent
{
public:
	struct FName                                       MissionName;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MissionStateIndex;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShouldComplete;                                           // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShouldSave;                                               // 0x00BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M9YC[0x2];                                     // 0x00BE(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.UpdateMissionComponent");
		return ptr;
	}



	void UpdateMission();
	bool IsMissionFinished();
	bool HasMetCondition();
	struct FName GetMissionName();
};

// Class fnaf9.VisualSourceComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UVisualSourceComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSourceDetected;                                          // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             VisualOffsets;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsVisibilityEnabled;                                      // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RF18[0xF];                                     // 0x00D1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.VisualSourceComponent");
		return ptr;
	}



	void SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets);
	void SetVisualOffset(int PointIndex, const struct FVector& visualOffset);
	void SetSourceVisibility(bool bEnable);
	void RemoveVisualOffset(int PointIndex);
	TArray<struct FVector> GetVisualOffsets();
	TArray<struct FVector> GetVisualLocations();
	bool GetSourceVisibility();
	struct FVector GetDetectedVisualLocation();
	void DetectTheSource(const struct FVector& VSLocation, class AActor* passed_HitActor, bool passed_bVisible);
};

// Class fnaf9.WorldStateHandlerComponent
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class UWorldStateHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_YYSS[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnObjectStateChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FName                                       ObjectStateName;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConditionMetOnStateSet;                                   // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GO2R[0x1F];                                    // 0x00D1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.WorldStateHandlerComponent");
		return ptr;
	}



	void SetObjectState(bool bEnable);
	void OnObjectStateChangedHandle(const struct FName& ObjectName, bool ObjectState);
	void OnObjectStateChangedEvent();
	bool HasValidSaveName();
	bool GetObjectState();
};

// Class fnaf9.WorldStateSystem
// 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
class UWorldStateSystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_6K52[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnWorldStateChanged;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectStateChanged;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FFreddyUpgradeState                         FreddyState;                                               // 0x0058(0x0004) (BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FRandomStream                               SeededRandomStream;                                        // 0x005C(0x0008) (BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	fnaf9_EFNAFGameState                               WorldState;                                                // 0x0064(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PW4H[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActivatedObjects[0x50];                                    // 0x0065(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FFNAFAISaveData                             AIState;                                                   // 0x00B8(0x0068) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	struct FArcadeSaveData                             ArcadeState;                                               // 0x0120(0x0030) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FString                                     CurrentMinigameName;                                       // 0x0150(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      CurrentMinigameActor;                                      // 0x0160(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	fnaf9_ESurvivalDifficulty                          SurvivalDifficulty;                                        // 0x0168(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_95LM[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentActivityId;                                         // 0x0170(0x0010) (Edit, ZeroConstructor, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EAFY[0x78];                                    // 0x0180(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class fnaf9.WorldStateSystem");
		return ptr;
	}



	void StartMinigame(const struct FString& MinigameName, fnaf9_EFNAFGameState GameState, class AActor* MinigameActor);
	void SetWorldState(fnaf9_EFNAFGameState NewState);
	void SetupNewGame();
	void SetSurvivalMaxDeaths(int MaxDeaths);
	void SetSurvivalDifficulty(fnaf9_ESurvivalDifficulty Difficulty);
	void SetRandomSeed(int Seed);
	void SetPowerStationAvailable(bool bAvailable);
	void SetPlayerInPowerStation(int InPowerStationID);
	void SetPlayerInFreddy(bool bInFreddy);
	void SetPlayerHasUsedHidingSpot();
	void SetFreddySick(bool bIsSick);
	void SetFreddyPatrolPoint(int PatrolPointIndex);
	void SetCurrentActivityId(const struct FString& InActivityId);
	void SetCanEnterExitFreddy(bool bCanEnterExit);
	void SetCanCallFreddy(bool bCanCall);
	void SetArcadeState(const struct FArcadeSaveData& InArcadeState);
	void SetAIState(const struct FFNAFAISaveData& InAIState);
	void RemoveActivated(const struct FName& ActivatableName);
	bool IsPowerStationAvailable();
	bool IsPlayerInFreddy();
	bool IsFreddySick();
	bool IsActivated(const struct FName& ActivatableName);
	bool HasPlayerUsedHidingSpot();
	fnaf9_EFNAFGameState GetWorldState();
	int GetSurvivalMaxDeaths();
	fnaf9_ESurvivalDifficulty GetSurvivalDifficulty();
	void GetSavedPlayerLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
	void GetSavedFreddyLocationAndRotation(bool* OutFreddyInWorld, struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation);
	int GetRandomSeed();
	void GetPowerStationInfo(bool* OutPlayerInPowerStation, int* OutPowerStationID);
	int GetLivesRemaining();
	class AFNAFBasePlayerCharacter* GetFreddyPawn();
	int GetFreddyPatrolPoint();
	int GetCurrentSpottedCount();
	class AActor* GetCurrentMinigameActor();
	struct FString GetCurrentMinigame();
	int GetCurrentDeathCount();
	struct FString GetCurrentActivityId();
	struct FArcadeSaveData GetArcadeState();
	struct FFNAFAISaveData GetAIState();
	void EndMinigame();
	void DebugSetPlayerHasUsedHidingSpot(bool HasHid);
	void ClearPlayerInPowerStation();
	void CanStartMinigame(bool* CanStart, fnaf9_ECantStartMinigameReason* reason);
	bool CanEnterExitFreddy();
	bool CanCallFreddy();
	void AddSpotted();
	void AddDeath(int* OutRemainingLives);
	void AddActivated(const struct FName& ActivatableName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
