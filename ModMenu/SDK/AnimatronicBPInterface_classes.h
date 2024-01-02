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
	 * BlueprintGeneratedClass AnimatronicBPInterface.AnimatronicBPInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimatronicBPInterface_C : public UInterface
	{
	public:
		void GetMoveSpeedInput(float* MoveSpeed);
		void OverlappingDoor(bool Overlapping, class AActor* Instigator);
		void IsHangingEvent(bool IsHanging);
		void SpotlightAimActor(class AActor* AimActor);
		void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
		void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
		void FreddyEndIdle(bool Off);
		void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
		void LeapLoopEvent(bool Off);
		void EndoBowlingCrawlEvent();
		void EndoSpawnInBowlingEvent();
		void CanDieEvent(bool Off);
		void CanHackEvent(bool Off);
		void VoAnimEvent(class UAkAudioEvent* AKEvent);
		void RoxyCrying(bool Off);
		void FreddyCorrupted(bool Off);
		void ForceAnimOverride(bool enable);
		void EnterFreddyOverrideEvent(bool Off);
		void CanLeapEvent(bool Off);
		void CanLieDownEvent(bool OnOff);
		void IsSickEvent(bool OnOff);
		void CanWaveEvent(bool CanWave);
		void PoundDoorEvent(bool PoundDoor);
		void StopScan();
		void LandEvent();
		void JumpEvent(bool CanJump);
		void ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR);
		void Breakthrough();
		void OnAnimInstanceSwap();
		void RummagingDoneEvent();
		void IsNotFirstPersonEvent();
		void IsFirstPersonEvent();
		void CanRummageEvent();
		void StunEvent(bool IsStunned);
		void CanRunEvent(bool CanRun);
		void StartScan();
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void OpenDone();
		void Open();
		void SearchingDone();
		void Searching(EHideObjectType HideType);
		void TurnEvent(float TurnDegrees);
		void HeadAimEvent(bool OnOff);
		void CanJumpscareEvent();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
