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

// BlueprintGeneratedClass AnimatronicBPInterface.AnimatronicBPInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimatronicBPInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AnimatronicBPInterface.AnimatronicBPInterface_C");
		return ptr;
	}



	void Spotlight_Aim_Actor(class AActor* AimActor);
	void CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer);
	void CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence);
	void FreddyEndIdle(bool Off);
	void UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance);
	void LeapLoopEvent(bool Off);
	void EndoBowlingCrawlEvent();
	void EndoSpawnInBowlingEvent();
	void CanDieEvent(bool Off);
	void CanHackEvent(bool Off);
	void VoAnimEvent(class UAkAudioEvent* AK_Event);
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
	void Stun_Event(bool Is_Stunned);
	void CanRunEvent(bool CanRun);
	void StartScan();
	void SetHeadAimTarget(const struct FVector& AimLocation);
	void OpenDone();
	void Open();
	void SearchingDone();
	void Searching(fnaf9_EHideObjectType Hide_Type);
	void TurnEvent(float TurnDegrees);
	void HeadAimEvent(bool OnOff);
	void CanJumpscareEvent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
