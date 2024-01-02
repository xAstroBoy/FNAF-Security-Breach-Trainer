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
	 * AnimBlueprintGeneratedClass FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C
	 * Size -> 0x02A1 (FullSize[0x0559] - InheritedSize[0x02B8])
	 */
	class UFirstPersonFreddyArms_ABP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_7MLD[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0320(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0348(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x03C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0478(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x04A8(0x00B0)
		bool                                                       PlayAnim;                                                // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetMoveSpeedInput(float* MoveSpeed);
		void AnimGraph(struct FPoseLink* AnimGraph);
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
		void SearchingDone();
		void Searching(EHideObjectType HideType);
		void TurnEvent(float TurnDegrees);
		void HeadAimEvent(bool OnOff);
		void CanJumpscareEvent();
		void Breakthrough();
		void ExecuteUbergraph_FirstPersonFreddyArms_ABP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
