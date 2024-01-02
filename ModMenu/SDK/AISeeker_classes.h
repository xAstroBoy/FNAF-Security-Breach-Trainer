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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AISeeker.AISeeker_C
	 * Size -> 0x0341 (FullSize[0x0819] - InheritedSize[0x04D8])
	 */
	class AAISeeker_C : public ADebuggableAICharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterHourlyMaterialComponent_C*                 CharacterHourlyMaterialComponent;                        // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       HeadShotDetector;                                        // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PlayerCaptureTrigger;                                    // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     JumpscareLocation;                                       // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPhysicalAnimationComponent*                         PhysicalAnimation;                                       // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceComponent*                              SeekerVisualSource;                                      // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USightComponent*                                     Sight;                                                   // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    DBG_Widget;                                              // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ARoomAreaBase*                                       CurrentRoom;                                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunningSearchAnim;                                       // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3DK9[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      RecentlySearchedHideActors;                              // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FPOIIndex>                                   PointsInvestigated;                                      // 0x0548(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             FinishedPOI;                                             // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SearchingPOI;                                            // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MNCZ[0x7];                                   // 0x0569(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRoomVisitInfo>                              VisitedRooms;                                            // 0x0570(0x0010) Edit, BlueprintVisible
		class AActor*                                              SearchActor;                                             // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AlertStatus;                                             // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HeadTracksPlayer;                                        // 0x058C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ScanRoomOnEntry;                                         // 0x058D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InChaseMode;                                             // 0x058E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXNN[0x1];                                   // 0x058F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLocation;                                           // 0x0590(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrackingToPlayer;                                        // 0x059C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XJXV[0x3];                                   // 0x059D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AITypeName;                                              // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIDataParams                                       AIData;                                                  // 0x05A8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAlertType                                                 AlertTypeToSend;                                         // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AIDataSetup;                                             // 0x05D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KHWM[0x6];                                   // 0x05D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AAISeeker_C*>                                 ActorsInTheWay;                                          // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FName                                                BBAIBlocked;                                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AIBlockedTimer;                                          // 0x05F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EFNAFAISpawnType                                           ManagedAIType;                                           // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J2AG[0x7];                                   // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSplineFollowerContext                              SplineFollowingContext;                                  // 0x0600(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		class AActor*                                              HeadAimTarget;                                           // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HeadAimLocation;                                         // 0x0620(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBWanderToPoint;                                         // 0x062C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBInvestigationLocation;                                 // 0x0634(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PGJC[0x4];                                   // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGregory_C*                                          CurrentJumpscareTarget;                                  // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkingAcceleration;                                     // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChasingAcceleration;                                     // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       VOAudio;                                                 // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       audio_playing;                                           // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MMVV[0x7];                                   // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Stunned;                                                 // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXTN[0x3];                                   // 0x0669(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeltaTime;                                               // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        jumpscareMontage;                                        // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APatrolPath_C*                                       PatrolPath;                                              // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBPathIndex;                                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisitTimeFalloff;                                        // 0x0688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBAlerted;                                               // 0x068C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBAlertActor;                                            // 0x0694(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CEJN[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ambientsound[0x28];                                      // 0x06A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                BBPlayer;                                                // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrackingPlayer;                                          // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UCWI[0x3];                                   // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpscareCamShake;                                       // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TensionControl[0x28];                                    // 0x06D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                CurrentSeekerPathName;                                   // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBPatrolPath;                                            // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceJumpscare;                                          // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W0PC[0x3];                                   // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BBAlertLocation;                                         // 0x0714(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       JumpscareLocationTrace;                                  // 0x071C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       JumpscareCapsuleTrace;                                   // 0x071D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JKX6[0x2];                                   // 0x071E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OcclusionTrace[0x28];                                    // 0x0720(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ForceChaseKey;                                           // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsShatteredType;                                         // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanReceiveAlerts;                                        // 0x0751(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HearingEnabled;                                          // 0x0752(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       seeking;                                                 // 0x0753(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RH2R[0x4];                                   // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkAudioEvent*>                               VOAudio_SpottedPlayer;                                   // 0x0758(0x0010) Edit, BlueprintVisible
		TArray<class UAkAudioEvent*>                               VOAudio_InPursuit;                                       // 0x0768(0x0010) Edit, BlueprintVisible
		TArray<class UAkAudioEvent*>                               VOAudio_SearchingNormal;                                 // 0x0778(0x0010) Edit, BlueprintVisible
		TArray<class UAkAudioEvent*>                               VOAudio_LostPlayer;                                      // 0x0788(0x0010) Edit, BlueprintVisible
		TArray<class UAkAudioEvent*>                               VOAudio_HeardSomething;                                  // 0x0798(0x0010) Edit, BlueprintVisible
		TArray<class UAkAudioEvent*>                               VOAudio_BlockedByAI;                                     // 0x07A8(0x0010) Edit, BlueprintVisible
		TArray<class UAkAudioEvent*>                               StunVO;                                                  // 0x07B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                BBChicaVoiceHeard;                                       // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        JumpscareRetryTimer;                                     // 0x07D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      MinStunTime;                                             // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxStunTime;                                             // 0x07DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBActorToCheck;                                          // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       StunLoopEvent;                                           // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeStunnedVar;                                         // 0x07F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I7VW[0x3];                                   // 0x07F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastTimePlayedVO;                                        // 0x07F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideStunTime;                                        // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WOF7[0x3];                                   // 0x07F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverridenStunTime;                                       // 0x07FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AIShouldTeleport;                                        // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PLZF[0x7];                                   // 0x0801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               AIPawn;                                                  // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AController*                                         AIController;                                            // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              testindex;                                               // 0x0818(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsPlayerMoving();
		float AICapsuleHalfHeight();
		bool CanAITeleport();
		int32_t GetCurrentPatrolPointIndex();
		void GetPatrolPath();
		void GetSightComponent(class USightComponent** Sight);
		bool CanBeStunned();
		void IsStunned(bool* IsStunned);
		void GetHeadAimTargetActor(class AActor** AimActor);
		void GetHeadAimTargetLocation(struct FVector* HeadAimLocation);
		void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
		void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
		bool IsMeshVisible();
		bool CanReceiveAlert();
		bool IsShatteredVersion();
		class FName GetCurrentPathName();
		EFNAFAISpawnType GetManagedAIType();
		EAlertType GetAlertType();
		void GetHearingEnable(bool* Enabled);
		void GetRangeOfDistance(float Distance, EAIPlayerRange* Range);
		void IsCheckingHideLocation(bool* StillChecking);
		void GetVisitedPOIs(TArray<struct FPOIIndex>* VisitedPOIs);
		void GetAIData(struct FAIDataParams* AIData);
		void IsInChaseMode(bool* InChaseMode);
		void IsRunningEnterRoom(bool* EnteringRoom);
		void GetRoomSeekMode(ERoomSeekMode* SeekMode);
		void GetRecentRooms(TArray<struct FRoomVisitInfo>* RecentRooms);
		void IsSearchingPOI(bool* IsSearching);
		void FindBestPOI(class ARoomAreaBase* Room, int32_t* PointIndex, bool* Valid);
		void GetShouldCheckHidingLocations(bool* ShouldCheckHidingLocations);
		void GetRecentlySearchedActors(TArray<class AActor*>* RecentlySearched);
		void GetIsRunningSearchAnim(bool* IsRunningSearch);
		void GetCurrentRoom(class ARoomAreaBase** CurrentRoom);
		void StunForDuration(float StunDuration);
		void UpdateVisitedPOIs();
		void UpdateRotationSpeed();
		void SetupAIData();
		void GetCurrentRoomVisitInfo();
		void StartNewRoomScan();
		void UpdateHeadTracking();
		void SetNewVisit(class ARoomAreaBase* Room);
		void UpdateRoomVisitAges(float DeltaTime);
		void FindCurrentRoom();
		void ActivateGlitchUI();
		void ActivateTeleportFX();
		void DeactivateGlitchUI();
		void DisablePlayerInput();
		void EnablePlayerInput();
		void MaskIconCantTeleport();
		void MaskIconDefault();
		void MaskIconNearBlocker(bool NearBlocker);
		void MaskIconRemoveMask();
		void PlayerCannotTeleport();
		void PlayerFinishedTeleporting();
		void SetMaskIconOverlayActive(bool Active);
		void SpawnBlackRabbit();
		void SpringArmDisabled();
		void SpringArmEnabled();
		void ForceKill(bool Animate);
		void GameStart();
		void GameEnd();
		void GameExit();
		void PlayerHit(const struct FHitResult& Hit);
		void ForceJumpscarePlayer();
		void TeleportAI(const struct FVector& Location);
		void SearchLocation(class AActor* SearchActor, const struct FVector& SearchLocation);
		void OnSearchDone();
		void SearchCanKill();
		void EnteredSearchAnim();
		void OnDebugVis(bool enable);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveBeginPlay();
		void SetChaseMode(bool Chase, bool UseOverrideSpeed, float OverrideSpeed);
		void BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void SearchPointOfInterest(class ARoomAreaBase* Room, int32_t PointIndex);
		void OnEnterNewRoom(class ARoomAreaBase* Room);
		void ReceiveTick(float DeltaSeconds);
		void Jumpscare(class AActor* ActorToJumpscare);
		void SetAlertState(int32_t AlertState);
		void HandleSight(class AActor* UpdatedActor, bool visible);
		void BndEvt__NearSight_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature(class AActor* UpdatedActor, bool bVisible);
		void OnScanFinished();
		void OnJumpscare(class AGregory_C* Gregory);
		void RestartAI();
		void ForceTrackToPlayer();
		void EndTrackToPlayer();
		void PlayVoiceType(EAIVoiceOverType VoiceTag);
		void ChaseModeVO();
		void OnEncounterAI(class AAISeeker_C* ActorEncountered);
		void BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnLeaveAI(class AAISeeker_C* ActorLeaving);
		void OnBlockedTimerUp();
		void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
		void StopRummage();
		void StartRummage();
		void SetHeadAimEnabled(bool enable);
		void SetHeadAimTarget(class AActor* TargetActor, const struct FVector& TargetLocation, bool OffsetByViewHeight);
		void Stun();
		void StartMoveTo(const struct FVector& Location);
		void OnCaptureOverlap(class AActor* OtherActor, class UPrimitiveComponent* CurrentCaptureTrigger);
		void SetPatrolPath();
		void SetCurrentPatrolPointIndex(int32_t PatrolPointIndex);
		void SendVanessaAlert(class APawn* VanessaPawn);
		void SetIsTrackingPlayer(bool TrackingPlayer);
		void Unstun();
		void SendPositionalAlert(const struct FVector& Location);
		void ForceChasePlayer(bool EnableChase);
		void SetHearingEnable(bool enable);
		void SetSeekMode(bool Seek);
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void OnListenStarted();
		void JumpscareRecheck();
		void ForcePlayVoiceLine(class UAkAudioEvent* AKEvent);
		void ExecuteUbergraph_AISeeker(int32_t EntryPoint);
		void FinishedPOI__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
