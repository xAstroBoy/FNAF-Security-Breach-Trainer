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
	 * AnimBlueprintGeneratedClass Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C
	 * Size -> 0x056A (FullSize[0x0822] - InheritedSize[0x02B8])
	 */
	class ULittle_DJ_Music_Man_ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_MNJ1[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0348(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0370(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x03F0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0420(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x04A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x04D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0550(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0580(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0630(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0678(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0738(0x0080)
		struct FVector                                             Velocity;                                                // 0x07B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpawnOut;                                               // 0x07C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L97J[0x3];                                   // 0x07C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedInput;                                              // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KZKD[0x4];                                   // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPositionHistory                                    PositionHistory;                                         // 0x07D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             CurrentLocation;                                         // 0x0800(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PreviousLocation;                                        // 0x080C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CloseToPlayer;                                           // 0x0818(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KDV6[0x3];                                   // 0x0819(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlaybackSpeed;                                           // 0x081C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SkipSpawnIn;                                             // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       chaseStarted;                                            // 0x0821(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetMoveSpeedInput(float* MoveSpeed);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CalcVelocity(const struct FVector& Location);
		void OnInterrupted_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName);
		void OnBlendOut_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName);
		void OnCompleted_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName);
		void HeadAimEvent(bool OnOff);
		void TurnEvent(float TurnDegrees);
		void Searching(EHideObjectType HideType);
		void SearchingDone();
		void Open();
		void OpenDone();
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void StartScan();
		void CanRunEvent(bool CanRun);
		void StunEvent(bool IsStunned);
		void CanRummageEvent();
		void IsFirstPersonEvent();
		void IsNotFirstPersonEvent();
		void RummagingDoneEvent();
		void OnAnimInstanceSwap();
		void Breakthrough();
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void JumpEvent(bool CanJump);
		void LandEvent();
		void StopScan();
		void PoundDoorEvent(bool PoundDoor);
		void CanWaveEvent(bool CanWave);
		void IsSickEvent(bool OnOff);
		void CanLieDownEvent(bool OnOff);
		void CanLeapEvent(bool Off);
		void EnterFreddyOverrideEvent(bool Off);
		void ForceAnimOverride(bool enable);
		void FreddyCorrupted(bool Off);
		void RoxyCrying(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AKEvent);
		void CanHackEvent(bool Off);
		void CanDieEvent(bool Off);
		void EndoSpawnInBowlingEvent();
		void EndoBowlingCrawlEvent();
		void LeapLoopEvent(bool Off);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void FreddyEndIdle(bool Off);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void SpotlightAimActor(class AActor* AimActor);
		void IsHangingEvent(bool IsHanging);
		void OverlappingDoor(bool Overlapping, class AActor* Instigator);
		void OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName);
		void OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void CanJumpscareEvent();
		void SkipSpawnInEvent(bool SkipSpawnIn);
		void SpawnOutEvent(bool bSpawnOut);
		void ExecuteUbergraph_Little_DJ_Music_Man_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
